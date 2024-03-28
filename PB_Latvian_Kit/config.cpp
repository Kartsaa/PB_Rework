////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 12 17:20:40 2023 : 'file' last modified on Mon Nov 09 00:32:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_Latvian_Kit
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
////INHERILATPATCE////
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
	class PB_LATPAT_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_Main\ui\LAT\PB_latpat_acu_CA.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Latvian_Kit\data\LATPAT_acu_camo_co.paa",
            "PB_Latvian_Kit\data\LATPAT_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_co.paa"
        };
	};
	class PB_LATPAT_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";;
		picture = "\PB_Main\ui\LAT\PB_latpat_acu_r_CA.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Latvian_Kit\data\LATPAT_acu_camo_co.paa",
            "PB_Latvian_Kit\data\LATPAT_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_co.paa"
        };
	};
	class PB_LATPAT_U_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		picture = "\PB_Main\ui\LAT\PB_latpat_u_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Latvian_Kit\data\LATPAT_U_01_CO.paa"};
	};
	class PB_LATPAT_U_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		picture = "\PB_Main\ui\LAT\PB_latpat_u_r_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Latvian_Kit\data\LATPAT_U_01_CO.paa"};
	};
	class PB_LATPAT_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\ui\LAT\PB_latpat_gora_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Latvian_Kit\data\LATPAT_Fatigues_co.paa"};
	};
	class PB_LATPAT_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\ui\LAT\PB_latpat_gora_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Latvian_Kit\data\LATPAT_Fatigues_co.paa"};
	};
	class PB_LATPAT_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\ui\LAT\PB_latpat_gorag_CA.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Latvian_Kit\data\LATPAT_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
	class PB_LATPAT_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\ui\LAT\PB_latpat_gorag_ru_CA.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Latvian_Kit\data\LATPAT_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
///BACKPACKS////

	class PB_COMBAT_LATPAT: B_AssaultPack_Base
	{
		scope = 2;
		author = "Kartsa (LATPAT)";
		scopeCurator = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName = "Combat Pack";
		picture = "\PB_Main\ui\LAT\PB_combat_latpat_CA.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_Latvian_Kit\Data\LATPAT_combat_CO.paa"};
		maximumLoad = 140;
		mass = 20;
	};
	class PB_COMBAT_MED_LATPAT: B_AssaultPack_Base
	{
		scope = 2;
		author = "Kartsa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName = "Combat Pack (LATPAT/Medic)";
		picture = "\PB_Main\ui\LAT\PB_combat_med_latpat_CA.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_Latvian_Kit\Data\LATPAT_combat_med_CO.paa"};
		maximumLoad = 180;
		mass = 40;
	};
	class PB_CARRYALL_LATPAT: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Carryall Backpack (LATPAT)";
		picture = "\PB_Main\ui\LAT\PB_carryall_latpat_CA.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"PB_Latvian_Kit\data\LATPAT_CB_co.paa"};	
		maximumLoad = 320;
		mass = 70;
	};
	class PB_Radiobag_LATPAT: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Radiobag (LATPAT)";
		picture = "\PB_Main\ui\LAT\PB_radiobag_latpat_CA.paa";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_Latvian_Kit\data\LATPAT_RB_CO.paa"};	
		maximumLoad = 160;
		mass = 70;
	};
};
class cfgWeapons
{
/////INHERILATPATCE////
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

	class PB_LATPAT_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (LATPAT)";
		picture = "\PB_Main\ui\LAT\PB_latpat_gora_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_LATPAT_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_LATPAT_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (LATPAT/Rolled-Up)";
		picture = "\PB_Main\ui\LAT\PB_latpat_gora_ru_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_LATPAT_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_LATPAT_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (LATPAT)";
		picture = "\PB_Main\ui\LAT\PB_latpat_gorag_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_LATPAT_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_LATPAT_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (LATPAT/Rolled-Up)";
		picture = "\PB_Main\ui\LAT\PB_latpat_gorag_ru_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_LATPAT_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_LATPAT_ACU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Combat Uniform (LATPAT)";
		picture = "\PB_Main\ui\LAT\PB_latpat_acu_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_LATPAT_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_LATPAT_ACU_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Combat Uniform (LATPAT/Rolled-Up)";
		picture = "\PB_Main\ui\LAT\PB_latpat_acu_r_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_LATPAT_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_LATPAT_U: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "Combat Fatigues (LATPAT)";
		picture = "\PB_Main\ui\LAT\PB_latpat_u_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_LATPAT_U_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_LATPAT_U_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "Combat Fatigues (LATPAT/Rolled-Up)";
		picture = "\PB_Main\ui\LAT\PB_latpat_u_r_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_LATPAT_U_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
///HATS///

	class PB_LATPAT_Beanie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Beanie (LATPAT)";
		picture = "\PB_Main\ui\LAT\PB_latpat_beanie_CA.paa";
		model = "\A3\Characters_F\Common\woolhat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Latvian_Kit\data\LATPAT_beanie.paa"};

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
	class PB_LATPAT_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (LATPAT)";
		picture = "\PB_Main\ui\LAT\PB_latpat_boonie_CA.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Latvian_Kit\data\LATPAT_boonie.paa"};
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
	class PB_LATPAT_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Military Cap (LATPAT)";
		picture = "\PB_Main\ui\LAT\PB_latpat_cap_CA.paa";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Latvian_Kit\Data\LATPAT_cap.paa"};
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

	class PB_LATPAT_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\ui\LAT\PB_latpat_h_CA.paa";
		displayName = "Helmet (LATPAT)";
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
		hiddenSelectionsTextures[] = {"\PB_Latvian_Kit\data\LATPAT_LWH_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Latvian_Kit\data\LATPAT_LWH_co.paa"};
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
	class PB_LATPAT_H_ESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\ui\LAT\PB_latpat_h_ess_CA.paa";
		displayName = "Helmet (LATPAT/ESS)";
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
		hiddenSelectionsTextures[] = {"\PB_Latvian_Kit\data\LATPAT_LWH_CO.paa","\PB_Latvian_Kit\data\LATPAT_LWH_ACC_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 42;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Latvian_Kit\data\LATPAT_LWH_CO.paa","\PB_Latvian_Kit\data\LATPAT_LWH_ACC_CO.paa"};
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
	class PB_LATPAT_H_HESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\ui\LAT\PB_latpat_h_hess_CA.paa";
		displayName = "Helmet (LATPAT/Headset/ESS)";
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
		hiddenSelectionsTextures[] = {"\PB_Latvian_Kit\data\LATPAT_LWH_CO.paa","\PB_Latvian_Kit\data\LATPAT_LWH_ACC_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 43;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Latvian_Kit\data\LATPAT_LWH_CO.paa","\PB_Latvian_Kit\data\LATPAT_LWH_ACC_CO.paa"};
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
///VESTS///
	
	class PB_LATPAT_TST: Vest_Camo_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\LAT\PB_latpat_tst_CA.paa";
		scope = 2;
		displayName = "Vest (LATPAT)";
		model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_AK01.p3d";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"PB_Latvian_Kit\data\LATPAT_6SH117_co.paa","PB_Latvian_Kit\data\LATPAT_POUCHES_117.paa","PB_Latvian_Kit\data\LATPAT_POUCHES_118.paa"};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_AK01.p3d";
			containerClass = "Supply80";
			mass = 55;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
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
	class PB_LATPAT_TST_AR: Vest_Camo_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\LAT\PB_latpat_tst_ar_CA.paa";
		scope = 2;
		displayName = "Vest (LATPAT/AR)";
		model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_RPK";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"PB_Latvian_Kit\data\LATPAT_6SH117_co.paa","PB_Latvian_Kit\data\LATPAT_POUCHES_117.paa","PB_Latvian_Kit\data\LATPAT_POUCHES_118.paa"};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			uniformModel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_RPK";
			containerClass = "Supply100";
			mass = 65;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
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
	class PB_LATPAT_TST_GRE: Vest_Camo_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\LAT\PB_latpat_tst_gre_CA.paa";
		scope = 2;
		displayName = "Vest (LATPAT/Grenadier)";
		model = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_VOG";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"PB_Latvian_Kit\data\LATPAT_6SH117_co.paa","PB_Latvian_Kit\data\LATPAT_POUCHES_117.paa","PB_Latvian_Kit\data\LATPAT_POUCHES_118.paa"};
		descriptionShort = "No Armor";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			uniformmodel = "rhsafrf\addons\rhs_infantry3\ratnik\rhs_emr_6sh117_VOG";
			containerClass = "Supply110";
			mass = 85;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
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
};