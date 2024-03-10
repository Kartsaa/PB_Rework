class CfgAmmo
{
	class BulletBase;
	class RocketBase;
	class ammo_Penetrator_Base;
	class B_20mm;
	class B_25mm;
	class B_762x51_Ball;
	class PB_R_DM12_HEAT: RocketBase
	{
		model = "\PB_M_Weapons\Pzf3\DM12_HEAT_fly.p3d";
		hit = 115; 
		indirectHit = 16;
		indirectHitRange = 3;
		warheadName = HEAT;
		explosive = 1;
		submunitionAmmo = PB_ammo_DM12_HEAT_penetrator;
		submunitionDirectionType = SubmunitionModelDirection;
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] =
		{
			0,  0,  -0.2
		};
		triggerOnImpact = true;
		deleteParentWhenTriggered = false;
		airFriction = 1.15;
		sideAirFriction = 0.22;
		maxSpeed = 270;
		initTime = 0;
		thrustTime = 0.1;
		thrust = 0.1;
		fuseDistance = 6;
		simulationStep = 0.02;
		airLock = 1;
		irLock = false;
		nvLock = false;
		timeToLive = 10;
		maneuvrability = 0;
		allowAgainstInfantry = false;
		aiAmmoUsageFlags = 128 + 256 + 512;
		soundSetExplosion[] =
		{
			RocketsLight_Exp_SoundSet,
			RocketsLight_Tail_SoundSet,
			Explosion_Debris_SoundSet
		};
		soundFly[] = {"\PB_A_Weapons\Pzf3\snd\fly.ogg",db-5,1.5,900};

		//--- VFX
		craterEffects = ATRocketCrater;
		explosionEffects = ATRocketExplosion;
		effectsMissile = missile2;
		effectsMissileInit = "";
	};
	class PB_ammo_DM12_HEAT_penetrator: ammo_Penetrator_base
	{
		caliber = 46.6;
		hit = 585;
	};
	class PB_R_DM22_HEAT: PB_R_DM12_HEAT
	{
		model = "\PB_M_Weapons\Pzf3\DM22_HEAT_fly.p3d";
		submunitionAmmo = PB_ammo_DM22_HEAT_penetrator;
		submunitionDirectionType = SubmunitionModelDirection;
		submunitionInitSpeed = 1000;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] =
		{
			0,  0,  -0.2
		};
		triggerOnImpact = true;
		deleteParentWhenTriggered = false;

		airLock = 0;
		aiAmmoUsageFlags = 128 + 512;
	};
	class PB_ammo_DM22_HEAT_penetrator: ammo_Penetrator_base
	{
		caliber = 60;
		warheadName = TandemHEAT;
		hit = 730;
	};
	class PB_R_DM32_HEAT_MP: PB_R_DM12_HEAT
	{
		model = "\PB_M_Weapons\Pzf3\DM32_HEAT_MP_fly.p3d";
		hit = 200; 
		indirectHit = 50; 
		indirectHitRange = 6;
		warheadName = HE;
		explosive = 1;

		submunitionAmmo = "";
		submunitionDirectionType = "";
		submunitionInitSpeed = 0;
		submunitionParentSpeedCoef = 0.0;
		submunitionInitialOffset[] = {0,0,0};
		triggerOnImpact = false;

		allowAgainstInfantry = true;
		aiAmmoUsageFlags = 64 + 128;

		soundSetExplosion[] =
		{
			Mortar_Exp_SoundSet,
			Mortar_Tail_SoundSet,
			Explosion_Debris_SoundSet
		};
		craterEffects = ArtyShellCrater;
		explosionEffects = MortarExplosion;
	};
	class PB_RK_762x39_Ball : B_762x51_Ball {
        airFriction = -0.0014104;
        caliber = 0.628;
        deflecting = 23;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        tracerStartTime = 0.073;
        tracerEndTime = 1.7;
        hit = 10.034;
        typicalspeed = 739.1;
        nvgonly = 1;
        class CamShakeExplode {
            distance = "((6^0.5)*3)";
            duration = "((round (6^0.5))*0.2 max 0.2)";
            frequency = 20;
            power = "(6^0.5)";
        };
        class CamShakeHit {
            distance = 1;
            duration = "((round (6^0.25))*0.2 max 0.2)";
            frequency = 20;
            power = 6;
        };
    };
};