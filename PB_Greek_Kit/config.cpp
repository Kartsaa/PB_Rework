////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 12 17:20:40 2023 : 'file' last modified on Mon Nov 09 00:32:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_Greek_Kit
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
	class PB_GRELIZ_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_Main\ui\GRE\PB_GRELIZ_gora_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Greek_Kit\data\GRELIZ_Fatigues_co.paa"};
	};
	class PB_GRELIZ_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_Main\ui\GRE\PB_GRELIZ_gora_ru_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Greek_Kit\data\GRELIZ_Fatigues_co.paa"};
	};
	class PB_GRELIZ_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_Main\ui\GRE\PB_GRELIZ_gorag_CA.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Greek_Kit\data\GRELIZ_Fatigues_co.paa","PB_British_Kit\data\TacGloves_clk_co.paa"};
	};
	class PB_GRELIZ_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa, OokamiJamie";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_Main\ui\GRE\PB_GRELIZ_gorag_ru_CA.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Greek_Kit\data\GRELIZ_Fatigues_co.paa","PB_British_Kit\data\TacGloves_clk_co.paa"};
	};
///BACKPACKS////
	class PB_KITBAG_GRELIZ: B_Kitbag_Base
	{
		picture = "\PB_Main\ui\GRE\PB_kitbag_greliz_CA.paa";
		scope = 2;
		author = "Kartsa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Backpack (GREEK LIZARD)";
		hiddenSelectionsTextures[] = {"\PB_Greek_Kit\data\GRELIZ_kb_co.paa"};
		maximumLoad = 180;
		mass = 45;
	};
	class PB_Medbag_GRELIZ: B_Kitbag_Base
	{
		picture = "\PB_Main\ui\GRE\PB_medbag_greliz_CA.paa";
		scope = 2;
		author = "Kartsa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		displayName = "Medic Backpack (GREEK LIZARD)";
		hiddenSelectionsTextures[] = {"\PB_Greek_Kit\data\GRELIZ_kb_med_co.paa"};
		maximumLoad = 220;
		mass = 65;
	};
	class PB_Radiobag_GRELIZ: B_Kitbag_Base
	{
		author = "Kartsa";
		scope = 2;
		displayName = "Radiobag (GREEK LIZARD)";
		picture = "\PB_Main\ui\GRE\PB_radiobag_greliz_CA.paa";
		model = "a3\Supplies_F_Enoch\Bags\B_RadioBag_01_F.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"PB_Greek_Kit\data\GRELIZ_RB_CO.paa"};	
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
	class PB_GRELIZ_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (GREEK LIZARD)";
		picture = "\PB_Main\ui\GRE\PB_GRELIZ_gora_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_GRELIZ_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_GRELIZ_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues (GREEK LIZARD/Rolled-Up)";
		picture = "\PB_Main\ui\GRE\PB_GRELIZ_gora_ru_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_GRELIZ_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_GRELIZ_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (GREEK LIZARD)";
		picture = "\PB_Main\ui\GRE\PB_GRELIZ_gorag_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_GRELIZ_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_GRELIZ_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa, OokamiJamie";
		displayName = "Fatigues with Gloves (GREEK LIZARD/Rolled-Up)";
		picture = "\PB_Main\ui\GRE\PB_GRELIZ_gorag_ru_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_GRELIZ_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
///HATS///
	class PB_GRELIZ_Boonie: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Boonie Hat (GREEK LIZARD)";
		picture = "\PB_Main\ui\GRE\PB_GRELIZ_boonie_CA.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Greek_Kit\Data\GRELIZ_boonie.paa"};
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
	class PB_GRELIZ_Cap: Helmet_Base
	{
		author = "Kartsa";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Military Cap (GREEK LIZARD)";
		picture = "\PB_Main\ui\GRE\PB_GRELIZ_cap_CA.paa";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\PB_Greek_Kit\Data\GRELIZ_cap.paa"};
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
	class PB_GRELIZ_H: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\GRE\PB_GRELIZ_H_CA.paa";
		displayName = "PASGT (GREEK LIZARD)";
		scope = 2;
		model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_Greek_Kit\data\greliz_pasgt_co.paa"};
		class ItemInfo: Headgearitem
		{
			mass = 40;
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"PB_Greek_Kit\data\greliz_pasgt_co.paa"};
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
	class PB_GRELIZ_H_R: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_Main\ui\GRE\PB_GRELIZ_H_R_CA.paa";
		scope = 2;
		displayName = "PASGT (GREEK LIZARD/Rhino)";
		model = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet_rhino";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"PB_Greek_Kit\data\greliz_pasgt_co.paa"};
		class ItemInfo: Headgearitem
		{
			mass = 40;
			uniformModel = "rhsgref\addons\rhsgref_infantry\gear_tanoa\head\pasgt_helmet_rhino";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"PB_Greek_Kit\data\greliz_pasgt_co.paa"};
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
};