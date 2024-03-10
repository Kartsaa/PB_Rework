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
		scopeCurator = 2;
		picture = "PB_Main\ui\kitbag_test.paa";
		hiddenSelectionsTextures[] = {"\PB_Universal_Kit\data\GREEN_bergen_co.paa"};
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
};