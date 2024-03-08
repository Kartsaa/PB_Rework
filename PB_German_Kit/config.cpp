////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 12 17:20:40 2023 : 'file' last modified on Mon Nov 09 00:32:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_German_Kit
	{
		version = "1.1.3";
		units[] = {};
		weapons[] = {};
		requiredVersion = "1.1.3";
		requiredAddons[] = 
		{
			"rhsgref_infantry",
			"rhsusf_infantry",
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
	class PB_FLECK_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_German_Kit\data\FLECK_acu_camo_co.paa",
            "PB_German_Kit\data\FLECK_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_FLECK_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_German_Kit\data\FLECK_acu_camo_co.paa",
            "PB_German_Kit\data\FLECK_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_TROP_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_German_Kit\data\TROP_acu_camo_co.paa",
            "PB_German_Kit\data\TROP_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Khk_CO.paa"
        };
	};
	class PB_TROP_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_German_Kit\data\TROP_acu_camo_co.paa",
            "PB_German_Kit\data\TROP_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Khk_CO.paa"
        };
	};
	class PB_SCHNEE_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_German_Kit\data\SCHNEE_acu_camo_co.paa",
            "PB_German_Kit\data\SCHNEE_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_SCHNEE_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_German_Kit\data\SCHNEE_acu_camo_co.paa",
            "PB_German_Kit\data\SCHNEE_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_FLECK_JACKET_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_gloves.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\FLECK_GorkaR_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"};
	};
	class PB_FLECK_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_German_Kit\data\FLECK_Fatigues_co.paa"};
	};
	class PB_FLECK_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_German_Kit\data\FLECK_Fatigues_co.paa"};
	};
	class PB_FLECK_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		
		hiddenSelectionsTextures[] = {"\PB_German_Kit\data\FLECK_Fatigues_co.paa","PB_British_Kit\data\TacGloves_clk_CO.paa"};
	};
	class PB_FLECK_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_German_Kit\data\FLECK_Fatigues_co.paa","PB_British_Kit\data\TacGloves_clk_CO.paa"};
	};
	class PB_TROP_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_German_Kit\data\TROP_Fatigues_co.paa"};
	};
	class PB_TROP_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_German_Kit\data\TROP_Fatigues_co.paa"};
	};
	class PB_TROP_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		
		hiddenSelectionsTextures[] = {"\PB_German_Kit\data\TROP_Fatigues_co.paa","PB_British_Kit\data\TacGloves_clk_CO.paa"};
	};
	class PB_TROP_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_German_Kit\data\TROP_Fatigues_co.paa","PB_British_Kit\data\TacGloves_clk_CO.paa"};
	};
	class PB_SCHNEE_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_German_Kit\data\SCHNEE_Fatigues_co.paa"};
	};
	class PB_SCHNEE_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_German_Kit\data\SCHNEE_Fatigues_co.paa"};
	};
	class PB_SCHNEE_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		
		hiddenSelectionsTextures[] = {"\PB_German_Kit\data\SCHNEE_Fatigues_co.paa","PB_British_Kit\data\TacGloves_clk_CO.paa"};
	};
	class PB_SCHNEE_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_German_Kit\data\SCHNEE_Fatigues_co.paa","PB_British_Kit\data\TacGloves_clk_CO.paa"};
	};
	class PB_SCHNEE_JACKET_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\rhsafrf\addons\rhs_infantry2\rhs_gorka_gloves.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\SCHNEE_GorkaR_co.paa","rhsafrf\addons\rhs_infantry3\ratnik\data\gloves_co.paa"};
	};
///BACKPACKS////
	class PB_CARRYALL_FLECK: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[FLECKTARN] Carryall Backpack";
		picture = "PB_Main\ui\kitbag_test.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\FLECK_CB_CO.paa"};	
		maximumLoad = 320;
		mass = 70;
	};
	class PB_CARRYALL_TROP: PB_CARRYALL_FLECK
	{
		displayName = "[TROPENTARN] Carryall Backpack";
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\TROP_CB_CO.paa"};	
	};
	class PB_CARRYALL_SCHNEE: PB_CARRYALL_FLECK
	{
		displayName = "[SCHNEETARN] Carryall Backpack";
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\SCHNEE_CB_CO.paa"};	
	};
	class PB_Kitbag_FLECK: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[FLECKTARN] Kitbag";
		picture = "PB_Main\ui\kitbag_test.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\FLECK_KB_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_Medbag_FLECK: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[FLECKTARN] Medicbag";
		picture = "PB_Main\ui\kitbag_test.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\FLECK_KB_MED_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_Kitbag_TROP: PB_Kitbag_FLECK
	{
		displayName = "[TROPENTARN] Kitbag";
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\TROP_KB_CO.paa"};
	};
	class PB_Medbag_TROP: PB_Medbag_FLECK
	{
		displayName = "[TROPENTARN] Medbag";
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\TROP_KB_MED_CO.paa"};
	};
	class PB_Kitbag_SCHNEE: PB_Kitbag_FLECK
	{
		displayName = "[SCHNEETARN] Kitbag";
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\SCHNEE_KB_CO.paa"};
	};
	class PB_Medbag_SCHNEE: PB_Medbag_FLECK
	{
		displayName = "[SCHNEETARN] Medbag";
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\SCHNEE_KB_MED_CO.paa"};
	};
	class PB_Radiobag_FLECK: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[FLECKTARN] Radiobag";
		picture = "PB_Main\ui\Contact_LR.paa";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\FLECK_RB_CO.paa"};	
		maximumLoad = 160;
		mass = 70;
	};
	class PB_Radiobag_TROP: PB_Radiobag_FLECK
	{
		displayName = "[TROPENTARN] Radiobag";
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\TROP_RB_CO.paa"};	
	};
	class PB_Radiobag_SCHNEE: PB_Radiobag_FLECK
	{
		displayName = "[SCHNEETARN] Radiobag";
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\SCHNEE_RB_CO.paa"};	
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
	class PB_FLECK_ACU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[FLECKTARN] Combat Uniform";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_FLECK_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_FLECK_ACU_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[FLECKTARN] Combat Uniform (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_FLECK_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_TROP_ACU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[TROPENTARN] Combat Uniform";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_TROP_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_TROP_ACU_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[TROPENTARN] Combat Uniform (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_TROP_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_SCHNEE_ACU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[TROPENTARN] Combat Uniform";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_SCHNEE_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_SCHNEE_ACU_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[SCHNEETARN] Combat Uniform (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_SCHNEE_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_FLECK_JACKET: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[FLECKTARN] Smock";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_FLECK_JACKET_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_FLECK_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[FLECKTARN] Fatigues";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_FLECK_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_FLECK_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[FLECKTARN] Fatigues (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_FLECK_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_FLECK_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[FLECKTARN] Fatigues with Gloves";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_FLECK_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_FLECK_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[FLECKTARN] Fatigues with Gloves (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_FLECK_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_TROP_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[TROPENTARN] Fatigues";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_TROP_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_TROP_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[TROPENTARN] Fatigues (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_TROP_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_TROP_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[TROPENTARN] Fatigues with Gloves";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_TROP_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_TROP_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[TROPENTARN] Fatigues with Gloves (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_TROP_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_SCHNEE_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[SCHNEENTARN] Fatigues";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_SCHNEE_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_SCHNEE_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[SCHNEENTARN] Fatigues (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_SCHNEE_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_SCHNEE_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[SCHNEENTARN] Fatigues with Gloves";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_SCHNEE_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_SCHNEE_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[SCHNEENTARN] Fatigues with Gloves (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_SCHNEE_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_SCHNEE_JACKET: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[SCHNEETARN] Smock";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_SCHNEE_JACKET_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
///VESTS///
	class PB_FLECK_Modular_Lite: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[FLECKTARN] Modular Carrier Lite";
		picture = "\PB_Main\ui\vest_test.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\FLECK_Modular.paa"};
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
	class PB_FLECK_Modular: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[FLECKTARN] Modular Carrier Vest";
		picture = "\PB_Main\ui\vest_test.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\FLECK_Modular.paa"};
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
	class PB_FLECK_CARRIERLITE_CO: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_Main\ui\vest_test.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		displayName = "[FLECKTARN] Carrier Lite";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\FLECK_CARRIERLITE_CO.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_German_Kit\data\FLECK_CARRIERLITE_CO.paa"};
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
	class PB_FLECK_Carrier_Rig: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_Main\ui\vest_test.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		displayName = "[FLECKTARN] Carrier Rig";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\FLECK_CARRIERLITE_CO.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_German_Kit\data\FLECK_CARRIERLITE_CO.paa"};
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
	class PB_TROP_Modular_Lite: PB_FLECK_Modular_Lite
	{
		displayName = "[TROPENTARN] Modular Carrier Lite";
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\TROP_Modular.paa"};
	};
	class PB_TROP_Modular: PB_FLECK_Modular
	{
		displayName = "[TROPENTARN] Modular Carrier Vest";
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\TROP_Modular.paa"};
	};
	class PB_TROP_CARRIERLITE_CO: PB_FLECK_CARRIERLITE_CO
	{
		displayName = "[TROPENTARN] Carrier Lite";
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\TROP_CARRIERLITE_CO.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_German_Kit\data\TROP_CARRIERLITE_CO.paa"};
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
	class PB_TROP_Carrier_Rig: PB_FLECK_Carrier_Rig
	{
		displayName = "[TROPENTARN] Carrier Rig";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\TROP_CARRIERLITE_CO.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_German_Kit\data\TROP_CARRIERLITE_CO.paa"};
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
///HELMETS///
	class PB_FLECK_FAST: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[FLECKTARN] Ops Core FAST";
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
			"\PB_German_Kit\data\FLECK_opscore_co.paa",
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
	class PB_TROP_FAST: PB_FLECK_FAST
	{
		displayName = "[TROPENTARN] Ops Core FAST";
		hiddenSelectionsTextures[] = 
		{
			"\PB_German_Kit\data\TROP_opscore_co.paa",
			"",
			"",
			"",
			"",
			""
		};
	};
	class PB_SCHNEE_FAST: PB_FLECK_FAST
	{
		displayName = "[SCHNEETARN] Ops Core FAST";
		hiddenSelectionsTextures[] = 
		{
			"\PB_German_Kit\data\SCHNEE_opscore_co.paa",
			"",
			"",
			"",
			"",
			""
		};
	};
	class PB_FLECK_FAST_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[FLECKTARN] Ops Score FAST (Headset)";
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
			"\PB_German_Kit\data\FLECK_opscore_co.paa",
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
	class PB_TROP_FAST_H: PB_FLECK_FAST_H
	{
		displayName = "[TROPENTARN] Ops Core FAST";
		hiddenSelectionsTextures[] = 
		{
			"\PB_German_Kit\data\TROP_opscore_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class PB_SCHNEE_FAST_H: PB_FLECK_FAST_H
	{
		displayName = "[SCHNEETARN] Ops Core FAST";
		hiddenSelectionsTextures[] = 
		{
			"\PB_German_Kit\data\SCHNEE_opscore_co.paa",
			"\rhsusf\addons\rhsusf_infantry2\gear\head\opscore\data\comtac_fg_co.paa",
			"",
			"",
			"",
			""
		};
	};
	class PB_FLECK_TCH: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[FLECKTARN] Combat Helmet";
		picture = "\PB_Main\ui\helmet_test.paa";
		model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_F.p3d";
		hiddenSelections[] = {"camo"};
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
		hiddenSelectionsTextures[] = {
			"PB_German_Kit\data\FLECK_tch_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_F.p3d";
			hiddenSelections[] = {"camo"};
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
	class PB_FLECK_TCH_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[FLECKTARN] Combat Helmet (Headset)";
		picture = "\PB_Main\ui\helmet_test.paa";
		model = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_headset_F.p3d";
		hiddenSelections[] = {"camo"};
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
		hiddenSelectionsTextures[] = {
			"PB_German_Kit\data\FLECK_tch_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass = 35;
			uniformModel = "\A3\Characters_F_Enoch\Headgear\H_HelmetHBK_01_headset_F.p3d";
			hiddenSelections[] = {"camo"};
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
	class PB_TROP_TCH: PB_FLECK_TCH
	{
		displayName = "[TROPENTARN] Combat Helmet";
		hiddenSelectionsTextures[] = {
			"PB_German_Kit\data\TROP_tch_co.paa"
		};
	};
	class PB_TROP_TCH_H: PB_FLECK_TCH_H
	{
		displayName = "[TROPENTARN] Combat Helmet (Headset)";
		hiddenSelectionsTextures[] = {
			"PB_German_Kit\data\FLECK_tch_co.paa"
		};
	};
	class PB_SCHNEE_TCH: PB_FLECK_TCH
	{
		displayName = "[SCHNEETARN] Combat Helmet";
		hiddenSelectionsTextures[] = {
			"PB_German_Kit\data\SCHNEE_tch_co.paa"
		};
	};
	class PB_SCHNEE_TCH_H: PB_FLECK_TCH_H
	{
		displayName = "[SCHNEETARN] Combat Helmet (Headset)";
		hiddenSelectionsTextures[] = {
			"PB_German_Kit\data\SCHNEE_tch_co.paa"
		};
	};
	class PB_FLECK_M92: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[FLECKTARN] M92 Helmet";
		picture = "\PB_Main\ui\helmet_test.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\PB_German_Kit\data\FLECK_M92_co.paa"
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
			mass = 30;
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[] =
			{
				3,
				1
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
	class PB_TROP_M92: PB_FLECK_M92
	{
		displayName = "[TROPENTARN] M92 Helmet";
		hiddenSelectionsTextures[]=
		{
			"\PB_German_Kit\data\TROP_M92_co.paa"
		};
	};
	class PB_SCHNEE_M92: PB_FLECK_M92
	{
		displayName = "[SCHNEETARN] M92 Helmet";
		hiddenSelectionsTextures[]=
		{
			"\PB_German_Kit\data\SCHNEE_M92_co.paa"
		};
	};
///HATS///
	class PB_FLECK_Beanie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[FLECKTARN] Beanie";
		weaponPoolAvailable = 1;
		picture = "\PB_Main\ui\cap_test.paa";
		model = "\A3\Characters_F\Common\woolhat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\FLECK_beanie.paa"};

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
	class PB_SCHNEE_Beanie: PB_FLECK_Beanie
	{
		displayName = "[SCHNEETARN] Beanie";
		hiddenSelectionsTextures[] = {"PB_German_Kit\data\SCHNEE_beanie.paa"};
	};
	class PB_FLECK_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[FLECKTARN] Military Cap";
		picture = "\PB_Main\UI\cap_test.paa";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_German_Kit\Data\FLECK_cap.paa"};
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
	class PB_FLECK_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[FLECKTARN] Boonie Hat";
		picture = "\PB_Main\UI\cap_test.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_German_Kit\Data\FLECK_boonie.paa"};
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
	class PB_TROP_Cap: PB_FLECK_Cap
	{
		displayName = "[TROPENTARN] Military Cap";
		hiddenSelectionsTextures[] = {"\PB_German_Kit\Data\TROP_cap.paa"};
	};
	class PB_TROP_Boonie: PB_FLECK_Boonie
	{
		displayName = "[TROPENTARN] Boonie Hat";
		hiddenSelectionsTextures[] = {"\PB_German_Kit\Data\TROP_boonie.paa"};
	};
};