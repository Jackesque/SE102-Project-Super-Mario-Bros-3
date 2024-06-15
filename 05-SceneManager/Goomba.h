#pragma once
#include "GameObject.h"

#define GOOMBA_GRAVITY 0.002f
#define GOOMBA_WALKING_SPEED 0.05f


#define GOOMBA_BBOX_WIDTH 16
#define GOOMBA_BBOX_HEIGHT 14
#define GOOMBA_BBOX_HEIGHT_DIE 7

#define GOOMBA_DIE_TIMEOUT 500

#define GOOMBA_STATE_WALKING 100
#define GOOMBA_STATE_DIE 200

class CGoomba : public CGameObject
{
protected:
	float ax;		
	float ay;

	ULONGLONG die_start;

	void Render();
	void Update(DWORD dt, vector<LPGAMEOBJECT> *coObjects);
	void GetBoundingBox(float &left, float &top, float &right, float &bottom);

	int IsCollidable() { return 1; };
	int IsBlocking() { return 0; }
	void OnNoCollision(DWORD dt);
	void OnCollisionWith(LPCOLLISIONEVENT e);

public: 	
	CGoomba(float x, float y);
	void SetState(int state);
};