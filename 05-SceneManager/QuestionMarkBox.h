#pragma once

#include "GameObject.h"

#define QMBOX_STATE_UNTOUCHED 100
#define QMBOX_STATE_TOUCHED 200

class CQuestionMarkBox : public CGameObject {
	float ax, ay;

public:
	CQuestionMarkBox(float x, float y);
	void Render();
	void Update(DWORD dt, vector<LPGAMEOBJECT>* coObjects);

	int IsBlocking() { return 1; }

	void OnNoCollision(DWORD dt);

	void GetBoundingBox(float& l, float& t, float& r, float& b);
	void SetState(int state);
};