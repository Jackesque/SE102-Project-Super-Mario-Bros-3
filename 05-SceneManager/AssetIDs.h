#pragma once

//
// This file contains all IDs of game assets 
// It is used to keep track of all IDs
// And cannot be used in txt files
//

#define ID_TEX_MARIO 0
#define ID_TEX_ENEMY 10
#define ID_TEX_MISC 20
#define ID_TEX_BACKGROUND 30


#define OBJECT_TYPE_MARIO	0
//#define OBJECT_TYPE_BRICK	1
#define OBJECT_TYPE_GOOMBA	2
#define OBJECT_TYPE_KOOPA_GREEN	3
#define OBJECT_TYPE_COIN	4
#define OBJECT_TYPE_PLATFORM	5

#define OBJECT_TYPE_SUPER_MUSHROOM	6
#define OBJECT_TYPE_SUPER_LEAF	7
#define OBJECT_TYPE_SWITCH_BLOCK	8
#define OBJECT_TYPE_1_UP_MUSHROOM	9
#define OBJECT_TYPE_GOOMBA_FLY	11
#define OBJECT_TYPE_KOOPA_RED	12
#define OBJECT_TYPE_KOOPA_FLY_GREEN	13
#define OBJECT_TYPE_PIRANHA_PLANT_GREEN	14
#define OBJECT_TYPE_VENUS_FIRE_TRAP_GREEN	15
#define OBJECT_TYPE_VENUS_FIRE_TRAP_RED	16
//#define OBJECT_TYPE_GROUND	17
#define OBJECT_TYPE_QUESTION_MARK_BOX	18
#define OBJECT_TYPE_WOODEN_BLOCK	19
#define OBJECT_TYPE_CLOUD_BLOCK	21

//Platforms
#define OBJECT_TYPE_GROUND_HEAD	22
#define OBJECT_TYPE_GROUND_BODY	23
#define OBJECT_TYPE_PINK_BLOCK_PLATFORM	24
#define OBJECT_TYPE_BLUE_BLOCK_PLATFORM	25
#define OBJECT_TYPE_GREEN_BLOCK_PLATFORM	26
#define OBJECT_TYPE_WHITE_BLOCK_PLATFORM	27
#define OBJECT_TYPE_BLOCK_PLATFORM_SHADOW	28
#define OBJECT_TYPE_PLATFORM_3_BY_Y	29
#define OBJECT_TYPE_BRICK	31


#define OBJECT_TYPE_BACKGROUND	30
#define OBJECT_TYPE_PORTAL	50


#pragma region MARIO 

#define ID_SPRITE_MARIO 10000
#define ID_SPRITE_MARIO_BIG (ID_SPRITE_MARIO + 1000)
#define ID_SPRITE_MARIO_BIG_IDLE (ID_SPRITE_MARIO_BIG + 100)
#define ID_SPRITE_MARIO_BIG_IDLE_LEFT (ID_SPRITE_MARIO_BIG_IDLE + 10)
#define ID_SPRITE_MARIO_BIG_IDLE_RIGHT (ID_SPRITE_MARIO_BIG_IDLE + 20)

#define ID_SPRITE_MARIO_BIG_WALKING (ID_SPRITE_MARIO_BIG + 200)
#define ID_SPRITE_MARIO_BIG_WALKING_LEFT (ID_SPRITE_MARIO_BIG_WALKING + 10)
#define ID_SPRITE_MARIO_BIG_WALKING_RIGHT (ID_SPRITE_MARIO_BIG_WALKING + 20)
#define ID_SPRITE_MARIO_BIG_RUNNING (ID_SPRITE_MARIO_BIG + 300)
#define ID_SPRITE_MARIO_BIG_RUNNING_LEFT (ID_SPRITE_MARIO_BIG_RUNNING + 10)
#define ID_SPRITE_MARIO_BIG_RUNNING_RIGHT (ID_SPRITE_MARIO_BIG_RUNNING + 20)
#define ID_SPRITE_MARIO_BIG_JUMP (ID_SPRITE_MARIO_BIG + 400)
#define ID_SPRITE_MARIO_BIG_JUMP_WALK (ID_SPRITE_MARIO_BIG_JUMP + 10)
#define ID_SPRITE_MARIO_BIG_JUMP_WALK_LEFT (ID_SPRITE_MARIO_BIG_JUMP_WALK + 2)
#define ID_SPRITE_MARIO_BIG_JUMP_WALK_RIGHT (ID_SPRITE_MARIO_BIG_JUMP_WALK + 6)
#define ID_SPRITE_MARIO_BIG_JUMP_RUN (ID_SPRITE_MARIO_BIG_JUMP + 20)
#define ID_SPRITE_MARIO_BIG_JUMP_RUN_LEFT (ID_SPRITE_MARIO_BIG_JUMP_RUN + 2)
#define ID_SPRITE_MARIO_BIG_JUMP_RUN_RIGHT (ID_SPRITE_MARIO_BIG_JUMP_RUN + 6)
#define ID_SPRITE_MARIO_BIG_SIT (ID_SPRITE_MARIO_BIG + 500)
#define ID_SPRITE_MARIO_BIG_SIT_LEFT (ID_SPRITE_MARIO_BIG_SIT + 10)
#define ID_SPRITE_MARIO_BIG_SIT_RIGHT (ID_SPRITE_MARIO_BIG_SIT + 20)
#define ID_SPRITE_MARIO_BIG_BRACE (ID_SPRITE_MARIO_BIG + 600)
#define ID_SPRITE_MARIO_BIG_BRACE_LEFT (ID_SPRITE_MARIO_BIG_BRACE + 10)
#define ID_SPRITE_MARIO_BIG_BRACE_RIGHT (ID_SPRITE_MARIO_BIG_BRACE + 20)

#define ID_SPRITE_MARIO_DIE (ID_SPRITE_MARIO + 3000)

#define ID_SPRITE_MARIO_SMALL (ID_SPRITE_MARIO + 2000)
#define ID_SPRITE_MARIO_SMALL_IDLE (ID_SPRITE_MARIO_SMALL + 100)
#define ID_SPRITE_MARIO_SMALL_IDLE_LEFT (ID_SPRITE_MARIO_SMALL_IDLE + 10)
#define ID_SPRITE_MARIO_SMALL_IDLE_RIGHT (ID_SPRITE_MARIO_SMALL_IDLE + 20)

#define ID_SPRITE_MARIO_SMALL_WALKING (ID_SPRITE_MARIO_SMALL + 200)
#define ID_SPRITE_MARIO_SMALL_WALKING_LEFT (ID_SPRITE_MARIO_SMALL_WALKING + 10)
#define ID_SPRITE_MARIO_SMALL_WALKING_RIGHT (ID_SPRITE_MARIO_SMALL_WALKING + 20)
#define ID_SPRITE_MARIO_SMALL_RUNNING (ID_SPRITE_MARIO_SMALL + 300)
#define ID_SPRITE_MARIO_SMALL_RUNNING_LEFT (ID_SPRITE_MARIO_SMALL_RUNNING + 10)
#define ID_SPRITE_MARIO_SMALL_RUNNING_RIGHT (ID_SPRITE_MARIO_SMALL_RUNNING + 20)
#define ID_SPRITE_MARIO_SMALL_JUMP (ID_SPRITE_MARIO_SMALL + 400)
#define ID_SPRITE_MARIO_SMALL_JUMP_WALK (ID_SPRITE_MARIO_SMALL_JUMP + 10)
#define ID_SPRITE_MARIO_SMALL_JUMP_WALK_LEFT (ID_SPRITE_MARIO_SMALL_JUMP_WALK + 2)
#define ID_SPRITE_MARIO_SMALL_JUMP_WALK_RIGHT (ID_SPRITE_MARIO_SMALL_JUMP_WALK + 6)
#define ID_SPRITE_MARIO_SMALL_JUMP_RUN (ID_SPRITE_MARIO_SMALL_JUMP + 20)
#define ID_SPRITE_MARIO_SMALL_JUMP_RUN_LEFT (ID_SPRITE_MARIO_SMALL_JUMP_RUN + 2)
#define ID_SPRITE_MARIO_SMALL_JUMP_RUN_RIGHT (ID_SPRITE_MARIO_SMALL_JUMP_RUN + 6)

#define ID_SPRITE_MARIO_SMALL_SIT (ID_SPRITE_MARIO_SMALL + 500)
#define ID_SPRITE_MARIO_SMALL_SIT_LEFT (ID_SPRITE_MARIO_SMALL_SIT + 10)
#define ID_SPRITE_MARIO_SMALL_SIT_RIGHT (ID_SPRITE_MARIO_SMALL_SIT + 20)

#define ID_SPRITE_MARIO_SMALL_BRACE (ID_SPRITE_MARIO_SMALL + 500)
#define ID_SPRITE_MARIO_SMALL_BRACE_LEFT (ID_SPRITE_MARIO_SMALL_BRACE + 10)
#define ID_SPRITE_MARIO_SMALL_BRACE_RIGHT (ID_SPRITE_MARIO_SMALL_BRACE + 20)

#pragma endregion 

#define ID_ANI_GOOMBA_WALK 20000
#define ID_ANI_GOOMBA_DIE 20001
#define ID_SPRITE_GOOMBA_WALK 21000
#define ID_SPRITE_GOOMBA_WALK_1 21001
#define ID_SPRITE_GOOMBA_WALK_2 21002
#define ID_SPRITE_GOOMBA_DIE 22000
#define ID_SPRITE_GOOMBA_DIE_1 22001

#define ID_ANI_COIN 40000
#define ID_SPRITE_COIN 41000
#define ID_SPRITE_COIN_1 41001
#define ID_SPRITE_COIN_2 41002
#define ID_SPRITE_COIN_3 41003

#define ID_SPRITE_CLOUD 50000
#define ID_SPRITE_CLOUD_BEGIN 51000
#define ID_SPRITE_CLOUD_MIDDLE 52000
#define ID_SPRITE_CLOUD_END 53000

#define ID_ANI_QUESTION_MARK_BOX 180000
#define ID_ANI_QUESTION_MARK_BOX_TOUCHED 180001
#define ID_SPRITE_QUESTION_MARK_BOX 181000
#define ID_SPRITE_QUESTION_MARK_BOX_1 181001
#define ID_SPRITE_QUESTION_MARK_BOX_2 181002
#define ID_SPRITE_QUESTION_MARK_BOX_3 181003
#define ID_SPRITE_QUESTION_MARK_BOX_4 181004
#define ID_SPRITE_QUESTION_MARK_BOX_TOUCHED 182000
#define ID_SPRITE_QUESTION_MARK_BOX_TOUCHED_1 182001

#pragma region PLATFORMS

#define ID_SPRITE_GROUND_HEAD 220000
#define ID_SPRITE_GROUND_HEAD_BEGIN 221000
#define ID_SPRITE_GROUND_HEAD_MIDDLE 222000
#define ID_SPRITE_GROUND_HEAD_END 223000

#define ID_SPRITE_GROUND_BODY 230000
#define ID_SPRITE_GROUND_BODY_BEGIN 231000
#define ID_SPRITE_GROUND_BODY_MIDDLE 232000
#define ID_SPRITE_GROUND_BODY_END 233000

#define ID_SPRITE_PINK_BLOCK_PLATFORM_TOP 240000
#define ID_SPRITE_PINK_BLOCK_PLATFORM_BEGIN_TOP 241000
#define ID_SPRITE_PINK_BLOCK_PLATFORM_MIDDLE_TOP 242000
#define ID_SPRITE_PINK_BLOCK_PLATFORM_END_TOP 243000
#define ID_SPRITE_PINK_BLOCK_PLATFORM_BEGIN_MID 244000
#define ID_SPRITE_PINK_BLOCK_PLATFORM_MIDDLE_MID 245000
#define ID_SPRITE_PINK_BLOCK_PLATFORM_END_MID 246000
#define ID_SPRITE_PINK_BLOCK_PLATFORM_BEGIN_BOT 247000
#define ID_SPRITE_PINK_BLOCK_PLATFORM_MIDDLE_BOT 248000
#define ID_SPRITE_PINK_BLOCK_PLATFORM_END_BOT 249000

#define ID_SPRITE_BLUE_BLOCK_PLATFORM_TOP 250000
#define ID_SPRITE_BLUE_BLOCK_PLATFORM_BEGIN_TOP 251000
#define ID_SPRITE_BLUE_BLOCK_PLATFORM_MIDDLE_TOP 252000
#define ID_SPRITE_BLUE_BLOCK_PLATFORM_END_TOP 253000
#define ID_SPRITE_BLUE_BLOCK_PLATFORM_BEGIN_MID 254000
#define ID_SPRITE_BLUE_BLOCK_PLATFORM_MIDDLE_MID 255000
#define ID_SPRITE_BLUE_BLOCK_PLATFORM_END_MID 256000
#define ID_SPRITE_BLUE_BLOCK_PLATFORM_BEGIN_BOT 257000
#define ID_SPRITE_BLUE_BLOCK_PLATFORM_MIDDLE_BOT 258000
#define ID_SPRITE_BLUE_BLOCK_PLATFORM_END_BOT 259000

#define ID_SPRITE_GREEN_BLOCK_PLATFORM_TOP 260000
#define ID_SPRITE_GREEN_BLOCK_PLATFORM_BEGIN_TOP 261000
#define ID_SPRITE_GREEN_BLOCK_PLATFORM_MIDDLE_TOP 262000
#define ID_SPRITE_GREEN_BLOCK_PLATFORM_END_TOP 263000
#define ID_SPRITE_GREEN_BLOCK_PLATFORM_BEGIN_MID 264000
#define ID_SPRITE_GREEN_BLOCK_PLATFORM_MIDDLE_MID 265000
#define ID_SPRITE_GREEN_BLOCK_PLATFORM_END_MID 266000
#define ID_SPRITE_GREEN_BLOCK_PLATFORM_BEGIN_BOT 267000
#define ID_SPRITE_GREEN_BLOCK_PLATFORM_MIDDLE_BOT 268000
#define ID_SPRITE_GREEN_BLOCK_PLATFORM_END_BOT 269000

#define ID_SPRITE_WHITE_BLOCK_PLATFORM_TOP 270000
#define ID_SPRITE_WHITE_BLOCK_PLATFORM_BEGIN_TOP 271000
#define ID_SPRITE_WHITE_BLOCK_PLATFORM_MIDDLE_TOP 272000
#define ID_SPRITE_WHITE_BLOCK_PLATFORM_END_TOP 273000
#define ID_SPRITE_WHITE_BLOCK_PLATFORM_BEGIN_MID 274000
#define ID_SPRITE_WHITE_BLOCK_PLATFORM_MIDDLE_MID 275000
#define ID_SPRITE_WHITE_BLOCK_PLATFORM_END_MID 276000
#define ID_SPRITE_WHITE_BLOCK_PLATFORM_BEGIN_BOT 277000
#define ID_SPRITE_WHITE_BLOCK_PLATFORM_MIDDLE_BOT 278000
#define ID_SPRITE_WHITE_BLOCK_PLATFORM_END_BOT 279000

#define ID_SPRITE_BLOCK_PLATFORM_SHADOW_HEAD 280000
#define ID_SPRITE_BLOCK_PLATFORM_SHADOW_HEAD_BEGIN 281000
#define ID_SPRITE_BLOCK_PLATFORM_SHADOW_HEAD_MIDDLE 282000
#define ID_SPRITE_BLOCK_PLATFORM_SHADOW_HEAD_END 283000
#define ID_SPRITE_BLOCK_PLATFORM_SHADOW_BODY_BEGIN 284000
#define ID_SPRITE_BLOCK_PLATFORM_SHADOW_BODY_MIDDLE 285000
#define ID_SPRITE_BLOCK_PLATFORM_SHADOW_BODY_END 286000

#pragma endregion


#define ID_ANI_BRICK 310000
#define ID_SPRITE_BRICK 311000
#define ID_SPRITE_BRICK_1 311001

#define ID_SPRITE_BACKGROUND 100000