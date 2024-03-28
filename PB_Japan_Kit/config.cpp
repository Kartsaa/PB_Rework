////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 12 17:20:40 2023 : 'file' last modified on Mon Nov 09 00:32:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_Japan_Kit
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
	class PB_Type2_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\ui\JAP\PB_Type2_Gora_ca.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Japan_Kit\data\Type2_Fatigues_co.paa"};
	};
	class PB_Type2_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\ui\JAP\PB_Type2_Gora_RU_ca.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Japan_Kit\data\Type2_Fatigues_co.paa"};
	};
	class PB_Type2_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\ui\JAP\PB_Type2_GoraG_ca.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Japan_Kit\data\Type2_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
	class PB_Type2_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\ui\JAP\PB_Type2_GoraG_RU_ca.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Japan_Kit\data\Type2_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
///BACKPACKS////
	class PB_Kitbag_Type2: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Kitbag (JIETAI DOTS)";
		picture = "\PB_Main\ui\JAP\PB_Kitbag_Type2_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_Japan_Kit\data\Type2_KB_CO.paa"};	
		maximumLoad = 180;
		mass = 40;
	};
	class PB_Medbag_Type2: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Medicbag (JIETAI DOTS)";
		picture = "\PB_Main\ui\JAP\PB_Medbag_Type2_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"PB_Japan_Kit\data\Type2_KB_MED_CO.paa"};	
		maximumLoad = 200;
		mass = 40;
	};
	class PB_Radiobag_Type2: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Radiobag (JIETAI DOTS)";
		picture = "\PB_Main\ui\JAP\PB_Radiobag_Type2_ca.paa";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_Japan_Kit\data\Type2_RB_CO.paa"};	
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
	class PB_Type2_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (JIETAI DOTS)";
		picture = "\PB_Main\ui\JAP\PB_Type2_Gora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_Type2_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_Type2_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (JIETAI DOTS/Rolled-Up)";
		picture = "\PB_Main\ui\JAP\PB_Type2_Gora_RU_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_Type2_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_Type2_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (JIETAI DOTS)";
		picture = "\PB_Main\ui\JAP\PB_Type2_GoraG_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_Type2_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_Type2_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (JIETAI DOTS/Rolled-Up)";
		picture = "\PB_Main\ui\JAP\PB_Type2_GoraG_RU_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_Type2_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
///HATS///
	class PB_Type2_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (JIETAI DOTS)";
		picture = "\PB_Main\ui\JAP\PB_Type2_Boonie_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Japan_Kit\Data\Type2_boonie.paa"};
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
	class PB_Type2_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Military Cap (JIETAI DOTS)";
		picture = "\PB_Main\ui\JAP\PB_Type2_cap_ca.paa";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Japan_Kit\Data\Type2_cap.paa"};
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
	class PB_Type2_Beanie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Beanie (JIETAI DOTS)";
		weaponPoolAvailable = 1;
		picture = "\PB_Main\ui\JAP\PB_Type2_Beanie_ca.paa";
		model = "\A3\Characters_F\Common\woolhat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_Japan_Kit\data\Type2_beanie.paa"};

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
	class PB_Type2_H: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\JAP\PB_Type2_H_ca.paa";
		displayName = "Type 88 Helmet (JIETAI DOTS)";
		scope = 2;
		model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_Japan_Kit\data\Type2_pasgt_co.paa"};
		class ItemInfo: Headgearitem
		{
			mass = 40;
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"PB_Japan_Kit\data\Type2_pasgt_co.paa"};
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
	class PB_Type2_H_R: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\JAP\PB_Type2_H_R_ca.paa";
		scope = 2;
		displayName = "Type 88 Helmet (JIETAI DOTS/Rhino)";
		model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet_rhino";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_Japan_Kit\data\Type2_pasgt_co.paa"};
		class ItemInfo: Headgearitem
		{
			mass = 40;
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet_rhino";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"PB_Japan_Kit\data\Type2_pasgt_co.paa"};
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
	class PB_Type2_T3_Vest: Vest_Camo_Base 
	{
		author = "OokamiJamie, Kartsa";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Type 3 Vest (JIETAI DOTS)";
		picture = "\PB_Main\ui\JAP\PB_Type2_T3_Vest_ca.paa";
        hiddenSelections[] = {"camo","camo1"}; 
		hiddenSelectionsTextures[] = 
		{ 
			"\PB_Japan_Kit\data\type2_t3_vest_co.paa",
			"\PB_Japan_Kit\data\type2_t3_gl_co.paa"
		};
		model = "\PB_M_Vests\type3\Type3Vest.p3d"; 
		class ItemInfo : ItemInfo
		{
			uniformModel = "\PB_M_Vests\type3\Type3Vest.p3d"; 
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = 
			{ 
				"\PB_Japan_Kit\data\type2_t3_vest_co.paa",
				"\PB_Japan_Kit\data\type2_t3_gl_co.paa"
			};
			containerClass = Supply40;
			mass = 25;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
	class PB_Type2_T3_Rig: Vest_Camo_Base 
	{
		author = "OokamiJamie, Kartsa";
		scope = 2;
		scopeArsenal = 2;
		displayName = "Type 3 Rig (JIETAI DOTS)";
		picture = "\PB_Main\ui\JAP\PB_Type2_T3_Rig_ca.paa";
        hiddenSelections[] = {"camo","camo1"}; 
		hiddenSelectionsTextures[] = 
		{ 
			"\PB_Japan_Kit\data\type2_t3_vest_co.paa",
			"\PB_Japan_Kit\data\type2_t3_gl_co.paa"
		};
		model = "\PB_M_Vests\type3\Type3Rig.p3d"; 
		class ItemInfo : ItemInfo
		{
			uniformModel = "\PB_M_Vests\type3\Type3Rig.p3d"; 
			hiddenSelections[] = {"camo","camo1"};
			hiddenSelectionsTextures[] = 
			{ 
				"\PB_Japan_Kit\data\type2_t3_vest_co.paa",
				"\PB_Japan_Kit\data\type2_t3_gl_co.paa"
			};
			containerClass = Supply100;
			mass = 45;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName	= "HitChest";
					armor			= 12;
					passThrough		= 0.1;
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen";
					armor			= 12;
					passThrough		= 0.15;
				};
				class Body
				{
					hitpointName	= "HitBody";
					passThrough		= 0.1;
				};
			};
		};
	};
};