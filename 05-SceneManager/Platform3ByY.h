#pragma once

#include "GameObject.h"

// 
// The most popular type of object in Mario! 
// 
class CPlatform3ByY : public CGameObject
{
protected:
	int height;				// Unit: cell 
	float cellWidth;
	float cellHeight;
	int spriteIdBeginTop, spriteIdMiddleTop, spriteIdEndTop;
	int spriteIdBeginMid, spriteIdMiddleMid, spriteIdEndMid;
	int spriteIdBeginBot, spriteIdMiddleBot, spriteIdEndBot;
	int isBlocking = 1;

public:
	CPlatform3ByY(float x, float y,
		float cell_width, float cell_height, int height,
		int sprite_id_begin_top, int sprite_id_middle_top, int sprite_id_end_top,
		int sprite_id_begin_mid, int sprite_id_middle_mid, int sprite_id_end_mid,
		int sprite_id_begin_bot, int sprite_id_middle_bot, int sprite_id_end_bot) 
		:CGameObject(x, y)
	{
		this->height = height;
		this->cellWidth = cell_width;
		this->cellHeight = cell_height;
		this->spriteIdBeginTop = sprite_id_begin_top;
		this->spriteIdMiddleTop = sprite_id_middle_top;
		this->spriteIdEndTop = sprite_id_end_top;
		this->spriteIdBeginMid = sprite_id_begin_mid;
		this->spriteIdMiddleMid = sprite_id_middle_mid;
		this->spriteIdEndMid = sprite_id_end_mid;
		this->spriteIdBeginBot = sprite_id_begin_bot;
		this->spriteIdMiddleBot = sprite_id_middle_bot;
		this->spriteIdEndBot = sprite_id_end_bot;
	}

	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	void RenderBoundingBox();
	int IsBlocking() { return isBlocking; }
	void SetIsBlocking(int isBlocking) { this->isBlocking = isBlocking; }
};

typedef CPlatform3ByY* LPPLATFORM3BYY;