////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 12 17:20:40 2023 : 'file' last modified on Mon Nov 09 00:32:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_Turkish_Kit
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
	
	class PB_TURDIG_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_GORA_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Turkish_Kit\data\TURDIG_Fatigues_co.paa"};
	};
	class PB_TURDIG_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_GORA_RU_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Turkish_Kit\data\TURDIG_Fatigues_co.paa"};
	};
	class PB_TURDIG_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_GORAG_CA.PAA";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Turkish_Kit\data\TURDIG_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
	class PB_TURDIG_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_GORAG_RU_CA.PAA";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Turkish_Kit\data\TURDIG_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
	class PB_MEHMETCIK_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_ACU_CA.PAA";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Turkish_Kit\data\MEHMETCIK_acu_camo_co.paa",
            "PB_Turkish_Kit\data\MEHMETCIK_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_MEHMETCIK_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_ACU_R_CA.PAA";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Turkish_Kit\data\MEHMETCIK_acu_camo_co.paa",
            "PB_Turkish_Kit\data\MEHMETCIK_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_MEHMETCIK_U_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_U_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Turkish_Kit\data\MEHMETCIK_U_01_CO.paa"};
	};
	class PB_MEHMETCIK_U_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_U_R_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Turkish_Kit\data\MEHMETCIK_U_01_CO.paa"};
	};
///BACKPACKS////
	
	class PB_ASSAULT_MEHMETCIK: B_AssaultPack_Base
	{
		scope = 2;
		author = "Kartsa";
		scopeCurator = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName = "[MEHMETCIK] Combat Pack";
		picture = "\PB_MAIN\UI\TUR\PB_ASSAULT_MEHMETCIK_cA.PAA";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_Turkish_Kit\Data\MEHMETCIK_ASSAULT_CO.paa"};
		maximumLoad = 140;
		mass = 20;
	};
	class PB_ASSAULT_MED_MEHMETCIK: B_AssaultPack_Base
	{
		scope = 2;
		author = "Kartsa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName = "[MEHMETCIK] Combat Pack (Medic)";
		picture = "\PB_MAIN\UI\TUR\PB_ASSAULT_MED_MEHMETCIK_cA.PAA";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_Turkish_Kit\Data\MEHMETCIK_ASSAULT_MED_CO.paa"};
		maximumLoad = 180;
		mass = 40;
	};
	class PB_Radiobag_MEHMETCIK: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[MEHMETCIK] Radiobag";
		picture = "\PB_MAIN\UI\TUR\PB_RADIOBAG_MEHMETCIK_cA.PAA";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\MEHMETCIK_RB_CO.paa"};	
		maximumLoad = 160;
		mass = 70;
	};
	class PB_ASSAULT_TURDIG: B_AssaultPack_Base
	{
		scope = 2;
		author = "Kartsa";
		scopeCurator = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName = "[TURKISH DIGITAL] Combat Pack";
		picture = "\PB_MAIN\UI\TUR\PB_ASSAULT_TURDIG_cA.PAA";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_Turkish_Kit\Data\TURDIG_ASSAULT_CO.paa"};
		maximumLoad = 140;
		mass = 20;
	};
	class PB_ASSAULT_MED_TURDIG: B_AssaultPack_Base
	{
		scope = 2;
		author = "Kartsa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName = "[TURKISH DIGITAL] Combat Pack (Medic)";
		picture = "\PB_MAIN\UI\TUR\PB_ASSAULT_MED_TURDIG_cA.PAA";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_Turkish_Kit\Data\TURDIG_ASSAULT_MED_CO.paa"};
		maximumLoad = 180;
		mass = 40;
	};
	class PB_Radiobag_TURDIG: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[TURKISH DIGITAL] Radiobag";
		picture = "\PB_MAIN\UI\TUR\PB_RADIOBAG_TURDIG_cA.PAA";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\TURDIG_RB_CO.paa"};	
		maximumLoad = 160;
		mass = 70;
	};
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
	class PB_TURDIG_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[TURKISH DIGITAL] Fatigues";
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_GORAG_RU_cA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_TURDIG_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_TURDIG_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[TURKISH DIGITAL] Fatigues (Rolled-Up)";
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_GORA_RU_cA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_TURDIG_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_TURDIG_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[TURKISH DIGITAL] Fatigues with Gloves";
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_GORAG_cA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_TURDIG_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_TURDIG_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[TURKISH DIGITAL] Fatigues with Gloves (Rolled-Up)";
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_GORAG_RU_cA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_TURDIG_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MEHMETCIK_ACU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[MEHMETCIK] Combat Uniform";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_ACU_cA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MEHMETCIK_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MEHMETCIK_ACU_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[MEHMETCIK] Combat Uniform (Rolled-UP)";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_ACU_R_cA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MEHMETCIK_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MEHMETCIK_U: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[MEHMETCIK] Combat Fatigues";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_U_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MEHMETCIK_U_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MEHMETCIK_U_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[MEHMETCIK] Combat Fatigues (Rolled-Up)";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_U_R_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MEHMETCIK_U_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
///HATS///
	class PB_MEHMETCIK_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[MEHMETCIK] Boonie Hat";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_BOONIE_CA.PAA";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Turkish_Kit\Data\MEHMETCIK_boonie.paa"};
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
	class PB_MEHMETCIK_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[MEHMETCIK] Military Cap";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_CAP_CA.PAA";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Turkish_Kit\Data\MEHMETCIK_cap.paa"};
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
	class PB_TURDIG_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[TURKISH DIGITAL] Boonie Hat";
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_BOONIE_CA.PAA";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Turkish_Kit\Data\TURDIG_boonie.paa"};
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
	class PB_TURDIG_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[TURKISH DIGITAL] Military Cap";
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_CAP_CA.PAA";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Turkish_Kit\Data\TURDIG_cap.paa"};
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
///HELMETS
	class PB_TURDIG_H_N: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_H_N_CA.PAA";
		displayName = "[TURKISH DIGITAL] Helmet (Norotos)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_TURKISH_Kit\data\TURDIG_mich_covered_rhino_co.paa",
			"PB_Bulgarian_Kit\data\GRN_mich_acc_co"
		};
		allowedFacewear[] =
		{
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_tan", 1,
			"rhsusf_shemagh2_tan", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh_gogg_tan", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1,
		};
		class ItemInfo: HeadgearItem
		{
			hiddenSelections[] = {"Camo1","Camo2"};
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1";	
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			mass = 40;
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
	class PB_TURDIG_H_N_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_H_N_H_CA.PAA";
		displayName = "[TURKISH DIGITAL] Helmet (Norotos/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_bowman";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_TURKISH_Kit\data\TURDIG_mich_covered_rhino_co.paa",
			"PB_Bulgarian_Kit\data\GRN_mich_acc_co"
		};
		allowedFacewear[] =
		{
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_tan", 1,
			"rhsusf_shemagh2_tan", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh_gogg_tan", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1,
		};
		class ItemInfo: HeadgearItem
		{
			hiddenSelections[] = {"Camo1","Camo2"};
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_bowman";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			mass = 40;
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
	class PB_TURDIG_H_N_A: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_H_N_A_CA.PAA";
		displayName = "[TURKISH DIGITAL] Helmet (Norotos/ARC)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_arc";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_TURKISH_Kit\data\TURDIG_mich_covered_rhino_co.paa",
			"PB_Bulgarian_Kit\data\GRN_mich_acc_co"
		};
		allowedFacewear[] =
		{
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_tan", 1,
			"rhsusf_shemagh2_tan", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh_gogg_tan", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1,
		};
		class ItemInfo: HeadgearItem
		{
			hiddenSelections[] = {"Camo1","Camo2"};
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_arc";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			mass = 40;
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
	class PB_MEHMETCIK_H_N: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_H_N_CA.PAA";
		displayName = "[MEHMETCIK] Helmet (Norotos)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_TURKISH_Kit\data\MEHMETCIK_mich_covered_rhino_co.paa",
			"PB_Bulgarian_Kit\data\GRN_mich_acc_co"
		};
		allowedFacewear[] =
		{
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_tan", 1,
			"rhsusf_shemagh2_tan", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh_gogg_tan", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1,
		};
		class ItemInfo: HeadgearItem
		{
			hiddenSelections[] = {"Camo1","Camo2"};
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1";	
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			mass = 40;
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
	class PB_MEHMETCIK_H_N_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_H_N_H_CA.PAA";
		displayName = "[MEHMETCIK] Helmet (Norotos/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_bowman";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_TURKISH_Kit\data\MEHMETCIK_mich_covered_rhino_co.paa",
			"PB_Bulgarian_Kit\data\GRN_mich_acc_co"
		};
		allowedFacewear[] =
		{
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_tan", 1,
			"rhsusf_shemagh2_tan", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh_gogg_tan", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1,
		};
		class ItemInfo: HeadgearItem
		{
			hiddenSelections[] = {"Camo1","Camo2"};
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_bowman";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			mass = 40;
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
	class PB_MEHMETCIK_H_N_A: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_H_N_A_CA.PAA";
		displayName = "[MEHMETCIK] Helmet (Norotos/ARC)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_arc";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_TURKISH_Kit\data\MEHMETCIK_mich_covered_rhino_co.paa",
			"PB_Bulgarian_Kit\data\GRN_mich_acc_co"
		};
		allowedFacewear[] =
		{
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_tan", 1,
			"rhsusf_shemagh2_tan", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh_gogg_tan", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1,
		};
		class ItemInfo: HeadgearItem
		{
			hiddenSelections[] = {"Camo1","Camo2"};
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_arc";
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			mass = 40;
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
	class PB_MEHMETCIK_FAST: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[MEHMETCIK] Ops Core FAST";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_FAST_CA.PAA";
		model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
		allowedFacewear[] =
		{
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_tan", 1,
			"rhsusf_shemagh2_tan", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh_gogg_tan", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1,
		};
		hiddenSelectionsTextures[] = 
		{
			"\PB_Turkish_Kit\data\MEHMETCIK_opscore_co.paa",
			"",
			"",
			"",
			"",
			"",
		};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
			hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
			modelSides[] =
			{
				TWest,
				TCivilian
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class PB_MEHMETCIK_FAST_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[MEHMETCIK] Ops Score FAST (Headset)";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_FAST_H_CA.PAA";
		model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
		allowedFacewear[] =
		{
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_tan", 1,
			"rhsusf_shemagh2_tan", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh_gogg_tan", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1,
		};
		hiddenSelectionsTextures[] = 
		{
			"\PB_Turkish_Kit\data\MEHMETCIK_opscore_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
			"",
			"",
			"",
			"",
		};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore.p3d";
			hiddenSelections[] = {"opscore","comtac","NSW","contour","UNCOV_FLAG","ms2000"};
			modelSides[] =
			{
				TWest,
				TCivilian
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	
	class PB_MEHMETCIK_FAST_C: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[MEHMETCIK] Ops Core FAST (Cover)";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_FAST_C_CA.PAA";
		Model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
		allowedFacewear[] =
		{
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_tan", 1,
			"rhsusf_shemagh2_tan", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh_gogg_tan", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1,
		};
		hiddenSelectionsTextures[] = 
		{
			"\PB_Turkish_Kit\data\MEHMETCIK_opscore_co.paa",
			"",
			"",
			"",
			"\PB_Turkish_Kit\data\MEHMETCIK_cover_co.paa",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover";
			hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
			modelSides[] =
			{
				TWest,
				TCivilian
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
	class PB_MEHMETCIK_FAST_C_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[MEHMETCIK] Ops Score FAST (Cover/Headset)";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_FAST_C_H_CA.PAA";
		Model = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
		allowedFacewear[] =
		{
			"rhs_googles_black", 1,  
			"rhs_googles_clear", 1,
			"rhs_googles_orange", 1,
			"rhs_googles_yellow", 1,
			"rhs_ess_black", 1,
			"G_Bandanna_khk", 1,
			"G_Bandanna_tan", 1,
			"rhs_scarf", 1,
			"rhsusf_shemagh_od", 1,
			"rhsusf_shemagh2_od", 1,
			"rhsusf_shemagh2_grn", 1,
			"rhsusf_shemagh_tan", 1,
			"rhsusf_shemagh2_tan", 1,
			"rhsusf_shemagh2_gogg_grn", 1,
			"rhsusf_shemagh_gogg_grn", 1,
			"rhsusf_shemagh2_gogg_od", 1,
			"rhsusf_shemagh_gogg_od", 1,
			"rhsusf_shemagh_gogg_tan", 1,
			"rhsusf_shemagh2_gogg_tan", 1,
			"rhsusf_oakley_goggles_blk", 1,
			"rhsusf_oakley_goggles_clr", 1,
			"rhsusf_oakley_goggles_ylw", 1,
		};
		hiddenSelectionsTextures[] = 
		{
			"\PB_Turkish_Kit\data\MEHMETCIK_opscore_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
			"",
			"",
			"\PB_Turkish_Kit\data\MEHMETCIK_cover_co.paa",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\opscore_cover.p3d";
		hiddenSelections[] = {"opscore","comtac","NSW","contour","cover","ms2000"};
			modelSides[] =
			{
				TWest,
				TCivilian
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};
///VESTS///
	class PB_MEHMETCIK_Modular_Lite: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[MEHMETCIK] Modular Carrier Lite";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_MODULAR_LITE_CA.PAA";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\MEHMETCIK_Modular.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
			containerClass = "Supply130";
			mass = 70;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class PB_MEHMETCIK_Modular: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[MEHMETCIK] Modular Carrier Vest";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_MODULAR_CA.PAA";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\MEHMETCIK_Modular.paa"};
		descriptionShort = "Armor Level III";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
			containerClass = "Supply30";
			mass = 50;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class PB_MEHMETCIK_Modular_GL: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[MEHMETCIK] Modular Carrier GL";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_MODULAR_GL_CA.PAA";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\MEHMETCIK_modular.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
			containerClass = "Supply60";
			mass = 80;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\MEHMETCIK_modular.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class PB_MEHMETCIK_Carrier_Lite: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_CARRIER_LITE_CA.PAA";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		displayName = "[MEHMETCIK] Carrier Lite";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\MEHMETCIK_carrierlite_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\MEHMETCIK_carrierlite_co.paa"};
			containerClass = "Supply120";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class PB_MEHMETCIK_Carrier_Rig: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_MAIN\UI\TUR\PB_MEHMETCIK_CARRIER_RIG_CA.PAA";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		displayName = "[MEHMETCIK] Carrier Rig";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\MEHMETCIK_carrierlite_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\MEHMETCIK_carrierlite_co.paa"};
			containerClass = "Supply130";
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class PB_TURDIG_Modular_Lite: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[TURKISH DIGITAL] Modular Carrier Lite";
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_MODULAR_LITE_CA.PAA";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\TURDIG_Modular.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
			containerClass = "Supply130";
			mass = 70;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class PB_TURDIG_Modular: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[TURKISH DIGITAL] Modular Carrier Vest";
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_MODULAR_CA.PAA";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\TURDIG_Modular.paa"};
		descriptionShort = "Armor Level III";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
			containerClass = "Supply30";
			mass = 50;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class PB_TURDIG_Modular_GL: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[TURKISH DIGITAL] Modular Carrier GL";
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_MODULAR_GL_CA.PAA";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\TURDIG_modular.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
			containerClass = "Supply60";
			mass = 80;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\TURDIG_modular.paa"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class PB_TURDIG_Carrier_Lite: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_CARRIER_LITE_CA.PAA";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		displayName = "[TURKISH DIGITAL] Carrier Lite";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\TURDIG_carrierlite_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\TURDIG_carrierlite_co.paa"};
			containerClass = "Supply120";
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
	class PB_TURDIG_Carrier_Rig: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_MAIN\UI\TUR\PB_TURDIG_CARRIER_RIG_CA.PAA";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		displayName = "[TURKISH DIGITAL] Carrier Rig";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\TURDIG_carrierlite_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Turkish_Kit\data\TURDIG_carrierlite_co.paa"};
			containerClass = "Supply130";
			mass = 100;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
		};
	};
};