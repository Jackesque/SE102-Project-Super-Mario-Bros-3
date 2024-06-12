#include "Brick.h"
#include "AssetIDs.h"

void CBrick::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_SPRITE_BRICK)->Render(x, y);
}

void CBrick::GetBoundingBox(float &l, float &t, float &r, float &b)
{
	l = x - BLOCK_BBOX_WIDTH/2;
	t = y - BLOCK_BBOX_HEIGHT/2;
	r = l + BLOCK_BBOX_WIDTH;
	b = t + BLOCK_BBOX_HEIGHT;
}