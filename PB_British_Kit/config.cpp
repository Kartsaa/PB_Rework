////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 12 17:20:40 2023 : 'file' last modified on Mon Nov 09 00:32:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_British_Kit
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
			"PB_Main",
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
	class PB_MTP_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\UI\UK\PB_MTP_GORA_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\MTP_Fatigues_co.paa"};
	};
	class PB_MTP_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\UI\UK\PB_MTP_GORA_RU_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\MTP_Fatigues_co.paa"};
	};
	class PB_MTP_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\UI\UK\PB_MTP_GORAG_CA.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\MTP_Fatigues_co.paa","PB_British_Kit\data\TacGloves_khk_CO.paa"};
	};
	class PB_MTP_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\UI\UK\PB_MTP_GORAG_RU_CA.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\MTP_Fatigues_co.paa","PB_British_Kit\data\TacGloves_khk_CO.paa"};
	};
	class PB_DDPM_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\ui\UK\PB_DDPM_Gora_ca.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\DDPM_gora_co.paa"};
	};
	class PB_DDPM_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\ui\UK\PB_DDPM_Gora_RU_ca.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\DDPM_gora_co.paa"};
	};
	class PB_DDPM_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\ui\UK\PB_DDPM_GoraG_ca.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\DDPM_gora_co.paa","PB_British_Kit\data\TacGloves_khk_CO.paa"};
	};
	class PB_DDPM_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\ui\UK\PB_DDPM_GoraG_RU_ca.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\DDPM_gora_co.paa","PB_British_Kit\data\TacGloves_khk_CO.paa"};
	};
	class PB_DPM_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\UI\UK\PB_DPM_GORA_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\DPM_gora_co.paa"};
	};
	class PB_DPM_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\UI\UK\PB_DPM_GORA_RU_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\DPM_gora_co.paa"};
	};
	class PB_DPM_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\UI\UK\PB_DPM_GORAG_CA.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\DPM_gora_co.paa","PB_British_Kit\data\TacGloves_CLK_CO.paa"};
	};
	class PB_DPM_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\UI\UK\PB_DPM_GORAG_RU_CA.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\DPM_gora_co.paa","PB_British_Kit\data\TacGloves_CLK_CO.paa"};
	};
	class PB_MTP_U_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		picture = "\PB_Main\ui\UK\PB_MTP_U_ca.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\MTP_U_01_CO.paa"};
	};
	class PB_MTP_U_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		picture = "\PB_Main\ui\UK\PB_MTP_U_R_ca.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\MTP_U_01_CO.paa"};
	};
	class PB_MTP_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_Main\ui\UK\PB_MTP_ACU_ca.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_British_Kit\data\MTP_acu_camo_co.paa",
            "PB_British_Kit\data\MTP_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_khk_CO.paa"
        };
	};
	class PB_MTP_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";
		picture = "\PB_Main\ui\UK\PB_MTP_ACU_R_ca.paa";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_British_Kit\data\MTP_acu_camo_co.paa",
            "PB_British_Kit\data\MTP_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_khk_CO.paa"
        };
	};
///BACKPACKS////
	class PB_CARRYALL_MTP: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Carryall Backpack (MTP)";
		picture = "\PB_Main\ui\UK\PB_CARRYALL_MTP_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\MTP_CB_CO.paa"};	
		maximumLoad = 320;
		mass = 70;
	};
	class PB_Kitbag_MTP: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Kitbag (MTP)";
		picture = "\PB_Main\ui\UK\PB_Kitbag_MTP_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\MTP_KB_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_Medbag_MTP: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Medic Kitbag (MTP)";
		picture = "\PB_Main\ui\UK\PB_Medbag_MTP_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\MTP_KB_MED_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_Radiobag_MTP: B_Kitbag_Base
	{
		author = "Kartsa (MTP)";
		scope = 2;
		displayName = "Radiobag";
		picture = "\PB_Main\ui\UK\PB_Radiobag_MTP_ca.paa";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\MTP_RB_CO.paa"};	
		maximumLoad = 160;
		mass = 50;
	};
	class PB_Radiobag_DPM: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Radiobag (DPM)";
		picture = "\PB_Main\ui\UK\PB_Radiobag_DPM_ca.paa";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\DPM_RB_CO.paa"};	
		maximumLoad = 160;
		mass = 70;
	};
	class PB_CARRYALL_DPM: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Carryall Backpack (DPM)";
		picture = "\PB_Main\ui\UK\PB_CARRYALL_DPM_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\DPM_CB_CO.paa"};	
		maximumLoad = 320;
		mass = 70;
	};
	class PB_Kitbag_DPM: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Kitbag (DPM)";
		picture = "\PB_Main\ui\UK\PB_Kitbag_DPM_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\DPM_KB_CO.paa"};	
		maximumLoad = 200;
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
	class PB_MTP_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (MTP)";
		picture = "\PB_Main\ui\UK\PB_MTP_gora_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MTP_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MTP_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (MTP/Rolled-Up)";
		picture = "\PB_Main\ui\UK\PB_MTP_gora_ru_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MTP_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MTP_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (MTP)";
		picture = "\PB_Main\ui\UK\PB_MTP_gorag_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MTP_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MTP_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (MTP/Rolled-Up)";
		picture = "\PB_Main\ui\UK\PB_MTP_gorag_ru_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MTP_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_DDPM_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie (DDPM)";
		displayName = "Fatigues";
		picture = "\PB_Main\ui\UK\PB_DDPM_Gora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_DDPM_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_DDPM_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (DDPM/Rolled-Up)";
		picture = "\PB_Main\ui\UK\PB_DDPM_Gora_RU_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_DDPM_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_DDPM_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (DDPM)";
		picture = "\PB_Main\ui\UK\PB_DDPM_GoraG_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_DDPM_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_DDPM_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (DDPM/Rolled-Up)";
		picture = "\PB_Main\ui\UK\PB_DDPM_GoraG_RU_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_DDPM_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_DPM_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (DPM)";
		picture = "\PB_Main\ui\UK\PB_dpm_gora_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_DPM_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_DPM_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (DPM/Rolled-Up)";
		picture = "\PB_Main\ui\UK\PB_dpm_gora_ru_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_DPM_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_DPM_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (DPM)";
		picture = "\PB_Main\ui\UK\PB_dpm_gorag_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_DPM_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_DPM_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (DPM/Rolled-Up)";
		picture = "\PB_Main\ui\UK\PB_dpm_gorag_ru_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_DPM_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MTP_U: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "Combat Fatigues (MTP)";
		picture = "\PB_Main\ui\UK\PB_MTP_U_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MTP_U_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MTP_U_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "Combat Fatigues (MTP/Rolled-Up)";
		picture = "\PB_Main\ui\UK\PB_MTP_U_R_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MTP_U_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MTP_ACU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Combat Uniform (MTP)";
		picture = "\PB_Main\ui\UK\PB_MTP_ACU_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MTP_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MTP_ACU_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Combat Uniform (MTP/Rolled-Up)";
		picture = "\PB_Main\ui\UK\PB_MTP_ACU_R_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MTP_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
///HAT///
	class PB_MTP_Beanie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Beanie (MTP)";
		weaponPoolAvailable = 1;
		picture = "\PB_Main\ui\UK\PB_MTP_beanie_ca.paa";
		model = "\A3\Characters_F\Common\woolhat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\MTP_beanie.paa"};

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
	class PB_MTP_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Military Cap (MTP)";
		picture = "\PB_Main\ui\UK\PB_MTP_cap_ca.paa";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\Data\MTP_cap.paa"};
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
	class PB_MTP_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (MTP)";
		picture = "\PB_Main\ui\UK\PB_MTP_boonie_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\Data\MTP_boonie.paa"};
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
	class PB_DPM_Beanie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Beanie (DPM)";
		weaponPoolAvailable = 1;
		picture = "\PB_Main\ui\UK\PB_DPM_beanie_ca.paa";
		model = "\A3\Characters_F\Common\woolhat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\DPM_Beanie.paa"};

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
	class PB_DPM_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Military Cap (DPM)";
		picture = "\PB_Main\ui\UK\PB_DPM_cap_ca.paa";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\Data\DPM_cap.paa"};
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
	class PB_DPM_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (DPM)";
		picture = "\PB_Main\ui\UK\PB_DPM_boonie_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\Data\DPM_boonie.paa"};
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
	class PB_DDPM_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Military Cap (DDPM)";
		picture = "\PB_Main\ui\UK\PB_DDPM_cap_ca.paa";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\Data\DDPM_cap.paa"};
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
	class PB_DDPM_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (DDPM)";
		picture = "\PB_Main\ui\UK\PB_DDPM_Boonie_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\Data\DDPM_boonie.paa"};
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
////HELMETS///
	class PB_DDPM_MK7: Helmet_Base
	{
		author = "Kartsa, Bryan Flakes, TacticalDruid";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk7 Helmet (DDPM)";
		picture = "\PB_Main\ui\UK\PB_DDPM_MK7_ca.paa";
		model = "\PB_M_Headgear\Mk7\H_Mk7_F.p3d";
		hiddenSelections[] = { "Camo","Camo2","Camo3" };
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
         	"\PB_British_Kit\data\DDPM_MK7_CO.paa",
         	"\PB_British_Kit\data\Mk7_blk_01_co.paa",
         	"\PB_M_Headgear\Mk7\tex\equip_d_co.paa"
        };
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\PB_M_Headgear\Mk7\H_Mk7_F.p3d";
			hiddenSelections[] = { "Camo","Camo2","Camo3" };
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
	class PB_DPM_MK7: Helmet_Base
	{
		author = "Kartsa, Bryan Flakes, TacticalDruid";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk7 Helmet (DPM)";
		picture = "\PB_Main\ui\UK\PB_DPM_MK7_ca.paa";
		model = "\PB_M_Headgear\Mk7\H_Mk7_F.p3d";
		hiddenSelections[] = { "Camo","Camo2","Camo3" };
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
         	"\PB_British_Kit\data\DPM_MK7_CO.paa",
         	"\PB_British_Kit\data\Mk7_blk_01_co.paa",
         	"\PB_M_Headgear\Mk7\tex\equip_d_co.paa"
        };
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\PB_M_Headgear\Mk7\H_Mk7_F.p3d";
			hiddenSelections[] = { "Camo","Camo2","Camo3" };
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
	class PB_MTP_MK7: Helmet_Base
	{
		author = "Kartsa, Bryan Flakes, TacticalDruid";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Mk7 Helmet (MTP)";
		picture = "\PB_Main\ui\UK\PB_MTP_MK7_ca.paa";
		model = "\PB_M_Headgear\Mk7\H_Mk7_F.p3d";
		hiddenSelections[] = { "Camo","Camo2","Camo3" };
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
         	"\PB_British_Kit\data\MTP_MK7_CO.paa",
         	"\PB_British_Kit\data\Mk7_blk_01_co.paa",
         	"\PB_M_Headgear\Mk7\tex\equip_d_co.paa"
        };
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformModel = "\PB_M_Headgear\Mk7\H_Mk7_F.p3d";
			hiddenSelections[] = { "Camo","Camo2","Camo3" };
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
	class PB_MTP_SF_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Helmet (MTP/SF)";
		picture = "\PB_Main\ui\UK\PB_MTP_SF_H_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\Data\mtp_helmet.paa"};
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
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
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
	class PB_MTP_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Helmet (MTP)";
		picture = "\PB_Main\ui\UK\PB_MTP_H_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\Data\mtp_helmet.paa"};
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
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[] = {3,1};
			hiddenSelections[] = {"camo"};
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
	class PB_MTP_H_C: Helmet_Base
	{
		author="Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName="Helmet (MTP/Camo)";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		picture = "\PB_Main\ui\UK\PB_MTP_H_C_ca.paa";
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
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\PB_British_Kit\Data\mtp_helmet.paa",
			"\A3\characters_f\common\data\ghillie2_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
///VESTS///
	class PB_MTP_Modular_Lite: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Modular Carrier Lite (MTP)";
		picture = "\PB_Main\ui\UK\PB_MTP_Modular_Lite_ca.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\MTP_Modular.paa"};
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
	class PB_MTP_Modular: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Modular Carrier Vest (MTP)";
		picture = "\PB_Main\ui\UK\PB_MTP_Modular_ca.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\MTP_Modular.paa"};
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
	class PB_MTP_Carrier_Lite: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_Main\ui\UK\PB_MTP_Carrier_Lite_ca.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		displayName = "Carrier Lite (MTP)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\MTP_carrier_lite.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_British_Kit\data\MTP_carrier_lite.paa"};
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
	class PB_MTP_Carrier_Rig: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_Main\ui\UK\PB_MTP_Carrier_Rig_ca.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		displayName = "Carrier Rig (MTP)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\MTP_carrier_lite.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_British_Kit\data\MTP_carrier_lite.paa"};
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
	class PB_DDPM_Osprey_GRE: Vest_Camo_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Osprey Grenadier Rig (DDPM)";
		picture = "\PB_Main\ui\UK\PB_DDPM_Osprey_GRE_ca.paa";
		model="\PB_M_Vests\Osprey\Grenadier\PB_Osprey_GRE.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\PB_British_Kit\data\DDPM_Osprey_01_co.paa",
			"\PB_British_Kit\data\DDPM_Osprey_Pockets_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\PB_M_Vests\Osprey\Grenadier\PB_Osprey_GRE.p3d";
			containerClass="Supply100";
			mass=110;
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class PB_DDPM_Osprey_SL: Vest_Camo_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Osprey Squadleader Rig (DDPM)";
		picture = "\PB_Main\ui\UK\PB_DDPM_Osprey_SL_ca.paa";
		model="\PB_M_Vests\Osprey\SL\PB_Osprey_SL.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\PB_British_Kit\data\DDPM_Osprey_01_co.paa",
			"\PB_British_Kit\data\DDPM_Osprey_Pockets_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\PB_M_Vests\Osprey\SL\PB_Osprey_SL.p3d";
			picture = "\PB_Main\ui\UK\PB_DDPM_Osprey_SL_ca.paa";
			containerClass="Supply100";
			mass=110;
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class PB_DDPM_Osprey_Rig: Vest_Camo_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Osprey Rig (DDPM)";
		picture = "\PB_Main\ui\UK\PB_DDPM_Osprey_Rig_ca.paa";
		model="\PB_M_Vests\Osprey\Rig\PB_Osprey_Rig.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\PB_British_Kit\data\DDPM_Osprey_01_co.paa",
			"\PB_British_Kit\data\DDPM_Osprey_Pockets_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\PB_M_Vests\Osprey\Rig\PB_Osprey_Rig.p3d";
			containerClass="Supply100";
			mass=100;
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class PB_DDPM_Osprey_MG: Vest_Camo_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Osprey MG Rig (DDPM)";
		picture = "\PB_Main\ui\UK\PB_DDPM_Osprey_MG_ca.paa";
		model="\PB_M_Vests\Osprey\MG\PB_Osprey_MG.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\PB_British_Kit\data\DDPM_Osprey_01_co.paa",
			"\PB_British_Kit\data\DDPM_Osprey_Pockets_co.paa",
			"\PB_British_Kit\data\DDPM_Osprey_MG_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\PB_M_Vests\Osprey\MG\PB_Osprey_MG.p3d";
			containerClass="Supply100";
			mass=100;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class PB_DPM_Osprey_GRE: Vest_Camo_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Osprey Grenadier Rig (DPM)";
		picture = "\PB_Main\UI\UK\PB_DPM_Osprey_GRE_CA.paa";
		model="\PB_M_Vests\Osprey\Grenadier\PB_Osprey_GRE.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\PB_British_Kit\data\DPM_Osprey_01_co.paa",
			"\PB_British_Kit\data\DPM_Osprey_Pockets_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\PB_M_Vests\Osprey\Grenadier\PB_Osprey_GRE.p3d";
			containerClass="Supply100";
			mass=110;
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class PB_DPM_Osprey_SL: Vest_Camo_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Osprey Squadleader Rig (DPM)";
		picture = "\PB_Main\ui\UK\PB_DPM_Osprey_SL_ca.paa";
		model="\PB_M_Vests\Osprey\SL\PB_Osprey_SL.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\PB_British_Kit\data\DPM_Osprey_01_co.paa",
			"\PB_British_Kit\data\DPM_Osprey_Pockets_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\PB_M_Vests\Osprey\SL\PB_Osprey_SL.p3d";
			containerClass="Supply100";
			mass=110;
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class PB_DPM_Osprey_Rig: Vest_Camo_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Osprey Rig (DPM)";
		picture = "\PB_Main\ui\UK\PB_DPM_Osprey_Rig_ca.paa";
		model="\PB_M_Vests\Osprey\Rig\PB_Osprey_Rig.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\PB_British_Kit\data\DPM_Osprey_01_co.paa",
			"\PB_British_Kit\data\DPM_Osprey_Pockets_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\PB_M_Vests\Osprey\Rig\PB_Osprey_Rig.p3d";
			containerClass="Supply100";
			mass=100;
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class PB_DPM_Osprey_MG: Vest_Camo_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Osprey MG Rig (DPM)";
		picture = "\PB_Main\ui\UK\PB_DPM_Osprey_MG_ca.paa";
		model="\PB_M_Vests\Osprey\MG\PB_Osprey_MG.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\PB_British_Kit\data\DPM_Osprey_01_co.paa",
			"\PB_British_Kit\data\DPM_Osprey_Pockets_co.paa",
			"\PB_British_Kit\data\DPM_Osprey_MG_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\PB_M_Vests\Osprey\MG\PB_Osprey_MG.p3d";
			containerClass="Supply100";
			mass=100;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class PB_MTP_Osprey_GRE: Vest_Camo_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Osprey Grenadier Rig (MTP)";
		picture = "\PB_Main\ui\UK\PB_MTP_Osprey_GRE_ca.paa";
		model="\PB_M_Vests\Osprey\Grenadier\PB_Osprey_GRE.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\PB_British_Kit\data\MTP_Osprey_01_co.paa",
			"\PB_British_Kit\data\MTP_Osprey_Pockets_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\PB_M_Vests\Osprey\Grenadier\PB_Osprey_GRE.p3d";
			containerClass="Supply100";
			mass=110;
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class PB_MTP_Osprey_SL: Vest_Camo_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Osprey Squadleader Rig (MTP)";
		picture = "\PB_Main\ui\UK\PB_MTP_Osprey_SL_ca.paa";
		model="\PB_M_Vests\Osprey\SL\PB_Osprey_SL.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\PB_British_Kit\data\MTP_Osprey_01_co.paa",
			"\PB_British_Kit\data\MTP_Osprey_Pockets_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\PB_M_Vests\Osprey\SL\PB_Osprey_SL.p3d";
			containerClass="Supply100";
			mass=110;
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class PB_MTP_Osprey_Rig: Vest_Camo_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Osprey Rig (MTP)";
		picture = "\PB_Main\ui\UK\PB_MTP_Osprey_Rig_ca.paa";
		model="\PB_M_Vests\Osprey\Rig\PB_Osprey_Rig.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\PB_British_Kit\data\MTP_Osprey_01_co.paa",
			"\PB_British_Kit\data\MTP_Osprey_Pockets_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\PB_M_Vests\Osprey\Rig\PB_Osprey_Rig.p3d";
			containerClass="Supply100";
			mass=100;
			hiddenSelections[]=
			{
				"camo",
				"camo1"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
	class PB_MTP_Osprey_MG: Vest_Camo_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Osprey MG Rig (MTP)";
		picture = "\PB_Main\ui\UK\PB_MTP_Osprey_MG_ca.paa";
		model="\PB_M_Vests\Osprey\MG\PB_Osprey_MG.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\PB_British_Kit\data\MTP_Osprey_01_co.paa",
			"\PB_British_Kit\data\MTP_Osprey_Pockets_co.paa",
			"\PB_British_Kit\data\MTP_Osprey_MG_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\PB_M_Vests\Osprey\MG\PB_Osprey_MG.p3d";
			containerClass="Supply100";
			mass=100;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
};