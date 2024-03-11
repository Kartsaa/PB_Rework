////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 12 17:20:40 2023 : 'file' last modified on Mon Nov 09 00:32:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_Universal_Kit
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
			"PB_M_Vests",
			"PB_British_Kit"
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
	class B_Bergen_Base_F;
///UNIS///
	class PB_Green_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\Green_Fatigues_co.paa"};
	};
	class PB_Green_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\Green_Fatigues_co.paa"};
	};
	class PB_Green_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\Green_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
	class PB_Green_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\Green_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
	
	class PB_Green_JP_B: B_Soldier_base_F
	{
		author = "kartsa";
		scope = 1;
		model="\A3\characters_F\Common\pilot_f.p3d";
		picture = "\PB_Main\ui\uniform_test.paa";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"PB_Universal_Kit\data\GR_JET_PILOT_CO.paa"
		};
	};
	class PB_Green_HP_B: B_Soldier_base_F
	{
		scope = 2;
		author = "kartsa";
		model = "\a3\Characters_F_Enoch\Uniforms\I_E_Coveralls_01_F.p3d";
		picture = "\PB_Main\ui\uniform_test.paa";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\GR_COVERALLS_CO.paa","a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa","a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"};
	};
///BPS///
	class PB_CARRYALL_GREEN: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[GREEN] Carryall Backpack";
		picture = "PB_Main\ui\kitbag_test.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\green_carryall_co.paa"};	
		maximumLoad = 320;
		mass = 70;
	};
	class PB_BERGEN_Green: B_Bergen_Base_F
	{
		scope = 2;
		author = "Kartsa";
		displayname = "[GREEN] Bergen Backpack";
		scopeCurator = 2;
		picture = "PB_Main\ui\kitbag_test.paa";
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\GREEN_bergen_co.paa"};
	};
	class PB_Kitbag_GREEN: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[GREEN] Kitbag";
		picture = "PB_Main\ui\kitbag_test.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\GREEN_KB_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_Radiobag_GREEN: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[GREEN] Radiobag";
		picture = "PB_Main\ui\Contact_LR.paa";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\GREEN_RB_CO.paa"};	
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
	class PB_Green_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[Green] Field Shirt";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_Green_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_Green_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[Green] Field Shirt (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_Green_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_Green_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[Green] Field Shirt with Gloves";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_Green_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_Green_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[Green] Field Shirt with Gloves (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_Green_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_Green_JP: Uniform_Base
	{
		author="Kartsa";
		scope=2;
		displayName="[GREEN] Jet Pilot Uniform";
		picture="PB_Main\ui\Uniform_test.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PB_Green_JP_B";
			containerClass="Supply40";
			mass=40;
		};
	};
	class PB_Green_HP: Uniform_Base
	{
		author="Kartsa";
		scope=2;
		displayName="[GREEN] Heli Pilot Uniform";
		picture="PB_Main\ui\Uniform_test.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PB_Green_HP_B";
			containerClass="Supply40";
			mass=40;
		};
	};
///VESTS///
	class PB_vest_spc_radio_TAN: Vest_Camo_Base
	{
		scope = 2;
		author = "Jakx2210 (Caboose), Kartsa";
		displayName = "[TAN] SPC Vest (Rifleman w/Radio)";
		picture = "\PB_Main\ui\vest_test.paa";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\TAN_spc_vest_base.paa","PB_Universal_Kit\data\TAN_spc_vest_pouches.paa","PB_Universal_Kit\data\TAN_spc_vest_radio.paa","PB_Universal_Kit\data\TAN_spc_vest_camelb.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_squadleader";
			containerClass = "Supply110";
			mass = 100;
			allowedSlots[] = {"901"};
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
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
	class PB_vest_spc_TAN: Vest_Camo_Base
	{
		scope = 2;
		author = "Jakx2210 (Caboose), Kartsa";
		displayName = "[TAN] SPC Vest";
		picture = "\PB_Main\ui\vest_test.paa";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\TAN_spc_vest_base.paa","PB_Universal_Kit\data\TAN_spc_vest_pouches.paa","PB_Universal_Kit\data\TAN_spc_vest_radio.paa","PB_Universal_Kit\data\TAN_spc_vest_camelb.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc";
			containerClass = "Supply0";
			mass = 80;
			allowedSlots[] = {"901"};
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
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
	class PB_vest_spc_crewman_TAN: Vest_Camo_Base
	{
		scope = 2;
		author = "Jakx2210 (Caboose), Kartsa";
		displayName = "[TAN] SPC Vest (Crewman)";
		picture = "\PB_Main\ui\vest_test.paa";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_crewman";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\TAN_spc_vest_base.paa","PB_Universal_Kit\data\TAN_spc_vest_pouches.paa","PB_Universal_Kit\data\TAN_spc_vest_radio.paa","PB_Universal_Kit\data\TAN_spc_vest_camelb.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_crewman";
			containerClass = "Supply31";
			mass = 80;
			allowedSlots[] = {"901"};
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
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
	class PB_vest_spc_rifleman_TAN: Vest_Camo_Base
	{
		scope = 2;
		author = "Jakx2210 (Caboose), Kartsa";
		displayName = "[TAN] SPC Vest (Rifleman)";
		picture = "\PB_Main\ui\vest_test.paa";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_light";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\TAN_spc_vest_base.paa","PB_Universal_Kit\data\TAN_spc_vest_pouches.paa","PB_Universal_Kit\data\TAN_spc_vest_radio.paa","PB_Universal_Kit\data\TAN_spc_vest_camelb.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_spc_light";
			containerClass = "Supply93";
			mass = 90;
			allowedSlots[] = {"901"};
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
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
///HELMETS///
	class PB_GRN_mich_bare: Helmet_Base
	{
		author = "$STR_RHSUSF_AUTHOR_FULL";
		dlc = "RHS_USAF";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_bare_ca.paa";
		scope = 2;
		displayName = "[GREEN] MICH 2000";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
			"\PB_Universal_Kit\data\GRN_mich_acc_co.paa",
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
			hiddenSelections[] = {"Camo","Camo1","Camo2"};
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01";
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
	class PB_GRN_mich_bare_headset: Helmet_Base
	{
		author = "$STR_RHSUSF_AUTHOR_FULL";
		dlc = "RHS_USAF";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_bare_ca.paa";
		scope = 2;
		displayName = "[GREEN] MICH 2000 (Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_bowman";
		hiddenSelections[] = {"Camo","Camo1","Camo2", "bowman"};
		hiddenSelectionsTextures[] = 
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
			"\PB_Universal_Kit\data\GRN_mich_acc_co.paa",
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
	class PB_GRN_mich_bare_alt: Helmet_Base
	{
		author = "$STR_RHSUSF_AUTHOR_FULL";
		dlc = "RHS_USAF";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_bare_ca.paa";
		scope = 2;
		displayName = "[GREEN] MICH 2000 (Alt)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_alt";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
			"\PB_Universal_Kit\data\GRN_mich_acc_co.paa",
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
	class PB_GRN_mich_bare_norotos: Helmet_Base
	{
		author = "$STR_RHSUSF_AUTHOR_FULL";
		dlc = "RHS_USAF";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_bare_ca.paa";
		scope = 2;
		displayName = "[GREEN] MICH 2000 (Norotos)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
			"\PB_Universal_Kit\data\GRN_mich_acc_co.paa",
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
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1";
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
	class PB_GRN_mich_bare_norotos_headset: Helmet_Base
	{
		author = "$STR_RHSUSF_AUTHOR_FULL";
		dlc = "RHS_USAF";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_bare_ca.paa";
		scope = 2;
		displayName = "[GREEN] MICH 2000 (Norotos/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_bowman";
		hiddenSelections[] = {"Camo","Camo1","Camo2", "bowman"};
		hiddenSelectionsTextures[] = 
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
			"\PB_Universal_Kit\data\GRN_mich_acc_co.paa",
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
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_bowman";
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
	class PB_GRN_mich_bare_norotos_alt: Helmet_Base
	{
		author = "$STR_RHSUSF_AUTHOR_FULL";
		dlc = "RHS_USAF";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_bare_ca.paa";
		scope = 2;
		displayName = "[GREEN] MICH 2000 (Norotos/Alt)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
			"\PB_Universal_Kit\data\GRN_mich_acc_co.paa",
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
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt";
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
	class PB_GRN_mich_bare_norotos_alt_headset: Helmet_Base
	{
		author = "$STR_RHSUSF_AUTHOR_FULL";
		dlc = "RHS_USAF";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\headgear\rhsusf_mich_bare_ca.paa";
		scope = 2;
		displayName = "[GREEN] MICH 2000 (Norotos/Alt/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt_bowman";
		hiddenSelections[] = {"Camo","Camo1","Camo2", "bowman"};
		hiddenSelectionsTextures[] = 
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
			"\PB_Universal_Kit\data\GRN_mich_acc_co.paa",
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
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt_bowman";
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
};