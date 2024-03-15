////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 12 17:20:40 2023 : 'file' last modified on Mon Nov 09 00:32:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_Finnish_Kit
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

	class PB_M05_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05_Fatigues_co.paa"};
	};
	class PB_M05_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05_Fatigues_co.paa"};
	};
	class PB_M05_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
	class PB_M05_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
	class PB_M05_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Finnish_Kit\data\ncu_camo_m05_co.paa",
            "PB_Finnish_Kit\data\ncu_camo1_m05_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_M05_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Finnish_Kit\data\ncu_camo_m05_co.paa",
            "PB_Finnish_Kit\data\ncu_camo1_m05_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_M04_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Finnish_Kit\data\M04_A_Uniform_1_co.paa",
            "PB_Finnish_Kit\data\M04_A_Uniform_2_co.paa",
            "PB_British_Kit\data\TacGloves_Khk_CO.paa"
        };
	};
	class PB_M04_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Finnish_Kit\data\M04_A_Uniform_1_co.paa",
            "PB_Finnish_Kit\data\M04_A_Uniform_2_co.paa",
            "PB_British_Kit\data\TacGloves_khk_CO.paa"
        };
	};
	class PB_M04ISAF_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Finnish_Kit\data\M04_A_Uniform_1_khk_co.paa",
            "PB_Finnish_Kit\data\M04_A_Uniform_2_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_M04ISAF_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Finnish_Kit\data\M04_A_Uniform_1_khk_co.paa",
            "PB_Finnish_Kit\data\M04_A_Uniform_2_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_M05_JACKET_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_gloves.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M05_gorkaR_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"};
	};
	class PB_M05W_JACKET_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_gloves.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M05W_gorkaR_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"};
	};
///BACKPACKS////
	class PB_Kitbag_M05: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[M05] Kitbag";
		picture = "PB_Main\ui\kitbag_test.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M05_KB_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_Medbag_M05: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[M05] Medicbag";
		picture = "PB_Main\ui\kitbag_test.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M05_KB_MED_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_Kitbag_M04: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[M04] Kitbag";
		picture = "PB_Main\ui\kitbag_test.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M04_KB_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_Medbag_M04: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[M04] Medicbag";
		picture = "PB_Main\ui\kitbag_test.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M04_KB_MED_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_Radiobag_M05: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[M05] Radiobag";
		picture = "PB_Main\ui\Contact_LR.paa";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M05_RB_CO.paa"};	
		maximumLoad = 160;
		mass = 50;
	};
	class PB_Radiobag_M04: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[M04] Radiobag";
		picture = "PB_Main\ui\Contact_LR.paa";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M04_RB_CO.paa"};	
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
	class PB_M05_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\ui\helmet_test.paa";
		displayName = "[M05] Helmet";
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
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05_LWH_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05_LWH_co.paa"};
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

	class PB_M05_H_ESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\ui\helmet_test.paa";
		displayName = "[M05] Helmet (ESS)";
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
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05_LWH_CO.paa","\PB_Finnish_Kit\data\FIN_LWH_ADDS_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 42;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05_LWH_CO.paa","\PB_Finnish_Kit\data\FIN_LWH_ADDS_CO.paa"};
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
	class PB_M05_H_HESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\ui\helmet_test.paa";
		displayName = "[M05] Helmet (Headset/ESS)";
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
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05_LWH_CO.paa","\PB_Finnish_Kit\data\FIN_LWH_ADDS_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 43;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05_LWH_CO.paa","\PB_Finnish_Kit\data\FIN_LWH_ADDS_CO.paa"};
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
	class PB_M05W_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\ui\helmet_test.paa";
		displayName = "[M05W] Helmet";
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
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05W_LWH_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05W_LWH_co.paa"};
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
	class PB_M05W_H_ESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\ui\helmet_test.paa";
		displayName = "[M05W] Helmet (ESS)";
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
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05W_LWH_CO.paa","\PB_Finnish_Kit\data\FIN_LWH_ADDS_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 42;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05W_LWH_CO.paa","\PB_Finnish_Kit\data\FIN_LWH_ADDS_CO.paa"};
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
	class PB_M05W_H_HESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\ui\helmet_test.paa";
		displayName = "[M05W] Helmet (Headset/ESS)";
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
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05W_LWH_CO.paa","\PB_Finnish_Kit\data\FIN_LWH_ADDS_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 43;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05W_LWH_CO.paa","\PB_Finnish_Kit\data\FIN_LWH_ADDS_CO.paa"};
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
	class PB_M04_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\ui\helmet_test.paa";
		displayName = "[M04] Helmet";
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
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M04_LWH_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M04_LWH_co.paa"};
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
	class PB_M04_H_ESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\ui\helmet_test.paa";
		displayName = "[M04] Helmet (ESS)";
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
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M04_LWH_CO.paa","\PB_Finnish_Kit\data\FIN_LWH_ADDS_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 42;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M04_LWH_CO.paa","\PB_Finnish_Kit\data\FIN_LWH_ADDS_CO.paa"};
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
	class PB_M04_H_HESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\ui\helmet_test.paa";
		displayName = "[M04] Helmet (Headset/ESS)";
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
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M04_LWH_CO.paa","\PB_Finnish_Kit\data\FIN_LWH_ADDS_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 43;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M04_LWH_CO.paa","\PB_Finnish_Kit\data\FIN_LWH_ADDS_CO.paa"};
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
	class PB_M05_FAST: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[M05] Ops Core FAST";
		picture = "\PB_Main\ui\helmet_test.paa";
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
			"\PB_Finnish_Kit\data\M05_opscore_co.paa",
			"",
			"",
			"",
			"",
			""
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
	class PB_M04_FAST: PB_M05_FAST
	{
		displayName = "[M04] Ops Core FAST";
		hiddenSelectionsTextures[] = 
		{
			"\PB_Finnish_Kit\data\M04_opscore_co.paa",
			"",
			"",
			"",
			"",
			""
		};
	};
	class PB_M05W_FAST: PB_M05_FAST
	{
		displayName = "[M05W] Ops Core FAST (Headset)";
		hiddenSelectionsTextures[] = 
		{
			"\PB_Finnish_Kit\data\M05W_opscore_co.paa",
			"",
			"",
			"",
			"",
			""
		};
	};
	class PB_M05_FAST_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[M05] Ops Score FAST (Headset)";
		picture = "\PB_Main\ui\helmet_test.paa";
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
			"\PB_Finnish_Kit\data\M05_opscore_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
			"",
			"",
			"",
			""
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
	class PB_M04_FAST_H: PB_M05_FAST_H
	{
		displayName = "[M04] Ops Core FAST (Headset)";
		hiddenSelectionsTextures[] = 
		{
			"\PB_Finnish_Kit\data\M04_opscore_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class PB_M05W_FAST_H: PB_M05_FAST_H
	{
		displayName = "[M05W] Ops Core FAST (Headset)";
		hiddenSelectionsTextures[] = 
		{
			"\PB_Finnish_Kit\data\M05W_opscore_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
			"",
			"",
			"",
			""
		};
	};
///HATS///
	class PB_M05_Beanie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[M05] Beanie";
		picture = "\PB_Main\ui\cap_test.paa";
		model = "\A3\Characters_F\Common\woolhat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M05_beanie.paa"};

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
	class PB_M05_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[M05] Boonie Hat";
		picture = "\PB_Main\UI\cap_test.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M05_boonie.paa"};
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
	class PB_M05_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[M05] Military Cap";
		picture = "\PB_Main\UI\cap_test.paa";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\Data\M05_cap.paa"};
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
	class PB_M04_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[M04] Boonie Hat";
		picture = "\PB_Main\UI\cap_test.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\data\M04_boonie.paa"};
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
	class PB_M04_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[M04] Military Cap";
		picture = "\PB_Main\UI\cap_test.paa";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Finnish_Kit\Data\M04_cap.paa"};
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
	class PB_M05W_Beanie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[M05W] Beanie";
		picture = "\PB_Main\ui\cap_test.paa";
		model = "\A3\Characters_F\Common\woolhat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M05W_beanie.paa"};

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
////UNIS////
	class PB_M05_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[M05] Fatigues";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_M05_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_M05_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[M05] Fatigues (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_M05_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_M05_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[M05] Fatigues with Gloves";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_M05_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_M05_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[M05] Fatigues with Gloves (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_M05_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_M05_ACU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[M05] NCU";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_M05_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_M05_ACU_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[M05] NCU (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_M05_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_M04_ACU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[M04] Combat Uniform";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_M04_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_M04_ACU_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[M04] Combat Uniform(Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_M04_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_M04ISAF_ACU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[M04] Combat Uniform Tan Shirt";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_M04ISAF_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_M04ISAF_ACU_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[M04] Combat Uniform Tan Shirt (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_M04ISAF_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_M05_JACKET: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[M05] Winter Jacket";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_M05_JACKET_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_M05W_JACKET: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[M05W] Winter Jacket";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_M05W_JACKET_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
////VESTS////
	class PB_M05_CARRIERLITE: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_Main\ui\vest_test.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		displayName = "[M05] Carrier Lite";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M05_carrier_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M05_carrier_co.paa"};
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
	class PB_M05_Carrier_Rig: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_Main\ui\vest_test.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		displayName = "[M05] Carrier Rig";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M05_carrier_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M05_carrier_co.paa"};
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
	class PB_M04_CARRIERLITE: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_Main\ui\vest_test.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		displayName = "[M04] Carrier Lite";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M04_carrier_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M04_carrier_co.paa"};
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
	class PB_M05_TST: Vest_Camo_Base
	{
		author = "Kartsa";
		picture = "PB_Main\ui\vest_test.paa";
		scope = 2;
		displayName = "[M05] TST";
		model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_AK01.p3d";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M05_TST_co.paa","PB_Finnish_Kit\data\M05_tst_pouches_co.paa","PB_Finnish_Kit\data\M05_tst_pouches_02_co.paa"};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_AK01.p3d";
			containerClass = "Supply100";
			mass = 55;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 15;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 15;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
		};
	};
	class PB_M04_Carrier_Rig: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_Main\ui\vest_test.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		displayName = "[M04] Carrier Rig";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M04_carrier_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M04_carrier_co.paa"};
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
	class PB_M05_Modular_Lite: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[M05] Modular Carrier Lite";
		picture = "\PB_Main\ui\vest_test.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M05_Modular.paa"};
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
	class PB_M05_Modular: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[M05] Modular Carrier Vest";
		picture = "\PB_Main\ui\vest_test.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M05_Modular.paa"};
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
	class PB_M04_Modular_Lite: PB_M05_Modular_Lite
	{
		displayName = "[M04] Modular Carrier Lite";
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M04_Modular.paa"};
	};
	class PB_M04_Modular_GL: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[M04] Modular Carrier GL";
		picture = "\PB_Main\ui\vest_test.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M04_modular.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
			containerClass = "Supply60";
			mass = 80;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Finnish_Kit\data\M04_modular.paa"};
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
