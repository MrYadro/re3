#pragma once

enum AnimationId
{
	ANIM_WALK,
	ANIM_RUN,
	ANIM_SPRINT,
	ANIM_IDLE_STANCE,
	ANIM_WALK_START,
	ANIM_RUN_STOP,
	ANIM_RUN_STOP_R,
	ANIM_IDLE_CAM,
	ANIM_IDLE_HBHB,
	ANIM_IDLE_TIRED,
	ANIM_IDLE_ARMED,
	ANIM_IDLE_CHAT,
	ANIM_IDLE_TAXI,
	ANIM_KO_SHOT_FRONT1,
	ANIM_KO_SHOT_FRONT2,
	ANIM_KO_SHOT_FRONT3,
	ANIM_KO_SHOT_FRONT4,
	ANIM_KO_SHOT_FACE,
	ANIM_KO_SHOT_STOM,
	ANIM_KO_SHOT_ARML,
	ANIM_KO_SHOT_ARMR,
	ANIM_KO_SHOT_LEGL,
	ANIM_KO_SHOT_LEGR,
	ANIM_KD_LEFT,
	ANIM_KD_RIGHT,
	ANIM_KO_SKID_FRONT,
	ANIM_KO_SPIN_R, // named left in VC
	ANIM_KO_SKID_BACK,
	ANIM_KO_SPIN_L, // named right in VC
	ANIM_SHOT_FRONT_PARTIAL,
	ANIM_SHOT_LEFT_PARTIAL,
	ANIM_SHOT_BACK_PARTIAL,
	ANIM_SHOT_RIGHT_PARTIAL,
	ANIM_HIT_FRONT,
	ANIM_HIT_LEFT,
	ANIM_HIT_BACK,
	ANIM_HIT_RIGHT,
	ANIM_FLOOR_HIT,
	ANIM_HIT_BODYBLOW,
	ANIM_HIT_CHEST,
	ANIM_HIT_HEAD,
	ANIM_HIT_WALK,
	ANIM_HIT_WALL,
	ANIM_FLOOR_HIT_F,
	ANIM_HIT_BEHIND,
	ANIM_PUNCH_R,
	ANIM_KICK_FLOOR,
	ANIM_WEAPON_BAT_H,
	ANIM_WEAPON_BAT_V,
	ANIM_WEAPON_HGUN_BODY,
	ANIM_WEAPON_AK_BODY,
	ANIM_WEAPON_PUMP,
	ANIM_WEAPON_SNIPER,
	ANIM_WEAPON_THROW,
	ANIM_WEAPON_THROWU,
	ANIM_WEAPON_START_THROW,
	ANIM_BOMBER,
	ANIM_HGUN_RELOAD,
	ANIM_AK_RELOAD,
	ANIM_FPS_PUNCH,
	ANIM_FPS_BAT,
	ANIM_FPS_UZI,
	ANIM_FPS_PUMP,
	ANIM_FPS_AK,
	ANIM_FPS_M16,
	ANIM_FPS_ROCKET,
	ANIM_FIGHT_IDLE,
	ANIM_FIGHT2_IDLE,
	ANIM_FIGHT_SH_F,
	ANIM_FIGHT_BODYBLOW,
	ANIM_FIGHT_HEAD,
	ANIM_FIGHT_KICK,
	ANIM_FIGHT_KNEE,
	ANIM_FIGHT_LHOOK,
	ANIM_FIGHT_PUNCH,
	ANIM_FIGHT_ROUNDHOUSE,
	ANIM_FIGHT_LONGKICK,
	ANIM_FIGHT_PPUNCH,
	ANIM_CAR_JACKED_RHS,
	ANIM_CAR_LJACKED_RHS,
	ANIM_CAR_JACKED_LHS,
	ANIM_CAR_LJACKED_LHS,
	ANIM_CAR_QJACK,
	ANIM_CAR_QJACKED,
	ANIM_CAR_ALIGN_LHS,
	ANIM_CAR_ALIGNHI_LHS,
	ANIM_CAR_OPEN_LHS,
	ANIM_CAR_DOORLOCKED_LHS,
	ANIM_CAR_PULLOUT_LHS,
	ANIM_CAR_PULLOUT_LOW_LHS,
	ANIM_CAR_GETIN_LHS,
	ANIM_CAR_GETIN_LOW_LHS,
	ANIM_CAR_CLOSEDOOR_LHS,
	ANIM_CAR_CLOSEDOOR_LOW_LHS,
	ANIM_CAR_ROLLDOOR,
	ANIM_CAR_ROLLDOOR_LOW,
	ANIM_CAR_GETOUT_LHS,
	ANIM_CAR_GETOUT_LOW_LHS,
	ANIM_CAR_CLOSE_LHS,
	ANIM_CAR_ALIGN_RHS,
	ANIM_CAR_ALIGNHI_RHS,
	ANIM_CAR_OPEN_RHS,
	ANIM_CAR_DOORLOCKED_RHS,
	ANIM_CAR_PULLOUT_RHS,
	ANIM_CAR_PULLOUT_LOW_RHS,
	ANIM_CAR_GETIN_RHS,
	ANIM_CAR_GETIN_LOW_RHS,
	ANIM_CAR_CLOSEDOOR_RHS,
	ANIM_CAR_CLOSEDOOR_LOW_RHS,
	ANIM_CAR_SHUFFLE_RHS,
	ANIM_CAR_LSHUFFLE_RHS,
	ANIM_CAR_SIT,
	ANIM_CAR_LSIT,
	ANIM_CAR_SITP,
	ANIM_CAR_SITPLO,
	ANIM_DRIVE_L,
	ANIM_DRIVE_R,
	ANIM_DRIVE_LOW_L,
	ANIM_DRIVE_LOW_R,
	ANIM_DRIVEBY_L,
	ANIM_DRIVEBY_R,
	ANIM_CAR_LB,
	ANIM_DRIVE_BOAT,
	ANIM_CAR_GETOUT_RHS,
	ANIM_CAR_GETOUT_LOW_RHS,
	ANIM_CAR_CLOSE_RHS,
	ANIM_CAR_HOOKERTALK,
	ANIM_COACH_OPEN_L,
	ANIM_COACH_OPEN_R,
	ANIM_COACH_IN_L,
	ANIM_COACH_IN_R,
	ANIM_COACH_OUT_L,
	ANIM_TRAIN_GETIN,
	ANIM_TRAIN_GETOUT,
	ANIM_CAR_CRAWLOUT_RHS,
	ANIM_CAR_CRAWLOUT_RHS2,
	ANIM_VAN_OPEN_L,
	ANIM_VAN_GETIN_L,
	ANIM_VAN_CLOSE_L,
	ANIM_VAN_GETOUT_L,
	ANIM_VAN_OPEN,
	ANIM_VAN_GETIN,
	ANIM_VAN_CLOSE,
	ANIM_VAN_GETOUT,
	ANIM_GETUP1,
	ANIM_GETUP2,
	ANIM_GETUP3,
	ANIM_GETUP_FRONT,
	ANIM_JUMP_LAUNCH,
	ANIM_JUMP_GLIDE,
	ANIM_JUMP_LAND,
	ANIM_FALL_FALL,
	ANIM_FALL_GLIDE,
	ANIM_FALL_LAND,
	ANIM_FALL_COLLAPSE,
	ANIM_EV_STEP,
	ANIM_EV_DIVE,
	ANIM_XPRESS_SCRATCH,
	ANIM_ROAD_CROSS,
	ANIM_TURN_180,
	ANIM_ARREST_GUN,
	ANIM_DROWN,
	ANIM_CPR,
	ANIM_DUCK_DOWN,
	ANIM_DUCK_LOW,
	ANIM_RBLOCK_CSHOOT,
	ANIM_WEAPON_THROWU2,
	ANIM_HANDSUP,
	ANIM_HANDSCOWER,
	ANIM_FUCKU,
	ANIM_PHONE_IN,
	ANIM_PHONE_OUT,
	ANIM_PHONE_TALK,

	NUM_ANIMS
};