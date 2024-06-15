#pragma once

#include "GameObject.h"

#define	COIN_WIDTH 10
#define COIN_BBOX_WIDTH 10

#define COIN_STATE_IDLE 100
#define COIN_STATE_ACTIVATED 200

#define COIN_DIE_TIMEOUT 400

#define COIN_GRAVITY 0.002f
#define COIN_SPEED 0.5f

class CCoin : public CGameObject {
	float ax, ay;

	ULONGLONG die_start;

	void Render();
	void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);

	int IsBlocking() { return 0; }

	void OnNoCollision(DWORD dt);

public:
	CCoin(float x, float y);
	void GetBoundingBox(float& l, float& t, float& r, float& b);
	void SetState(int state);
};