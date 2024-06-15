#include "QuestionMarkBox.h"
#include "AssetIDs.h"

CQuestionMarkBox::CQuestionMarkBox(float x, float y) :CGameObject(x, y) {
	this->ax = 0;
	this->ay = 0;
	SetState(QMBOX_STATE_UNTOUCHED);
}

void CQuestionMarkBox::Render()
{
	int aniId = ID_ANI_QUESTION_MARK_BOX;
	if (state == QMBOX_STATE_TOUCHED) {
		aniId = ID_ANI_QUESTION_MARK_BOX_TOUCHED;
	}

	CAnimations::GetInstance()->Get(aniId)->Render(x, y);
}

void CQuestionMarkBox::Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects)
{
	vy += ay * dt;
	vx += ax * dt;

	CGameObject::Update(dt, coObjects);
	CCollision::GetInstance()->Process(this, dt, coObjects);
}

void CQuestionMarkBox::OnNoCollision(DWORD dt)
{
	x += vx * dt;
	y += vy * dt;
}

void CQuestionMarkBox::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - BLOCK_BBOX_WIDTH / 2;
	t = y - BLOCK_BBOX_HEIGHT / 2;
	r = l + BLOCK_BBOX_WIDTH;
	b = t + BLOCK_BBOX_HEIGHT;
}

void CQuestionMarkBox::SetState(int state) {
	CGameObject::SetState(state);
}