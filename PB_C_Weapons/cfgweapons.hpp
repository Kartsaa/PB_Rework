
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
class rhs_western_rifle_gripod_slot;
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
		hiddenSelectionsTextures[] = {"PB_T_Weapons\data\c9\C9A2_CO.paa","hlc_wp_saw\tex\toadie_m249\assemblycover_co.paa","hlc_wp_saw\tex\toadie_m249\barrel_co.paa","PB_T_Weapons\data\c9\C9A2_misc_co.paa","PB_T_Weapons\data\c9\C9A2_fore_co.paa","PB_T_Weapons\data\c9\C9A2_stock_co.paa","hlc_wp_saw\tex\toadie_m249\rearsight_co.paa","PB_T_Weapons\data\c9\C9A2_pouch_co.paa","PB_T_Weapons\data\c9\C9A2_vert.paa"};
		magazines[] = {"rhsusf_200Rnd_556x45_soft_pouch"};
		magazineWell[] = {"CBA_556x45_MINIMI"};
		scope="2";
		recoil = "rhs_recoil_m249";
        reloadaction = "PB_HLC_GestureReloadM249";
		drysound[] = {"\rhsusf\addons\rhsusf_weapons2\M249\snd\empty_machineguns",1,1,10};
        reloadmagazinesound[] = { "\PB_A_Weapons\C9\snd\saw_reload", 0.7, 1, 20 };
		class WeaponSlotsInfo
		{
			mass = 142;
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
        drysound[] = {"\hlc_wp_ar15\snd\ar15_trigger", 1, 1, 10};
		reloadMagazineSound[] = {"\hlc_wp_M16A2\snd\NewSequences\ar15_reload_empty.ogg",0.85,1,15};
        changeFiremodeSound[] = { "\hlc_wp_ar15\snd\ar15_selector", 1, 1, 8 };
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
			mass = 103;
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
			mass = 103;
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
			mass = 78.86;
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
			mass = 110;
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
};
 