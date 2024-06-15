#include "Platform3ByY.h"

#include "Sprites.h"
#include "Textures.h"

void CPlatform3ByY::RenderBoundingBox()
{
	D3DXVECTOR3 p(x, y, 0);
	RECT rect;

	LPTEXTURE bbox = CTextures::GetInstance()->Get(ID_TEX_BBOX);

	float l, t, r, b;

	GetBoundingBox(l, t, r, b);
	rect.left = 0;
	rect.top = 0;
	rect.right = (int)r - (int)l;
	rect.bottom = (int)b - (int)t;

	float cx, cy;
	CGame::GetInstance()->GetCamPos(cx, cy);

	float xx = x - this->cellWidth / 2 + rect.right / 2;

	CGame::GetInstance()->Draw(xx - cx, y - cy, bbox, nullptr, BBOX_ALPHA, rect.right - 1, rect.bottom - 1);
}

void CPlatform3ByY::Render()
{
	if (this->width <= 0) return;
	if (this->height <= 0) return;
	float xx = x;
	float yy = y;
	CSprites* s = CSprites::GetInstance();

	{
		xx = x;
		s->Get(this->spriteIdBeginTop)->Draw(xx, yy);
		xx += this->cellWidth;
		for (int i = 1; i < this->width - 1; i++)
		{
			s->Get(this->spriteIdMiddleTop)->Draw(xx, yy);
			xx += this->cellWidth;
		}
		if (width > 1)
		{
			s->Get(this->spriteIdEndTop)->Draw(xx, yy);
		}
	}

	yy += this->cellHeight;
	for (int i = 1; i < this->height - 1; i++)
	{
		xx = x;
		s->Get(this->spriteIdBeginMid)->Draw(xx, yy);
		xx += this->cellWidth;
		for (int i = 1; i < this->width - 1; i++)
		{
			s->Get(this->spriteIdMiddleMid)->Draw(xx, yy);
			xx += this->cellWidth;
		}
		if (width > 1)
		{
			s->Get(this->spriteIdEndMid)->Draw(xx, yy);
		}
		yy += this->cellHeight;
	}
	if (height > 1)
	{
		xx = x;
		s->Get(this->spriteIdBeginBot)->Draw(xx, yy);
		xx += this->cellWidth;
		for (int i = 1; i < this->width - 1; i++)
		{
			s->Get(this->spriteIdMiddleBot)->Draw(xx, yy);
			xx += this->cellWidth;
		}
		s->Get(this->spriteIdEndBot)->Draw(xx, yy);
	}

	//RenderBoundingBox();
}

void CPlatform3ByY::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - this->cellWidth / 2;
	t = y - this->cellHeight / 2;
	r = l + this->cellWidth * this->width;
	b = t + this->cellHeight * this->height;
}