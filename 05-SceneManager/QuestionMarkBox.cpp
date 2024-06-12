#include "QuestionMarkBox.h"
#include "AssetIDs.h"

void CQuestionMarkBox::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_SPRITE_QUESTION_MARK_BOX)->Render(x, y);
}

void CQuestionMarkBox::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = x - BLOCK_BBOX_WIDTH / 2;
	t = y - BLOCK_BBOX_HEIGHT / 2;
	r = l + BLOCK_BBOX_WIDTH;
	b = t + BLOCK_BBOX_HEIGHT;
}