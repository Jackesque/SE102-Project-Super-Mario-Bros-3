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
	if (this->height <= 0) return;
	float yy = y;
	CSprites* s = CSprites::GetInstance();

	{
		s->Get(this->spriteIdBeginTop)->Draw(x, yy);
		s->Get(this->spriteIdMiddleTop)->Draw(x + this->cellWidth, yy);
		s->Get(this->spriteIdEndTop)->Draw(x + this->cellWidth * 2, yy);
	}

	yy += this->cellHeight;
	for (int i = 1; i < this->height - 1; i++)
	{
		s->Get(this->spriteIdBeginMid)->Draw(x, yy);
		s->Get(this->spriteIdMiddleMid)->Draw(x + this->cellWidth, yy);
		s->Get(this->spriteIdEndMid)->Draw(x + this->cellWidth * 2, yy);
		yy += this->cellHeight;
	}
	if (height > 1)
	{
		s->Get(this->spriteIdBeginBot)->Draw(x, yy);
		s->Get(this->spriteIdMiddleBot)->Draw(x + this->cellWidth, yy);
		s->Get(this->spriteIdEndBot)->Draw(x + this->cellWidth * 2, yy);
	}

	//RenderBoundingBox();
}

void CPlatform3ByY::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - this->cellWidth / 2;
	t = y - this->cellHeight / 2;
	r = l + this->cellWidth * 3;
	b = t + this->cellHeight * this->height;
}