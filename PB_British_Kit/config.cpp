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
	class PB_MTP_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\MTP_Fatigues_co.paa"};
	};
	class PB_MTP_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\MTP_Fatigues_co.paa"};
	};
	class PB_MTP_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\MTP_Fatigues_co.paa","PB_British_Kit\data\TacGloves_khk_CO.paa"};
	};
	class PB_MTP_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\MTP_Fatigues_co.paa","PB_British_Kit\data\TacGloves_khk_CO.paa"};
	};
	class PB_DDPM_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\DDPM_gora_co.paa"};
	};
	class PB_DDPM_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\DDPM_gora_co.paa"};
	};
	class PB_DDPM_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\DDPM_gora_co.paa","PB_British_Kit\data\TacGloves_khk_CO.paa"};
	};
	class PB_DDPM_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\DDPM_gora_co.paa","PB_British_Kit\data\TacGloves_khk_CO.paa"};
	};
	class PB_DPM_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\DPM_gora_co.paa"};
	};
	class PB_DPM_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\DPM_gora_co.paa"};
	};
	class PB_DPM_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\DPM_gora_co.paa","PB_British_Kit\data\TacGloves_CLK_CO.paa"};
	};
	class PB_DPM_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\DPM_gora_co.paa","PB_British_Kit\data\TacGloves_CLK_CO.paa"};
	};
	class PB_MTP_U_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\MTP_U_01_CO.paa"};
	};
	class PB_MTP_U_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\MTP_U_01_CO.paa"};
	};
	class PB_MTP_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
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
		author = "Kartsa";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
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
		displayName = "[MTP] Carryall Backpack";
		picture = "PB_Main\ui\kitbag_test.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\MTP_CB_CO.paa"};	
		maximumLoad = 320;
		mass = 70;
	};
	class PB_Kitbag_MTP: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[MTP] Kitbag";
		picture = "PB_Main\ui\kitbag_test.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\MTP_KB_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_Medbag_MTP: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[MTP] Medic Kitbag";
		picture = "PB_Main\ui\kitbag_test.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\MTP_KB_MED_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_Radiobag_MTP: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[MTP] Radiobag";
		picture = "PB_Main\ui\Contact_LR.paa";
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
		displayName = "[DPM] Radiobag";
		picture = "PB_Main\ui\Contact_LR.paa";
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
		displayName = "[DPM] Carryall Backpack";
		picture = "PB_Main\ui\kitbag_test.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\DPM_CB_CO.paa"};	
		maximumLoad = 320;
		mass = 70;
	};
	class PB_Kitbag_DPM: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[DPM] Kitbag";
		picture = "PB_Main\ui\kitbag_test.paa";
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
		author = "Kartsa";
		displayName = "[MTP] Fatigues";
		picture = "\PB_Main\ui\uniform_test.paa";
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
		author = "Kartsa";
		displayName = "[MTP] Fatigues (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
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
		author = "Kartsa";
		displayName = "[MTP] Fatigues with Gloves";
		picture = "\PB_Main\ui\uniform_test.paa";
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
		author = "Kartsa";
		displayName = "[MTP] Fatigues with Gloves (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
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
		author = "Kartsa";
		displayName = "[DDPM] Fatigues";
		picture = "\PB_Main\ui\uniform_test.paa";
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
		author = "Kartsa";
		displayName = "[DDPM] Fatigues (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
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
		author = "Kartsa";
		displayName = "[DDPM] Fatigues with Gloves";
		picture = "\PB_Main\ui\uniform_test.paa";
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
		author = "Kartsa";
		displayName = "[DDPM] Fatigues with Gloves (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
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
		author = "Kartsa";
		displayName = "[DPM] Fatigues";
		picture = "\PB_Main\ui\uniform_test.paa";
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
		author = "Kartsa";
		displayName = "[DPM] Fatigues (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
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
		author = "Kartsa";
		displayName = "[DPM] Fatigues with Gloves";
		picture = "\PB_Main\ui\uniform_test.paa";
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
		author = "Kartsa";
		displayName = "[DPM] Fatigues with Gloves (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
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
		displayName = "[MTP] Combat Fatigues";
		picture = "\PB_Main\ui\uniform_test.paa";
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
		displayName = "[MTP] Combat Fatigues (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
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
		author = "Kartsa";
		displayName = "[MTP] Combat Uniform";
		picture = "\PB_Main\ui\uniform_test.paa";
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
		author = "Kartsa";
		displayName = "[MTP] Combat Uniform (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
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
		displayName = "[MTP] Beanie";
		weaponPoolAvailable = 1;
		picture = "\PB_Main\ui\cap_test.paa";
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
		displayName = "[MTP] Military Cap";
		picture = "\PB_Main\UI\cap_test.paa";
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
		displayName = "[MTP] Boonie Hat";
		picture = "\PB_Main\UI\cap_test.paa";
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
		displayName = "[DPM] Beanie";
		weaponPoolAvailable = 1;
		picture = "\PB_Main\ui\cap_test.paa";
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
		displayName = "[DPM] Military Cap";
		picture = "\PB_Main\UI\cap_test.paa";
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
		displayName = "[DPM] Boonie Hat";
		picture = "\PB_Main\UI\cap_test.paa";
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
		displayName = "[DDPM] Military Cap";
		picture = "\PB_Main\UI\cap_test.paa";
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
		displayName = "[DDPM] Boonie Hat";
		picture = "\PB_Main\UI\cap_test.paa";
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
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[DDPM] Mk7 Helmet";
		picture = "\PB_Main\ui\cap_test.paa";
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
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[DPM] Mk7 Helmet";
		picture = "\PB_Main\ui\cap_test.paa";
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
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[MTP] Mk7 Helmet";
		picture = "\PB_Main\ui\cap_test.paa";
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
		displayName = "[MTP] Helmet (SF)";
		picture = "\PB_Main\ui\helmet_test.paa";
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
		displayName = "[MTP] Helmet";
		picture = "\PB_Main\ui\helmet_test.paa";
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
		displayName="[MTP] Helmet (Camo)";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		picture = "\PB_Main\ui\helmet_test.paa";
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
		displayName = "[MTP] Modular Carrier Lite";
		picture = "\PB_Main\ui\vest_test.paa";
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
		displayName = "[MTP] Modular Carrier Vest";
		picture = "\PB_Main\ui\vest_test.paa";
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
		picture = "\PB_Main\ui\vest_test.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		displayName = "[MTP] Carrier Lite";
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
		picture = "\PB_Main\ui\vest_test.paa";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		displayName = "[MTP] Carrier Rig";
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
		displayName="[DDPM] Osprey Grenadier Rig";
		picture = "\PB_Main\ui\vest_test.paa";
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
		displayName="[DDPM] Osprey Squadleader Rig";
		picture = "\PB_Main\ui\vest_test.paa";
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
		displayName="[DDPM] Osprey Rig";
		picture = "\PB_Main\ui\vest_test.paa";
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
		displayName="[DDPM] Osprey MG Rig";
		picture = "\PB_Main\ui\vest_test.paa";
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
		displayName="[DPM] Osprey Grenadier Rig";
		picture = "\PB_Main\ui\vest_test.paa";
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
		displayName="[DPM] Osprey Squadleader Rig";
		picture = "\PB_Main\ui\vest_test.paa";
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
		displayName="[DPM] Osprey Rig";
		picture = "\PB_Main\ui\vest_test.paa";
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
		displayName="[DPM] Osprey MG Rig";
		picture = "\PB_Main\ui\vest_test.paa";
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
		displayName="[MTP] Osprey Grenadier Rig";
		picture="\PB_Main\UI\vest_test.paa";
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
		displayName="[MTP] Osprey Squadleader Rig";
		picture="\PB_Main\UI\vest_test.paa";
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
		displayName="[MTP] Osprey Rig";
		picture="\PB_Main\UI\vest_test.paa";
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
		displayName="[MTP] Osprey MG Rig";
		picture="\PB_Main\UI\vest_test.paa";
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