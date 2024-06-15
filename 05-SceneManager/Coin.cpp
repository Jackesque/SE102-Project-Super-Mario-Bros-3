#include "Coin.h"
#include "AssetIDs.h"

CCoin::CCoin(float x, float y) :CGameObject(x, y) {
	this->ax = 0;
	this->ay = 0;
	die_start = -1;
	SetState(COIN_STATE_IDLE);
}

void CCoin::Render()
{
	CAnimations::GetInstance()->Get(ID_ANI_COIN)->Render(x, y);

	//RenderBoundingBox();
}

void CCoin::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	vy += ay * dt;
	vx += ax * dt;

	if ((state == COIN_STATE_ACTIVATED) && (GetTickCount64() - die_start > COIN_DIE_TIMEOUT))
	{
		isDeleted = true;
		return;
	}

	CGameObject::Update(dt, coObjects);
	CCollision::GetInstance()->Process(this, dt, coObjects);
}

void CCoin::OnNoCollision(DWORD dt)
{
	x += vx * dt;
	y += vy * dt;
}

void CCoin::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - BLOCK_BBOX_WIDTH / 2;
	t = y - BLOCK_BBOX_HEIGHT / 2;
	r = l + BLOCK_BBOX_WIDTH;
	b = t + BLOCK_BBOX_HEIGHT;
}

void CCoin::SetState(int state)
{
	CGameObject::SetState(state);
	switch (state)
	{
		case COIN_STATE_IDLE:
			vx = 0;
			vy = 0;
			break;
		case COIN_STATE_ACTIVATED:
			die_start = GetTickCount64();
			ay = COIN_GRAVITY;
			vy = -COIN_SPEED;
			break;
	}
}