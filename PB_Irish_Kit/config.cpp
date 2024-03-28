////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 12 17:20:40 2023 : 'file' last modified on Mon Nov 09 00:32:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_Irish_Kit
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
	
	class PB_IDPM_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\ui\IRE\PB_IDPM_Gora_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Irish_Kit\data\IDPM_Fatigues_co.paa"};
	};
	class PB_IDPM_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\ui\IRE\PB_IDPM_Gora_RU_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Irish_Kit\data\IDPM_Fatigues_co.paa"};
	};
	class PB_IDPM_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\ui\IRE\PB_IDPM_GoraG_CA.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Irish_Kit\data\IDPM_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
	class PB_IDPM_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\ui\IRE\PB_IDPM_GoraG_RU_CA.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Irish_Kit\data\IDPM_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
///BACKPACKS////
	class PB_KITBAG_IDPM: B_Kitbag_Base
	{
		picture = "\PB_Main\ui\IRE\PB_kitbag_idpm_CA.paa";
		scope = 2;
		author = "Kartsa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Backpack (IDPM)";
		hiddenSelectionsTextures[] = {"\PB_Irish_Kit\data\IDPM_kb_co.paa"};
		maximumLoad = 180;
		mass = 45;
	};
	class PB_Medbag_IDPM: B_Kitbag_Base
	{
		picture = "\PB_Main\ui\IRE\PB_medbag_idpm_CA.paa";
		scope = 2;
		author = "Kartsa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Medic Backpack (IDPM)";
		hiddenSelectionsTextures[] = {"\PB_Irish_Kit\data\IDPM_kb_med_co.paa"};
		maximumLoad = 220;
		mass = 65;
	};
	class PB_CARRYALL_IDPM: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Carryall Backpack (IDPM)";
		picture = "\PB_Main\ui\IRE\PB_carryall_idpm_CA.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		hiddenSelectionsTextures[] = {"PB_Irish_Kit\data\IDPM_CB_CO.paa"};	
		maximumLoad = 320;
		mass = 70;
	};
	class PB_Radiobag_IDPM: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Radiobag (IDPM)";
		picture = "\PB_Main\ui\IRE\PB_radiobag_idpm_CA.paa";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_Irish_Kit\data\IDPM_RB_CO.paa"};	
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
	class PB_IDPM_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (IDPM)";
		picture = "\PB_Main\ui\IRE\PB_idpm_gora_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_IDPM_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_IDPM_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (IDPM/Rolled-Up)";
		picture = "\PB_Main\ui\IRE\PB_idpm_gora_ru_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_IDPM_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_IDPM_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (IDPM)";
		picture = "\PB_Main\ui\IRE\PB_idpm_gorag_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_IDPM_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_IDPM_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (IDPM/Rolled-Up)";
		picture = "\PB_Main\ui\IRE\PB_idpm_gorag_ru_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_IDPM_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
///HATS///
	class PB_IDPM_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (IDPM)";
		picture = "\PB_Main\ui\IRE\PB_idpm_boonie_CA.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Irish_Kit\Data\IDPM_boonie.paa"};
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
	class PB_IDPM_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Military Cap (IDPM)";
		picture = "\PB_Main\ui\IRE\PB_idpm_cap_CA.paa";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Irish_Kit\Data\IDPM_cap.paa"};
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
	class PB_IDPM_Beanie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Beanie (IDPM)";
		weaponPoolAvailable = 1;
		picture = "\PB_Main\ui\IRE\PB_idpm_beanie_CA.paa";
		model = "\A3\Characters_F\Common\woolhat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Irish_Kit\data\IDPM_beanie.paa"};

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
///HELMETS
	class PB_IDPM_H: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\IRE\PB_idpm_h_CA.paa";
		displayName = "Helmet (IDPM)";
		scope = 2;
		model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_Irish_Kit\data\idpm_pasgt_co.paa"};
		class ItemInfo: Headgearitem
		{
			mass = 40;
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"PB_Irish_Kit\data\idpm_pasgt_co.paa"};
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
	class PB_IDPM_Vest: Vest_Camo_Base
	{
		author="Kartsa";
		scope=2;
		displayName="Vest (IDPM)";
		picture = "\PB_Main\ui\IRE\PB_idpm_vest_CA.paa";
		model="A3\Characters_F\Common\equip_tacticalvest";
		hiddenselections[] = {"camo"};
		hiddenSelectionsTextures[]=
		{
			"\PB_Irish_Kit\data\IDPM_tacvest_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\Characters_F\Common\equip_tacticalvest";
			hiddenselections[] = {"camo"};
			containerClass="Supply100";
			mass=40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=8;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=8;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=8;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
			};
		};
	};
};