#include "Coin.h"
#include "AssetIDs.h"

void CCoin::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_SPRITE_COIN)->Render(x, y);

	//RenderBoundingBox();
}

void CCoin::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - COIN_BBOX_WIDTH / 2;
	t = y - BLOCK_BBOX_HEIGHT / 2;
	r = l + COIN_BBOX_WIDTH;
	b = t + BLOCK_BBOX_HEIGHT;
}