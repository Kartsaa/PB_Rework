
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
class asdg_MuzzleSlot_762;
class asdg_SlotInfo;
class asdg_UnderSlot;
class asdg_FrontSideRail;
class asdg_OpticRail;
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class nia_charms_slot;
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
            reloadAction = "HLC_GestureReloadACRGL";
            reloadMagazineSound[] = { "hlc_core\sound\GL\M203_reload", 1.0, 1, 10 };
            drySound[] = { "hlc_core\sound\GL\GL_drystrike", 1, 1, 10 };
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
    class PB_C7: Rifle_Base_F 
	{
		author="CapryCorn, Kartsa";
		scope="2";
		model = "hlc_wp_ar15\mesh\pbear\car15.p3d";
        reloadAction = "NIA_GestureReload416";
        picture = "\PB_Main\ui\C7\gear_vendimus_ca";
		baseWeapon="PB_C7";
		displayName="C7A1";
		discreteDistanceCameraPoint[] = { "eye_100", "eye_200", "eye_300", "eye_400", "eye_500", "eye_600" };
        discretedistanceinitindex = 0;
        cameraDir = "look";
		hiddenSelections[] = { "Main","Stock","Sights" };
        hiddenSelectionsTextures[] = { "PB_T_Weapons\data\C7\C7.paa", "PB_T_Weapons\data\C7\m16furniture_co.paa", "PB_T_Weapons\data\C7\hb_co.paa"};
		magazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"
		};
		handAnim[] = {
            "OFP2_ManSkeleton",
            "hlc_wp_ar15\gesture\newgesture\handpose_STD.rtm"
        };
		bg_bipod = 0; 
		modes[] = {"Single","FullAuto"};
        drysound[] = {"\hlc_wp_ar15\snd\ar15_trigger", 1, 1, 10};
        reloadMagazineSound[] = {"\hlc_wp_ar15\snd\ar15_reload",0.74,1,30};
        changeFiremodeSound[] = { "\hlc_wp_ar15\snd\ar15_selector", 1, 1, 8 };
		recoil = "recoil_spar";
		
		class WeaponSlotsInfo
		{
			mass = 73;
            class CowsSlot: asdg_OpticRail1913_short {
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.2;
            };
			class MuzzleSlot : asdg_MuzzleSlot_556 {
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.2;
            };
            class PointerSlot {
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
            };
            class Charmslot : nia_charms_slot {};
        };
		class Single: Mode_SemiAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_AR15_NEW_Shot_SoundSet","NIA_carbine_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"NIA_carbine_silencerShot_SoundSet","NIA_carbine_silencerTail_SoundSet"};
			};
			reloadTime = 60/600;
			dispersion = 0.00043635;
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_AR15_NEW_Shot_SoundSet","NIA_carbine_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"NIA_carbine_silencerShot_SoundSet","NIA_carbine_silencerTail_SoundSet"};
			};
			reloadTime = 60/600;
			dispersion = 0.00043635;
		};
	};
    class PB_C8: Rifle_Base_F 
	{
		author="Kartsa";
		hasBipod = 0;
		scope="2";
		model = "hlc_wp_ar15\mesh\mill_bushmaster\car15.p3d";
        reloadAction = "NIA_GestureReload416";
        picture = "\PB_Main\ui\C8\PB_C8_CA.paa";
		baseWeapon="PB_C8";
		displayName="C8A3";
		discreteDistanceCameraPoint[] = { "eye_100","eye_200","eye_300","eye_400","eye_500","eye_600" };
        discretedistanceinitindex = 0;
        cameraDir = "look";
		hiddenSelections[] = {"Main"};
		hiddenSelectionsTextures[] = {"PB_T_Weapons\data\C7\C7.paa"};
		magazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"
		};
		magazineWell[] = {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
		handAnim[] = {"OFP2_ManSkeleton","hlc_wp_ar15\gesture\newgesture\handpose_SMR.rtm"};
		bg_bipod = 0; 
		modes[] = {"Single","FullAuto"};
        drysound[] = {"\hlc_wp_ar15\snd\ar15_trigger", 1, 1, 10};
        reloadMagazineSound[] = {"\hlc_wp_ar15\snd\ar15_reload",0.74,1,30};
        changeFiremodeSound[] = { "\hlc_wp_ar15\snd\ar15_selector", 1, 1, 8 };
		recoil = "recoil_spar";
		
		class WeaponSlotsInfo
		{
			mass = 58.86;
			class CowsSlot: asdg_OpticRail1913_short
			{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class PointerSlot
			{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class Charmslot: nia_charms_slot
			{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
        };
		class Single: Mode_SemiAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_AR15300_NEW_Shot_SoundSet","NIA_300blk_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"NIA_300BLK_Shot_Silenced_SoundSet","NIA_300BLK_ShotTail_Silenced_SoundSet"};
			};
			reloadTime = 60/750;
			dispersion = 0.00043635;
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_AR15300_NEW_Shot_SoundSet","NIA_300blk_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"NIA_300BLK_Shot_Silenced_SoundSet","NIA_300BLK_ShotTail_Silenced_SoundSet"};
			};
			reloadTime = 60/750;
			dispersion = 0.00065271;
		};
	};
    class PB_C9: Rifle_Base_F
	{
		AB_barrelTwist = 12;
		AB_barrelLength = 18.3;
		ACE_barrelTwist = 305;
		ACE_barrelLength = 465;
		aimTransitionSpeed = 0.66259724;
		author = "Kartsa";
		model = "\hlc_wp_saw\mesh\m249\m249e2_pip3.p3d";
		displayName = "C9A2";
		picture = "PB_Main\ui\C9\PB_C9_CA.paa";
		inertia = 0.69;
		initspeed = -1;
		modes[] = {"Single","FullAuto"};
		handanim[] = {"OFP2_ManSkeleton","\hlc_wp_saw\anim\gesture\gesture_m249_STD.rtm"};
		hiddenSelections[] = {"Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG"};
		hiddenSelectionsTextures[] = {"PB_T_Weapons\data\c9\C9A2_CO.paa","hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa","hlc_wp_saw\tex\toadie_m249\barrel_co.paa","PB_T_Weapons\data\c9\C9A2_misc_co.paa","PB_T_Weapons\data\c9\C9A2_fore_co.paa","PB_T_Weapons\data\c9\C9A2_stock_co.paa","hlc_wp_saw\tex\toadie_m249\rearsight_co.paa","PB_T_Weapons\data\c9\C9A2_pouch_co.paa","PB_T_Weapons\data\c9\C9A2_vert.paa"};
		magazines[] = {"hlc_200rnd_556x45_M_SAW","hlc_200rnd_556x45_B_SAW","hlc_200rnd_556x45_T_SAW","hlc_200rnd_556x45_Mdim_SAW","200Rnd_556x45_Box_F","200Rnd_556x45_Box_Red_F","200Rnd_556x45_Box_Tracer_F","200Rnd_556x45_Box_Tracer_Red_F","hlc_30rnd_556x45_EPR","hlc_30rnd_556x45_SOST","hlc_30rnd_556x45_SPR","hlc_30rnd_556x45_S","hlc_30rnd_556x45_M","hlc_30rnd_556x45_t","hlc_30rnd_556x45_MDim","hlc_30rnd_556x45_TDim","hlc_50rnd_556x45_EPR","hlc_50rnd_556x45_SOST","hlc_50rnd_556x45_SPR","hlc_50rnd_556x45_M","hlc_50rnd_556x45_MDim","hlc_30rnd_556x45_EPR_PMAG","hlc_30rnd_556x45_SOST_PMAG","hlc_30rnd_556x45_SPR_PMAG","hlc_30rnd_556x45_S_PMAG","hlc_30rnd_556x45_M_PMAG","hlc_30rnd_556x45_t_PMAG","hlc_30rnd_556x45_MDim_PMAG","hlc_30rnd_556x45_TDim_PMAG","hlc_30rnd_556x45_EPR_STANAGHD","hlc_30rnd_556x45_SOST_STANAGHD","hlc_30rnd_556x45_SPR_STANAGHD","hlc_30rnd_556x45_S_STANAGHD","hlc_30rnd_556x45_M_STANAGHD","hlc_30rnd_556x45_t_STANAGHD","hlc_30rnd_556x45_MDim_STANAGHD","hlc_30rnd_556x45_TDim_STANAGHD","hlc_30rnd_556x45_EPR_L5","hlc_30rnd_556x45_SOST_L5","hlc_30rnd_556x45_SPR_L5","hlc_30rnd_556x45_S_L5","hlc_30rnd_556x45_M_L5","hlc_30rnd_556x45_t_L5","hlc_30rnd_556x45_MDim_L5","hlc_30rnd_556x45_TDim_L5","hlc_30rnd_556x45_EPR_EMAG","hlc_30rnd_556x45_SOST_EMAG","hlc_30rnd_556x45_SPR_EMAG","hlc_30rnd_556x45_S_EMAG","hlc_30rnd_556x45_M_EMAG","hlc_30rnd_556x45_t_EMAG","hlc_30rnd_556x45_MDim_EMAG","hlc_30rnd_556x45_TDim_EMAG","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_red","150Rnd_556x45_Drum_Mag_F","150Rnd_556x45_Drum_Mag_Tracer_F"};
		magazineWell[] = {"CBA_556x45_MINIMI","CBA_556x45_STANAG"};
		scope="2";
		recoil = "rhs_recoil_m249";
		reloadaction = "HLC_GestureReloadM249";
		class WeaponSlotsInfo
		{
			mass = 142;
			class CowsSlot: asdg_OpticRail1913{};
			class MuzzleSlot: asdg_MuzzleSlot_556{};
		};
		class Single: Mode_SemiAuto
		{
			class StandardSound: StandardSound
			{
					soundSetShot[] = {"NIA_AR15300_NEW_Shot_SoundSet","NIA_300blk_Tail_SoundSet"};
				};
				class SilencedSound: SilencedSound
				{
					soundSetShot[] = {"NIA_300BLK_Shot_Silenced_SoundSet","NIA_300BLK_ShotTail_Silenced_SoundSet"};
				};
				reloadTime = 60/700;
				dispersion = 0.00043635;
			};
			class FullAuto: Mode_FullAuto
			{
				class StandardSound: StandardSound
				{
					soundSetShot[] = {"NIA_AR15300_NEW_Shot_SoundSet","NIA_300blk_Tail_SoundSet"};
				};
				class SilencedSound: SilencedSound
				{
					soundSetShot[] = {"NIA_300BLK_Shot_Silenced_SoundSet","NIA_300BLK_ShotTail_Silenced_SoundSet"};
				};
				reloadTime = 60/700;
				dispersion = 0.00065271;
			};
		baseWeapon = "PB_C9";
	};   
};