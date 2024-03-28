////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 12 17:20:40 2023 : 'file' last modified on Mon Nov 09 00:32:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_Czech_Kit
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
	class PB_MAD21_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_Main\UI\CZE\PB_MAD21_ACU_CA.PAA";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Czech_Kit\data\MAD21_acu_camo_co.paa",
            "PB_Czech_Kit\data\MAD21_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_MAD21_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";
		picture = "\PB_Main\UI\CZE\PB_MAD21_ACU_R_CA.PAA";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Czech_Kit\data\MAD21_acu_camo_co.paa",
            "PB_Czech_Kit\data\MAD21_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_MAD21_U_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		picture = "\PB_MAIN\UI\CZE\PB_MAD21_U_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\MAD21_U_01_CO.paa"};
	};
	class PB_MAD21_U_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		picture = "\PB_MAIN\UI\CZE\PB_MAD21_U_R_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\MAD21_U_01_CO.paa"};
	};
	class PB_VZ95D_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_Main\UI\CZE\PB_VZ95D_ACU_CA.PAA";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Czech_Kit\data\VZ95D_acu_camo_co.paa",
            "PB_Czech_Kit\data\VZ95D_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Khk_CO.paa"
        };
	};
	class PB_VZ95D_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";
		picture = "\PB_Main\UI\CZE\PB_VZ95D_ACU_R_CA.PAA";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Czech_Kit\data\VZ95D_acu_camo_co.paa",
            "PB_Czech_Kit\data\VZ95D_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Khk_CO.paa"
        };
	};
	class PB_VZ95D_U_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		picture = "\PB_MAIN\UI\CZE\PB_VZ95D_U_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\VZ95D_U_01_CO.paa"};
	};
	class PB_VZ95D_U_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		picture = "\PB_MAIN\UI\CZE\PB_VZ95D_U_R_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\VZ95D_U_01_CO.paa"};
	};
	class PB_VZ95W_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_Main\UI\CZE\PB_VZ95W_ACU_CA.PAA";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Czech_Kit\data\VZ95W_acu_camo_co.paa",
            "PB_Czech_Kit\data\VZ95W_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_VZ95W_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";
		picture = "\PB_Main\UI\CZE\PB_VZ95W_ACU_R_CA.PAA";
		hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_Czech_Kit\data\VZ95W_acu_camo_co.paa",
            "PB_Czech_Kit\data\VZ95W_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_Clk_CO.paa"
        };
	};
	class PB_VZ95W_U_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		picture = "\PB_MAIN\UI\CZE\PB_VZ95W_U_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\VZ95W_U_01_CO.paa"};
	};
	class PB_VZ95W_U_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		picture = "\PB_MAIN\UI\CZE\PB_VZ95W_U_R_CA.PAA";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\VZ95W_U_01_CO.paa"};
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
	class PB_MAD21_ACU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Combat Uniform (MAD21)";
		picture = "\PB_Main\UI\CZE\PB_MAD21_ACU_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MAD21_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MAD21_ACU_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Combat Uniform (MAD21/Rolled-Up)";
		picture = "\PB_Main\UI\CZE\PB_MAD21_ACU_R_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MAD21_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MAD21_U: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "Combat Fatigues (MAD21)";
		picture = "\PB_MAIN\UI\CZE\PB_MAD21_U_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MAD21_U_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MAD21_U_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "Combat Fatigues (MAD21/Rolled-Up)";
		picture = "\PB_MAIN\UI\CZE\PB_MAD21_U_R_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MAD21_U_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_VZ95D_ACU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Combat Uniform (VZ95D)";
		picture = "\PB_Main\UI\CZE\PB_VZ95D_ACU_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_VZ95D_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_VZ95D_ACU_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Combat Uniform (VZ95D/Rolled-Up)";
		picture = "\PB_Main\UI\CZE\PB_VZ95D_ACU_R_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_VZ95D_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_VZ95D_U: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "Combat Fatigues (VZ95D)";
		picture = "\PB_MAIN\UI\CZE\PB_VZ95W_U_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_VZ95D_U_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_VZ95D_U_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "Combat Fatigues (VZ95D/Rolled-Up)";
		picture = "\PB_MAIN\UI\CZE\PB_VZ95D_U_R_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_VZ95D_U_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_VZ95W_ACU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Combat Uniform (VZ95W)";
		picture = "\PB_Main\UI\CZE\PB_VZ95W_ACU_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_VZ95W_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_VZ95W_ACU_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Combat Uniform (VZ95W/Rolled-Up)";
		picture = "\PB_Main\UI\CZE\PB_VZ95W_ACU_R_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_VZ95W_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_VZ95W_U: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "Combat Fatigues (VZ95W)";
		picture = "\PB_MAIN\UI\CZE\PB_VZ95W_U_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_VZ95W_U_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_VZ95W_U_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "Combat Fatigues (VZ95W/Rolled-Up)";
		picture = "\PB_MAIN\UI\CZE\PB_VZ95W_U_R_CA.PAA";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_VZ95W_U_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
///VESTS///
	class PB_MAD21_Modular_Lite: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Modular Carrier Lite (MAD21)";
		picture = "\PB_Main\UI\CZE\PB_MAD21_MODULAR_LITE_CA.PAA";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_light_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Czech_Kit\data\MAD21_Modular.paa"};
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
	class PB_MAD21_Modular: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Modular Carrier Vest (MAD21)";
		picture = "\PB_Main\UI\CZE\PB_MAD21_MODULAR_CA.PAA";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Czech_Kit\data\MAD21_Modular.paa"};
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
	class PB_MAD21_CARRIERLITE_CO: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_Main\UI\CZE\PB_MAD21_CARRIERLITE_CO_CA.PAA";
		Model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		displayName = "Carrier Lite (MAD21)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Czech_Kit\data\MAD21_CARRIERLITE_CO.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Czech_Kit\data\MAD21_CARRIERLITE_CO.paa"};
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
	class PB_MAD21_Carrier_Rig: Vest_Camo_Base
	{
		scope = 2;
		author = "Kartsa";
		picture = "\PB_Main\UI\CZE\PB_MAD21_CARRIER_RIG_CA.PAA";
		displayName = "Carrier Rig (MAD21)";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Czech_Kit\data\MAD21_CARRIERLITE_CO.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Czech_Kit\data\MAD21_CARRIERLITE_CO.paa"};
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
	class PB_VZ95W_Modular_Lite: PB_MAD21_Modular_Lite
	{
		displayName = "Modular Carrier Lite (VZ95W)";
		picture = "\PB_Main\UI\CZE\PB_VZ95W_MODULAR_LITE_CA.PAA";
		hiddenSelectionsTextures[] = {"PB_Czech_Kit\data\VZ95W_Modular.paa"};
	};
	class PB_VZ95W_Modular: PB_MAD21_Modular
	{
		displayName = "Modular Carrier Vest (VZ95W)";
		picture = "\PB_Main\UI\CZE\PB_VZ95W_MODULAR_CA.PAA";
		hiddenSelectionsTextures[] = {"PB_Czech_Kit\data\VZ95W_Modular.paa"};
	};
	class PB_VZ95W_CARRIERLITE_CO: PB_MAD21_CARRIERLITE_CO
	{
		displayName = "Carrier Lite (VZ95W)";
		picture = "\PB_Main\UI\CZE\PB_VZ95W_CARRIERLITE_CO_CA.PAA";
		hiddenSelectionsTextures[] = {"PB_Czech_Kit\data\VZ95W_CARRIERLITE_CO.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Czech_Kit\data\VZ95W_CARRIERLITE_CO.paa"};
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
	class PB_VZ95W_Carrier_Rig: PB_MAD21_Carrier_Rig
	{
		displayName = "Carrier Rig (VZ95W)";
		hiddenSelections[] = {"camo"};
		picture = "\PB_Main\UI\CZE\PB_VZ95W_CARRIER_RIG_CA.PAA";
		hiddenSelectionsTextures[] = {"PB_Czech_Kit\data\VZ95W_CARRIERLITE_CO.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			hiddenSelections[] = {"camo"};
			hiddenSelectionsTextures[] = {"PB_Czech_Kit\data\VZ95W_CARRIERLITE_CO.paa"};
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
	class PB_VZ95W_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\UI\CZE\PB_VZ95W_H_CA.PAA";
		displayName = "Helmet (VZ95W)";
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
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\VZ95W_LWH_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\VZ95W_LWH_co.paa"};
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
	class PB_VZ95W_H_ESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\UI\CZE\PB_VZ95W_H_ESS_CA.PAA";
		displayName = "Helmet (VZ95W/ESS)";
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
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\VZ95W_LWH_CO.paa","\PB_Czech_Kit\data\VZ95W_lwh_adds_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 42;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\VZ95W_LWH_CO.paa","\PB_Czech_Kit\data\VZ95W_LWH_ADDS_CO.paa"};
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
	class PB_VZ95W_H_HESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\UI\CZE\PB_VZ95W_H_HESS_CA.PAA";
		displayName = "Helmet (VZ95W/Headset/ESS)";
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
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\VZ95W_LWH_CO.paa","\PB_Czech_Kit\data\VZ95W_lwh_adds_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 43;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\VZ95W_LWH_CO.paa","\PB_Czech_Kit\data\VZ95W_LWH_ADDS_CO.paa"};
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
	class PB_VZ95D_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\UI\CZE\PB_VZ95D_H_CA.PAA";
		displayName = "Helmet (VZ95D)";
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
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\VZ95D_LWH_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\VZ95D_LWH_co.paa"};
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
	class PB_VZ95D_H_ESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\UI\CZE\PB_VZ95D_H_ESS_CA.PAA";
		displayName = "Helmet (VZ95D/ESS)";
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
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\VZ95D_LWH_CO.paa","\PB_Czech_Kit\data\VZ95D_lwh_adds_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 42;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\VZ95D_LWH_CO.paa","\PB_Czech_Kit\data\VZ95D_LWH_ADDS_CO.paa"};
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
	class PB_VZ95D_H_HESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\UI\CZE\PB_VZ95D_H_HESS_CA.PAA";
		displayName = "Helmet (VZ95D/Headset/ESS)";
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
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\VZ95D_LWH_CO.paa","\PB_Czech_Kit\data\VZ95D_lwh_adds_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 43;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\VZ95D_LWH_CO.paa","\PB_Czech_Kit\data\VZ95D_LWH_ADDS_CO.paa"};
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
	class PB_MAD21_H: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\UI\CZE\PB_MAD21_H_CA.PAA";
		displayName = "Helmet (MAD21)";
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
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\MAD21_LWH_co.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\MAD21_LWH_co.paa"};
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
	class PB_MAD21_H_ESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\UI\CZE\PB_MAD21_H_ESS_CA.PAA";
		displayName = "Helmet (MAD21/ESS)";
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
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\MAD21_LWH_CO.paa","\PB_Czech_Kit\data\MAD21_lwh_adds_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 42;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_ess01";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\MAD21_LWH_CO.paa","\PB_Czech_Kit\data\MAD21_LWH_ADDS_CO.paa"};
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
	class PB_MAD21_H_HESS: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		picture = "\PB_Main\UI\CZE\PB_MAD21_H_HESS_CA.PAA";
		displayName = "Helmet (MAD21/Headset/ESS)";
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
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\MAD21_LWH_CO.paa","\PB_Czech_Kit\data\MAD21_lwh_adds_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 43;
			uniformModel = "\rhsusf\addons\rhsusf_infantry\gear\head\lwh_wd_headset";
			hiddenSelections[] = {"camo","Camo2"};
			hiddenSelectionsTextures[] = {"\PB_Czech_Kit\data\MAD21_LWH_CO.paa","\PB_Czech_Kit\data\MAD21_LWH_ADDS_CO.paa"};
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
	class PB_MAD21_Beanie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Beanie (MAD21)";
		weaponPoolAvailable = 1;
		picture = "\PB_Main\UI\CZE\PB_MAD21_BEANIE_CA.PAA";
		model = "\A3\Characters_F\Common\woolhat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Czech_Kit\data\MAD21_beanie.paa"};

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
	class PB_VZ95W_Beanie: PB_MAD21_Beanie
	{
		displayName = "Beanie (VZ95W)";
		picture = "\PB_Main\UI\CZE\PB_VZ95W_BEANIE_CA.PAA";
		hiddenSelectionsTextures[] = {"PB_Czech_Kit\data\VZ95W_beanie.paa"};
	};
	class PB_MAD21_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Military Cap (MAD21)";
		picture = "\PB_Main\UI\CZE\PB_MAD21_CAP_CA.PAA";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\Data\MAD21_cap.paa"};
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
	class PB_MAD21_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (MAD21)";
		picture = "\PB_Main\UI\CZE\PB_MAD21_BOONIE_CA.PAA";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\Data\MAD21_boonie.paa"};
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
	class PB_VZ95D_Cap: PB_MAD21_Cap
	{
		displayName = "Military Cap (VZ95D)";
		picture = "\PB_Main\UI\CZE\PB_VZ95D_CAP_CA.PAA";
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\Data\VZ95D_cap.paa"};
	};
	class PB_VZ95D_Boonie: PB_MAD21_Boonie
	{
		displayName = "Boonie Hat (VZ95D)";
		picture = "\PB_Main\UI\CZE\PB_VZ95D_BOONIE_CA.PAA";
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\Data\VZ95D_boonie.paa"};
	};
	class PB_VZ95W_Boonie: PB_MAD21_Boonie
	{
		displayName = "Boonie Hat (VZ95W)";
		picture = "\PB_Main\UI\CZE\PB_VZ95W_BOONIE_CA.PAA";
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\Data\VZ95W_boonie.paa"};
	};
	class PB_VZ95W_Cap: PB_MAD21_Cap
	{
		displayName = "Military Cap (VZ95W)";
		picture = "\PB_Main\UI\CZE\PB_VZ95W_CAP_CA.PAA";
		hiddenSelectionsTextures[] = {"\PB_Czech_Kit\Data\VZ95W_cap.paa"};
	};
};