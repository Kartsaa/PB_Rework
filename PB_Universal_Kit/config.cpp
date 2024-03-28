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
	class PB_GREEN_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "PB_Main\ui\UNI\PB_GREEN_GORA_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\GREEN_Fatigues_co.paa"};
	};
	class PB_GREEN_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "PB_Main\ui\UNI\PB_GREEN_GORA_RU_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\GREEN_Fatigues_co.paa"};
	};
	class PB_GREEN_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "PB_Main\ui\UNI\PB_GREEN_GORAG_CA.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\GREEN_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
	class PB_GREEN_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "PB_Main\ui\UNI\PB_GREEN_GORAG_RU_CA.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\GREEN_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
	class PB_GREEN_JP_B: B_Soldier_base_F
	{
		author = "Kartsa";
		scope = 1;
		model="\A3\characters_F\Common\pilot_f.p3d";
		picture = "PB_Main\ui\UNI\PB_GREEN_JP_CA.paa";
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
	class PB_GREEN_HP_B: B_Soldier_base_F
	{
		scope = 2;
		author = "Kartsa";
		model = "\a3\Characters_F_Enoch\Uniforms\I_E_Coveralls_01_F.p3d";
		picture = "PB_Main\ui\UNI\PB_GREEN_HP_CA.paa";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\GR_COVERALLS_CO.paa","a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa","a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"};
	};
	class PB_BLACK_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_MAIN\ui\UNI\PB_black_acu_CA.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Universal_Kit\data\BLACK_acu_camo_co.paa",
            "PB_Universal_Kit\data\BLACK_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_clk_CO.paa"
        };
	};
	class PB_BLACK_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";
		picture = "\PB_MAIN\ui\UNI\PB_black_acu_r_CA.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Universal_Kit\data\BLACK_acu_camo_co.paa",
            "PB_Universal_Kit\data\BLACK_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_clk_CO.paa"
        };
	};
	class PB_MULTICAM_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_MAIN\ui\UNI\PB_multicam_acu_CA.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Universal_Kit\data\MULTICAM_acu_camo_co.paa",
            "PB_Universal_Kit\data\MULTICAM_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_MULTICAM_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";
		picture = "\PB_MAIN\ui\UNI\PB_multicam_acu_r_CA.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Universal_Kit\data\MULTICAM_acu_camo_co.paa",
            "PB_Universal_Kit\data\MULTICAM_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_MULTICAM_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_GORA_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\MULTICAM_Fatigues_co.paa"};
	};
	class PB_MULTICAM_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_GORA_RU_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\MULTICAM_Fatigues_co.paa"};
	};
	class PB_MULTICAM_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_GORAG_CA.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\MULTICAM_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
	class PB_MULTICAM_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_GORAG_RU_CA.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\MULTICAM_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
///BPS///
	class PB_CARRYALL_GREEN: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Carryall Backpack (GREEN)";
		picture = "PB_Main\ui\UNI\PB_CARRYALL_GREEN_CA.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\GREEN_carryall_co.paa"};	
		maximumLoad = 320;
		mass = 70;
	};
	class PB_BERGEN_GREEN: B_Bergen_Base_F
	{
		scope = 2;
		author = "Kartsa";
		displayname = "Bergen Backpack (GREEN)";
		scopeCurator = 2;
		picture = "PB_Main\ui\UNI\PB_BERGEN_GREEN_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\GREEN_bergen_co.paa"};
	};
	class PB_Kitbag_GREEN: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Kitbag (GREEN)";
		picture = "PB_Main\ui\UNI\PB_KITBAG_GREEN_CA.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\GREEN_KB_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_Radiobag_GREEN: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Radiobag (GREEN)";
		picture = "PB_Main\ui\UNI\PB_RADIOBAG_GREEN_CA.paa";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\GREEN_RB_CO.paa"};	
		maximumLoad = 160;
		mass = 70;
	};
	class PB_CARRYALL_MULTICAM: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Carryall Backpack (MULTICAM)";
		picture = "\PB_MAIN\ui\UNI\PB_carryall_multicam_CA.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\MULTICAM_cb_co.paa"};	
		maximumLoad = 320;
		mass = 70;
	};
	class PB_Kitbag_MULTICAM: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Kitbag (MULTICAM)";
		picture = "\PB_MAIN\ui\UNI\PB_kitbag_multicam_CA.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\MULTICAM_KB_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_Radiobag_MULTICAM: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Radiobag (MULTICAM)";
		picture = "\PB_MAIN\ui\UNI\PB_radiobag_multicam_CA.paa";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\MULTICAM_RB_CO.paa"};	
		maximumLoad = 160;
		mass = 70;
	};
	class PB_COMBATPB_MULTICAM: B_AssaultPack_Base
	{
		scope = 2;
		author = "Kartsa";
		scopeCurator = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName = "Combat Pack (MULTICAM)";
		picture = "\PB_MAIN\ui\UNI\PB_combatpb_multicam_CA.paa";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\Data\MULTICAM_ASS_BP_CO.paa"};
		maximumLoad = 140;
		mass = 20;
	};
	class PB_EAGLE_MULTICAM: B_AssaultPack_Base
	{
		picture = "\PB_MAIN\ui\UNI\PB_eagle_multicam_CA.paa";
		dlc = "RHS_USAF";
		scope = 2;
		author = "Kartsa";
		model = "\rhsusf\addons\rhsusf_infantry\gear\backpacks\rhsusf_eagleaIII";
		displayName = "Backpack (MULTICAM)";
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\MULTICAM_e3_co.paa"};
		maximumLoad = 180;
		mass = 45;
	};
	class PB_EAGLE_MED_MULTICAM: B_AssaultPack_Base
	{
		picture = "\PB_MAIN\ui\UNI\PB_eagle_med_multicam_CA.paa";
		dlc = "RHS_USAF";
		scope = 2;
		author = "Kartsa";
		model = "\rhsusf\addons\rhsusf_infantry\gear\backpacks\rhsusf_eagleaIII";
		displayName = "Medic Backpack (MULTICAM)";
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\MULTICAM_e3_med_co.paa"};
		maximumLoad = 220;
		mass = 65;
	};
	class PB_ASSAULT_MED_GREEN: B_AssaultPack_Base
	{
		scope = 2;
		author = "Kartsa";
		scopeCurator = 2;
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName = "Combat Pack (GREEN)";
		picture = "\PB_MAIN\UI\UNI\PB_ASSAULT_MED_GREEN_ca.PAA";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\Data\od_assault_co.paa"};
		maximumLoad = 140;
		mass = 20;
	};
	class PB_ASSAULT_GREEN: B_AssaultPack_Base
	{
		scope = 2;
		author = "Kartsa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		displayName = "Combat Pack (GREEN/Medic)";
		picture = "\PB_MAIN\UI\UNI\PB_ASSAULT_GREEN_CA.PAA";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\Data\od_assault_med_co.paa"};
		maximumLoad = 180;
		mass = 40;
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
	class PB_GREEN_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Field Shirt (GREEN)";
		picture = "PB_Main\ui\UNI\PB_GREEN_GORA_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_GREEN_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_GREEN_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Field Shirt (GREEN/Rolled-Up)";
		picture = "PB_Main\ui\UNI\PB_GREEN_GORA_RU_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_GREEN_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_GREEN_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Field Shirt with Gloves (GREEN)";
		picture = "PB_Main\ui\UNI\PB_GREEN_GORAG_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_GREEN_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_GREEN_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Field Shirt with Gloves (GREEN/Rolled-Up)";
		picture = "PB_Main\ui\UNI\PB_GREEN_GORAG_RU_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_GREEN_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_GREEN_JP: Uniform_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Jet Pilot Uniform (GREEN)";
		picture = "PB_Main\ui\UNI\PB_GREEN_JP_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PB_GREEN_JP_B";
			containerClass="Supply40";
			mass=40;
		};
	};
	class PB_GREEN_HP: Uniform_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Heli Pilot Uniform (GREEN)";
		picture = "PB_Main\ui\UNI\PB_GREEN_HP_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="PB_GREEN_HP_B";
			containerClass="Supply40";
			mass=40;
		};
	};
	class PB_BLACK_ACU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Combat Uniform (BLACK)";
		picture = "\PB_MAIN\ui\UNI\PB_black_acu_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_BLACK_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_BLACK_ACU_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Combat Uniform (BLACK/Rolled-Up)";
		picture = "\PB_MAIN\ui\UNI\PB_black_acu_r_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_BLACK_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MULTICAM_ACU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Combat Uniform (MULTICAM)";
		picture = "\PB_MAIN\ui\UNI\PB_multicam_acu_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MULTICAM_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MULTICAM_ACU_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Combat Uniform (MULTICAM/Rolled-Up)";
		picture = "\PB_MAIN\ui\UNI\PB_multicam_acu_r_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MULTICAM_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MULTICAM_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (MULTICAM)";
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_GORA_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MULTICAM_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MULTICAM_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (MULTICAM/Rolled-Up)";
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_GORA_RU_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MULTICAM_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MULTICAM_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (MULTICAM)";
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_GORAG_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MULTICAM_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MULTICAM_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (MULTICAM/Rolled-Up)";
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_GORAG_RU_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MULTICAM_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
///VESTS///
	class PB_vest_spc_radio_TAN: Vest_Camo_Base
	{
		scope = 2;
		author = "Jakx2210 (Caboose), Kartsa";
		displayName = "SPC Vest (TAN/Rifleman w/Radio)";
		picture = "PB_Main\ui\UNI\PB_VEST_SPC_RADIO_TAN_CA.paa";
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
		displayName = "SPC Vest (TAN)";
		picture = "PB_Main\ui\UNI\PB_VEST_SPC_TAN_CA.paa";
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
		displayName = "SPC Vest (TAN/Crewman)";
		picture = "PB_Main\ui\UNI\PB_VEST_SPC_CREWMAN_TAN_CA.paa";
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
		displayName = "SPC Vest (TAN/Rifleman)";
		picture = "PB_Main\ui\UNI\PB_VEST_SPC_RIFLEMAN_TAN_CA.paa";
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
	class PB_TAN_Modular_Lite: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Modular Carrier Lite (TAN)";
		picture = "PB_Main\ui\UNI\PB_TAN_MODULAR_LITE_CA.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\TAN_Modular.paa"};
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
	class PB_TAN_Modular: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Modular Carrier Vest (TAN)";
		picture = "PB_Main\ui\UNI\PB_TAN_MODULAR_CA.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\TAN_Modular.paa"};
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
	class PB_TAN_Carrier_Lite: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "PB_Main\ui\UNI\PB_TAN_CARRIER_LITE_CA.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		displayName = "Carrier Lite (TAN)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\TAN_carrierlite_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\TAN_carrierlite_co.paa"};
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
	class PB_TAN_Carrier_Rig: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "PB_Main\ui\UNI\PB_TAN_CARRIER_RIG_CA.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		displayName = "Carrier Rig (TAN)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\TAN_carrierlite_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\TAN_carrierlite_co.paa"};
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
	class PB_TAN_GL: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Modular Carrier GL (TAN)";
		picture = "PB_Main\ui\UNI\PB_M04_TAN_GL_CA.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\Tan_Modular.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
			containerClass = "Supply60";
			mass = 80;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\Tan_Modular.paa"};
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
	class PB_BLACK_Modular_Lite: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Modular Carrier Lite (BLACK)";
		picture = "\PB_MAIN\ui\UNI\PB_black_modular_lite_CA.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\BLACK_Modular.paa"};
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
	class PB_BLACK_Modular: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Modular Carrier Vest (BLACK)";
		picture = "\PB_MAIN\ui\UNI\PB_black_modular_CA.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\BLACK_Modular.paa"};
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
	class PB_BLACK_GL: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Modular Carrier GL (BLACK)";
		picture = "\PB_MAIN\ui\UNI\PB_black_gl_CA.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\BLACK_Modular.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
			containerClass = "Supply60";
			mass = 80;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\BLACK_Modular.paa"};
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
	class PB_MULTICAM_Modular_Lite: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Modular Carrier Lite (MULTICAM)";
		picture = "\PB_MAIN\ui\UNI\PB_multicam_modular_lite_CA.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\MULTICAM_Modular.paa"};
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
	class PB_MULTICAM_Modular: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Modular Carrier Vest (MULTICAM)";
		picture = "\PB_MAIN\ui\UNI\PB_multicam_modular_lite_CA.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\MULTICAM_Modular.paa"};
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
	class PB_MULTICAM_GL: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Modular Carrier GL (MULTICAM)";
		picture = "\PB_MAIN\ui\UNI\PB_multicam_gl_CA.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\MULTICAM_Modular.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
			containerClass = "Supply60";
			mass = 80;
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\MULTICAM_Modular.paa"};
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
	class PB_GREEN_Modular_Lite: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Modular Carrier Lite (GREEN)";
		picture = "PB_Main\ui\UNI\PB_GREEN_MODULAR_LITE_CA.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\GREEN_Modular.paa"};
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
	class PB_GREEN_Modular: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Modular Carrier Vest (GREEN)";
		picture = "PB_Main\ui\UNI\PB_GREEN_MODULAR_CA.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\GREEN_Modular.paa"};
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
	class PB_GREEN_Carrier_Lite: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "PB_Main\ui\UNI\PB_GREEN_CARRIER_LITE_CA.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		displayName = "Carrier Lite (GREEN)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\GREEN_carrierlite_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\GREEN_carrierlite_co.paa"};
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
	class PB_GREEN_Carrier_Rig: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "PB_Main\ui\UNI\PB_GREEN_CARRIER_RIG_CA.paa";
		displayName = "Carrier Rig (GREEN)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\GREEN_carrierlite_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\GREEN_carrierlite_co.paa"};
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
	class PB_Green_M12_Vest : Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_MAIN\UI\UNI\PB_GREEN_M12_VEST_CA.PAA";
		displayName = "Vest (GREEN)";
		model = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\green_m12_vest_co.paa"};
		class ItemInfo : ItemInfo
		{
			hiddenSelections[] = {"camo"};
			uniformModel = "\rhssaf\addons\rhssaf_m_vest_m12\rhssaf_md12";
			containerClass = "Supply100";
			mass = 70;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 20;
					PassThrough = PASS_NIJ_1;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					PassThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					PassThrough = 0.2;
				};
			};
		};
	};
///HATS///
	class PB_GREEN_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Military Cap (GREEN)";
		picture = "\PB_MAIN\UI\UNI\PB_GREEN_CAP_CA.PAA";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\Data\Green_cap.paa"};
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
	class PB_MULTICAM_Beanie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Beanie (MULTCAIM)";
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_BEANIE_CA.paa";
		model = "\A3\Characters_F\Common\woolhat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Universal_Kit\data\MULTICAM_beanie.paa"};

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
	class PB_MULTICAM_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (MULTCAIM)";
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_BOONIE_CA.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\MULTICAM_boonie.paa"};
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
	class PB_MULTICAM_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Military Cap (MULTCAIM)";
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_CAP_CA.paa";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\Data\MULTICAM_cap.paa"};
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
///HELMETS///
	class PB_GRN_mich_bare: Helmet_Base
	{
		author = "$STR_RHSUSF_AUTHOR_FULL";
		dlc = "RHS_USAF";
		picture = "PB_Main\ui\UNI\PB_GRN_MICH_BARE_CA.paa";
		scope = 2;
		displayName = "MICH 2000 (LIGHT GREEN)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
			"\PB_Universal_Kit\data\Multicam_mich_acc_co.paa",
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
		picture = "PB_Main\ui\UNI\PB_GRN_MICH_BARE_HEADSET_CA.paa";
		scope = 2;
		displayName = "MICH 2000 (LIGHT GREEN/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_bowman";
		hiddenSelections[] = {"Camo","Camo1","Camo2", "bowman"};
		hiddenSelectionsTextures[] = 
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
			"\PB_Universal_Kit\data\Multicam_mich_acc_co.paa",
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
		picture = "PB_Main\ui\UNI\PB_GRN_MICH_BARE_ALT_CA.paa";
		scope = 2;
		displayName = "MICH 2000 (LIGHT GREEN/Alt)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_alt";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
			"\PB_Universal_Kit\data\Multicam_mich_acc_co.paa",
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
		picture = "PB_Main\ui\UNI\PB_GRN_MICH_BARE_NOROTOS_ALT_ca.paa";
		scope = 2;
		displayName = "MICH 2000 (LIGHT GREEN/Norotos)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
			"\PB_Universal_Kit\data\Multicam_mich_acc_co.paa",
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
		picture = "PB_Main\ui\UNI\PB_GRN_MICH_BARE_NOROTOS_HEADSET_CA.paa";
		scope = 2;
		displayName = "MICH 2000 (LIGHT GREEN/Norotos/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_bowman";
		hiddenSelections[] = {"Camo","Camo1","Camo2", "bowman"};
		hiddenSelectionsTextures[] = 
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
			"\PB_Universal_Kit\data\Multicam_mich_acc_co.paa",
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
		picture = "PB_Main\ui\UNI\PB_GRN_MICH_BARE_NOROTOS_ALT_CA.paa";
		scope = 2;
		displayName = "MICH 2000 (LIGHT GREEN/Norotos/Alt)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
			"\PB_Universal_Kit\data\Multicam_mich_acc_co.paa",
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
		picture = "PB_Main\ui\UNI\PB_GRN_MICH_BARE_NOROTOS_ALT_HEADSET_CA.paa";
		scope = 2;
		displayName = "MICH 2000 (LIGHT GREEN/Norotos/Alt/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt_bowman";
		hiddenSelections[] = {"Camo","Camo1","Camo2", "bowman"};
		hiddenSelectionsTextures[] = 
		{
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bare_mich_od_rhino_co.paa",
			"\PB_Universal_Kit\data\Multicam_mich_acc_co.paa",
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
	class PB_MULTICAM_TCH: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Combat Helmet (MULTICAM)";
		picture = "\PB_MAIN\ui\UNI\PB_multicam_tch_CA.paa";
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
			"PB_Universal_Kit\data\MULTICAM_tch_co.paa"
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
	class PB_MULTICAM_TCH_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Combat Helmet (MULTICAM/Headset)";
		picture = "\PB_MAIN\ui\UNI\PB_multicam_tch_h_CA.paa";
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
			"PB_Universal_Kit\data\MULTICAM_tch_co.paa"
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
	class PB_MULTICAM_MICH: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_MICH_CA.paa";
		scope = 2;
		displayName = "Helmet (MULTICAM)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\PB_Universal_Kit\data\MULTICAM_mich_co.paa",
			"PB_Universal_Kit\data\MULTICAM_mich_acc_co.paa",
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
	class PB_MULTICAM_MICH_ALT: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_MICH_N_ALT_CA.paa";
		scope = 2;
		displayName = "Helmet (MULTICAM/Alt)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_alt";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\PB_Universal_Kit\data\MULTICAM_mich_co.paa",
			"PB_Universal_Kit\data\MULTICAM_mich_acc_co.paa",
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
	class PB_MULTICAM_MICH_N: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_MICH_N_CA.paa";
		scope = 2;
		displayName = "Helmet (MULTICAM/Norotos)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\PB_Universal_Kit\data\MULTICAM_mich_co.paa",
			"PB_Universal_Kit\data\MULTICAM_mich_acc_co.paa",
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
	class PB_MULTICAM_MICH_N_H: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_MICH_N_H_CA.paa";
		scope = 2;
		displayName = "Helmet (MULTICAM/Norotos/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_bowman";
		hiddenSelections[] = {"Camo","Camo1","Camo2", "bowman"};
		hiddenSelectionsTextures[] = 
		{
			"PB_Universal_Kit\data\MULTICAM_mich_co.paa",
			"PB_Universal_Kit\data\MULTICAM_mich_acc_co.paa",
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
	class PB_MULTICAM_MICH_N_ALT: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_MICH_N_ALT_CA.paa";
		scope = 2;
		displayName = "Helmet (MULTICAM/Norotos/Alt)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_Universal_Kit\data\MULTICAM_mich_co.paa",
			"PB_Universal_Kit\data\MULTICAM_mich_acc_co.paa",
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
	class PB_MULTICAM_MICH_N_ALT_H: Helmet_Base
	{
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_MICH_N_ALT_CA.paa";
		scope = 0;
		displayName = "Helmet (MULTICAM/Norotos/Alt/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_arc_alt_bowman";
		hiddenSelections[] = {"Camo","Camo1","Camo2", "bowman"};
		hiddenSelectionsTextures[] = 
		{
			"PB_Universal_Kit\data\MULTICAM_mich_co.paa",
			"PB_Universal_Kit\data\MULTICAM_mich_acc_co.paa",
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
	class PB_MULTICAM_MICH_C_H_N: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_MICH_C_H_N_CA.paa";
		displayName = "Helmet (MULTICAM/Cover/Norotos)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_Universal_Kit\data\MULTICAM_mich_cover_co.paa",
			"PB_Universal_Kit\data\Multicam_mich_acc_co.paa"
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
	class PB_MULTICAM_C_H_N_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_C_H_N_H_CA.paa";
		displayName = "Helmet (MULTICAM/Cover/Norotos/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_bowman";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_Universal_Kit\data\MULTICAM_mich_cover_co.paa",
			"PB_Universal_Kit\data\Multicam_mich_acc_co.paa"
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
	class PB_MULTICAM_C_H_N_A: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\ui\UNI\PB_MULTICAM_C_H_N_A_CA.paa";
		displayName = "Helmet (MULTICAM/Cover/Norotos/ARC)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_01_nor1_arc";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_Universal_Kit\data\MULTICAM_mich_cover_co.paa",
			"PB_Universal_Kit\data\Multicam_mich_acc_co.paa"
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
	class PB_beret_Green: Helmet_Base
	{
		author = "Jakx2210 (Caboose)";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (GREEN)";
		picture = "\PB_MAIN\ui\UNI\PB_beret_green_ca.paa";
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\berets\green_beret.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 0.75;
				};
			};
		};
	};
	class PB_beret_Maroon: Helmet_Base
	{
		author = "Jakx2210 (Caboose)";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (MAROON)";
		picture = "\PB_MAIN\ui\UNI\PB_beret_maroon_ca.paa";
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\berets\maroon_beret.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 0.75;
				};
			};
		};
	};
	class PB_beret_Red: Helmet_Base
	{
		author = "Jakx2210 (Caboose)";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (RED)";
		picture = "\PB_MAIN\ui\UNI\PB_beret_red_ca.paa";
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\berets\red_beret.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 0.75;
				};
			};
		};
	};
	class PB_beret_ZOPS: Helmet_Base
	{
		author = "Jakx2210 (Caboose)";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Beret (ZOPS)";
		picture = "\PB_MAIN\ui\UNI\PB_beret_zops_ca.paa";
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\berets\beret_zops.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 0;
					passThrough = 0.75;
				};
			};
		};
	};
};
class CfgGlasses
{
	class None;
	class PB_Bala_GR: None
	{
		author = "Kartsa, OokamiJamie";
		displayname = "Balaclava (GREEN)";
		model = "\PB_M_Headgear\JBala\jam_sov_balaclava.p3d";
		hiddenselections[] = {"camo"};
		hiddenselectionstextures[] = {"\PB_Universal_Kit\data\bala\bala_GR_co.paa"};
		picture = "\PB_MAIN\ui\UNI\PB_bala_gr_CA.paa";
		identityTypes[] =
		{
			"NoGlasses",0, "G_NATO_default",300, "G_NATO_casual",0, "G_NATO_pilot",0, "G_NATO_recon",50, "G_NATO_SF",300, "G_NATO_sniper",0,
			"G_NATO_diver",0, "G_IRAN_default",0, "G_IRAN_diver",0, "G_GUERIL_default",0, "G_HAF_default",50, "G_CIVIL_female",0, "G_CIVIL_male",0
		};
		mass = 4;
		mode = 4;
	};
	class PB_Bala_W: PB_Bala_GR
	{
		displayname = "Balaclava (WINTER)";
		hiddenselectionstextures[] = {"\PB_Universal_Kit\data\bala\bala_W_co.paa"};
		picture = "\PB_MAIN\ui\UNI\PB_bala_w_CA.paa";
	};
	class PB_Bala_GL: PB_Bala_GR
	{
		displayname = "Balacalva (LIGHT GREEN)";
		hiddenselectionstextures[] = {"\PB_Universal_Kit\data\bala\bala_L_GR_co.paa"};
		picture = "\PB_MAIN\ui\UNI\PB_bala_gl_CA.paa";
	};
	class PB_Bala_B: PB_Bala_GR
	{
		displayname = "Balaclava (Black)";
		hiddenselectionstextures[] = {"\PB_Universal_Kit\data\bala\bala_B_co.paa"};
		picture = "\PB_MAIN\ui\UNI\PB_bala_b_CA.paa";
	};
	class PB_Bala_T: PB_Bala_GR
	{
		displayname = "Balaclava (TAN)";
		hiddenselectionstextures[] = {"\PB_Universal_Kit\data\bala\bala_T_co.paa"};
		picture = "\PB_MAIN\ui\UNI\PB_bala_t_CA.paa";
	};
	class PB_Bala_G: PB_Bala_GR
	{
		displayname = "Balaclava (Grey)";
		hiddenselectionstextures[] = {"\PB_Universal_Kit\data\bala\bala_G_co.paa"};
		picture = "\PB_MAIN\ui\UNI\PB_bala_g_CA.paa";
	};
	class rhs_balaclava;
	class PB_Balaclava_black: rhs_balaclava
	{
		author="CapryCorn";
		displayname="Balaclava (Black)";
		model="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_bala2";
		picture = "\PB_MAIN\ui\UNI\PB_Balaclava_black_ca.paa";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"PB_Universal_Kit\data\rhs_bala\rhs_bala2_black_co.paa"
		};
	};
	class PB_Balaclava_tan: rhs_balaclava
	{
		author="CapryCorn";
		displayname="Balaclava (Tan)";
		model="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_bala2";
		picture = "\PB_MAIN\ui\UNI\PB_Balaclava_tan_ca.paa";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"PB_Universal_Kit\data\rhs_bala\rhs_bala2_tan_co.paa"
		};
	};
	class PB_Balaclava_lime: rhs_balaclava
	{
		author="CapryCorn";
		displayname="Balaclava (Lime)";
		model="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_bala2";
		picture = "\PB_MAIN\ui\UNI\PB_Balaclava_lime_ca.paa";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"PB_Universal_Kit\data\rhs_bala\rhs_bala2_lime_co.paa"
		};
	};
	class PB_Balaclava_grey: rhs_balaclava
	{
		author="CapryCorn";
		displayname="Balaclava (Grey)";
		model="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_bala2";
		picture = "\PB_MAIN\ui\UNI\PB_Balaclava_grey_ca.paa";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"PB_Universal_Kit\data\rhs_bala\rhs_bala2_grey_co.paa"
		};
	};
	class PB_Balaclava_brown: rhs_balaclava
	{
		author="CapryCorn";
		displayname="Balaclava (Brown)";
		model="\rhsafrf\addons\rhs_infantry2\gear\head\rhs_bala2";
		picture = "\PB_MAIN\ui\UNI\PB_Balaclava_brown_ca.paa";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"PB_Universal_Kit\data\rhs_bala\rhs_bala2_brown_co.paa"
		};
	};
};