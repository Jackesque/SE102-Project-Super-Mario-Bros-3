#include "Background.h"
#include "AssetIDs.h"

void CBackground::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_SPRITE_BACKGROUND)->Render(x, y);
}

void CBackground::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - 2815;
	t = y - 240;
	r = l + 2815;
	b = t + 240;
}