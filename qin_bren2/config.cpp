////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Thu Mar 07 09:56:03 2024 : 'file' last modified on Wed Mar 06 22:29:09 2019
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(5 Enums)
enum {
	stabilizedinaxesnone = 0,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesxyz = 4
};

class CfgPatches
{
	class PB_QIN_CZ_BREN2
	{
		units[] = {};
		weapons[] = 
		{
			"PB_QIN_CZ_BREN2_556_14","PB_QIN_CZ_BREN2_556_14_GL","PB_QIN_CZ_BREN2_556_11","PB_QIN_CZ_BREN2_556_11_GL","PB_QIN_CZ_BREN2_556_8",
			"PB_QIN_CZ_BREN2_762_14","PB_QIN_CZ_BREN2_762_14_GL","PB_QIN_CZ_BREN2_762_8","PB_QIN_CZ_BREN2_556_14_grip","PB_QIN_CZ_BREN2_556_14_grip2",
			"PB_QIN_CZ_BREN2_556_14_grip3","PB_QIN_CZ_BREN2_556_11_grip","PB_QIN_CZ_BREN2_556_11_grip2","PB_QIN_CZ_BREN2_556_11_grip3","PB_QIN_CZ_BREN2_556_8_grip",
			"PB_QIN_CZ_BREN2_556_8_grip2","PB_QIN_CZ_BREN2_556_8_grip3","PB_QIN_CZ_BREN2_762_14_grip","PB_QIN_CZ_BREN2_762_14_grip2","PB_QIN_CZ_BREN2_762_14_grip3",
			"PB_QIN_CZ_BREN2_762_8_grip","PB_QIN_CZ_BREN2_762_8_grip2","PB_QIN_CZ_BREN2_762_8_grip3"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","cba_jr","A3_Data_F","A3_Data_F_Mark","A3_Weapons_F_Acc"};
		author = "Qinetix";
		magazines[] = {"PB_qin_30Rnd_556x45_Stanag","PB_qin_30Rnd_556x45_Stanag_Tracer_Red"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class asdg_FrontSideRail;
class asdg_OpticRail1913;
class asdg_UnderSlot;
class asdg_MuzzleSlot_556;
class asdg_MuzzleSlot_762;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class rhs_western_rifle_gripod_slot;
class bren2_gripod_slot: rhs_western_rifle_gripod_slot
{
	linkProxy = "qin_bren2\proxies\rhs_grip_proxy";
};
class bren2_nogripod_slot: bren2_gripod_slot
{
	class compatibleItems
	{
		rhsusf_acc_grip1 = 0;
		rhsusf_acc_grip2 = 0;
		rhsusf_acc_grip2_tan = 0;
		rhsusf_acc_grip3 = 0;
		rhsusf_acc_grip3_tan = 0;
	};
};
class cfgRecoils
{
	recoil_single_Test_rifle_01[] = {0,0,0,0.03,"36.943*((0.001))*(0.3)","3.587*((0.004))*(3)",0.03,"31.817*((0.001))*(0.5)","1.251*((0.004))*(3.4)",0.03,"19.755*((0.001))*(0.7)","0.764*((0.004))*(3.8)",0.06,"7.388*((0.001))*(0.9)","0.285*((0.004))*(4.2)",0.06,"-2.402*((0.001))*(0.3)","-0.096*((0.004))*(7)",0.06,"-3.53*((0.001))*(0.5)","-0.141*((0.004))*(5)",0.06,"-3.677*((0.001))*(0.5)","-0.147*((0.004))*(3)",0.06,"-3.138*((0.001))*(0.3)","-0.125*((0.004))*(1)",0.06,0,0};
	recoil_single_prone_Test_rifle_01[] = {0,0,0,0.03,"36.943*((0.001))*(0.3)","3.587*((0.004))*(0.7)",0.03,"31.817*((0.001))*(0.5)","1.251*((0.004))*(1.1)",0.03,"19.755*((0.001))*(0.7)","0.764*((0.004))*(1.5)",0.06,"7.388*((0.001))*(0.9)","0.285*((0.004))*(1.9)",0.06,"-2.402*((0.001))*(0.3)","-0.096*((0.004))*(2)",0.06,"-3.53*((0.001))*(0.5)","-0.141*((0.004))*(1)",0.06,"-3.677*((0.001))*(0.5)","-0.147*((0.004))*(0.5)",0.06,"-3.138*((0.001))*(0.3)","-0.125*((0.004))*(0.3)",0.06,0,0};
	recoil_auto_Test_rifle_01[] = {0,0,0,0.06,"36.943*((0.001))*(1.2)","3.587*((0.004))*(1.7)",0.06,"31.817*((0.001))*(1.5)","1.251*((0.004))*(2.1)",0.06,"19.755*((0.001))*(1.7)","0.764*((0.004))*(2.4)",0.06,"7.388*((0.001))*(1.9)","0.285*((0.004))*(2.8)",0.03,"-2.402*((0.001))*(0.3)","-0.096*((0.004))*(7)",0.03,"-3.53*((0.001))*(0.5)","-0.141*((0.004))*(5)",0.03,"-3.677*((0.001))*(0.5)","-0.147*((0.004))*(3)",0.06,0,0};
	recoil_auto_prone_Test_rifle_01[] = {0,0,0,0.06,"36.943*((0.001))*(1.2)","3.587*((0.004))*(0.3)",0.06,"31.817*((0.001))*(1.5)","1.251*((0.004))*(0.7)",0.06,"19.755*((0.001))*(1.7)","0.764*((0.004))*(1.1)",0.06,"7.388*((0.001))*(1.9)","0.285*((0.004))*(1.5)",0.03,"-2.402*((0.001))*(0.3)","-0.096*((0.004))*(4)",0.03,"-3.53*((0.001))*(0.5)","-0.141*((0.004))*(2)",0.03,"-3.677*((0.001))*(0.5)","-0.147*((0.004))*(1)",0.06,0,0};
	class Default;
	class recoil_default: Default
	{
		muzzleOuter[] = {0.3,1.0,0.3,0.2};
		muzzleInner[] = {0,0,0.1,0.1};
		kickBack[] = {0.03,0.06};
		permanent = 0.1;
		temporary = 0.01;
	};
	class recoil_Test_rifle_01: recoil_default
	{
		muzzleOuter[] = {0.3,1.0,0.4,0.3};
		kickBack[] = {0.02,0.04};
		temporary = 0.01;
	};
};
class CfgMagazines
{
	class Default;
	class 30Rnd_556x45_Stanag;
	class PB_qin_30Rnd_556x45_Stanag: 30Rnd_556x45_Stanag
	{
		author = "Qinetix";
		scope = 2;
		modelSpecial = "\qin_bren2\QIN_MAG_556x45_STANAG_30RND.p3d";
		modelSpecialIsProxy = 1;
		model = "\qin_bren2\QIN_MAG_556x45_STANAG_30RND.p3d";
		picture = "\A3\weapons_F\data\UI\m_30stanag_CA.paa";
		ammo = "B_556x45_Ball";
		count = 30;
		initSpeed = 920;
		tracersEvery = 0;
		lastRoundsTracer = 4;
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag1";
	};
	class PB_qin_30Rnd_556x45_Stanag_Tracer_Red: PB_qin_30Rnd_556x45_Stanag
	{
		author = "Qinetix";
		scope = 2;
		picture = "\A3\weapons_F\data\UI\m_30stanag_red_ca.paa";
		ammo = "B_556x45_Ball_Tracer_Red";
		tracersEvery = 1;
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_556x45_Stanag_Tracer_Red1";
		displaynameshort = "$STR_A3_tracer_dns";
	};
};
class CfgMagazineWells
{
	class CBA_556x45_STANAG
	{
		QIN_Magazines[] = {"PB_qin_30Rnd_556x45_Stanag","PB_qin_30Rnd_556x45_Stanag_Tracer_Red"};
	};
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class PB_QIN_CZ_BREN2_Base: Rifle_Base_F
	{
		magazines[] = {"PB_qin_30Rnd_556x45_Stanag","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_green","30Rnd_556x45_Stanag_red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
		magazineWell[] = {"CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
		reloadAction = "GestureReloadSMG_01";
		magazineReloadSwitchPhase = 0.4;
		discreteDistanceInitIndex = 2;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		inertia = 0.5;
		initSpeed = -1.1413;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 355.6;
		class GunParticles: GunParticles
		{
			class SecondEffect
			{
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "CaselessAmmoCloud";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[] = {0.0,0.43};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[] = {0.53,0.32};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[] = {0.35,0.4};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPosition[] = {0.32,0.7};
				iconScale = 0.2;
			};
			class GripodSlot: bren2_gripod_slot{};
		};
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		descriptionShort = "Assault rifle";
		handAnim[] = {"OFP2_ManSkeleton","\qin_bren2\data\anim\CZBREN2.rtm"};
		dexterity = 1.5;
		caseless[] = {"",1,1,1};
		soundBullet[] = {"caseless",1};
		selectionFireAnim = "muzzleFlash";
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.070588;
			dispersion = 0.0011;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPAR01_Shot_SoundSet","SPAR01_Tail_SoundSet","SPAR01_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SPAR01_silencerShot_SoundSet","SPAR01_silencerTail_SoundSet","SPAR01_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.070588;
			dispersion = 0.0011;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
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
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 700;
		};
		class PB_QIN_CZ_805_G1: UGL_F
		{
			displayName = "CZ 805 G1";
			descriptionShort = "TGL";
			useModelOptics = 0;
			useExternalOptic = 0;
			cameraDir = "OP_look";
			discreteDistance[] = {50,75,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[] = {"OP_eye_50","OP_eye_75","OP_eye_100","OP_eye_150","OP_eye_200","OP_eye_250","OP_eye_300","OP_eye_350","OP_eye_400"};
			discreteDistanceInitIndex = 1;
			reloadAction = "GestureReloadKatibaUGL";
			reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\katiba\katiba_ugl_reload",1,1,10};
		};
		aiDispersionCoefY = 6.0;
		aiDispersionCoefX = 4.0;
		drySound[] = {"A3\sounds_f\weapons\Other\dry_1","db-5",1,10};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX","db-8",1,30};
	};
	class PB_QIN_CZ_BREN2_762_Base: PB_QIN_CZ_BREN2_Base
	{
		magazines[] = {"30Rnd_762x39_Mag_F","30Rnd_762x39_Mag_Green_F","30Rnd_762x39_Mag_Tracer_F","30Rnd_762x39_Mag_Tracer_Green_F"};
		magazineWell[] = {};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[] = {0.0,0.43};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[] = {0.53,0.32};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[] = {0.35,0.4};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: asdg_UnderSlot
			{
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				iconPosition[] = {0.32,0.7};
				iconScale = 0.2;
			};
			class GripodSlot: bren2_gripod_slot{};
		};
		initSpeed = -1.019;
		ACE_barrelTwist = 240;
		ACE_barrelLength = 355.6;
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPAR02_Shot_SoundSet","SPAR02_Tail_SoundSet","SPAR02_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SPAR02_silencerShot_SoundSet","SPAR02_silencerTail_SoundSet","SPAR02_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.070588;
			dispersion = 0.0011;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"SPAR02_Shot_SoundSet","SPAR02_Tail_SoundSet","SPAR02_InteriorTail_SoundSet"};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[] = {"SPAR02_silencerShot_SoundSet","SPAR02_silencerTail_SoundSet","SPAR02_silencerInteriorTail_SoundSet"};
			};
			reloadTime = 0.070588;
			dispersion = 0.0011;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
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
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 5;
			minRangeProbab = 0.2;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
		};
		class single_far_optics2: single_medium_optics1
		{
			requiredOpticType = 2;
			minRange = 100;
			minRangeProbab = 0.2;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 700;
		};
	};
	class PB_QIN_CZ_BREN2_GL_Base: PB_QIN_CZ_BREN2_Base
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_556
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[] = {0.0,0.43};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[] = {0.53,0.32};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[] = {0.35,0.4};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {};
				iconPosition[] = {0.32,0.7};
				iconScale = 0.2;
			};
			class GripodSlot: bren2_nogripod_slot{};
		};
		handAnim[] = {"OFP2_ManSkeleton","\qin_bren2\data\anim\CZBREN2GL.rtm"};
	};
	class PB_QIN_CZ_BREN2_762_GL_Base: PB_QIN_CZ_BREN2_762_Base
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_762
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				iconPosition[] = {0.0,0.43};
				iconScale = 0.2;
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
			};
			class CowsSlot: asdg_OpticRail1913
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[] = {0.53,0.32};
				iconScale = 0.2;
			};
			class PointerSlot: asdg_FrontSideRail
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[] = {0.35,0.4};
				iconScale = 0.25;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				linkProxy = "\A3\Data_f_Mark\proxies\weapon_slots\UNDERBARREL";
				compatibleItems[] = {};
				iconPosition[] = {0.32,0.7};
				iconScale = 0.2;
			};
			class GripodSlot: bren2_nogripod_slot{};
		};
		handAnim[] = {"OFP2_ManSkeleton","\qin_bren2\data\anim\CZBREN2GL.rtm"};
	};
	class PB_QIN_CZ_BREN2_556_14: PB_QIN_CZ_BREN2_Base
	{
		rhs_grip1_change = "PB_QIN_CZ_BREN2_556_14_grip";
		rhs_grip2_change = "PB_QIN_CZ_BREN2_556_14_grip2";
		rhs_grip3_change = "PB_QIN_CZ_BREN2_556_14_grip3";
		baseWeapon = "PB_QIN_CZ_BREN2_556_14";
		scope = 2;
		displayName = "$STR_QIN_CZBREN2_556_14";
		model = "\qin_bren2\QIN_CZ_BREN2_556_14.p3d";
		picture = "\qin_bren2\data\UI\gear_bren2_556_14.paa";
		UiPicture = "\qin_bren2\data\UI\gear_bren2_556_14.paa";
		weaponInfoType = "RscWeaponZeroing";
		muzzles[] = {"this"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 71.65;
		};
	};
	class PB_QIN_CZ_BREN2_556_14_grip: PB_QIN_CZ_BREN2_556_14
	{
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
	class PB_QIN_CZ_BREN2_556_14_grip2: PB_QIN_CZ_BREN2_556_14_grip
	{
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip2";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class PB_QIN_CZ_BREN2_556_14_grip3: PB_QIN_CZ_BREN2_556_14_grip
	{
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
	class PB_QIN_CZ_BREN2_556_14_GL: PB_QIN_CZ_BREN2_GL_Base
	{
		scope = 2;
		displayName = "$STR_QIN_CZBREN2_556_14_GL";
		model = "\qin_bren2\QIN_CZ_BREN2_556_14_GL.p3d";
		picture = "\qin_bren2\data\UI\gear_bren2_556_14_gl.paa";
		UiPicture = "\qin_bren2\data\UI\gear_bren2_556_14_gl.paa";
		weaponInfoType = "RscWeaponZeroing";
		muzzles[] = {"this","PB_QIN_CZ_805_G1"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 101.55;
		};
	};
	class PB_QIN_CZ_BREN2_556_11: PB_QIN_CZ_BREN2_Base
	{
		rhs_grip1_change = "PB_QIN_CZ_BREN2_556_11_grip";
		rhs_grip2_change = "PB_QIN_CZ_BREN2_556_11_grip2";
		rhs_grip3_change = "PB_QIN_CZ_BREN2_556_11_grip3";
		baseWeapon = "PB_QIN_CZ_BREN2_556_11";
		scope = 2;
		displayName = "$STR_QIN_CZBREN2_556_11";
		model = "\qin_bren2\QIN_CZ_BREN2_556_11.p3d";
		picture = "\qin_bren2\data\UI\gear_bren2_556_11.paa";
		UiPicture = "\qin_bren2\data\UI\gear_bren2_556_11.paa";
		weaponInfoType = "RscWeaponZeroing";
		muzzles[] = {"this"};
		initSpeed = -1.1054;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 279.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 67.24;
		};
	};
	class PB_QIN_CZ_BREN2_556_11_grip: PB_QIN_CZ_BREN2_556_11
	{
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
	class PB_QIN_CZ_BREN2_556_11_grip2: PB_QIN_CZ_BREN2_556_11_grip
	{
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip2";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class PB_QIN_CZ_BREN2_556_11_grip3: PB_QIN_CZ_BREN2_556_11_grip
	{
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
	class PB_QIN_CZ_BREN2_556_11_GL: PB_QIN_CZ_BREN2_GL_Base
	{
		scope = 2;
		displayName = "$STR_QIN_CZBREN2_556_11_GL";
		model = "\qin_bren2\QIN_CZ_BREN2_556_11_GL.p3d";
		picture = "\qin_bren2\data\UI\gear_bren2_556_11_gl.paa";
		UiPicture = "\qin_bren2\data\UI\gear_bren2_556_11_gl.paa";
		weaponInfoType = "RscWeaponZeroing";
		muzzles[] = {"this","PB_QIN_CZ_805_G1"};
		initSpeed = -1.1054;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 279.4;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 97.14;
		};
	};
	class PB_QIN_CZ_BREN2_556_8: PB_QIN_CZ_BREN2_Base
	{
		rhs_grip1_change = "PB_QIN_CZ_BREN2_556_8_grip";
		rhs_grip2_change = "PB_QIN_CZ_BREN2_556_8_grip2";
		rhs_grip3_change = "PB_QIN_CZ_BREN2_556_8_grip3";
		baseWeapon = "PB_QIN_CZ_BREN2_556_8";
		scope = 2;
		displayName = "$STR_QIN_CZBREN2_556_8";
		model = "\qin_bren2\QIN_CZ_BREN2_556_8.p3d";
		picture = "\qin_bren2\data\UI\gear_bren2_556_8.paa";
		UiPicture = "\qin_bren2\data\UI\gear_bren2_556_8.paa";
		weaponInfoType = "RscWeaponZeroing";
		muzzles[] = {"this"};
		initSpeed = -1.0815;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 203.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 63.05;
			class MuzzleSlot: MuzzleSlot
			{
				iconPosition[] = {0.13,0.43};
			};
		};
	};
	class PB_QIN_CZ_BREN2_556_8_grip: PB_QIN_CZ_BREN2_556_8
	{
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
	class PB_QIN_CZ_BREN2_556_8_grip2: PB_QIN_CZ_BREN2_556_8_grip
	{
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip2";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class PB_QIN_CZ_BREN2_556_8_grip3: PB_QIN_CZ_BREN2_556_8_grip
	{
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
	class PB_QIN_CZ_BREN2_762_14: PB_QIN_CZ_BREN2_762_Base
	{
		rhs_grip1_change = "PB_QIN_CZ_BREN2_762_14_grip";
		rhs_grip2_change = "PB_QIN_CZ_BREN2_762_14_grip2";
		rhs_grip3_change = "PB_QIN_CZ_BREN2_762_14_grip3";
		baseWeapon = "PB_QIN_CZ_BREN2_762_14";
		scope = 2;
		displayName = "$STR_QIN_CZBREN2_762_14";
		model = "\qin_bren2\QIN_CZ_BREN2_762_14.p3d";
		picture = "\qin_bren2\data\UI\gear_bren2_762_14.paa";
		UiPicture = "\qin_bren2\data\UI\gear_bren2_762_14.paa";
		weaponInfoType = "RscWeaponZeroing";
		muzzles[] = {"this"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 71.65;
		};
	};
	class PB_QIN_CZ_BREN2_762_14_grip: PB_QIN_CZ_BREN2_762_14
	{
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
	class PB_QIN_CZ_BREN2_762_14_grip2: PB_QIN_CZ_BREN2_762_14_grip
	{
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip2";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class PB_QIN_CZ_BREN2_762_14_grip3: PB_QIN_CZ_BREN2_762_14_grip
	{
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
	class PB_QIN_CZ_BREN2_762_14_GL: PB_QIN_CZ_BREN2_762_GL_Base
	{
		scope = 2;
		displayName = "$STR_QIN_CZBREN2_762_14_GL";
		model = "\qin_bren2\QIN_CZ_BREN2_762_14_GL.p3d";
		picture = "\qin_bren2\data\UI\gear_bren2_762_14_gl.paa";
		UiPicture = "\qin_bren2\data\UI\gear_bren2_762_14_gl.paa";
		weaponInfoType = "RscWeaponZeroing";
		muzzles[] = {"this","PB_QIN_CZ_805_G1"};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 101.55;
		};
	};
	class PB_QIN_CZ_BREN2_762_8: PB_QIN_CZ_BREN2_762_Base
	{
		rhs_grip1_change = "PB_QIN_CZ_BREN2_762_8_grip";
		rhs_grip2_change = "PB_QIN_CZ_BREN2_762_8_grip2";
		rhs_grip3_change = "PB_QIN_CZ_BREN2_762_8_grip3";
		baseWeapon = "PB_QIN_CZ_BREN2_762_8";
		scope = 2;
		displayName = "$STR_QIN_CZBREN2_762_8";
		model = "\qin_bren2\QIN_CZ_BREN2_762_8.p3d";
		picture = "\qin_bren2\data\UI\gear_bren2_762_8.paa";
		UiPicture = "\qin_bren2\data\UI\gear_bren2_762_8.paa";
		weaponInfoType = "RscWeaponZeroing";
		muzzles[] = {"this"};
		initSpeed = -0.8278;
		ACE_barrelTwist = 177.8;
		ACE_barrelLength = 203.2;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 71.65;
		};
	};
	class PB_QIN_CZ_BREN2_762_8_grip: PB_QIN_CZ_BREN2_762_8
	{
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
	class PB_QIN_CZ_BREN2_762_8_grip2: PB_QIN_CZ_BREN2_762_8_grip
	{
		handAnim[] = {"OFP2_ManSkeleton","\rhsusf\addons\rhsusf_c_weapons\anims\rhs_hand_m4a1_afg.rtm"};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				item = "rhsusf_acc_grip2";
				slot = "UnderBarrelSlot";
			};
		};
	};
	class PB_QIN_CZ_BREN2_762_8_grip3: PB_QIN_CZ_BREN2_762_8_grip
	{
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
};
