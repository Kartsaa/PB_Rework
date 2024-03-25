////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 12 17:20:40 2023 : 'file' last modified on Mon Nov 09 00:32:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_Hungary_Kit
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
////INHERI2015MCE////
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
	class PB_2015M_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_Main\ui\HUN\PB_2015M_ACU_CA.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Hungary_Kit\data\2015M_acu_camo_co.paa",
            "PB_Hungary_Kit\data\2015M_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_co.paa"
        };
	};
	class PB_2015M_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";;
		picture = "\PB_Main\ui\HUN\PB_2015M_ACU_R_CA.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Hungary_Kit\data\2015M_acu_camo_co.paa",
            "PB_Hungary_Kit\data\2015M_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_co.paa"
        };
	};
	class PB_2015M_U_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		picture = "\PB_Main\ui\HUN\PB_2015M_U_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Hungary_Kit\data\2015M_U_01_CO.paa"};
	};
	class PB_2015M_U_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		picture = "\PB_Main\ui\HUN\PB_2015M_U_R_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Hungary_Kit\data\2015M_U_01_CO.paa"};
	};
///BACKPACKS////

	class PB_COMBAT_2015M: B_AssaultPack_Base
	{
		scope = 2;
		author = "Kartsa";
		scopeCurator = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName = "[2015M] Combat Pack";
		picture = "\PB_Main\ui\HUN\PB_COMBAT_2015M_CA.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_Hungary_Kit\Data\2015M_combat_CO.paa"};
		maximumLoad = 140;
		mass = 20;
	};
	class PB_COMBAT_MED_2015M: B_AssaultPack_Base
	{
		scope = 2;
		author = "Kartsa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName = "[2015M] Combat Pack (Medic)";
		picture = "\PB_Main\ui\HUN\PB_COMBAT_MED_2015M_CA.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_Hungary_Kit\Data\2015M_combat_med_CO.paa"};
		maximumLoad = 180;
		mass = 40;
	};
	class PB_Kitbag_2015M: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[2015M] Kitbag";
		picture = "\PB_Main\ui\HUN\PB_KITBAG_2015M_CA.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_Hungary_Kit\data\2015M_KB_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_Radiobag_2015M: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[2015M] Radiobag";
		picture = "\PB_Main\ui\HUN\PB_RADIOBAG_2015M_CA.paa";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_Hungary_Kit\data\2015M_RB_CO.paa"};	
		maximumLoad = 160;
		mass = 70;
	};
};
class cfgWeapons
{
/////INHERI2015MCE////
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
	class PB_2015M_ACU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[2015M] Combat Uniform";
		picture = "\PB_Main\ui\HUN\PB_2015M_ACU_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_2015M_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_2015M_ACU_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[2015M] Combat Uniform (Rolled-Up)";
		picture = "\PB_Main\ui\HUN\PB_2015M_ACU_R_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_2015M_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_2015M_U: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[2015M] Combat Fatigues";
		picture = "\PB_Main\ui\HUN\PB_2015M_U_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_2015M_U_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_2015M_U_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[2015M] Combat Fatigues (Rolled-Up)";
		picture = "\PB_Main\ui\HUN\PB_2015M_U_R_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_2015M_U_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
///HATS///

	class PB_2015M_Beanie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[2015M] Beanie";
		picture = "\PB_Main\ui\HUN\PB_2015M_BEANIE_CA.paa";
		model = "\A3\Characters_F\Common\woolhat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Hungary_Kit\data\2015M_beanie.paa"};

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
	class PB_2015M_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[2015M] Boonie Hat";
		picture = "\PB_Main\ui\HUN\PB_2015M_BOONIE_CA.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Hungary_Kit\data\2015M_boonie.paa"};
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
	class PB_2015M_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[2015M] Military Cap";
		picture = "\PB_Main\ui\HUN\PB_2015M_CAP_CA.paa";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Hungary_Kit\Data\2015M_cap.paa"};
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
	class PB_2015M_MICH: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\HUN\PB_2015M_MICH_CA.paa";
		scope = 2;
		displayName = "[2015M] Helmet";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\PB_Hungary_Kit\data\2015m_mich_co.paa",
			"PB_Hungary_Kit\data\2015m_mich_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
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
			hiddenSelections[] = {"Camo","Camo1","Camo2","bowman"};
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_bowman";
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
	class PB_2015M_MICH_ALT: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\HUN\PB_2015M_MICH_ALT_CA.paa";
		scope = 2;
		displayName = "[2015M] Helmet (Alt)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_alt";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\PB_Hungary_Kit\data\2015m_mich_co.paa",
			"PB_Hungary_Kit\data\2015m_mich_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
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
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_alt";
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
	class PB_2015M_MICH_N: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\HUN\PB_2015M_MICH_N_CA.paa";
		scope = 2;
		displayName = "[2015M] Helmet (Norotos)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\PB_Hungary_Kit\data\2015m_mich_co.paa",
			"PB_Hungary_Kit\data\2015m_mich_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
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
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc";
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
	class PB_2015M_MICH_N_H: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\HUN\PB_2015M_MICH_N_H_CA.paa";
		scope = 2;
		displayName = "[2015M] Helmet (Norotos/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_bowman";
		hiddenSelections[] = {"Camo","Camo1","Camo2", "bowman"};
		hiddenSelectionsTextures[] = 
		{
			"PB_Hungary_Kit\data\2015m_mich_co.paa",
			"PB_Hungary_Kit\data\2015m_mich_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
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
			hiddenSelections[] = {"Camo","Camo1","Camo2","bowman"};
			uniformmodel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_bowman";
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
	class PB_2015M_MICH_N_ALT: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\HUN\PB_2015M_MICH_N_ALT_CA.paa";
		scope = 2;
		displayName = "[2015M] Helmet (Norotos/Alt)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_Hungary_Kit\data\2015m_mich_co.paa",
			"PB_Hungary_Kit\data\2015m_mich_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
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
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			uniformmodel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt";
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
	class PB_2015M_MICH_N_ALT_H: Helmet_Base
	{
		picture = "\PB_Main\ui\HUN\PB_2015M_MICH_N_ALT_H_CA.paa";
		author = "Kartsa";
		scope = 0;
		displayName = "[2015M] Helmet (Norotos/Alt/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt_bowman";
		hiddenSelections[] = {"Camo","Camo1","Camo2", "bowman"};
		hiddenSelectionsTextures[] = 
		{
			"PB_Hungary_Kit\data\2015m_mich_co.paa",
			"PB_Hungary_Kit\data\2015m_mich_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
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
			hiddenSelections[] = {"Camo","Camo1","Camo2","bowman"};
			uniformmodel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt_bowman";
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
	class PB_2015M_Modular_Lite: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[2015M] Modular Carrier Lite";
		picture = "\PB_Main\ui\HUN\PB_2015M_MODULAR_LITE_CA.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Hungary_Kit\data\2015M_Modular.paa"};
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
	class PB_2015M_Modular: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[2015M] Modular Carrier Vest";
		picture = "\PB_Main\ui\HUN\PB_2015M_MODULAR_CA.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Hungary_Kit\data\2015M_Modular.paa"};
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
	class PB_2015M_Carrier_Lite: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_Main\ui\HUN\PB_2015M_CARRIER_LITE_CA.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		displayName = "[2015M] Carrier Lite";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Hungary_Kit\data\2015M_carrierlite_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Hungary_Kit\data\2015M_carrierlite_co.paa"};
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
	class PB_2015M_Carrier_Rig: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_Main\ui\HUN\PB_2015M_CARRIER_RIG_CA.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		displayName = "[2015M] Carrier Rig";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Hungary_Kit\data\2015M_carrierlite_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Hungary_Kit\data\2015M_carrierlite_co.paa"};
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