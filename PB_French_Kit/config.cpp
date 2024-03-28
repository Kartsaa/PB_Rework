////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 12 17:20:40 2023 : 'file' last modified on Mon Nov 09 00:32:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_French_Kit
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
////INHERICCECE////
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
	class PB_DCCE_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_MAIN\UI\FRA\PB_DCCE_GORA_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_French_Kit\data\DCCE_Fatigues_co.paa"};
	};
	class PB_DCCE_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_MAIN\UI\FRA\PB_DCCE_GORA_RU_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_French_Kit\data\DCCE_Fatigues_co.paa"};
	};
	class PB_DCCE_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_MAIN\UI\FRA\PB_DCCE_GORAG_CA.PAA";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_French_Kit\data\DCCE_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Khk_CO.paa"};
	};
	class PB_DCCE_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_MAIN\UI\FRA\PB_DCCE_GORAG_RU_CA.PAA";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_French_Kit\data\DCCE_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Khk_CO.paa"};
	};
	class PB_CCE_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_MAIN\UI\FRA\PB_CCE_ACU_CA.PAA";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_French_Kit\data\cce_acu_camo_co.paa",
            "PB_French_Kit\data\cce_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_CCE_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";
		picture = "\PB_MAIN\UI\FRA\PB_CCE_ACU_R_CA.PAA";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_French_Kit\data\cce_acu_camo_co.paa",
            "PB_French_Kit\data\cce_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_CCE_U_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		picture = "\PB_MAIN\UI\FRA\PB_CCE_U_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_French_Kit\data\CCE_U_01_CO.paa"};
	};
	class PB_CCE_U_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		picture = "\PB_MAIN\UI\FRA\PB_CCE_U_R_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_French_Kit\data\CCE_U_01_CO.paa"};
	};
///BACKPACKS////

	class PB_Kitbag_CCE: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Kitbag (CCE)";
		picture = "\PB_MAIN\UI\FRA\PB_KITBAG_CCE_CA.PAA";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_French_Kit\data\CCE_KB_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_Medbag_CCE: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Medicbag (CCE)";
		picture = "\PB_MAIN\UI\FRA\PB_MEDBAG_CCE_CA.PAA";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_French_Kit\data\CCE_KB_MED_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_CARRYALL_CCE: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Carryall Backpack (CCE)";
		picture = "\PB_MAIN\UI\FRA\PB_CARRYALL_CCE_CA.PAA";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"PB_French_Kit\data\CCE_CB_co.paa"};	
		maximumLoad = 320;
		mass = 70;
	};
	class PB_Radiobag_CCE: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Radiobag (CCE)";
		picture = "\PB_MAIN\UI\FRA\PB_RADIOBAG_CCE_CA.PAA";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_French_Kit\data\CCE_RB_CO.paa"};	
		maximumLoad = 160;
		mass = 70;
	};
};
class cfgWeapons
{
/////INHERICCECE////
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
	
	class PB_CCE_U: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "Combat Fatigues (CCE)";
		picture = "\PB_MAIN\UI\FRA\PB_CCE_U_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_CCE_U_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_CCE_U_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "Combat Fatigues (CCE/Rolled-Up)";
		picture = "\PB_MAIN\UI\FRA\PB_CCE_U_R_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_CCE_U_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_CCE_ACU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Combat Uniform (CCE)";
		picture = "\PB_MAIN\UI\FRA\PB_CCE_ACU_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_CCE_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_CCE_ACU_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Combat Uniform (CCE/Rolled-Up)";
		picture = "\PB_MAIN\UI\FRA\PB_CCE_ACU_R_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_CCE_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_DCCE_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (DAGUET)";
		picture = "\PB_MAIN\UI\FRA\PB_DCCE_GORA_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_DCCE_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_DCCE_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (DAGUET/Rolled-Up)";
		picture = "\PB_MAIN\UI\FRA\PB_DCCE_GORA_RU_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_DCCE_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_DCCE_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (DAGUET)";
		picture = "\PB_MAIN\UI\FRA\PB_DCCE_GORAG_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_DCCE_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_DCCE_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (DAGUET/Rolled-Up)";
		picture = "\PB_MAIN\UI\FRA\PB_DCCE_GORAG_RU_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_DCCE_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
///HATS///
	class PB_CCE_Beanie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Beanie (CCE)";
		picture = "\PB_MAIN\UI\FRA\PB_CCE_BEANIE_CA.PAA";
		model = "\A3\Characters_F\Common\woolhat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_French_Kit\data\CCE_beanie.paa"};

		class ItemInfo: HeadgearItem
		{
			mass = 6;
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {3,1};
			hiddenSelections[] = { "camo" };
			uniformModel = "\A3\Characters_F\Common\woolhat";
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
	class PB_CCE_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (CCE)";
		picture = "\PB_MAIN\UI\FRA\PB_CCE_BOONIE_CA.PAA";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_French_Kit\data\CCE_boonie.paa"};
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
	class PB_CCE_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Military Cap (CCE)";
		picture = "\PB_MAIN\UI\FRA\PB_CCE_CAP_CA.PAA";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_French_Kit\Data\CCE_cap.paa"};
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
	class PB_DCCE_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (DAGUET)";
		picture = "\PB_MAIN\UI\FRA\PB_DCCE_BOONIE_CA.PAA";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_French_Kit\data\DCCE_boonie.paa"};
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
	class PB_DCCE_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Military Cap (DAGUET)";
		picture = "\PB_MAIN\UI\FRA\PB_DCCE_CAP_CA.PAA";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_French_Kit\Data\DCCE_cap.paa"};
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
	class PB_CCE_H_N: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_MAIN\UI\FRA\PB_CCE_H_N_CA.PAA";
		displayName = "Helmet (CCE/Norotos)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_French_Kit\data\CCE_mich_covered_rhino_co.paa",
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
	class PB_CCE_H_N_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_MAIN\UI\FRA\PB_CCE_H_N_H_CA.PAA";
		displayName = "Helmet (CCE/Norotos/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_bowman";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_French_Kit\data\CCE_mich_covered_rhino_co.paa",
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
	class PB_CCE_H_N_A: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_MAIN\UI\FRA\PB_CCE_H_N_A_CA.PAA";
		displayName = "Helmet (CCE/Norotos/ARC)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_arc";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_French_Kit\data\CCE_mich_covered_rhino_co.paa",
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
	class PB_DCCE_H_N: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_MAIN\UI\FRA\PB_DCCE_H_N_CA.PAA";
		displayName = "Helmet (DAGUET/Norotos)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_French_Kit\data\CCE_mich_covered_rhino_co.paa",
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
	class PB_DCCE_H_N_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_MAIN\UI\FRA\PB_DCCE_H_N_H_CA.PAA";
		displayName = "Helmet (DAGUET/Norotos/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_bowman";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_French_Kit\data\DCCE_mich_covered_rhino_co.paa",
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
	class PB_DCCE_H_N_A: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_MAIN\UI\FRA\PB_CCE_H_N_A_CA.PAA";
		displayName = "Helmet (DAGUET/Norotos/ARC)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_arc";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_French_Kit\data\DCCE_mich_covered_rhino_co.paa",
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
///VESTS///
};