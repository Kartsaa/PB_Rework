////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 12 17:20:40 2023 : 'file' last modified on Mon Nov 09 00:32:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_UN_Kit
	{
		version = "1.1.3";
		units[] = {};
		weapons[] = {};
		requiredVersion = "1.1.3";
		requiredAddons[] = 
		{
			"rhsgref_infantry",
			"rhsusf_c_troops",
			"rhsusf_infantry2",
			"rhsusf_infantry3",
			"PB_main",
			"PB_M_Uniforms",
			"PB_M_headgear",
			"PB_M_Vests"
		};
	};
};
class CfgVehicles
{
////INHERITANCE////
	class ContainerSupply;
	class Supply31: ContainerSupply
	{
		maximumLoad = 31;
	};
	class Supply93: ContainerSupply
	{
		maximumLoad = 93;
	};
	class Supply45: ContainerSupply
	{
		maximumLoad = 45;
	};
	class B_Soldier_base_F;
	class B_AssaultPack_Base;
	class B_Kitbag_Base;
///UNIS///
	class PB_UN_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture="\PB_MAIN\UI\UN\PB_UN_GORA_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_UN_Kit\data\UN_Fatigues_co.paa"};
	};
	class PB_UN_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture="\PB_MAIN\UI\UN\PB_UN_GORA_RU_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_UN_Kit\data\UN_Fatigues_co.paa"};
	};
///BACKPACKS////
};
class cfgWeapons
{
/////INHERITANCE////
	class ContainerSupply;
	class Supply120: ContainerSupply
	{
		maximumLoad = 120;
	};
	class Supply30: ContainerSupply
	{
		maximumLoad = 30;
	};
	class UniformItem;
	class Uniform_Base;
	class ItemCore;
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class HeadgearItem;
	class Helmet_Base: ItemCore
	{
		class ItemInfo;
	};
////UNIS////
	class PB_UN_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[UN] Fatigues";
		picture="\PB_MAIN\UI\UN\PB_UN_GORA_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_UN_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_UN_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[UN] Fatigues (Rolled-Up)";
		picture="\PB_MAIN\UI\UN\PB_UN_GORA_RU_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_UN_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
///HATS///
	class PB_UN_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[UN] Boonie Hat";
		picture="\PB_MAIN\UI\UN\PB_UN_BOONIE_CA.PAA";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_UN_Kit\Data\UN_boonie.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\A3\Characters_F\Common\booniehat";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class PB_UN_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[UN] Military Cap";
		picture="\PB_MAIN\UI\UN\PB_UN_CAP_CA.PAA";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_UN_Kit\Data\UN_cap.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\A3\Characters_F\Common\cappatrol";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	class PB_UN_Beret: Helmet_Base
	{
		author="Kartsa";
		scope=2;
		displayName="[UN] Beret";
		picture="\PB_MAIN\UI\UN\PB_UN_BERET_CA.PAA";
		hiddenselections[] = { "camo" };
		hiddenSelectionsTextures[]=
		{
			"\PB_UN_Kit\data\UN_beret_co.paa"
		};
		model="\A3\Characters_F\Common\headgear_beret01";
		allowedFacewear[]=
		{
			"",
			1,
			"G_Aviator",
			1,
			"G_Shades_Black",
			1,
			"G_Shades_Blue",
			1,
			"G_Shades_Red",
			1,
			"G_Shades_Green",
			1
		};
		class ItemInfo: HeadgearItem
		{
			hiddenselections[] = { "camo" };
			mass=6;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\Common\headgear_beret01";
			modelSides[]={6};
		};
	};
///HELMETS
	class PB_UN_6B27M: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture="\PB_MAIN\UI\UN\PB_UN_6B27M_CA.PAA";
		allowedFacewear[] =
		{
			"",1,
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1
		};		
		displayName = "[UN] 6B27M Helmet";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"PB_UN_Kit\data\UN_6b27m_co.paa"};
		class ItemInfo: HeadgearItem
		{
			hiddenSelections[] = {"Camo1"};
			mass = 40;
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class PB_UN_6B27M_Ess: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture="\PB_MAIN\UI\UN\PB_UN_6B27M_ESS_CA.PAA";
		allowedFacewear[] =
		{
			"",1,
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1
		};		
		displayName = "[UN] 6B27M Helmet (ESS)";
		model = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_ess";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"PB_UN_Kit\data\UN_6b27m_co.paa"};
		class ItemInfo: HeadgearItem
		{
			hiddenSelections[] = {"Camo1"};
			mass = 40;
			uniformModel = "\rhsafrf\addons\rhs_infantry\gear\head\rhs_6b27m_ess";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class PB_UN_LWH: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture="\PB_MAIN\UI\UN\PB_UN_LWH_CA.PAA";
		displayName = "[UN] LWH Helmet";
		allowedFacewear[] =
		{
			"",1,
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1
		};
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd";
		hiddenSelections[] = {"camo","Camo2"};
		hiddenSelectionsTextures[] = {"\PB_UN_Kit\data\UN_lwh_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_UN_Kit\data\UN_lwh_co.paa"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class PB_UN_LWH_ESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture="\PB_MAIN\UI\UN\PB_UN_LWH_ESS_CA.PAA";
		displayName = "[UN] LWH Helmet (ESS)";
		allowedFacewear[] =
		{
			"",1,
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1
		};
		hiddenSelections[] = {"camo","Camo2"};
		hiddenSelectionsTextures[] = {"\PB_UN_Kit\data\UN_LWH_CO.paa","\PB_UN_Kit\data\UN_LWH_ADDS_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 42;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_UN_Kit\data\UN_LWH_CO.paa","\PB_UN_Kit\data\UN_LWH_ADDS_CO.paa"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class PB_UN_LWH_HESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture="\PB_MAIN\UI\UN\PB_UN_LWH_HESS_CA.PAA";
		displayName = "[UN] LWH Helmet (Headset/ESS)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset";
		allowedFacewear[] =
		{
			"",1,
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1
		};
		hiddenSelections[] = {"camo","Camo2"};
		hiddenSelectionsTextures[] = {"\PB_UN_Kit\data\UN_LWH_CO.paa","\PB_UN_Kit\data\UN_LWH_ADDS_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 43;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_UN_Kit\data\UN_LWH_CO.paa","\PB_UN_Kit\data\UN_LWH_ADDS_CO.paa"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class PB_UN_PASGT: Helmet_Base
	{
		author = "Kartsa";
		picture="\PB_MAIN\UI\UN\PB_UN_PASGT_CA.PAA";
		displayName = "[UN] PASGT Helmet";
		scope = 2;
		model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_UN_Kit\data\UN_pasgt_co.paa"};
		class ItemInfo: Headgearitem
		{
			mass = 40;
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"PB_UN_Kit\data\UN_pasgt_co.paa"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class PB_UN_M97 : Helmet_Base
	{
		picture = "\PB_MAIN\UI\UN\PB_UN_M97_CA.PAA";
		autho = "Kartsa";
		scope = 2;
		displayName = "[UN] M97 Helmet";
		model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_UN_Kit\data\UN_pasgt_co.paa"};
		class ItemInfo : HeadgearItem
		{
			mass = 40;
			uniformmodel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo";
			allowedSlots[] = {901,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class PB_UN_M97_COVER : Helmet_Base
	{
		picture = "\PB_MAIN\UI\UN\PB_UN_M97_COVER_CA.PAA";
		Author = "Kartsa";
		Scope = 2;
		displayName = "[UN] M97 (ESS Cover)";
		model = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_ess";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"\PB_UN_Kit\data\UN_pasgt_co.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
		class ItemInfo : HeadgearItem
		{
			mass = 40;
			uniformModel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_nostrap_ess";
			allowedSlots[] = {901,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
	class PB_UN_M97_ESS : Helmet_Base
	{
		picture = "\PB_MAIN\UI\UN\PB_UN_M97_ESS_CA.PAA";
		Author = "Kartsa";
		Scope = 2;
		displayName = "[UN] M97 (ESS)";	
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] =
		{
			"\PB_UN_Kit\data\UN_pasgt_co.paa",
			"\rhssaf\addons\rhssaf_t_headgear_m97\data\rhssaf_m97_ess_black_co.paa"
		};
		class ItemInfo : HeadgearItem
		{
			mass = 40;
			uniformmodel = "\rhssaf\addons\rhssaf_m_headgear_m97\rhssaf_m97_camo_ess_bare";
			allowedSlots[] = {901,605};
			modelSides[] = {6};
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
		};
	};
///VESTS///
	class PB_UN_PlateCarrier_01: Vest_Camo_Base
	{
		author="Kartsa";
		scope=2;
		displayName="[UN] Carrier Lite";
		picture="\PB_MAIN\UI\UN\PB_UN_PLATECARRIER_01_CA.PAA";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_UN_Kit\data\UN_vest_co.paa"};
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			hiddenSelections[] = {"camo"};
			containerClass="Supply120";
			mass=60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class PB_UN_PlateCarrier_02: PB_UN_PlateCarrier_01
	{
		author="Kartsa";
		displayName="[UN] Carrier Rig";
		picture="\PB_MAIN\UI\UN\PB_UN_PLATECARRIER_02_CA.PAA";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_UN_Kit\data\UN_vest_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
			hiddenSelections[] = {"camo"};
			containerClass="Supply120";
			mass=80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class PB_UN_M98_RIF : Vest_Camo_Base
	{
		picture = "\PB_MAIN\UI\UN\PB_UN_M98_RIF_CA.PAA";
		author = "Kartsa";
		scope = 0;
		displayName = "[UN] Flak Jacket (Mags)";
		hiddenSelections[] = {"MD98"};
		hiddenSelectionsTextures[] = {"\PB_UN_Kit\data\UN_Md98_vest_co.paa"};
		model = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_rifleman";
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"MD98"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98_rifleman";
			containerClass = "Supply80";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class PB_UN_M98 : Vest_Camo_Base
	{
		picture = "\PB_MAIN\UI\UN\PB_UN_M98_RIF_CA.PAA";
		author = "Kartsa";
		scope = 2;
		displayName = "[UN] Flak Jacket";
		model = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98";
		hiddenSelections[] = {"MD98"};
		hiddenSelectionsTextures[] = {"\PB_UN_Kit\data\UN_Md98_vest_co.paa"};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"MD98"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m98\rhssaf_md98";
			containerClass = "Supply40";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=16;
					passThrough=0.30000001;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
};