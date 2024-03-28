////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 12 17:20:40 2023 : 'file' last modified on Mon Nov 09 00:32:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_Canadian_Kit
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

	class PB_CADPATTW_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\UI\CAN\PB_CADPATTW_Gora_ca.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATTW_Fatigues_co.paa"};
	};
	class PB_CADPATTW_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\UI\CAN\PB_CADPATTW_Gora_RU_ca.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATTW_Fatigues_co.paa"};
	};
	class PB_CADPATTW_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\UI\CAN\PB_CADPATTW_GoraG_ca.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATTW_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
	class PB_CADPATTW_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\UI\CAN\PB_CADPATTW_GoraG_RU_ca.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATTW_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
	class PB_CADPATAR_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\UI\CAN\PB_CADPATAR_Gora_ca.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATAR_Fatigues_co.paa"};
	};
	class PB_CADPATAR_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\UI\CAN\PB_CADPATAR_Gora_RU_ca.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATAR_Fatigues_co.paa"};
	};
	class PB_CADPATAR_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\UI\CAN\PB_CADPATAR_GoraG_ca.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATAR_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Khk_CO.paa"};
	};
	class PB_CADPATAR_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\UI\CAN\PB_CADPATAR_GoraG_RU_ca.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATAR_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Khk_CO.paa"};
	};
	class PB_CADPATMT_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\UI\CAN\PB_CADPATMT_Gora_ca.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATMT_Fatigues_co.paa"};
	};
	class PB_CADPATMT_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\UI\CAN\PB_CADPATMT_Gora_RU_ca.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATMT_Fatigues_co.paa"};
	};
	class PB_CADPATMT_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\UI\CAN\PB_CADPATMT_GoraG_ca.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATMT_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Khk_CO.paa"};
	};
	class PB_CADPATMT_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\UI\CAN\PB_CADPATMT_GoraG_ca.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATMT_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Khk_CO.paa"};
	};
///BACKPACKS////
	class PB_CARRYALL_CADPATTW: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Carryall Backpack (CADPAT-TW)";
		picture = "\PB_Main\UI\CAN\PB_CARRYALL_CADPATTW_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATTW_CB_CO.paa"};	
		maximumLoad = 320;
		mass = 70;
	};
	class PB_CARRYALL_CADPATAR: PB_CARRYALL_CADPATTW
	{
		displayName = "Carryall Backpack (CADPAT-AR)";
		picture = "\PB_Main\UI\CAN\PB_CARRYALL_CADPATAR_ca.paa";
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATAR_CB_CO.paa"};	
	};
	class PB_CARRYALL_CADPATMT: PB_CARRYALL_CADPATTW
	{
		displayName = "Carryall Backpack (CADPAT-MT)";
		picture = "\PB_Main\UI\CAN\PB_CARRYALL_CADPATMT_ca.paa";
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATMT_CB_CO.paa"};	
	};
	class PB_EAGLE_CADPATTW: B_AssaultPack_Base
	{
		picture = "\PB_Main\UI\CAN\PB_EAGLE_CADPATTW_ca.paa";
		dlc = "RHS_USAF";
		scope = 2;
		author = "Kartsa";
		model = "\rhsusf\addons\rhsusf_infantry\gear\backpacks\rhsusf_eagleaIII";
		displayName = "Backpack (CADPAT-TW)";
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATTW_e3_co.paa"};
		maximumLoad = 180;
		mass = 45;
	};
	class PB_EAGLE_MED_CADPATTW: B_AssaultPack_Base
	{
		picture = "\PB_Main\UI\CAN\PB_EAGLE_MED_CADPATTW_ca.paa";
		dlc = "RHS_USAF";
		scope = 2;
		author = "Kartsa";
		model = "\rhsusf\addons\rhsusf_infantry\gear\backpacks\rhsusf_eagleaIII";
		displayName = "Medic Backpack (CADPAT-TW)";
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATTW_e3_med_co.paa"};
		maximumLoad = 220;
		mass = 65;
	};
	class PB_EAGLE_CADPATAR: PB_EAGLE_CADPATTW
	{
		picture = "\PB_Main\UI\CAN\PB_EAGLE_CADPATAR_ca.paa";
		displayName = "Backpack (CADPAT-AR)";
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATAR_e3_co.paa"};
	};
	class PB_EAGLE_MED_CADPATAR: PB_EAGLE_MED_CADPATTW
	{
		displayName = "Medic Backpack (CADPAT-AR)";
		picture = "\PB_Main\UI\CAN\PB_EAGLE_MED_CADPATAR_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATAR_e3_med_co.paa"};
	};
	class PB_EAGLE_CADPATMT: PB_EAGLE_CADPATTW
	{
		displayName = "Backpack (CADPAT-MT)";
		picture = "\PB_Main\UI\CAN\PB_EAGLE_CADPATMT_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATMT_e3_co.paa"};
	};
	class PB_EAGLE_MED_CADPATMT: PB_EAGLE_MED_CADPATTW
	{
		displayName = "Medic Backpack (CADPAT-MT)";
		picture = "\PB_Main\UI\CAN\PB_EAGLE_MED_CADPATMT_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATMT_e3_med_co.paa"};
	};
	class PB_Radiobag_CADPATTW: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Radiobag (CADPAT-TW)";
		picture = "\PB_Main\UI\CAN\PB_Radiobag_CADPATTW_ca.paa";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATTW_RB_CO.paa"};	
		maximumLoad = 160;
		mass = 50;
	};
	class PB_Radiobag_CADPATAR: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Radiobag (CADPAT-AR)";
		picture = "\PB_Main\UI\CAN\PB_Radiobag_CADPATAR_ca.paa";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATAR_RB_CO.paa"};	
		maximumLoad = 160;
		mass = 50;
	};
	class PB_Radiobag_CADPATMT: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Radiobag (CADPAT-MT)";
		picture = "\PB_Main\UI\CAN\PB_Radiobag_CADPATMT_ca.paa";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATMT_RB_CO.paa"};	
		maximumLoad = 160;
		mass = 50;
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
///HELMETS///
	class PB_CADPATTW_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\UI\CAN\PB_CADPATTW_H_ca.paa";
		displayName = "Helmet (CADPAT-TW)";
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
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd";
		hiddenSelections[] = {"camo","Camo2"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATTW_LWH_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATTW_LWH_co.paa"};
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
	class PB_CADPATTW_H_ESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\UI\CAN\PB_CADPATTW_H_ESS_ca.paa";
		displayName = "Helmet (CADPAT-TW/ESS)";
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
		hiddenSelections[] = {"camo","Camo2"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATTW_LWH_CO.paa","\PB_Canadian_Kit\data\cadpattw_lwh_adds_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 42;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATTW_LWH_CO.paa","\PB_Canadian_Kit\data\CADPATTW_LWH_ADDS_CO.paa"};
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
	class PB_CADPATTW_H_HESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\UI\CAN\PB_CADPATTW_H_HESS_ca.paa";
		displayName = "Helmet (CADPAT-TW/Headset/ESS)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset";
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
		hiddenSelections[] = {"camo","Camo2"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATTW_LWH_CO.paa","\PB_Canadian_Kit\data\cadpattw_lwh_adds_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 43;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATTW_LWH_CO.paa","\PB_Canadian_Kit\data\CADPATTW_LWH_ADDS_CO.paa"};
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
	class PB_CADPATMT_H: PB_CADPATTW_H
	{
		displayName = "Helmet (CADPAT-MT)";
		picture = "\PB_Main\UI\CAN\PB_CADPATMT_H_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATMT_LWH_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATMT_LWH_co.paa"};
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
	class PB_CADPATMT_H_ESS: PB_CADPATTW_H_ESS
	{
		displayName = "Helmet (CADPAT-MT/ESS)";
		picture = "\PB_Main\UI\CAN\PB_CADPATMT_H_ESS_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATMT_LWH_CO.paa","\PB_Canadian_Kit\data\cadpatMT_lwh_adds_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 42;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATMT_LWH_CO.paa","\PB_Canadian_Kit\data\CADPATMT_LWH_ADDS_CO.paa"};
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
	class PB_CADPATMT_H_HESS: PB_CADPATTW_H_HESS
	{
		displayName = "Helmet (CADPAT-MT/Headset/ESS)";
		picture = "\PB_Main\UI\CAN\PB_CADPATMT_H_HESS_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATMT_LWH_CO.paa","\PB_Canadian_Kit\data\cadpatMT_lwh_adds_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 43;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATMT_LWH_CO.paa","\PB_Canadian_Kit\data\CADPATMT_LWH_ADDS_CO.paa"};
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
	class PB_CADPATAR_H: PB_CADPATTW_H
	{
		displayName = "Helmet (CADPAT-AR)";
		picture = "\PB_Main\UI\CAN\PB_CADPATAR_H_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATAR_LWH_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATAR_LWH_co.paa"};
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
	class PB_CADPATAR_H_ESS: PB_CADPATTW_H_ESS
	{
		displayName = "Helmet (CADPAT-AR/ESS)";
		picture = "\PB_Main\UI\CAN\PB_CADPATAR_H_ESS_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATAR_LWH_CO.paa","\PB_Canadian_Kit\data\cadpatAR_lwh_adds_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 42;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATAR_LWH_CO.paa","\PB_Canadian_Kit\data\CADPATAR_LWH_ADDS_CO.paa"};
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
	class PB_CADPATAR_H_HESS: PB_CADPATTW_H_HESS
	{
		displayName = "Helmet (CADPAT-AR/Headset/ESS)";
		picture = "\PB_Main\UI\CAN\PB_CADPATAR_H_HESS_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATAR_LWH_CO.paa","\PB_Canadian_Kit\data\cadpatAR_lwh_adds_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 43;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATAR_LWH_CO.paa","\PB_Canadian_Kit\data\CADPATAR_LWH_ADDS_CO.paa"};
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
///HATS///
	class PB_CADPATTW_Beanie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Beanie (CADPAT-TW)";
		picture = "\PB_Main\UI\CAN\PB_CADPATTW_Beanie_ca.paa";
		model = "\A3\Characters_F\Common\woolhat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATTW_beanie.paa"};

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
	class PB_CADPATMT_Beanie: PB_CADPATTW_Beanie
	{
		displayName = "Beanie (CADPAT-MT)";
		picture = "\PB_Main\UI\CAN\PB_CADPATMT_Beanie_ca.paa";
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATMT_beanie.paa"};
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
	class PB_CADPATTW_Boonie: Helmet_Base
	{
		author = "Kartsa (CADPAT-TW)";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat";
		picture = "\PB_Main\UI\CAN\PB_CADPATTW_Boonie_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\data\CADPATTW_boonie.paa"};
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
	class PB_CADPATAR_Boonie: PB_CADPATTW_Boonie
	{
		displayName = "Boonie Hat (CADPAT-AR)";
		picture = "\PB_Main\UI\CAN\PB_CADPATAR_Boonie_ca.paa";
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATAR_boonie.paa"};
	};
	class PB_CADPATMT_Boonie: PB_CADPATTW_Boonie
	{
		displayName = "Boonie Hat (CADPAT-MT)";
		picture = "\PB_Main\UI\CAN\PB_CADPATMT_Boonie_ca.paa";
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATMT_boonie.paa"};
	};
	class PB_CADPATTW_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Military Cap (CADPAT-TW)";
		picture = "\PB_Main\UI\CAN\PB_CADPATTW_Cap_ca.paa";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Canadian_Kit\Data\CADPATTW_cap.paa"};
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
	class PB_CADPATAR_Cap: PB_CADPATTW_Cap
	{
		displayName = "Military Cap (CADPAT-AR)";
		picture = "\PB_Main\UI\CAN\PB_CADPATAR_Cap_ca.paa";
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATAR_cap.paa"};
	};
	class PB_CADPATMT_Cap: PB_CADPATTW_Cap
	{
		displayName = "Military Cap (CADPAT-MT)";
		picture = "\PB_Main\UI\CAN\PB_CADPATMT_Cap_ca.paa";
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATMT_cap.paa"};
	};
////UNIS////
	class PB_CADPATTW_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (CADPAT-TW)";
		picture = "\PB_Main\UI\CAN\PB_CADPATTW_Gora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_CADPATTW_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_CADPATTW_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (CADPAT-TW/Rolled-Up)";
		picture = "\PB_Main\UI\CAN\PB_CADPATTW_Gora_RU_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_CADPATTW_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_CADPATTW_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (CADPAT-TW)";
		picture = "\PB_Main\UI\CAN\PB_CADPATTW_GoraG_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_CADPATTW_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_CADPATTW_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (CADPAT-TW/Rolled-Up)";
		picture = "\PB_Main\UI\CAN\PB_CADPATTW_GoraG_RU_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_CADPATTW_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_CADPATAR_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (CADPAT-AR)";
		picture = "\PB_Main\UI\CAN\PB_CADPATAR_Gora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_CADPATAR_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_CADPATAR_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (CADPAT-AR/Rolled-Up)";
		picture = "\PB_Main\UI\CAN\PB_CADPATAR_Gora_RU_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_CADPATAR_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_CADPATAR_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (CADPAT-AR)";
		picture = "\PB_Main\UI\CAN\PB_CADPATAR_GoraG_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_CADPATAR_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_CADPATAR_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (CADPAT-AR/Rolled-Up)";
		picture = "\PB_Main\UI\CAN\PB_CADPATAR_GoraG_RU_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_CADPATAR_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_CADPATMT_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (CADPAT-MT)";
		picture = "\PB_Main\UI\CAN\PB_CADPATMT_Gora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_CADPATMT_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_CADPATMT_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (CADPAT-MT/Rolled-Up)";
		picture = "\PB_Main\UI\CAN\PB_CADPATMT_Gora_RU_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_CADPATMT_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_CADPATMT_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (CADPAT-MT)";
		picture = "\PB_Main\UI\CAN\PB_CADPATMT_GoraG_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_CADPATMT_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_CADPATMT_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (CADAPT-MT/Rolled-Up)";
		picture = "\PB_Main\UI\CAN\PB_CADPATMT_GoraG_RU_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_CADPATMT_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
////VESTS////
	class PB_CADPATTW_CARRIERLITE: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_Main\UI\CAN\PB_CADPATTW_CARRIERLITE_ca.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		displayName = "Carrier Lite (CADPAT-TW)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATTW_CARRIERLITE_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATTW_CARRIERLITE_co.paa"};
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
	class PB_CADPATAR_CARRIERLITE: PB_CADPATTW_CARRIERLITE
	{
		displayName = "Carrier Lite (CADPAT-AR)";
		picture = "\PB_Main\UI\CAN\PB_CADPATAR_CARRIERLITE_ca.paa";
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATAR_CARRIERLITE_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATAR_CARRIERLITE_co.paa"};
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
	class PB_CADPATMT_CARRIERLITE: PB_CADPATTW_CARRIERLITE
	{
		displayName = "Carrier Lite (CADPAT-MT)";
		picture = "\PB_Main\UI\CAN\PB_CADPATMT_CARRIERLITE_ca.paa";
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATMT_CARRIERLITE_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATMT_CARRIERLITE_co.paa"};
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
	class PB_CADPATTW_Carrier_Rig: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_Main\UI\CAN\PB_CADPATTW_Carrier_Rig_ca.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		displayName = "Carrier Rig (CADPAT-TW)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATTW_CARRIERLITE_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATTW_CARRIERLITE_co.paa"};
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
	class PB_CADPATAR_Carrier_Rig: PB_CADPATTW_Carrier_Rig
	{
		displayName = "Carrier Rig (CADPAT-AR)";
		picture = "\PB_Main\UI\CAN\PB_CADPATAR_Carrier_Rig_ca.paa";
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATAR_CARRIERLITE_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATAR_CARRIERLITE_co.paa"};
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
	class PB_CADPATMT_Carrier_Rig: PB_CADPATTW_Carrier_Rig
	{
		displayName = "Carrier Rig (CADPAT-MT)";
		picture = "\PB_Main\UI\CAN\PB_CADPATMT_Carrier_Rig_ca.paa";
		hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATMT_CARRIERLITE_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Canadian_Kit\data\CADPATMT_CARRIERLITE_co.paa"};
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