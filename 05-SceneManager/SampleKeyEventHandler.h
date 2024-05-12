#pragma once

#include "Game.h"
#include "Mario.h"
#include "PlayScene.h"

class CSampleKeyHandler: public CSceneKeyHandler
{
public:
	virtual void KeyState(BYTE *states);
	virtual void OnKeyDown(int KeyCode);
	virtual void OnKeyUp(int KeyCode);
	CSampleKeyHandler(LPSCENE s): CSceneKeyHandler(s) {};
	CMario* GetPlayer() { return (CMario*)((LPPLAYSCENE)CGame::GetInstance()->GetCurrentScene())->GetPlayer(); }
};
