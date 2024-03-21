
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
class asdg_OpticRail1913_long;
class nia_charms_slot;
class rhs_weap_pkm;
class rhs_weap_pkp;
class rhs_weap_m24sws;
class rhs_rifle_gripod_slot: UnderBarrelSlot
{
    displayName = "Gripod slot";
    class compatibleItems
    {
		rhs_acc_grip_rk2=1;
		rhs_acc_grip_rk6=1;
		rhs_acc_grip_ffg2=1;
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
class rhs_russian_rifle_scopes_slot;
class rhs_western_rifle_gripod_slot: rhs_rifle_gripod_slot
{
    linkProxy = "rhsusf\addons\rhsusf_weapons\rhs_grip_proxy";
};
class rhs_russian_rifle_gripod_slot: rhs_rifle_gripod_slot
{
	linkProxy = "rhsafrf\addons\rhs_weapons\rhs_grip_proxy";
	class compatibleItems: compatibleItems{};
};
class rhs_russian_rifle_afg_slot: rhs_rifle_gripod_slot
{
	linkProxy = "rhsafrf\addons\rhs_weapons\rhs_afg_proxy";
};
class cfgweapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	#include "cfgscopes.hpp"
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
    class UGL_F;
	class rhs_weap_rpk74m;
	class rhs_weap_m249_pip;
	class arifle_TRG21_F;
	class arifle_TRG21_GL_F;
	class arifle_TRG20_F;
	class launch_RPG32_F;
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
        hiddenSelections[] = { "Camo", "Vert" };
        hiddenSelectionsTextures[] = { "\pb_t_weapons\data\ef88\map2_black_co", "\pb_t_weapons\data\ef88\MVG_Diffuse-BLACK_co.paa" };
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
            mass = 72;
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
        hiddenSelections[] = { "Camo", "Vert" };
        hiddenSelectionsTextures[] = { "\pb_t_weapons\data\ef88\map2_black_co", "\pb_t_weapons\data\ef88\MVG_Diffuse-BLACK_co.paa" };
        class WeaponSlotsInfo : WeaponSlotsInfo {
            mass = 80;
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
            reloadAction = "GestureReloadMk20UGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\MK20_UGL_reload",0.794328,1,10};
			drySound[] = {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};
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
    class PB_C8: Rifle_Base_F 
	{
		author="CapryCorn, Kartsa, Millenia, Toadie2k";
		hasBipod = 0;
		scope="2";
		model = "\PB_M_Weapons\C8\C8.p3d";
        reloadAction = "RHS_GestureReloadAR15";
        picture = "\PB_Main\ui\C8\PB_C8_CA.paa";
		baseWeapon="PB_C8";
		displayName="C8A3";
		discreteDistanceCameraPoint[] = { "eye_100","eye_200","eye_300","eye_400","eye_500","eye_600" };
        discretedistanceinitindex = 0;
        cameraDir = "look";
		hiddenSelections[] = {"Main"};
		hiddenSelectionsTextures[] = {"PB_T_Weapons\data\C8\C7.paa", };
		magazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"
		};
		magazineWell[] = {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
		handAnim[] = {"OFP2_ManSkeleton","PB_A_Weapons\C8\handpose_C8.rtm"};
		bg_bipod = 0; 
		modes[] = {"Single","FullAuto"};
		drySound[] = {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};
		changeFiremodeSound[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\firemode",0.6,1,5};
		reloadMagazineSound[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\reload",1.0,1,10};
		recoil = "recoil_spar";
		
		class WeaponSlotsInfo
		{
			mass = 59;
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
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 60/750;
			dispersion = 0.00073635;
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 60/750;
			dispersion = 0.00073635;
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
		model = "\PB_M_Weapons\C9\C9A2.p3d";
		displayName = "C9A2";
		picture = "PB_Main\ui\C9\PB_C9_CA.paa";
		inertia = 0.69;
		initspeed = -1;
		modes[] = {"Single","FullAuto"};
		handanim[] = {"OFP2_ManSkeleton","\PB_A_Weapons\C9\handpose_c9.rtm"};
		hiddenSelections[] = {"Reciever","Assembly_cover","Barrel","Misc","Foregrip","Stock","RearSight","Magazine","VFG"};
		hiddenSelectionsTextures[] = {"PB_T_Weapons\data\c9\C9A2_CO.paa","PB_T_Weapons\data\c9\assemblycover_co.paa","PB_T_Weapons\data\c9\barrel_co.paa","PB_T_Weapons\data\c9\C9A2_misc_co.paa","PB_T_Weapons\data\c9\C9A2_fore_co.paa","PB_T_Weapons\data\c9\C9A2_stock_co.paa","PB_T_Weapons\data\c9\rearsight_co.paa","PB_T_Weapons\data\c9\C9A2_pouch_co.paa","PB_T_Weapons\data\c9\C9A2_vert.paa"};
		magazines[] = {"rhsusf_200Rnd_556x45_soft_pouch"};
		magazineWell[] = {"CBA_556x45_MINIMI"};
		scope="2";
		recoil = "rhs_recoil_m249";
        reloadaction = "PB_HLC_GestureReloadM249";
		drysound[] = {"\rhsusf\addons\rhsusf_weapons2\M249\snd\empty_machineguns",1,1,10};
        reloadmagazinesound[] = { "\PB_A_Weapons\C9\snd\saw_reload", 0.7, 1, 20 };
		class WeaponSlotsInfo
		{
			mass = 250;
			class CowsSlot: asdg_OpticRail1913{};
			class MuzzleSlot: asdg_MuzzleSlot_556{};
		};
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m249_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m249_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_m4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_m4_stereoLayer_SoundSet"};
			};
			reloadTime = 60/700;
			dispersion = 0.00085271;
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
					soundSetShot[] = {"RHSUSF_m249_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m249_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_m4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_m4_stereoLayer_SoundSet"};
			};
			reloadTime = 60/700;
			dispersion = 0.00085271;
		};
		baseWeapon = "PB_C9";
	};  
	class PB_c7_base: Rifle_Base_F
	{
		scope = 0;
		author = "$STR_TFC_A3_AUTHOR";
		editorCategory = "EdCat_TFC_CORE_Weapons";
		editorSubcategory = "EdSubcat_TFC_CORE_RIFLES";
		descriptionShort = "C7A2 made by Colt Canada";
		reloadAction = "RHS_GestureReloadAR15";
		handAnim[] = {"OFP2_ManSkeleton","TFC_CORE\addons\weapons_army\rifles\Shared\Anim\tfc_rifle_anim.rtm"};
		picture = "TFC_CORE\addons\weapons_army\rifles\c7\Data\INV\tfc_w_c7a2_x_ca.paa";
		discretedistance[] = {100,200,300,400};
		discreteDistanceCameraPoint[] = {"eye","eye_200","eye_300","eye_400"};
		discretedistanceinitindex = 0;
		cameraDir = "eye_look";
		magazineWell[] = {"CBA_556x45_STANAG", "STANAG_556x45"};
		magazineReloadSwitchPhase = 0.5;
        drysound[] = {"\PB_A_Weapons\sound\ar15_trigger", 1, 1, 10};
		reloadMagazineSound[] = {"\PB_A_Weapons\sound\ar15_reload_empty",0.85,1,15};
        changeFiremodeSound[] = { "\PB_A_Weapons\sound\ar15_selector", 1, 1, 8 };
		modes[] = {"Single","FullAuto"};
		ace_overheating_allowSwapBarrel = 0;
		initSpeed = 924;
		ACE_barrelTwist = 180;
		ACE_barrelLength = 508.0;
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 60/750;
			dispersion = 0.00073635;
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 60/750;
			dispersion = 0.00073635;
		};
		class PB_C7_M203: UGL_F
		{
			cameradir = "OP_look";
			discreteDistance[] = {100,150,200,250,300,350};
			discreteDistanceCameraPoint[] = {"OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350"};
			discreteDistanceInitIndex = 1;
			displayname = "$STR_TFC_WEAPONS_ARMY_M203A1";
			useModelOptics = 0;
			useExternalOptic = 0;
			cursoraim = "gl";
			magazinereloadtime = 0;
			reloadtime = 0.1;
			reloadAction = "GestureReloadMk20UGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\MK20_UGL_reload",0.794328,1,10};
			magazines[] = {"rhs_mag_M441_HE","rhs_mag_M433_HEDP","rhs_mag_M397_HET","rhs_mag_m576","rhs_mag_M4009","rhs_mag_M583A1_white","rhs_mag_M661_green","rhs_mag_M662_red","rhs_mag_M585_white_cluster","rhs_mag_M663_green_cluster","rhs_mag_M664_red_cluster","rhs_mag_M713_red","rhs_mag_M714_white","rhs_mag_M715_green","rhs_mag_M716_yellow","rhs_mag_M781_Practice","1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			magazineWell[] = {"UGL_40x36","CBA_40mm_M203"};
			drySound[] = {"A3\sounds_f\Weapons\other\sfx5",1.0,1,30};
			modes[] = {"Single"};
			class Single: Mode_SemiAuto
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
                    soundSetShot[] = { "UGL_Shot_SoundSet", "UGL_Tail_SoundSet" };
				};
			};
		};
		aiDispersionCoefY = 10;
		aiDispersionCoefX = 8;
		class Library
		{
			libTextDesc = "Colt Canada C7A2";
		};
	};
	class PB_C7M203: PB_c7_base
	{
		scope = 2;
		scopeCurator = 2;
		baseWeapon = "PB_C7M203";
		model = "TFC_CORE\addons\weapons_army\rifles\c7\tfc_w_c7a2_m203.p3d";
		handAnim[] = {"OFP2_ManSkeleton","TFC_CORE\addons\weapons_army\rifles\Shared\Anim\tfc_rifle_m203_anim.rtm"};
		muzzles[] = {"this","PB_C7_M203"};
		dexterity = 1.41;
		displayName = "C7A2 (M203)";
		descriptionShort = "C7A2 with M203 Undermount";
		picture = "TFC_CORE\addons\weapons_army\rifles\c7\Data\INV\tfc_w_c7a2_m203_x_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		class Library
		{
			libTextDesc = "";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
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
			class UnderBarrelSlot{};
			class GripodSlot{};
			mass = 80;
		};
	};
	class PB_C7: PB_C7_base
	{
		scope = 2;
		scopeCurator = 2;
		displayname = "C7A2";
		model = "TFC_CORE\addons\weapons_army\rifles\c7\tfc_w_c7a2.p3d";
		picture = "TFC_CORE\addons\weapons_army\rifles\c7\Data\INV\tfc_w_c7a2_x_ca.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
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
			class UnderBarrelSlot: asdg_UnderSlot {
				iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
			};
			class GripodSlot: rhs_western_rifle_gripod_slot {
				iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.25;
			};
			mass = 73;
		};
		rhs_grip1_change = "PB_C7_grip";
		rhs_grip2_change = "PB_C7_grip2";
		rhs_grip3_change = "PB_C7_grip3";
		baseWeapon = "PB_C7";
	};
	class PB_C7_grip: PB_C7
	{
		scopeArsenal = 0;
		displayName = "C7A2 V Grip";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 61;
			class UnderBarrelSlot{};
		};
		handAnim[] = {"OFP2_ManSkeleton","TFC_CORE\addons\weapons_army\rifles\Shared\Anim\tfc_rifle_anim_VHG.rtm"};
	};
	class PB_C7_grip2: PB_C7_grip
	{
		scopeArsenal = 0;
		displayName = "C7A2 A Grip";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 61;
			class UnderBarrelSlot{};
		};
		handAnim[] = {"OFP2_ManSkeleton","TFC_CORE\addons\weapons_army\rifles\Shared\Anim\handpose_AFG.rtm"};
	};
	class PB_C7_grip3: PB_C7_grip
	{
		scopeArsenal = 0;
		displayName = "C7A2 Grip";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 61;
			class UnderBarrelSlot{};
		};
		handAnim[] = {"OFP2_ManSkeleton","TFC_CORE\addons\weapons_army\rifles\Shared\Anim\tfc_rifle_anim_VHG.rtm"};
	};
	class PB_G36: Rifle_Base_F 
	{
		author="Aegis Team";
		hasBipod = 0;
		scope="2";
		model = "\PB_M_Weapons\G36\G36_F.p3d";
        reloadAction = "RHS_GestureReloadAR15";
        picture = "\PB_Main\ui\G36\icon_arifle_G36_F_X_CA.paa";
		baseWeapon="PB_G36";
		displayName="G36K";
		discreteDistance[] =
		{
			100,
			200,
			300,
			400,
			500,
			600
		};
		discreteDistanceInitIndex = 1;
        cameraDir = "look";
		initSpeed = 850;
		inertia = 0.5;
		dexterity = 1.6;
		aimTransitionSpeed = 1.2;
		maxZeroing = 800;
		hiddenSelections[] =
		{
			camo1,
			camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\PB_T_Weapons\data\G36\G36_F_01_CO.paa",
			"\PB_T_Weapons\data\G36\G36_F_02_CO.paa"
		};
        magazines[] = { "PB_M855A1_G36" };
        magazineWell[] = {"CBA_556x45_G36"};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"};
		bg_bipod = 0; 
		modes[] = {"Single","Burst","FullAuto"};
		drySound[] = {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};
		changeFiremodeSound[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\firemode",0.6,1,5};
		magazineReloadSwitchPhase = 0.48;
		reloadMagazineSound[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\reload",1.0,1,10};
		recoil = "recoil_spar";
		
		class WeaponSlotsInfo
		{
			mass = 73;
			class CowsSlot: asdg_OpticRail1913
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
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
        };
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			
			reloadTime = 0.08;
			dispersion = 0.00102;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class Burst: Mode_Burst
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			textureType = dual;
			burst = 2;
			reloadTime = 0.08;
			dispersion = 0.00102;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 0.08;
			dispersion = 0.00102;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
		};
	};
	class PB_G36_GL: PB_G36 
	{
		model = "\PB_M_Weapons\G36\G36_GL_F.p3d";
        picture = "\PB_Main\ui\G36\icon_arifle_G36_GL_F_X_CA.paa";
		baseWeapon="PB_G36_GL";
		displayName="G36K (GL)";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		discreteDistance[] =
		{
			100,
			200,
			300,
			400,
			500,
			600
		};
		discreteDistanceInitIndex = 1;
        cameraDir = "look";
		inertia = 0.6;
		aimTransitionSpeed = 1;
		hiddenSelections[] =
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[] =
		{
			"\PB_T_Weapons\data\G36\G36_F_01_CO.paa",
			"\PB_T_Weapons\data\G36\G36_F_02_CO.paa",
			"\PB_T_Weapons\data\G36\G36_F_GL_CO.paa"
		};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01_GL.rtm"};
		bg_bipod = 0; 
		modes[] = {"Single","Burst","FullAuto"};
		drySound[] = {"A3\sounds_f\weapons\other\dry6",0.0316228,1,10};
		changeFiremodeSound[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\firemode",0.6,1,5};
		magazineReloadSwitchPhase = 0.48;
		reloadMagazineSound[] = {"rhsusf\addons\rhsusf_sounds\ar15_shared\reload",1.0,1,10};
		recoil = "recoil_spar";
		muzzles[] = {"this","PB_AG36"};
		class WeaponSlotsInfo
		{
			mass = 81;
			class CowsSlot: asdg_OpticRail1913
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
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class UnderBarrelSlot{};
        };
		class PB_AG36: UGL_F
		{
			displayName = "AG36";
			useModelOptics = false;
			useExternalOptic = false;
			cameraDir = OP_look;
			discreteDistance[] =
			{
				50,
				75,
				100,
				150,
				200,
				250,
				300,
				350,
				400
			};
			discreteDistanceCameraPoint[] =
			{
				OP_eye_50,
				OP_eye_75,
				OP_eye_100,
				OP_eye_150,
				OP_eye_200,
				OP_eye_250,
				OP_eye_300,
				OP_eye_350,
				OP_eye_400
			};
			discreteDistanceInitIndex = 1;
			reloadAction = GestureReloadSPARUGL;
			magazineReloadSwitchPhase = 0.4;
		};
	};
	class PB_MG5: Rifle_Base_F
	{
		author="Kartsa, Bohemia";
		baseWeapon="PB_MG5";
		scope=2;
		model="\A3\Weapons_F_Mark\Machineguns\MMG_01\MMG_01_F.p3d";
		displayName="MG5";
		descriptionShort="MG5 7.62x51";
		picture="\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\UI\gear_MMG_01_tan_X_co.paa";
		UIPicture="\A3\weapons_f\data\UI\icon_mg_CA.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\Anim\mmg_01.rtm"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_01_sand_CO.paa",
			"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_02_sand_CO.paa",
			"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_03_sand_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_01_sand.rvmat",
			"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_02_sand.rvmat",
			"\A3\Weapons_F_Mark\Machineguns\MMG_01\Data\MMG_01_03_sand.rvmat"
		};
		magazines[] = {"rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m82_blank","rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51_m61_ap","rhsusf_50Rnd_762x51_m62_tracer","rhsusf_50Rnd_762x51_m80a1epr","rhsusf_50Rnd_762x51_m82_blank","rhsusf_50Rnd_762x51_m993","rhsusf_100Rnd_762x51_m993"};
		magazineWell[] = {"M240_762x51","CBA_762x51_LINKS"};
		reloadAction="GestureReloadMMG01";
		recoil="rhs_recoil_m240";
		maxZeroing=1600;
		inertia=1.2;
		aimTransitionSpeed=0.5;
		magazineReloadSwitchPhase=0.40000001;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=247;
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[]={0.059999999,0.40000001};
				iconScale=0.15000001;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.56999999,0.28};
				iconScale=0.15000001;
			};
			class PointerSlot: asdg_frontsiderail
			{
				iconPosition[]={0.38,0.41999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[]={0.34999999,0.85000002};
				iconScale=0.30000001;
			};
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.25118864,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.25118864,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.25118864,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.25118864,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		drySound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_Dry",
			0.44668359,
			1,
			10
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG_01_reload",
			1,
			1,
			10
		};
		changeFiremodeSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\firemode_TRG20",
			0.31622776,
			1,
			5
		};
		modes[]=
		{
			"Single",
			"FullAuto",
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m240_Shot_SoundSet","RHSUSF_rifle_med_Tail_SoundSet","RHSUSF_m240_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_m4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_m4_stereoLayer_SoundSet"};
			};
			reloadTime=60/720;
			dispersion=0.00145;
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m240_Shot_SoundSet","RHSUSF_rifle_med_Tail_SoundSet","RHSUSF_m240_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_m4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_m4_stereoLayer_SoundSet"};
			};
			reloadTime=60/720;
			dispersion=0.00145;
		};
	};
	class PB_PZF3: Launcher_Base_F
    {
		author = "Aegis Team";
		scope = 2; 
		scopeArsenal = 2;
		displayName = "Panzerfaust 3";
		model = "\PB_M_Weapons\Pzf3\PzF3.p3d";
		hiddenSelections[] = {Camo1,Camo2};
		hiddenSelectionsTextures[] =
		{
			"\PB_T_Weapons\data\PzF3\PzF3_Trigger_CO.paa",
			"\PB_T_Weapons\data\PzF3\PzF3_Tube_CO.paa"
		};
		hiddenSelectionsMaterials[] =
		{
			"\PB_T_Weapons\data\PzF3\PzF3_Trigger.rvmat",
			"\PB_T_Weapons\data\PzF3\PzF3_Tube.rvmat"
		};
		picture = "\PB_Main\UI\PzF3\picture_PzF3_CA.paa";
		magazines[] =
		{
			"PB_DM12_HEAT_F",
			"PB_DM22_HEAT_F",
			"PB_DM32_HEAT_MP_F"
		};
		magazineReloadSwitchPhase = 0.32;
		recoil="recoil_rpg";
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\PB_A_Weapons\Pzf3\PzF3.rtm"
		};
		reloadAction = GestureReloadRPG7;
		weaponInfoType = RscWeaponEmpty;
		aimTransitionSpeed = 0.5;
		dexterity = 1.1;
		inertia = 1.0;
		canLock = false;
		maxZeroing = 900;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 150;
		};
		modes[] = {Mode_SemiAuto_Player};
		class Mode_SemiAuto_Player: Mode_SemiAuto
		{
			minRange = 15;	
			minRangeProbab = 0.3;
			midRange = 50;	
			midRangeProbab = 0.7;
			maxRange = 900;	
			maxRangeProbab = 0.5;
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 700;
			sounds[] = {StandardSound};
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] =
				{
					Launcher_MRAWS_Shot_SoundSet,
					Launcher_MRAWS_Tail_SoundSet
				};
			};
		};
		bullet1[] = {"\A3\Sounds_F\dummysound.wss",1,1,0};
		soundBullet[] = {bullet1,1};
		drySound[] = {"\PB_A_Weapons\Pzf3\snd\dry.ogg",0.4466836,1,15};
		changeFiremodeSound[] = {"\PB_A_Weapons\Pzf3\snd\dry.ogg",0.4466836,1,15};
		reloadMagazineSound[] = {"\PB_A_Weapons\Pzf3\snd\reload.ogg",0.25118864,1,30};
		soundFly[] = {"\PB_A_Weapons\Pzf3\snd\fly.ogg",0.31622776,1.5,900};
		class GunParticles
		{
			class FireSmoke
			{
				positionName = pos_fx_smoke;
				directionName = pos_fx_smoke_dir;
				effectName = RocketBackEffectsRPGNT;
			};
		};
		optics = true;
		modelOptics = "\PB_M_Weapons\Pzf3\PzF3_reticle.p3d";
		class OpticsModes
		{
			class Scope
			{
				opticsID = 1;
				useModelOptics = true;
				memoryPointCamera = pos_view;
				cameraDir = pos_view_dir;
				visionMode[] = {Normal};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				opticsPPEffects[] =
				{
					OpticsCHAbera1,
					OpticsBlur1
				};
				opticsZoomMin = 0.107;
				opticsZoomMax = 0.107;
				opticsZoomInit = 0.107;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
			};
		};
    };
	class PB_RK62M2: Rifle_Base_F
	{
		author="Kartsa, Tuuttipingu";
		scope=2;
		cameraDir = "eye_look";
        changeFiremodeSound[] = { "PB_A_Weapons\RK62M2\snd\ak_selector", 1, 1, 8 };
		descriptionShort="RK62M2 7.62x39mm";
		dexterity = 1.8;
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceCameraPoint[] = {"eye"};
		displayName="RK62M2";
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK74\AK74_dry",0.17782794,1,10};
		maxZeroing=600;
		model="PB_M_Weapons\RK62M2\RK62m2.p3d";
		picture="\PB_Main\ui\RK62\RK62M2_UI_CA.paa";
		hiddenSelections[]={"camo1","camo2","camo3","camo4"};
		hiddenSelectionsTextures[]={"PB_T_Weapons\data\RK62M2\stock_co.paa","PB_T_Weapons\data\RK62M2\rails_co.paa","PB_T_Weapons\data\RK62M2\grip_co.paa","PB_T_Weapons\data\RK62M2\frame_co.paa"};
		handAnim[]={
			"OFP2_ManSkeleton",
			"\PB_A_Weapons\RK62M2\handpose_VFG.rtm"
		};
		reloadAction = "PB_HLC_GestureReloadAK";
        reloadMagazineSound[] = { "\PB_A_Weapons\RK62M2\snd\ak74m_reload", 0.8, 1, 20 };
		magazineReloadSwitchPhase = 0.3;
		magazines[]=
		{
			"PB_RK_Mag"
		};
		magazineWell[]=
		{
			"CBA_762x39_AK"
		};
		recoil="recoil_spar";
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.50118721,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.50118721,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.50118721,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.50118721,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.39810717,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.39810717,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.39810717,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.39810717,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.25118864,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.25118864,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.25118864,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.25118864,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.082999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class CowsSlot: asdg_OpticRail1913{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class PointerSlot: asdg_FrontSideRail{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class UnderBarrelSlot: asdg_UnderSlot{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			mass=70;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]={"FullAuto","Single",};
		class Single: Mode_SemiAuto
		{
			
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHS_AKM_Shot_SoundSet","RHS_MMG1_Tail_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHS_sd_AKM_Shot_SoundSet","RHS_sd_MMG1_Tail_SoundSet"};
			};
			aiBurstTerminable = 1;
			reloadTime = 0.0923;
			dispersion = 0.00093;
			minRange = 100;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHS_AKM_Shot_SoundSet","RHS_MMG1_Tail_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHS_sd_AKM_Shot_SoundSet","RHS_sd_MMG1_Tail_SoundSet"};
			};
			aiBurstTerminable = 1;
			reloadTime = 0.0923;
			dispersion = 0.00093;
			minRange = 100;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
	};
	class PB_RK62: PB_RK62M2
	{
		author="Kartsa, Tuuttipingu";
		basweapon = "PB_RK62";
		scope=2;
		cameraDir = "eye_look";
		descriptionShort="RK62 7.62x39mm";
		dexterity = 1.8;
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceCameraPoint[] = {"eye"};
		displayName="RK62";
		drySound[]={"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_dry",0.17782794,1,10};
		maxZeroing=600;
		model="PB_M_Weapons\RK62\KARRK62.p3d";
		picture="\PB_Main\ui\RK62\RK62_UI_CA.paa";
		hiddenSelections[]={"camo1","camo2"};
		hiddenSelectionsTextures[]={"PB_T_Weapons\data\RK62\handguard_d_co.paa","PB_T_Weapons\data\RK62\rk62_d2_co.paa"};
		handAnim[]={"OFP2_ManSkeleton","\PB_A_Weapons\RK62M2\handpose_ak12.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
				};
			class CowsSlot{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
				};
			class PointerSlot{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
				};
			class UnderBarrelSlot{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
				};
			mass=72;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;
		modes[]={"FullAuto","Single",};
	};
	class PB_PKM: rhs_weap_pkm
	{
		aimTransitionSpeed = 0.5;
		author = "Kartsa, Bohemia";
		baseWeapon = "PB_PKM";
		dexterity = 1.2;
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceCameraPoint[] = {"eye"};
		displayName = "PKM Plastic Stock";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\pkm.rtm"};
		deployedPivot = "bipod";
		hasBipod = "true";
		soundBipodDown[]= { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down", db-3, 1, 20 };
		soundBipodUp[]= { "A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up", db-3, 1, 20 };
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PB_T_Weapons\data\PKM\PKM_co.paa","PB_T_Weapons\data\RK62M2\rails_co.paa"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N26","rhs_100Rnd_762x54mmR_7BZ3"};
		maxZeroing=600;
		model = "PB_M_Weapons\PKM\KAR_PKM.p3d";
		recoil = "rhs_recoil_pkm";
		inertia = 0.8;
		magazineWell[] = {"PK_762x54R","CBA_762x54R_LINKS"};
		scope = 2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class CowsSlot: asdg_OpticRail1913{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class PointerSlot{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class UnderBarrelSlot{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			mass = 187;
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHS_PK_Shot_SoundSet","RHS_MMG1_Tail_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHS_sd_SVD_Shot_SoundSet","RHS_sd_mmg1_Tail_SoundSet"};
			};
			reloadTime = 60/600;
			dispersion = 0.00133;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHS_PK_Shot_SoundSet","RHS_MMG1_Tail_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHS_sd_SVD_Shot_SoundSet","RHS_sd_mmg1_Tail_SoundSet"};
			};
			reloadTime = 60/600;
			dispersion = 0.00133;
		};
	};
	class PB_PKP: rhs_weap_pkp
	{
		aimTransitionSpeed = 0.5;
		author = "Kartsa, Bohemia";
		baseWeapon = "PB_PKP";
		dexterity = 1.2;
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceCameraPoint[] = {"eye"};
		displayName = "PKP (Rails)";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\pkp.rtm"};
		hasBipod = 1;
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_weapons\pkp_bis\data\pecheneg_co.paa","PB_T_Weapons\data\RK62M2\rails_co.paa","PB_T_Weapons\data\RK62M2\stock_co.paa"};
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_7N13","rhs_100Rnd_762x54mmR_7N26","rhs_100Rnd_762x54mmR_7BZ3"};
		maxZeroing=600;
		model = "PB_M_Weapons\PKP\KAR_PKP.p3d";
		inertia = 0.8;
		magazineWell[] = {"PK_762x54R","CBA_762x54R_LINKS"};
		scope = 2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 190;
			class MuzzleSlot: asdg_MuzzleSlot_762{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class CowsSlot: asdg_OpticRail1913{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class PointerSlot: asdg_FrontSideRail{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
			class UnderBarrelSlot: asdg_UnderSlot{
				iconPosition[] = {0,0};
				iconScale = 1.0;
				iconPicture = "\A3\Weapons_F\Data\clear_empty.paa";
				iconPinPoint = "Left";
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHS_PK_Shot_SoundSet","RHS_MMG1_Tail_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHS_sd_SVD_Shot_SoundSet","RHS_sd_mmg1_Tail_SoundSet"};
			};
			reloadTime = 60/700;
			dispersion = 0.00113;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHS_PK_Shot_SoundSet","RHS_MMG1_Tail_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHS_sd_SVD_Shot_SoundSet","RHS_sd_mmg1_Tail_SoundSet"};
			};
			reloadTime = 60/700;
			dispersion = 0.00113;
		};
	};
	class PB_Famas_G2: Rifle_Base_F
	{
		author = "Aegis Team";
		baseweapon = "PB_Famas_G2";
		displayname = "Famas G2";
		descriptionShort = "Famas G2 5.56x45 NATO";
		scope = 2;
		model = "\PB_M_Weapons\famas\Atlas_famas_g2.p3d";		
		handAnim[] = {"OFP2_ManSkeleton", "\PB_A_Weapons\Famas\G2\famas_new_high_2.rtm"};
		reloadAction = "PB_GestureReloadFAMAS";
		magazines[] = {"30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag_green", "30Rnd_556x45_Stanag_red", "30Rnd_556x45_Stanag_Tracer_Red", "30Rnd_556x45_Stanag_Tracer_Green", "30Rnd_556x45_Stanag_Tracer_Yellow"};
		magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL","STANAG_556x45","STANAG_556x45_Large"};
		magazineReloadSwitchPhase = 0.48;
		picture = "\PB_Main\ui\famas\gear_famasG2_X_ca.paa";
		htMin = 8;
		htMax = 920;
		inertia = 0.5;
		aimTransitionSpeed = 1.1;
		dexterity = 1.5;
		initSpeed = 750;
		recoil = "recoil_trg20";
		maxZeroing = 800;
		deployedPivot = "bipod";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down", 0.707946, 1, 20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up", 0.707946, 1, 20};
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01", 0.446684, 1, 15};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02", 0.446684, 1, 15};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03", 0.446684, 1, 15};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04", 0.446684, 1, 15};
		bullet5[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_01", 0.562341, 1, 15};
		bullet6[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_02", 0.562341, 1, 15};
		bullet7[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_03", 0.562341, 1, 15};
		bullet8[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_04", 0.562341, 1, 15};
		bullet9[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_01", 0.562341, 1, 15};
		bullet10[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_02", 0.562341, 1, 15};
		bullet11[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_03", 0.562341, 1, 15};
		bullet12[] = {"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04", 0.562341, 1, 15};
		soundBullet[] = {"bullet1", 0.087, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy = "\a3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_muzzle";
				iconPosition[] = {0, 0.45};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913_long
			{
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				displayName = "Optics Slot";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5, 0.35};
				iconScale = 0.2;
				
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";
				displayName = "Pointer Slot";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_side";
				iconPosition[] = {0.2, 0.45};
				iconScale = 0.25;
			};
			mass = 84;
		};
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		modes[] = {"Single", "Burst", "FullAuto", "single_medium_optics1", "single_medium_optics2", "burst_medium", "fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 60/1000;
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			class BaseSoundModeType
			{
			};
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
		};
		class Burst: Mode_Burst
		{
			reloadTime = 60/1100;
			burst = 3;
			dispersion = 0.00073;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 60/1000;
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-006;
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
		};
		class Burst_medium: Burst
		{
			showToPlayer=0;
			minRange=2;
			minRangeProbab=0.5;
			midRange=75;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_dry", 0.562341, 1, 10};
		reloadMagazineSound[] = {"PB_A_Weapons\FAMAS\snd\FAMAS_reload.ogg", 1, 1, 35};
		changeFiremodeSound[] = 
		{
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode", 0.177828, 1, 5
		};
		hiddenSelections[] = 
		{
			"CamoG2_1", 
			"CamoG2_2", 
			"CamoG2_3",
			"CamoG2_Low",
			"CamoRail",
			"CamoF1_2",
			"CamoF1_3"
		};
		hiddenSelectionsTextures[] = 
		{
			"PB_T_Weapons\data\Famas\famas_g2_1.paa",
			"PB_T_Weapons\data\Famas\famas_g2_2.paa",
			"PB_T_Weapons\data\Famas\famas_g2_3.paa",
			"PB_T_Weapons\data\Famas\famas_low.paa",
			"PB_T_Weapons\data\Famas\rail_famas.paa",
			"PB_T_Weapons\data\Famas\famas_2.paa",
			"PB_T_Weapons\data\Famas\famas_3.paa"
		};
		weaponInfoType = "RscWeaponZeroing";
	};
	class PB_Famas_G2_Grip: PB_Famas_G2
	{
		scope = 2;
		scopeCurator = 2;
		baseWeapon = "PB_Famas_G2_Grip";
		displayName = "Famas G2 (Grip)";
		model = "\PB_M_Weapons\famas\Atlas_Famas_G2_hg.p3d";
		descriptionShort = "Famas G2 5.56x45 with Grip";
		reloadMagazineSound[] = {"PB_A_Weapons\famas\snd\FAMAS_reload.ogg", 1, 1, 35};
		handAnim[] = {"OFP2_ManSkeleton", "\PB_A_Weapons\famas\G2\famas_tact_high.rtm"};
		picture = "\PB_Main\ui\famas\gear_famasG2grip_X_ca.paa";
		hiddenSelections[] = 
		{
			"CamoG2_1", 
			"CamoG2_2", 
			"CamoG2_3",
			"CamoG2_Low",
			"CamoRail",
			"CamoG2_Grip",
			"CamoF1_2",
			"CamoF1_3"
		};
		hiddenSelectionsTextures[] = 
		{
			"PB_T_Weapons\data\Famas\famas_g2_1.paa",
			"PB_T_Weapons\data\Famas\famas_g2_2.paa",
			"PB_T_Weapons\data\Famas\famas_g2_3.paa",
			"PB_T_Weapons\data\Famas\famas_low.paa",
			
			"PB_T_Weapons\data\Famas\rail_famas.paa",
			"PB_T_Weapons\data\Famas\handgrip.paa",
			
			"PB_T_Weapons\data\Famas\famas_2.paa",
			"PB_T_Weapons\data\Famas\famas_3.paa"
		};
		deployedPivot = "bipod";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down", 0.707946, 1, 20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up", 0.707946, 1, 20};
	};
	class PB_Famas_G2_M203: PB_Famas_G2
	{
		scope = 2;
		scopeCurator = 2;
		baseWeapon = "PB_Famas_G2_M203";
		displayName = "Famas G2 (M203)";
		model = "\PB_M_Weapons\FAMAS\Atlas_famas_G2_M203.p3d";
		descriptionShort = "Famas G2 with M203 UBGL";
		handAnim[] = {"OFP2_ManSkeleton", "\PB_A_Weapons\famas\g2\famas_new_gl.rtm"};
		reloadMagazineSound[] = {"PB_A_Weapons\famas\snd\FAMAS_reload.ogg", 1, 1, 35};
		picture = "\PB_Main\ui\famas\gear_famasG2m203_X_ca.paa";
		hiddenSelections[] = 
		{
			"CamoG2_1", 
			"CamoG2_2", 
			"CamoG2_3",
			"CamoG2_Low",
			"CamoRail",
			"CamoF1_2",
			"CamoF1_3",
			"CamoM203",
			"CamoM203_Low"
		};
		hiddenSelectionsTextures[] = 
		{
			"PB_T_Weapons\data\Famas\famas_g2_1.paa",
			"PB_T_Weapons\data\Famas\famas_g2_2.paa",
			"PB_T_Weapons\data\Famas\famas_g2_3.paa",
			"PB_T_Weapons\data\Famas\famas_low.paa",
			"PB_T_Weapons\data\Famas\rail_famas.paa",
			"PB_T_Weapons\data\Famas\famas_2.paa",
			"PB_T_Weapons\data\Famas\famas_3.paa",
			"PB_T_Weapons\data\Famas\m203.paa",
			"PB_T_Weapons\data\Famas\m203_low.paa"
		};
		deployedPivot = "bipod";
		hasBipod = 1;
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down", 0.707946, 1, 20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up", 0.707946, 1, 20};
		muzzles[] = {"this", "PB_Famas_M203"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 91;
		};
		class PB_Famas_M203: UGL_F
		{
			scope = 2;
			displayName = "GL 203";
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM"};
			cameraDir = "OP_look";
			reloadAction = "GestureReloadFAMASUGL";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceInitIndex = 1;
			useModelOptics = 0;
			useExternalOptic = 0;
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			reloadMagazineSound[]= { "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_UGL_reload", 0.79432821, 1, 10 };
		};
	};
	class PB_Famas_F1: PB_Famas_G2
	{
		author = "Aegis Team";
		baseweapon = "PB_Famas_F1";
		model = "\PB_M_Weapons\famas\Atlas_famas_f1.p3d";
		displayname = "Famas F1";
		descriptionshort = "Famas F1 5.56x45 NATO";
		scope = 2;		
		handAnim[] = {"OFP2_ManSkeleton", "\PB_A_weapons\famas\F1\famas_new_high.rtm"};
		picture = "\PB_Main\ui\famas\gear_famasf1_X_ca.paa";
		magazines[] = 
		{
			"PB_M855_Famas",
			"PB_M855_Famas_Red",
			"PB_M855_Famas_Green",
			"PB_M855_Famas_Yellow",
			"PB_M855_Famas_Orange",
		};
		magazineWell[] = {"PB_556x45_FAMAS"};
		hiddenSelections[] = 
		{
			"CamoF1_1", 
			"CamoF1_2", 
			"CamoF1_3",
			"Camo_Low",
			"CamoG2_Grip",
			"CamoM203",
			"CamoM203_Low"
			
		};
		hiddenSelectionsTextures[] = 
		{
			"PB_T_Weapons\data\Famas\famas_1.paa",
			"PB_T_Weapons\data\Famas\famas_2.paa",
			"PB_T_Weapons\data\Famas\famas_3.paa",
			"PB_T_Weapons\data\Famas\famas_low.paa",
			"PB_T_Weapons\data\Famas\handgrip.paa",
			"PB_T_Weapons\data\Famas\m203.paa",
			"PB_T_Weapons\data\Famas\m203_low.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {};
				
			};
			class PointerSlot: PointerSlot
			{
				compatibleItems[] = {};
			};
			mass = 79;
		};
		reloadMagazineSound[] = {"PB_A_Weapons\famas\snd\FAMAS_reload.ogg", 1, 1, 35};
	};
	class PB_Famas_F1_RIS: PB_Famas_F1
	{
		author = "Aegis Team";
		baseweapon = "PB_Famas_F1_RIS";
		model = "\PB_M_Weapons\famas\Atlas_famas_f1.p3d";
		displayname = "Famas F1 (RIS)";
		descriptionshort = "Famas F1 5.56x45 NATO with RIS";
		scope = 2;		
		handAnim[] = {"OFP2_ManSkeleton", "\PB_A_weapons\famas\F1\famas_new_high.rtm"};
		picture = "\PB_Main\ui\famas\gear_famasf1ris_X_ca.paa";
		hiddenSelections[] = 
		{
			"CamoF1_1", 
			"CamoF1_2", 
			"CamoF1_3",
			"Camo_Low",
			"CamoRail",
			"CamoG2_Grip",
			"CamoM203",
			"CamoM203_Low"
			
		};
		hiddenSelectionsTextures[] = 
		{
			"PB_T_Weapons\data\Famas\famas_1.paa",
			"PB_T_Weapons\data\Famas\famas_2.paa",
			"PB_T_Weapons\data\Famas\famas_3.paa",
			"PB_T_Weapons\data\Famas\famas_low.paa",
			"PB_T_Weapons\data\famas\rail_famas.paa",
			"PB_T_Weapons\data\Famas\handgrip.paa",
			"PB_T_Weapons\data\Famas\m203.paa",
			"PB_T_Weapons\data\Famas\m203_low.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			
			class CowsSlot: asdg_OpticRail1913_long
			{
				linkProxy = "\a3\data_f\proxies\weapon_slots\TOP";
				displayName = "Optics Slot";
				iconPicture = "\a3\weapons_f\Data\ui\attachment_top";
				iconPinpoint = "Bottom";
				iconPosition[] = {0.5, 0.35};
				iconScale = 0.2;
			};
			mass = 100;
		};
		reloadMagazineSound[] = {"PB_A_Weapons\famas\snd\FAMAS_reload.ogg", 1, 1, 35};
	};
	class PB_Famas_F1_M203: PB_Famas_G2_M203
	{
		scope = 2;
		scopeCurator = 2;
		baseWeapon = "PB_Famas_F1_M203";
		displayName = "Famas G1 (M203)";
		model = "\PB_M_Weapons\FAMAS\Atlas_famas_F1_M203.p3d";
		descriptionShort = "Famas G1 with M203 UBGL";
		handAnim[] = {"OFP2_ManSkeleton", "\PB_A_Weapons\famas\g2\famas_new_gl.rtm"};
		reloadMagazineSound[] = {"PB_A_Weapons\famas\snd\FAMAS_reload.ogg", 1, 1, 35};
		picture = "\PB_Main\ui\famas\gear_famasf1m203_X_ca.paa";
		hiddenSelections[] = 
		{
			"CamoF1_1", 
			"CamoF1_2", 
			"CamoF1_3",
			"Camo_Low",
			"CamoRail",
			"CamoG2_Grip",
			"CamoM203",
			"CamoM203_Low"
			
		};
		hiddenSelectionsTextures[] = 
		{
			"PB_T_Weapons\data\Famas\famas_1.paa",
			"PB_T_Weapons\data\Famas\famas_2.paa",
			"PB_T_Weapons\data\Famas\famas_3.paa",
			"PB_T_Weapons\data\Famas\famas_low.paa",
			"PB_T_Weapons\data\Famas\rail_famas.paa",
			"PB_T_Weapons\data\Famas\handgrip.paa",
			"PB_T_Weapons\data\Famas\m203.paa",
			"PB_T_Weapons\data\Famas\m203_low.paa"
		};
		soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down", 0.707946, 1, 20};
		soundBipodUp[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up", 0.707946, 1, 20};
		muzzles[] = {"this", "PB_FamasF1_M203"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 87;
		};
		class PB_FamasF1_M203: UGL_F
		{
			scope = 2;
			displayName = "GL 203";
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM"};
			cameraDir = "OP_look";
			reloadAction = "GestureReloadFAMASUGL";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceInitIndex = 1;
			useModelOptics = 0;
			useExternalOptic = 0;
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			reloadMagazineSound[]= { "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_UGL_reload", 0.79432821, 1, 10 };
		};
	};
	class PB_ARM1_BASE: Rifle_Base_F
	{
		hiddenSelections[] = {"body","newfront","zenit1","zenit2","zenit3"};
		magazines[]=
		{
			"PB_30Rnd_556x45_AK_M855A1", "PB_30Rnd_556x45_AK_M856A1","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855_TR","PB_30Rnd_556x45_AK_M855_TG"
		};
		magazineWell[]=
		{
			"PB_AK_556x45"
		};
		hiddenSelectionsTextures[] = {"PB_T_Weapons\data\ARM\ARM1.paa","rhsafrf\addons\rhs_weapons\texture\ak105_barrel_co.paa","PB_T_Weapons\data\ARM\ARM_Z01.paa","PB_T_Weapons\data\ARM\ARM_z02.paa","PB_T_Weapons\data\ARM\ARM_B33.paa"};
		class Single: Mode_SemiAuto
		{

			
            sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 0.067;
			dispersion = 0.000347248;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class FullAuto: Mode_FullAuto
		{
			
            sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 0.079;
			dispersion = 0.000347248;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
		};
	};
	class PB_ARM1: PB_ARM1_BASE 
	{
		author="Kartsa";
		scope="2";
		model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m.p3d";
        reloadAction = "RHS_GestureReloadAK_1hand";
		magazineReloadSwitchPhase = 0.3;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
        picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_ca.paa";
		baseWeapon="PB_ARM1";
		displayName="AR-M1";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
        discretedistanceinitindex = 0;
        cameraDir = "eye_look";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock.rtm"};
		rhs_pkas_type = "rhs_acc_pkas";
		rhs_1p29_type = "rhs_acc_1p29";
		rhs_pso1m2_type = "rhs_acc_pso1m2_ak";
		rhs_pso1m21_type = "rhs_acc_pso1m21_ak";
		rhs_pgo7v_type = "rhs_acc_pgo7v_ak";
		rhs_pgo7v2_type = "rhs_acc_pgo7v2_ak";
		rhs_pgo7v3_type = "rhs_acc_pgo7v3_ak";
		rhs_npz = "rhs_weap_ak74m_npz";
		bg_bipod = 0; 
		modes[] = {"Single","FullAuto"};
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
        reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};
		recoil = "rhs_recoil_ak74m";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_SF3P556";
			};
		};
		class WeaponSlotsInfo
		{
			mass = 74.5;
			class MuzzleSlot: asdg_MuzzleSlot_556{};
			class CowsSlot: rhs_russian_rifle_scopes_slot{};
			class rhs_npz_slot: SlotInfo
			{
				compatibleItems[] = {"rhs_acc_npz"};
			};
		};
		class Single: Single
		{
			reloadTime = 0.0923;
			dispersion = 0.00093;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.0923;
			dispersion = 0.00093;
		};
	};
	class PB_LMG556: rhs_weap_rpk74m 
	{
		author="Kartsa";
		scope="2";
		baseWeapon="PB_LMG556";
		displayName="Arsenal LMG 5.56x45";
		magazines[]=
		{
			"PB_30Rnd_556x45_AK_M855A1"
		};
		magazineWell[]=
		{
			"PB_AK_556x45"
		};
		class Single: Mode_Semiauto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m249_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m249_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 60/600;
			dispersion = 0.00113;
		};
		class FullAuto: Mode_FullAuto
		{	
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m249_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m249_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 60/600;
			dispersion = 0.00113;
		};
	};
	class PB_ARM1_GL: PB_ARM1 
	{
		model = "\rhsafrf\addons\rhs_weapons\rhs_ak74m_gp25.p3d";
        reloadAction = "RHS_GestureReloadAK_1hand";
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74m_gp25_ca.paa";
		baseWeapon="PB_ARM1_GL";
		displayName="AR-M1 GP25";
		weaponInfoType = "rhs_rscOptics_ak74m_gp25";
		recoil = "rhs_recoil_ak74m";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_gp.rtm"};
		muzzles[] = {"this","GP25_40"};
		class GP25_40: UGL_F
		{
			displayName = "$STR_RHS_GP25_NAME";
			descriptionShort = "Grenade launcher<br/>Caliber: 40mm";
			useModelOptics = 0;
			useExternalOptic = 0;
			reloadaction = "RHS_GestureReloadGP30";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload",1,1,10};
			magazines[] = {"rhs_VOG25","rhs_VOG25p","rhs_vg40tb","rhs_vg40sz","rhs_vg40op_white","rhs_vg40op_green","rhs_vg40op_red","rhs_GRD40_white","rhs_GRD40_green","rhs_GRD40_red","rhs_VG40MD_White","rhs_VG40MD_Green","rhs_VG40MD_Red","rhs_GDM40"};
			magazineWell[] = {"VOG_40mm","CBA_40mm_GP"};
			modes[] = {"Single"};
			recoil = "rhs_recoil_gp25";
			cameraDir = "OP_look";
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye","OP_eye1","OP_eye2","OP_eye3","OP_eye4","OP_eye5","OP_eye6","OP_eye7"};
			discreteDistanceInitIndex = 2;
			magazineReloadSwitchPhase = 0.36;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 107.5;
			class PointerSlot{};
		};
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_SF3P556";
			};
		};
		inertia = 0.6;
		dexterity = 1.4;
		rhs_npz = "rhs_weap_ak74m_gp25_npz";
	};
	class PB_ARM5: PB_ARM1_BASE 
	{
		author="Kartsa";
		scope="2";
		model = "\rhsafrf\addons\rhs_weapons3\zenitco\rhs_ak74m_zenit_b33.p3d";
        reloadAction = "RHS_GestureReloadAK_1hand";
		magazineReloadSwitchPhase = 0.3;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		picture = "\rhsafrf\addons\rhs_inventoryicons\data\weapons\rhs_weap_ak74mr_ca.paa";
		baseWeapon="PB_ARM5";
		displayName="AR-M5T";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
        cameraDir = "eye_look";
		handAnim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_ak_stock.rtm"};
		bg_bipod = 0; 
		modes[] = {"Single","FullAuto"};
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
        reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};
		recoil = "rhs_recoil_ak74m";
		class WeaponSlotsInfo
		{
			mass = 70;
			allowedSlots[] = {901};
			class MuzzleSlot: asdg_MuzzleSlot_556{};
			class CowsSlot: asdg_OpticRail1913_long{};
			class GripodSlot: rhs_russian_rifle_gripod_slot{};
			class PointerSlot: asdg_FrontSideRail{};
		};
		class Single: Single
		{
			reloadTime = 0.0923;
			dispersion = 0.00093;
		};
		class FullAuto: FullAuto
		{
			reloadTime = 0.0923;
			dispersion = 0.00093;
		};
		rhs_grip1_change = "PB_ARM5_grip1";
		rhs_grip2_change = "PB_ARM5_afg";
		rhs_grip3_change = "PB_ARM5_grip1";
		rhsusf_acc_anpeq15 = 1;
		rhsusf_acc_t1 = 0;
	};
	class PB_ARM5_grip1: PB_ARM5
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_grip.rtm"};
		inertia = "(0.28)";
		dexterity = 1.8388076;
		aimTransitionSpeed = 1.2871653;
	};
	class PB_ARM5_afg: PB_ARM5
	{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = {"OFP2_ManSkeleton","\rhsafrf\addons\rhs_c_weapons\anims\rhs_hand_akmr_afg.rtm"};
		inertia = "(0.28)";
		dexterity = 1.8388076;
		aimTransitionSpeed = 1.2871653;
	};
	class RAHE_BASE_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 0.067;
			dispersion = 0.000347248;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class FullAuto: Mode_FullAuto
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 0.079;
			dispersion = 0.000347248;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
		};
	};
	class PB_RAHES: RAHE_BASE_F 
	{
		author="Kartsa";
		scope="2";
		model = "\A3\Weapons_F_Exp\Rifles\SPAR_01\SPAR_01_F.p3d";
		reloadAction = "RHS_GestureReloadAR15";
		ACE_barrelTwist = 228.6;
		maxZeroing = 1600;
		ACE_barrelLength = 457.2;
		ace_railHeightAboveBore = 2.5;
		magazineReloadSwitchPhase = 0.3;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_blk_F_X_CA.paa";
		descriptionShort = "5.56x45mm NATO LMT R-20 S Rahe";
		baseWeapon="PB_RAHES";
		displayName="LMT R-20 S Rahe";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye","eye_100","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
        discretedistanceinitindex = 0;
        cameraDir = "eye_look";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa"};		
		magazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855A1_PMAG"
		};
		magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"};
		bg_bipod = 0; 
		modes[] = {"Single","FullAuto"};
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
        reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};
		recoil = "rhs_recoil_mk18145";
		class WeaponSlotsInfo
		{
			mass = 78.04;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0.0,0.4};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.35,0.45};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.2,0.8};
				iconScale = 0.3;
			};
		};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_M16_NEW_Shot_SoundSet","NIA_SAMR_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"NIA_samr_silencerShot_SoundSet","NIA_SAMR_silencerTail_SoundSet"};
			};
			reloadTime = 0.075;
			dispersion = 0.0006818;
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_M16_NEW_Shot_SoundSet","NIA_SAMR_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"NIA_samr_silencerShot_SoundSet","NIA_SAMR_silencerTail_SoundSet"};
			};
			reloadTime = 0.075;
			dispersion = 0.0006818;
		};
	};
	class PB_RAHESGL: RAHE_BASE_F 
	{
		author="Kartsa";
		scope="2";
		model = "\A3\Weapons_F_Exp\Rifles\SPAR_01\SPAR_01_GL_F.p3d";
		reloadAction = "RHS_GestureReloadAR15";
		ACE_barrelTwist = 228.6;
		maxZeroing = 1600;
		ACE_barrelLength = 457.2;
		ace_railHeightAboveBore = 2.5;
		magazineReloadSwitchPhase = 0.3;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_GL_blk_F_X_CA.paa";
		descriptionShort = "5.56x45mm NATO LMT R-20 S M203 Rahe";
		baseWeapon="PB_RAHESGL";
		displayName="LMT R-20 Rahe (GL)";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_GL_blk_F_01_co.paa"};
		magazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855A1_PMAG"
		};
		magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01_GL.rtm"};
		bg_bipod = 0; 
		modes[] = {"Single","FullAuto"};
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
        reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};
		recoil = "rhs_recoil_mk18145";
		class WeaponSlotsInfo
		{
			mass = 101.04;
			class UnderBarrelSlot{};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0.0,0.4};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.35,0.45};
				iconScale = 0.2;
			};
		};
		class EGLM: UGL_F
		{
			displayName = "EGLM40";
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM"};
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadSPARUGL";
		};
		class Single: Single
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 0.075;
			dispersion = 0.0006818;
		};
		class FullAuto: FullAuto
		{
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m4_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m4_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 0.075;
			dispersion = 0.0006818;
		};
		muzzles[] = {"this","EGLM"};
	};
	class PB_RAHE: RAHE_BASE_F 
	{
		author="Kartsa";
		scope="2";
		model = "\A3\Weapons_F_Exp\Rifles\SPAR_02\SPAR_02_F.p3d";
		reloadAction = "RHS_GestureReloadAR15";
		ACE_barrelTwist = 228.6;
		maxZeroing = 1600;
		ACE_barrelLength = 457.2;
		ace_railHeightAboveBore = 2.5;
		magazineReloadSwitchPhase = 0.3;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
        picture = "\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\UI\arifle_SPAR_02_blk_F_X_CA.paa";
		descriptionShort = "5.56x45mm NATO LMT R-20 Rahe";
		baseWeapon="PB_RAHE";
		displayName="LMT R-20 Rahe";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_02_co.paa"};		
		magazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855A1_PMAG"
		};
		magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"};
		bg_bipod = 0; 
		modes[] = {"Single","FullAuto"};
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
        reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};
		recoil = "rhs_recoil_m4";
		class WeaponSlotsInfo
		{
			mass = 85.04;
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0.0,0.4};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.35,0.45};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.2,0.8};
				iconScale = 0.3;
			};
		};
		class Single: Single
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_M16_NEW_Shot_SoundSet","NIA_SAMR_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"NIA_samr_silencerShot_SoundSet","NIA_SAMR_silencerTail_SoundSet"};
			};
			reloadTime = 0.075;
			dispersion = 0.0005818;
		};
		class FullAuto: FullAuto
		{
			class StandardSound: StandardSound
			{
				soundSetShot[] = {"NIA_M16_NEW_Shot_SoundSet","NIA_SAMR_Tail_SoundSet"};
			};
			class SilencedSound: SilencedSound
			{
				soundSetShot[] = {"NIA_samr_silencerShot_SoundSet","NIA_SAMR_silencerTail_SoundSet"};
			};
			reloadTime = 0.075;
			dispersion = 0.0005818;
		};
	};
	class PB_RAHEL: RAHE_BASE_F 
	{
		author="Kartsa";
		scope="2";
		model = "\A3\Weapons_F_Exp\Rifles\SPAR_03\SPAR_03_F.p3d";
		reloadAction = "RHS_GestureReloadSR25";
		ACE_barrelTwist = 228.6;
		maxZeroing = 1600;
		ACE_barrelLength = 457.2;
		ace_railHeightAboveBore = 2.5;
		magazineReloadSwitchPhase = 0.3;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\UI\arifle_SPAR_03_blk_F_X_CA.paa";
		descriptionShort = "7.62x51mm NATO LMT R-20 L Rahe";
		baseWeapon="PB_RAHEL";
		displayName="LMT R-20 L Rahe";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_01_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_03\Data\arifle_SPAR_03_blk_F_02_co.paa","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\arifle_SPAR_01_blk_F_01_co.paa"};
		magazines[] = {"rhsusf_20Rnd_762x51_SR25_m118_special_Mag","rhsusf_20Rnd_762x51_SR25_mk316_special_Mag","rhsusf_20Rnd_762x51_SR25_m993_Mag","rhsusf_20Rnd_762x51_SR25_m62_Mag"};
		magazineWell[] = {"CBA_762x51_AR10","CBA_762x51_AR10_L","CBA_762x51_AR10_XL"};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"};
		bg_bipod = 0; 
		modes[] = {"Single"};
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
        reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};
		recoil = "rhs_weap_scarh_recoil";
		class WeaponSlotsInfo
		{
			mass = 95.04;
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				iconPosition[] = {0.0,0.4};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] = {0.35,0.45};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] = {0.2,0.8};
				iconScale = 0.3;
			};
		};
		class Single: Single
		{
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m14_Shot_SoundSet","RHSUSF_rifle2_Tail_SoundSet","RHSUSF_m14_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 0.096;
			dispersion = 0.00038;
		};
	};
	class LMG_Base_F: Rifle_Base_F
	{
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m249_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m249_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_m4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_m4_stereoLayer_SoundSet"};
			};
			reloadTime = 0.067;
			dispersion = 0.000347248;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 350;
			aiRateOfFireDispersion = 2;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m249_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m249_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_m4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_m4_stereoLayer_SoundSet"};
			};
			reloadTime = 0.079;
			dispersion = 0.000347248;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 1;
			midRangeProbab = 0.8;
			maxRange = 5;
			maxRangeProbab = 0.1;
		};
	};
	class PB_Negev: LMG_BASE_F 
	{
		author="Kartsa";
		scope="2";
		model = "\A3\Weapons_F_Beta\Machineguns\Zafir\Zafir_F.p3d";
		reloadAction = "GestureReloadM200";
		baseWeapon="PB_Negev";
		displayName="Negev NG7 (Black)";
		picture = "\A3\Weapons_F_Beta\Machineguns\Zafir\Data\UI\gear_Zafir_X_CA.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		maxZeroing = 1400;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PB_T_Weapons\data\Negev\Zafir01_Black.paa","PB_T_Weapons\data\Negev\Zafir02_Black.paa"};
		magazines[] = {"150Rnd_762x54_Box","150Rnd_762x54_Box_Tracer"};
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F_Beta\Machineguns\Zafir\Data\Anim\zafir.rtm"};
		bg_bipod = 0; 
		modes[] = {"Single","FullAuto"};
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
        reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};
		recoil = "recoil_zafir";
		magazineReloadSwitchPhase = 0.541;
		class WeaponSlotsInfo
		{
			mass = 170;
			class CowsSlot: asdg_OpticRail1913_short{};
			class PointerSlot: asdg_FrontSideRail{};
			class MuzzleSlot: asdg_MuzzleSlot_556{};
			class GripodSlot: rhs_western_rifle_gripod_slot{};
		};
		class Single: Single
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"NIA_M60E4_NEW_Shot_SoundSet","M60E4_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"M60e4_silencerShot_SoundSet","M60e4_silencerTail_SoundSet"};
			};
			reloadTime = 0.0923;
			dispersion = 0.001518;
		};
		class FullAuto: FullAuto
		{
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"NIA_M60E4_NEW_Shot_SoundSet","M60E4_Tail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[] = {"M60e4_silencerShot_SoundSet","M60e4_silencerTail_SoundSet"};
			};
			reloadTime = 0.0923;
			dispersion = 0.001518;
		};
	};
	class PB_MPT55: RAHE_BASE_F 
	{
		author="Kartsa, Holm";
		scope="2";
		model = "\rhsusf\addons\rhsusf_weapons2\HK416\rhs_hk416d10.p3d";
		reloadAction = "RHS_GestureReloadAR15";
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_blk_F_X_CA.paa";
		baseWeapon="PB_MPT55";
		displayName="MPT-55";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400};
		discreteDistanceCameraPoint[] = {"eye","eye_200","eye_300","eye_400"};
		discreteDistanceInitIndex = 0;
        cameraDir = "eye_look";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"PB_T_Weapons\data\MPT\hk416d_TAF_co.paa","PB_T_Weapons\data\MPT\magazine_co.paa","PB_T_Weapons\data\MPT\buttstock2_TAF_co.paa"};
		magazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag"
		};
		magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4_stock.rtm"};
		bg_bipod = 0; 
		modes[] = {"Single","FullAuto"};
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
        reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};
		recoil = "rhs_recoil_mk18";
		class WeaponSlotsInfo
		{
			mass = 73;
			allowedSlots[] = {901};
			class UnderBarrelSlot: asdg_underslot{};
			class CowsSlot: asdg_OpticRail1913{};
			class PointerSlot: asdg_FrontSideRail{};
			class MuzzleSlot: asdg_MuzzleSlot_556{};
			class GripodSlot: rhs_western_rifle_gripod_slot{};
		};
		class Single: Single
		{
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 0.075;
			dispersion = 0.0006818;
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 0.075;
			dispersion = 0.0006818;
		};
		rhs_grip1_change = "PB_MPT55_grip";
		rhs_grip2_change = "PB_MPT55_grip2";
		rhs_grip3_change = "PB_MPT55_grip3";
	};
	class PB_MPT55_grip: PB_MPT55
	{
		author = "";
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_blk_F_X_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip1";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class PB_MPT55_grip2: PB_MPT55_grip
	{
		author = "Kartsa,Holm";
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_blk_F_X_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: rhs_western_rifle_gripod_slot{};
		};
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_hk416_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip2";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class PB_MPT55_grip3: PB_MPT55_grip2
	{
		author = "Kartsa,Holm";
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_blk_F_X_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: rhs_western_rifle_gripod_slot{};
		};
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip3";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class PB_MPT76: PB_MPT55
	{
		author = "Kartsa, Holm, Holm";
		model = "\rhsusf\addons\rhsusf_weapons2\HK416\rhs_hk416d145.p3d";
		picture = "PB_Main\ui\MPT\PB_MPT76_CA.paa";
		displayName = "MPT-76";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"PB_T_Weapons\data\MPT\mpt76_body_co.paa","PB_T_Weapons\data\MPT\magazine_co.paa","PB_T_Weapons\data\MPT\buttstock2_TAF_co.paa"};
		magazines[] = {"rhsusf_20Rnd_762x51_m80_Mag"};
		magazineWell[] = {"CBA_762x51_AR10","CBA_762x51_AR10_L","CBA_762x51_M14"};
		rhs_grip1_change = "PB_MPT76_grip";
		rhs_grip2_change = "PB_MPT76_grip2";
		rhs_grip3_change = "PB_MPT76_grip3";
		baseWeapon = "PB_MPT76";
		modes[] = {"Single","FullAuto"};
		class WeaponSlotsInfo
		{
			mass = 93;
			allowedSlots[] = {901};
			class UnderBarrelSlot: asdg_underslot{};
			class CowsSlot: asdg_OpticRail1913{};
			class PointerSlot: asdg_FrontSideRail{};
			class MuzzleSlot: asdg_MuzzleSlot_556{};
			class GripodSlot: rhs_western_rifle_gripod_slot{};
		};
		class Single: Single
		{
			class Single: Single
			{	
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m24_Shot_SoundSet","RHSUSF_rifle2_Tail_SoundSet","RHSUSF_m24_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_xm2010_Shot_SoundSet","RHSUSF_sd_mmg1_Tail_SoundSet","RHSUSF_sd_xm2010_stereoLayer_SoundSet"};
			};
			};
			reloadTime = 0.095;
			dispersion = 0.0005818;
		};
		class FullAuto: FullAuto
		{
			class Single: Single
		{
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m24_Shot_SoundSet","RHSUSF_rifle2_Tail_SoundSet","RHSUSF_m24_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_xm2010_Shot_SoundSet","RHSUSF_sd_mmg1_Tail_SoundSet","RHSUSF_sd_xm2010_stereoLayer_SoundSet"};
			};
		};
			reloadTime = 0.095;
			dispersion = 0.0005818;
		};
	};
	class PB_MPT76_grip: PB_MPT76
	{
		author = "";
		picture = "PB_Main\ui\MPT\PB_MPT76_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip1";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class PB_MPT76_grip2: PB_MPT76_grip
	{
		author = "Kartsa,Holm";
		picture = "PB_Main\ui\MPT\PB_MPT76_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: rhs_western_rifle_gripod_slot{};
		};
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_hk416_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip2";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class PB_MPT76_grip3: PB_MPT76_grip2
	{
		author = "Kartsa,Holm";
		picture = "PB_Main\ui\MPT\PB_MPT76_CA.paa";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class GripodSlot: rhs_western_rifle_gripod_slot{};
		};
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m16a4.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip3";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class PB_MPT55SGL: PB_MPT55 
	{
		author="Kartsa, Holm";
		scope="2";
		model = "\rhsusf\addons\rhsusf_weapons2\HK416\rhs_hk416d10m320.p3d";
		ACE_barrelTwist = 228.6;
		maxZeroing = 1600;
		ACE_barrelLength = 457.2;
		ace_railHeightAboveBore = 2.5;
		magazineReloadSwitchPhase = 0.3;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		picture = "\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\UI\arifle_SPAR_01_GL_blk_F_X_CA.paa";
		baseWeapon="PB_MPT55SGL";
		displayName="MPT-55 (M203)";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"PB_T_Weapons\data\MPT\hk416d_TAF_co.paa","PB_T_Weapons\data\MPT\magazine_co.paa","\rhsusf\addons\rhsusf_weapons\m320\data\m320_co.paa"};
		magazines[]=
		{
			"rhs_mag_30Rnd_556x45_M855A1_Stanag"
		};
		magazineWell[] = {"STANAG_556x45","STANAG_556x45_Large","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_hk416_m320.rtm"};
		bg_bipod = 0; 
		modes[] = {"Single","FullAuto"};
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.562341,1,10};
        reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};
		recoil = "rhs_recoil_mk18145";
		class WeaponSlotsInfo
		{
			mass = 81;
			class UnderBarrelSlot{};
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] = {0.0,0.4};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] = {0.45,0.28};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_frontsiderail
			{
				iconPosition[] = {0.35,0.45};
				iconScale = 0.2;
			};
		};
		class EGLM: UGL_F
		{
			displayName = "M203";
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			magazines[]= {"1Rnd_HE_Grenade_shell"};
			discreteDistance[] = {50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadSPARUGL";
		};
		class Single: Single
		{
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 0.075;
			dispersion = 0.0006818;
		};
		class FullAuto: FullAuto
		{
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 0.075;
			dispersion = 0.0006818;
		};
		muzzles[] = {"this","EGLM"};
	};
	class PB_SCARL: Rifle_Base_F
	{
		author = "Aegis Team";
		scope = 2;
		displayName = "SCAR-L";
		picture = "\PB_Main\ui\SCAR\icon_arifle_scar_L.paa";
		baseWeapon = PB_SCARL;
		model = "\PB_M_Weapons\SCAR\SCAR_L_F.p3d";
		descriptionShort = "SCAR-L 5.56x45 NATO";
		hiddenSelections[] =
		{
			Camo1,
			Camo2
		};
		hiddenSelectionsTextures[] =
		{
			"\PB_T_Weapons\data\SCAR\SCAR_L_01_CO.paa",
			"\PB_T_Weapons\data\SCAR\SCAR_L_02_CO.paa"
		};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01.rtm"
		};
		reloadAction = "RHS_GestureReloadAR15";
		magazineReloadSwitchPhase = 0.47999999;
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		magazineWell[] = {"CBA_556x45_STANAG"};
        reloadMagazineSound[] = {"A3\Sounds_F\weapons\Khaybar\reload_khaibar",1,1,10};
		htMin = 8;
		htMax = 920;
		inertia = 0.5;
		aimTransitionSpeed = 1.1;
		dexterity = 1.4;
		initSpeed = 870;
		recoil = recoil_spar;
		maxZeroing = 800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] =
				{
					0.12,   // X
					0.43    // y
				};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] =
				{
					0.5,    // X
					0.36    // y
				};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] =
				{
					0.33,   // X
					0.4     // y
				};
				iconScale = 0.2;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				iconPosition[] =
				{
					0.3,    // X
					0.8     // y
				};
				iconScale = 0.3;
			};
			mass = 73;
		};
        modes[] =
		{
			Single,
			FullAuto,
			single_medium_optics1,
			single_medium_optics2,
			fullauto_medium
		};
		class Single: Mode_SemiAuto
		{	
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = "60/650";
			dispersion = 0.00073;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = "60/650";
			dispersion = 0.00073;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = "60/650";
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = MEDIUM_OPTIC;
			showToPlayer = false;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType = FAR_OPTIC;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
	  	};
		ACE_barrelTwist = 304.8;
		ACE_barrelLength = 406.4;
		ACE_railHeightAboveBore = 4.7;
	};
	class PB_SCARL_GL: PB_SCARL
	{
		scope = 2;
		baseweapon = "PB_SCARL_GL";
		displayname = "SCAR-L (GL)";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		model = "\PB_M_Weapons\SCAR\SCAR_L_GL_F.p3d";
		hiddenSelections[] =
		{
			Camo1,
			Camo2,
			Camo3
		};
		hiddenSelectionsTextures[] =
		{
			"\PB_T_Weapons\data\SCAR\SCAR_L_01_CO.paa",
			"\PB_T_Weapons\data\SCAR\SCAR_L_02_CO.paa",
			"\PB_T_Weapons\data\G36\SA80_F_GL_snd_CO.paa"
		};
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Exp\Rifles\SPAR_01\Data\Anim\SPAR_01_GL.rtm"
		};
		inertia = 0.6;
		dexterity = 1.3;
		aimTransitionSpeed = 0.7;
		initSpeed = 800;
	  	class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[] =
				{
					0.12,   // X
					0.43    // y
				};
				iconScale = 0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[] =
				{
					0.5,    // X
					0.36    // y
				};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[] =
				{
					0.33,   // X
					0.4     // y
				};
				iconScale = 0.2;
			};
			class UnderBarrelSlot{};
	    	mass = 82;
	  	};
		class Single: Single
		{
			dispersion = 0.00102;
		};
		class FullAuto: FullAuto
		{
			dispersion = 0.00102;
		};
		muzzles[] =
		{
			"this",
			"EGLM"
		};
		class EGLM: UGL_F
		{
			displayName = "EGLM40";
			useModelOptics = false;
			useExternalOptic = false;
			cameraDir = OP_look;
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM"};
			discreteDistance[] =
			{
				50,
				75,
				100,
				150,
				200,
				250,
				300,
				350,
				400
			};
			discreteDistanceCameraPoint[] =
			{
				OP_eye_50,
				OP_eye_75,
				OP_eye_100,
				OP_eye_150,
				OP_eye_200,
				OP_eye_250,
				OP_eye_300,
				OP_eye_350,
				OP_eye_400
			};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadSPARUGL";
			reloadMagazineSound[]= { "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_UGL_reload", 0.79432821, 1, 10 };
			magazineReloadSwitchPhase = 0.4;
		};
        ACE_barrelLength = 330.2;
	};
	class PB_SCARL_GRIP: PB_SCARL
	{
		scope = 2;
		baseweapon = "PB_SCARL_GRIP";
		displayname = "SCAR-L (Grip)";
		model = "\PB_M_Weapons\SCAR\SCAR_L_grip_F.p3d";
		handAnim[] =
		{
			OFP2_ManSkeleton,
			"\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"
		};
		dexterity = 1.7;
		aimTransitionSpeed = 1;
	  	class WeaponSlotsInfo: WeaponSlotsInfo
		{
	    	mass = 110;
	  	};
	};
	class PB_MINIMI_762: rhs_weap_m249_pip
	{
		author="Kartsa";
		scope="2";
		baseWeapon="PB_MINIMI_762";
		displayName="FN Minimi 7.62";
		magazines[]=
		{
			"PB_200Rnd_762x51_M80"
		};
		magazineWell[]=
		{
			"PB_MINIMI_762_MW"
		};
		class Single: Mode_Semiauto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m249_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m249_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_m4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_m4_stereoLayer_SoundSet"};
			};
			reloadTime = 60/700;
			dispersion = 0.00113;
		};
		class FullAuto: Mode_FullAuto
		{	
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m249_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m249_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_m4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_m4_stereoLayer_SoundSet"};
			};
			reloadTime = 60/700;
			dispersion = 0.00113;
		};
	};
	class PB_FIN_TRG22: rhs_weap_m24sws
	{
		baseWeapon = "PB_FIN_TRG22";
		scope = 2;
		scopearsenal = 2;
		displayname = "TRG-22";
		magazines[] = {"rhs_5Rnd_338lapua_t5000"};
		magazineWell[] = {"CBA_338LM_T5000"};
	};
	class PB_MSBS_Grot : Rifle_Base_F 
	{
		scope = 2;
		author = "Kartsa, Toadie2k";
		displayname = "MSBS Grot";
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 292.1;
		aidispersioncoefx = 4;
		aidispersioncoefy = 6;
		picture = "\PB_Main\ui\Grot\gear_rifle-black_ca.paa";
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		magazineWell[] = {"CBA_556x45_STANAG"};
		model = "PB_M_Weapons\Grot\ACR.p3d";
		reloadAction = "PB_HLC_GestureReloadAK";
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		recoil = "recoil_trg20";
		discretedistance[] = { 100 };
    	initspeed = -0.86667;
		discretedistanceinitindex = 0;deployedPivot = "deploypivot";
   		hasBipod = false; 
		bg_bipod = 0;
		opticszoominit = 0.75;
		opticszoommax = 1.1;
		opticszoommin = 0.25;
		inertia = 0.36;
		hiddenSelections[] = { "Map1", "Map2","Receiver" };
		hiddenSelectionsTextures[] = 
		{ 
			"PB_T_Weapons\data\Grot\map1-black_co.paa", 
			"PB_T_Weapons\data\Grot\map2-556black_co.paa", 
			"PB_T_Weapons\data\Grot\map3-black_co.paa"
		};
		magazineReloadSwitchPhase = 0.5;
        class WeaponSlotsInfo {
            mass = 82;
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
		descriptionShort = "Polish 5.56 MSBS GRot";
		handAnim[] = { "OFP2_ManSkeleton", "PB_A_Weapons\Grot\handpose_STD" };
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
		modes[] = { "Single", "FullAuto" };
		class Single : Mode_SemiAuto 
		{
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 60/700;
			dispersion = 0.000347248;

		};
		class FullAuto : Mode_FullAuto 
		{
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 60/700;
			dispersion = 0.000347248;
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",0.562341,1,10};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.551189,1,5};
        reloadMagazineSound[] = { "\PB_A_Weapons\RK62M2\snd\ak74m_reload", 0.8, 1, 20 };
        rhs_grip1_change = "PB_MSBS_Grot_grip";
        rhs_grip2_change = "PB_MSBS_Grot_grip2";
        rhs_grip3_change = "PB_MSBS_Grot_grip3";
        baseWeapon = "PB_MSBS_Grot";
	};
    class PB_MSBS_Grot_grip : PB_MSBS_Grot
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\PB_A_Weapons\Grot\handpose_RU556_VFG.rtm" };
        inertia = (0.37 + 0.066);
    };
    class PB_MSBS_Grot_grip2 : PB_MSBS_Grot
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\PB_A_Weapons\Grot\handpose_RU556_AFG.rtm" };
        inertia = (0.37 + 0.066);
    };
    class PB_MSBS_Grot_grip3 : PB_MSBS_Grot
    {
        scopeArsenal = 0;
        author = "Toadie";
        handanim[] = { "OFP2_ManSkeleton", "\PB_A_Weapons\Grot\handpose_RU556_VFG.rtm" };
        inertia = (0.37 + 0.066);
    };
	class PB_K2: Rifle_Base_F
	{
		scope=2;
		author="withered_maple";
		displayName="Daewoo K2";
		descriptionShort="5.56NATO Rifle made in South korea";
		model="\BRM_K2\Models\BRM_k2.p3d";
		picture="\BRM_K2\ui\BRM_K2ui.paa";
		hiddenSelections[]=
		{
		    "camo1",
			"camo2",
			"camo3",
			"camoB"
		};
		hiddenSelectionsTextures[]=
		{
			"brm_k2\data\brm_bbk2_co.paa",
			"brm_k2\data\brm_lowerk2_co.paa",
			"brm_k2\data\brm_upperk2_co.paa",
			"brm_k2\data\brm_stockk2_co.paa"
		};
		handAnim[] = {"OFP2_ManSkeleton","\BRM_K2\Anims\K2_handpos.rtm"};
		reloadAction="GestureReloadSPAR_01";
		reloadMagazineSound[]=
		{
		"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload",1,1,10
		};
		magazineReloadSwitchPhase = 0.4;
		weaponInfoType = "RscWeaponZeroing";
	    discreteDistance[] = {50,150,250};
	    discreteDistanceInitIndex = 1;
		maxRecoilSway=0.0125;
		swayDecaySpeed=1.25;
		recoil="recoil_spar";
		inertia = 0.5;
		initSpeed = -1;
		dexterity = 1.8;
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
        distanceZoomMin = 300;
		distanceZoomMax = 300;
		deployedpivot = "deploypivot";
		hasBipod = false;
		selectionFireAnim = "muzzleFlash";
		drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_dry",0.562341,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode",0.177828,1,5};
		zeroingSound[] = {"A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_metal",0.316228,1,5};
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_green",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow"
		};
		magazineWell[]=
		{
			"STANAG_556x45","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"
		};
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName="Nabojniceend";
				directionName="Nabojnicestart";
				effectName="RifleAssaultCloud";
		 	};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot: SlotInfo
			{
				iconPosition[]={0.44999999,0.28};
				iconScale=0.2;
				iconPicture="\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint="Center";
				linkProxy="\A3\data_f\proxies\weapon_slots\TOP";
				displayName="$STR_A3_CowsSlot0";
				class compatibleItems
				{
					PB_K2CQS=1;
					PB_K2CS=1;
					PB_K2ANPVS4=1;
				};
			};
			mass=72;
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",
			0.44668359,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",
			0.44668359,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",
			0.44668359,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",
			0.44668359,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_01",
			0.56234133,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_02",
			0.56234133,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_03",
			0.56234133,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_04",
			0.56234133,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_01",
			0.56234133,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_02",
			0.56234133,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_03",
			0.56234133,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",
			0.56234133,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.086999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 60/800; /// means some 800 rounds per minute
			dispersion = 0.00087;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
            aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 1;
			aiDispersionCoefY = 1.7;
			aiDispersionCoefX = 1.4;
			minRange = 2; minRangeProbab = 0.5; 	
			midRange = 200; midRangeProbab = 0.7; 	
			maxRange = 400; maxRangeProbab = 0.3; 	
		};

		class FullAuto: Mode_FullAuto 
		{
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 60/800;
			dispersion = 0.00087;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			minRange = 0; minRangeProbab = 0.9;
			midRange = 15; midRangeProbab = 0.7;
			maxRange = 30; maxRangeProbab = 0.1;
			aiRateOfFire = 0.000001;
		};

		class fullauto_medium: FullAuto /// Pew, pew, pew only for AI
		{
			showToPlayer = 0;
			burst = 3;

			minRange = 2; minRangeProbab = 0.5;
			midRange = 75; midRangeProbab = 0.7;
			maxRange = 150; maxRangeProbab = 0.05;

			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single /// Pew for AI with collimator sights
		{
			requiredOpticType = 1;
			showToPlayer = 0;

			minRange = 5; minRangeProbab = 0.2;
			midRange = 350; midRangeProbab = 0.7;
			maxRange = 525; maxRangeProbab = 0.2;

			aiRateOfFire = 6;
			aiRateOfFireDistance = 525;
		};
		class single_far_optics2: single_medium_optics1	/// Pew for AI with better sights
		{
			requiredOpticType = 2;
			showToPlayer = 0;

			minRange = 100; minRangeProbab = 0.1;
			midRange = 500; midRangeProbab = 0.6;
			maxRange = 750; maxRangeProbab = 0.05;

			aiRateOfFire = 8;
			aiRateOfFireDistance = 750;
		};
	};
	class PB_K2GL: PB_K2
	{
		scope=2;
		author="withered_maple";
		displayName="Daewoo K2GL";
		descriptionShort="5.56NATO Rifle made in South korea with M203 grenade launcher";
		model="\BRM_K2\Models\BRM_k2GL.p3d";
		picture="\BRM_K2\ui\BRM_K2ui.paa";
		handAnim[] = {"OFP2_ManSkeleton","\BRM_K2\Anims\K2GL_handpos.rtm"};
		muzzles[] = {this, EGLM};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camoB",
			"camoC"
		};
		hiddenSelectionsTextures[]=
		{
			"brm_k2\data\brm_bbk2_co.paa",
			"brm_k2\data\brm_lowerk2_co.paa",
			"brm_k2\data\brm_upperk2_co.paa",
			"brm_k2\data\brm_stockk2_co.paa",
			"brm_k2\data\brm_M203_co.paa"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 82; 
		};
		class EGLM: UGL_F
		{
			displayName="M203 grenade launcher";
			descriptionShort = "M203";
			useModelOptics= false;
			useExternalOptic= false;
			optics = 1;
			cameraDir="OP_look";
			discreteDistance[]={50,100,150,200,250,300,350};
			changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.316228,1,5};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye1",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4",
				"OP_eye5",
				"OP_eye6"
			};
			discreteDistanceInitIndex=1;
			reloadAction = "GestureReloadMk20UGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\MK20_UGL_reload",0.794328,1,10};
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM"};
			
			aiDispersionCoefY=6.0; /// AI should have some degree of greater dispersion for initial shoots
			aiDispersionCoefX=4.0; /// AI should have some degree of greater dispersion for initial shoots
			drySound[]={"A3\sounds_f\weapons\Other\dry_1", db-5, 1, 10}; /// custom made sounds
		};
	};
	class PB_K2C1: Rifle_Base_F
	{
		    scope=2;
		    author="withered_maple";
		    displayName="Daewoo K2C1";
		    descriptionShort="5.56NATO Rifle made in South korea upgraded to new standard";
		    model="\BRM_K2\Models\BRM_k2c1.p3d";
			picture="\BRM_K2\ui\BRM_K2C1ui.paa";
		    hiddenSelections[]=
		    {
			    "camo",
				"camo2",
				"camo3",
				"camo4",
				"camoB",
				"camoC"
		    };
		    hiddenSelectionsTextures[]=
		    {
			    "brm_k2\data\brm_k2c1l_co.paa",
				"brm_k2\data\brm_k2c1u_co.paa",
				"brm_k2\data\brm_bbk2_co.paa",
				"brm_k2\data\brm_stockk2_co.paa",
				"brm_k2\data\brm_k2c1s_co.paa",
				"brm_k2\data\brm_k2c1h_co.paa"
		    };
		    handAnim[] = {"OFP2_ManSkeleton","\BRM_K2\Anims\K2C1_handpos.rtm"};
			reloadAction="GestureReloadSPAR_01";
			reloadMagazineSound[]=
		    {
			"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_reload",1,1,10
		    };
			magazineReloadSwitchPhase = 0.4;
			weaponInfoType = "RscWeaponZeroing";
	        discreteDistance[] = {50,150,250};
	        discreteDistanceInitIndex = 1;
		    maxRecoilSway=0.0125;
		    swayDecaySpeed=1.25;
			recoil="recoil_spar";
			inertia = 0.5;
			initSpeed = -1;
			dexterity = 1.8;
			opticsZoomMin=0.375;
		    opticsZoomMax=1.1;
		    opticsZoomInit=0.75;
            distanceZoomMin = 300;
		    distanceZoomMax = 300;
			deployedpivot = "deploypivot";
			hasBipod = false;
			selectionFireAnim = "muzzleFlash";
			drySound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_dry",0.562341,1,10};
		    changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\SPAR01\SPAR01_firemode",0.177828,1,5};
			zeroingSound[] = {"A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_metal",0.316228,1,5};
		    magazines[]=
		    {
			    "30Rnd_556x45_Stanag",
			    "30Rnd_556x45_Stanag_green",
			    "30Rnd_556x45_Stanag_red",
			    "30Rnd_556x45_Stanag_Tracer_Red",
			    "30Rnd_556x45_Stanag_Tracer_Green",
			    "30Rnd_556x45_Stanag_Tracer_Yellow"
		    };
		    magazineWell[]=
		    {
			    "STANAG_556x45","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"
		    };
			class GunParticles: GunParticles
		    {
			    class SecondEffect
			    {
				    positionName="Nabojniceend";
				    directionName="Nabojnicestart";
				    effectName="RifleAssaultCloud";
		 	    };
		    };
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				iconPosition[]={0,0.40000001};
				iconScale=0.2;
			};
			class CowsSlot: asdg_OpticRail1913
			{
				iconPosition[]={0.44999999,0.28};
                iconScale=0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
			mass=73;
		};
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",
			0.44668359,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",
			0.44668359,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",
			0.44668359,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",
			0.44668359,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_01",
			0.56234133,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_02",
			0.56234133,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_03",
			0.56234133,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Dirt_04",
			0.56234133,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_01",
			0.56234133,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_02",
			0.56234133,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_03",
			0.56234133,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\Shellcase_762_Grass_04",
			0.56234133,
			1,
			15
		};
		soundBullet[]=
		{
			"bullet1",
			0.082999997,
			"bullet2",
			0.082999997,
			"bullet3",
			0.082999997,
			"bullet4",
			0.082999997,
			"bullet5",
			0.086999997,
			"bullet6",
			0.082999997,
			"bullet7",
			0.082999997,
			"bullet8",
			0.082999997,
			"bullet9",
			0.082999997,
			"bullet10",
			0.082999997,
			"bullet11",
			0.082999997,
			"bullet12",
			0.082999997
		};
		modes[] = {"Single", "FullAuto", "fullauto_medium", "single_medium_optics1", "single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 60/800; /// means some 800 rounds per minute
			dispersion = 0.00087;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
            aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 1;
			aiDispersionCoefY = 1.7;
			aiDispersionCoefX = 1.4;
			minRange = 2; minRangeProbab = 0.5; 	
			midRange = 200; midRangeProbab = 0.7; 	
			maxRange = 400; maxRangeProbab = 0.3; 	
		};
		class FullAuto: Mode_FullAuto 
		{
			sounds[] = {"Standardsound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSUSF_m16_Shot_SoundSet","RHSUSF_rifle_small_Tail_SoundSet","RHSUSF_m16_stereoLayer_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSUSF_sd_M4_Shot_SoundSet","RHSUSF_sd_Rifle1_Tail_SoundSet","RHSUSF_sd_M4_stereoLayer_SoundSet"};
			};
			reloadTime = 60/800;
			dispersion = 0.00087;
			recoil = "recoil_single_primary_3outof10";
			recoilProne = "recoil_single_primary_prone_3outof10";
			minRange = 0; minRangeProbab = 0.9;
			midRange = 15; midRangeProbab = 0.7;
			maxRange = 30; maxRangeProbab = 0.1;
			aiRateOfFire = 0.000001;
		};
		class fullauto_medium: FullAuto /// Pew, pew, pew only for AI
		{
			showToPlayer = 0;
			burst = 3;

			minRange = 2; minRangeProbab = 0.5;
			midRange = 75; midRangeProbab = 0.7;
			maxRange = 150; maxRangeProbab = 0.05;

			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single /// Pew for AI with collimator sights
		{
			requiredOpticType = 1;
			showToPlayer = 0;

			minRange = 5; minRangeProbab = 0.2;
			midRange = 350; midRangeProbab = 0.7;
			maxRange = 525; maxRangeProbab = 0.2;

			aiRateOfFire = 6;
			aiRateOfFireDistance = 525;
		};
		class single_far_optics2: single_medium_optics1	/// Pew for AI with better sights
		{
			requiredOpticType = 2;
			showToPlayer = 0;

			minRange = 100; minRangeProbab = 0.1;
			midRange = 500; midRangeProbab = 0.6;
			maxRange = 750; maxRangeProbab = 0.05;

			aiRateOfFire = 8;
			aiRateOfFireDistance = 750;
		};
	};
	class PB_K2C1GL: PB_K2C1
	{
	        scope=2;
		    author="withered_maple";
		    displayName="Daewoo K2C1-M203";
		    descriptionShort="5.56NATO Rifle made in South korea upgraded to new standard";
		    model="\BRM_K2\Models\BRM_k2c1GL.p3d";
			picture="\BRM_K2\ui\BRM_K2C1ui.paa";
			muzzles[] = {this, EGLM};
		    hiddenSelections[]=
		    {
			    "camo",
				"camo2",
				"camo3",
				"camo4",
				"camoB",
				"camoC",
				"camoD"
		    };
		    hiddenSelectionsTextures[]=
		    {
			    "brm_k2\data\brm_k2c1l_co.paa",
				"brm_k2\data\brm_k2c1u_co.paa",
				"brm_k2\data\brm_bbk2_co.paa",
				"brm_k2\data\brm_stockk2_co.paa",
				"brm_k2\data\brm_k2c1s_co.paa",
				"brm_k2\data\brm_k2c1h_co.paa",
				"brm_k2\data\brm_m203p_co.paa"
		    };
		    handAnim[] = {"OFP2_ManSkeleton","\BRM_K2\Anims\K2C1GL_handpos.rtm"};
		class WeaponSlotsInfo: WeaponSlotsInfo
	    {
		    mass = 83; 
	    };
		class EGLM: UGL_F
		{
			displayName="M203 grenade launcher";
			descriptionShort = "M203";
			useModelOptics= false;
			useExternalOptic= false;
			optics = 1;
			cameraDir="OP_look";
			discreteDistance[]={50,100,200,300,400};
			changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.316228,1,5};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye1",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=1;
			reloadAction = "GestureReloadMk20UGL";
            reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\MK20_UGL_reload",0.794328,1,10};
			magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM"};
			aiDispersionCoefY=6.0; /// AI should have some degree of greater dispersion for initial shoots
		    aiDispersionCoefX=4.0; /// AI should have some degree of greater dispersion for initial shoots
		    drySound[]={"A3\sounds_f\weapons\Other\dry_1", db-5, 1, 10}; /// custom made sounds
		};
	};
	class PB_G3 : Rifle_Base_F 
	{
        author = "Krycek, Pete, Toadie";
		scope = 2;
		baseweapon = "PB_G3";
        deployedpivot = "deploypivot";
        hasBipod = 0;
        AB_barrelTwist = 12;
        AB_barrelLength = 17.7;
        ACE_barrelTwist = 304.8;
        ACE_barrelLength = 449.58;
        picture = "\PB_Main\ui\g3\gear_g3a3_x_ca";
        agm_bipod = 0;
        cse_bipod = 0;
        bg_bipod = 0;
        displayName = "G3A3";
        reloadAction = "PB_HLC_GestureReloadG3SG1";
        magazines[] = {"rhsusf_20Rnd_762x51_m80_Mag","rhsusf_20Rnd_762x51_m118_special_Mag","rhsusf_20Rnd_762x51_m993_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
		magazineWell[] = {"M14_762x51","CBA_762x51_M14","CBA_762x51_M14_L","CBA_762x51_M14_XL"};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",0.562341,1,10};
		changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.551189,1,5};
        reloadmagazinesound[] = { "\PB_A_Weapons\g3\snd\g3sg1_reload", 1.0, 1, 25 };
        handAnim[] = { "OFP2_ManSkeleton", "PB_A_Weapons\g3\handgesture_G3_STD_thin.rtm" };
        model = "\PB_M_Weapons\g3\g3a3_railed.p3d";
        hiddenSelections[] = { "Main", "Reciever", "Rec2", "Grip", "rail" };
        hiddenSelectionsTextures[] = { "PB_T_Weapons\data\g3\g3_co.paa", "PB_T_Weapons\data\g3\g3sg2_co.paa", "PB_T_Weapons\data\g3\recgreen_co.paa", "PB_T_Weapons\data\g3\synthgreen_co.paa", "PB_T_Weapons\data\g3\rail_co.paa" };
        dexterity = 1.8;
        recoil = "recoil_mk20";
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
		modes[] = {"Single", "FullAuto"};
        soundBullet[] = { "bullet1", 0.083, "bullet2", 0.083, "bullet3", 0.083, "bullet4", 0.083, "bullet5", 0.083, "bullet6", 0.083, "bullet7", 0.083, "bullet8", 0.083, "bullet9", 0.083, "bullet10", 0.083, "bullet11", 0.083, "bullet12", 0.083 };
		class WeaponSlotsInfo : WeaponSlotsInfo 
		{
            mass = 96;
            class CowsSlot : asdg_OpticRail1913 
			{
                iconPosition[] = { 0.5, 0.35 };
                iconScale = 0.0;
            };
            class PointerSlot 
			{
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.0;
            }; 
			class UnderbarrelSlot 
			{
                iconPosition[] = { 0.2, 0.45 };
                iconScale = 0.0;
            };
            class MuzzleSlot : asdg_MuzzleSlot_762 
			{
                iconPosition[] = { 0.0, 0.45 };
                iconScale = 0.0;
            };
        };
		class FullAuto : Mode_Fullauto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSGREF_M76_Shot_SoundSet","RHSGREF_Rifle2_Tail_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSGREF_sd_M76_Shot_SoundSet","RHSGREF_sd_mmg1_Tail_SoundSet"};
			};
            dispersion = 0.000436332;
			reloadtime = "60/600";
        };
        class Single : Mode_Semiauto
		{
            
			sounds[] = {"StandardSound","SilencedSound"};
			class StandardSound
			{
				soundSetShot[] = {"RHSGREF_M76_Shot_SoundSet","RHSGREF_Rifle2_Tail_SoundSet"};
			};
			class SilencedSound
			{
				soundSetShot[] = {"RHSGREF_sd_M76_Shot_SoundSet","RHSGREF_sd_mmg1_Tail_SoundSet"};
			};
            dispersion = 0.000436332;
			reloadtime = "60/600";
        };
        inertia = 0.44;
    };
	class PB_TAR21_Black: arifle_TRG21_F
	{
		author = "CapryCorn";
		baseWeapon = "PB_TAR21_Black";
		scope = 2;
		displayName = "TAR-21 (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_T_Weapons\data\TAR-21\tar21_base_co.paa"};
	};
	class PB_GTAR21_EGLM_Black: arifle_TRG21_GL_F
	{
		author = "CapryCorn";
		baseWeapon = "GTAR21_EGLM_Black";
		scope = 2;
		displayName = "GTAR-21 EGLM (Black)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\PB_T_Weapons\data\TAR-21\tar21_base_co.paa"};
	};
	class PB_CTAR21_Black: arifle_TRG20_F
	{
		author = "CapryCorn";
		baseWeapon = "CTAR21_Black";
		scope = 2;
		displayName = "CTAR-21 (Black)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_T_Weapons\data\TAR-21\tar21_base_co.paa"};
	};
	class PB_RPG32_Black: launch_RPG32_F
	{
		author = "CapryCorn";
		baseweapon = "PB_RPG32_Black";
		displayName = "RPG-32 (Black)";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"PB_T_Weapons\data\RPG-32\Black_RPG_32_body_CO.paa","PB_T_Weapons\data\RPG-32\Olive_RPG_32_optics_CO.paa"};
	};
	class PB_RPG32_Olive: launch_RPG32_F
	{
		author = "CapryCorn";
		baseweapon = "PB_RPG32_Olive";
		displayName = "RPG-32 (Olive)";
		hiddenSelections[] = {"Camo_1","Camo_2"};
		hiddenSelectionsTextures[] = {"PB_T_Weapons\data\RPG-32\Olive_RPG_32_body_CO.paa","PB_T_Weapons\data\RPG-32\Olive_RPG_32_optics_CO.paa"};
	};
};
 