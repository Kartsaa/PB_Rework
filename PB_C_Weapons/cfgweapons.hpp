
class WeaponSlotsInfo;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class StandardSound;
class BaseSoundModeType;
class SilencedSound;
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_556;
class asdg_SlotInfo;
class asdg_UnderSlot;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class rhs_rifle_gripod_slot: UnderBarrelSlot
{
    displayName = "Gripod slot";
    class compatibleItems
    {
        rhsusf_acc_grip1=1;
        rhsusf_acc_grip2=1;
        rhsusf_acc_grip2_tan=1;
        rhsusf_acc_grip3=1;
        rhsusf_acc_grip3_tan=1;
    };
};
class PB_gripod_slot: rhs_rifle_gripod_slot
{
    linkProxy = "PB_M_Weapons\nia_grip_proxy";
};
class cfgweapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
    class UGL_F;
    class PB_EF88 : Rifle_Base_F {

        displayname = "Austeyr EF88";
        recoil = "recoil_trg21";
        deployedPivot = "deploypivot";
        hasBipod = false;
        author = "Toadie";
        scope = 2;
        magazineReloadSwitchPhase = 0.5;
        model = "PB_M_Weapons\EF88\EF88.p3d";
        picture = "PB_Main\ui\EF88\gear_auga3BLACK_x_ca.paa";
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        ACE_barrelTwist = 228.6;
        ACE_barrelLength = 508.0;
        handanim[] = { "OFP2_ManSkeleton", "\PB_A_Weapons\EF88\a3\augA3_STD.rtm" };
		initSpeed = 800;
        reloadAction = "PB_HLC_GestureReloadAUGa3";
        class GunParticles : GunParticles {
            class SecondEffect {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo {
            mass = 81;
            class MuzzleSlot : asdg_MuzzleSlot_556 {
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
            };
            class CowsSlot : asdg_OpticRail1913 {
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
            };
            class PointerSlot : asdg_FrontSideRail {
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
            };
            class UnderBarrelSlot : asdg_UnderSlot {
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
                };
            class GripodSlot : PB_gripod_slot {
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
            };
        };
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        magazines[] = { "PB_AUG_M855A1" };
        magazineWell[] = {"CBA_556x45_STEYR"};
        inertia = 0.36;
		dexterity = 1.8;
        bullet1[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_01", 0.398107, 1, 15 };
        bullet10[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_02", 0.281838, 1, 15 };
        bullet11[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_03", 0.281838, 1, 15 };
        bullet12[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_04", 0.281838, 1, 15 };
        bullet2[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_02", 0.398107, 1, 15 };
        bullet3[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_03", 0.398107, 1, 15 };
        bullet4[] = { "A3\sounds_f\weapons\shells\7_62\metal_762_04", 0.398107, 1, 15 };
        bullet5[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_01", 0.281838, 1, 15 };
        bullet6[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_02", 0.281838, 1, 15 };
        bullet7[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_03", 0.281838, 1, 15 };
        bullet8[] = { "A3\sounds_f\weapons\shells\7_62\dirt_762_04", 0.281838, 1, 15 };
        bullet9[] = { "A3\sounds_f\weapons\shells\7_62\grass_762_01", 0.281838, 1, 15 };
        soundBullet[] = { "bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083 };

        modes[] = { "FullAuto", "Single" };
        class Single : Mode_SemiAuto {

            sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			aiBurstTerminable = 1;
			reloadTime = 60/830;
			dispersion = 0.00093;
			minRange = 100;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
        };
        class FullAuto : Mode_FullAuto {
           sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			aiBurstTerminable = 1;
			reloadTime = 60/830;
			dispersion = 0.00093;
			minRange = 100;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
        };
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",0.562341,1,10};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.551189,1,5};
        reloadMagazineSound[] = { "PB_A_Weapons\EF88\snd\f88a1_reload2", 1, 1, 30 };
        rhs_grip1_change = "PB_EF88_grip";
        rhs_grip2_change = "PB_EF88_grip2";
        rhs_grip3_change = "PB_EF88_grip3";
        baseWeapon = "PB_EF88";
    };
    class PB_EF88_grip : PB_EF88
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\PB_A_Weapons\EF88\a3\augA3_vfg.rtm" };
        inertia = (0.37 + 0.066);
    };
    class PB_EF88_grip2 : PB_EF88
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\PB_A_Weapons\EF88\a3\augA3_afg.rtm" };
        inertia = (0.37 + 0.066);
    };
    class PB_EF88_grip3 : PB_EF88
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\PB_A_Weapons\EF88\a3\augA3_vfg.rtm" };
        inertia = (0.37 + 0.066);
    };
    class PB_EF88_GL: PB_EF88
    {
        displayname = "Austeyr EF88 (ML40)";
        model = "PB_M_Weapons\EF88\EF88_M203.p3d";
        picture = "\PB_Main\ui\EF88\gear_augglBLACK_x_ca.paa";
        handanim[] = {"OFP2_ManSkeleton", "PB_A_Weapons\EF88\a3\auga3gl_hands"};
        muzzles[] = { "this", "PB_ML40_AUG" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 85;
            class UnderBarrelSlot {};
            class GripodSlot {};
        };
        class PB_ML40_AUG : UGL_F {
            cameradir = "GL_Look";
            discreteDistance[] = { 50, 100, 150, 200, 250, 300, 350 };
            discreteDistanceCameraPoint[] = { "gl_eye_50m", "gl_eye_100m", "gl_eye_150m", "gl_eye_200m", "gl_eye_250m", "gl_eye_300m", "gl_eye_350m" }; /// the angle of gun changes with zeroing
            discreteDistanceInitIndex = 1;
            displayname = "M203-2003";
            useModelOptics = false;
            useExternalOptic = false;
            reloadAction = "GestureReloadTrgUGL";
            reloadMagazineSound[] = { "PB_A_Weapons\gl\snd\M203_reload", 1.0, 1, 10 };
            drySound[]=
            {
                "A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG20mm_static_dry",
                1,
                1,
                10
            };
            magazineWell[] = { "CBA_40mm_M203" };
            class Single : Mode_SemiAuto {
                sounds[] = { "StandardSound" };
                class StandardSound {
                    weaponSoundEffect = "DefaultRifle";
                    soundClosure[] = { closure1, 0.5, closure2, 0.5 };
                    soundSetShot[] = { "UGL_Shot_SoundSet", "UGL_Tail_SoundSet" };
                };
                recoil = "M240Recoil";
                recoilProne = "M240Recoil";
            };
        };
        baseWeapon = "PB_EF88_GL";
    };   
};