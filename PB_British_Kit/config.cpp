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
			"PB_M_headgear"
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
	class PB_DDPM_ACU_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
        model = "\PB_M_uniforms\A_CU\Aegis_OCombatUniform_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_British_Kit\data\ddpm_acu_camo_co.paa",
            "PB_British_Kit\data\ddpm_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_khk_CO.paa"
        };
	};
	class PB_DDPM_ACU_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
        model = "\PB_M_uniforms\A_CU\Aegis_OCombatUniform_02_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
        hiddenSelections[] = {"camo","camo1","camo2"};
        hiddenSelectionsTextures[] = 
        {
            "PB_British_Kit\data\ddpm_acu_camo_co.paa",
            "PB_British_Kit\data\ddpm_acu_camo1_co.paa",
            "PB_British_Kit\data\TacGloves_khk_CO.paa"
        };
	};
	class PB_MTP_CTRG_U_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\MTP_CTRG_U_01_CO.paa"};
	};
	class PB_MTP_CTRG_U_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_02_F.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\MTP_CTRG_U_01_CO.paa"};
	};
	class PB_MTP_U_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Jakx2210 (Caboose), Kartsa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_01.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\MTP_Uniform.paa"};
	};
	class PB_MTP_U_B_R: B_Soldier_base_F
	{
		scope = 1;
		author = "Jakx2210 (Caboose), Kartsa";
		model = "\A3\characters_f_beta\INDEP\ia_soldier_02.p3d";
		picture = "\PB_Main\UI\uniform_test.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\data\MTP_Uniform.paa"};
	};
};
class cfgWeapons
{
/////INHERITANCE////
	class ContainerSupply;
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
	class PB_DDPM_ACU_U: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[DDPM] Combat Uniform";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_DDPM_ACU_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_DDPM_ACU_U_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[DDPM] Combat Uniform (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_DDPM_ACU_B_R";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MTP_CTRG_U: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[MTP] Combat Uniform";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MTP_CTRG_U_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_MTP_CTRG_U_R: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[MTP] Combat Uniform (Rolled-Up)";
		picture = "\PB_Main\ui\uniform_test.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_MTP_CTRG_U_B_R";
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
	
////HELMETS///
	class PB_DDPM_MK7: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[DDPM] Mk7 Helmet";
		picture = "\PB_Main\ui\helmet_test.paa";
		model = "\PB_M_Headgear\Mk7\H_Mk7_F.p3d";
		hiddenSelections[] = { "Camo","Camo2","Camo3" };
        hiddenSelectionsTextures[] =
        {
         	"\PB_British_Kit\data\DDPM_MK7_CO.paa",
         	"\PB_British_Kit\data\mk7_tan_01_co.paa",
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
		author = "Jakx2210 (Caboose), Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[MTP] Helmet (SF)";
		picture = "\PB_Main\ui\helmet_test.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\Data\mtp_helmet.paa"};
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
		author = "Jakx2210 (Caboose), Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[MTP] Helmet";
		picture = "\PB_Main\ui\helmet_test.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_British_Kit\Data\mtp_helmet.paa"};
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
///VESTS///
	class PB_DDPM_IOTV_01: Vest_Camo_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\vest_test.paa";
		scope = 2;
		displayName = "[DDPM] Carrier Rig (Rifleman)";
		model = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_rifleman.p3d";
		hiddenSelections[] = {"camo","camob","camo1","camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_British_Kit\data\DDPM_IOTV_01_CO.paa",
			"PB_British_Kit\data\ddpm_iotv1_co.paa",
			"PB_British_Kit\data\ddpm_iotv2_co.paa",
			"PB_British_Kit\data\ddpm_iotv3_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel = "rhsusf\addons\rhsusf_infantry\gear\vests\rhs_iotv_rifleman.p3d";
			containerClass = "Supply140";
			mass = 140;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 12;
					PassThrough = 0.4;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 28;
					PassThrough = 0.1;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = "28 + 		3";
					PassThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = "28 + 		3";
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.1;
				};
			};
		};
	};
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
	class PB_MTP_Modular_GL: Vest_Camo_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "[MTP] Modular Carrier GL Rig";
		picture = "\PB_Main\ui\vest_test.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_British_Kit\data\MTP_Modular.paa"};
		descriptionShort = "Armor Level III";
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_heavy_F.p3d";
			containerClass = "Supply130";
			mass = 90;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 35;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 35;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 35;
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