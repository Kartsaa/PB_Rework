////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 12 17:20:40 2023 : 'file' last modified on Mon Nov 09 00:32:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_Israeli_Kit
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
	
	class PB_IDF_Gora_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_01.p3d";
		picture = "\PB_MAIN\ui\ISR\PB_IDF_GORA_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Israeli_Kit\data\IDF_Fatigues_co.paa"};
	};
	class PB_IDF_Gora_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_02.p3d";
		picture = "\PB_MAIN\ui\ISR\PB_IDF_GORA_RU_CA.paa";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Israeli_Kit\data\IDF_Fatigues_co.paa"};
	};
	class PB_IDF_GoraG_B: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_03.p3d";
		picture = "\PB_MAIN\ui\ISR\PB_IDF_GORAG_CA.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Israeli_Kit\data\IDF_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
	class PB_IDF_GoraG_B_RU: B_Soldier_base_F
	{
		scope = 1;
		author = "Kartsa";
		model = "\PB_M_Uniforms\Gora\U_Afghanka_04.p3d";
		picture = "\PB_MAIN\ui\ISR\PB_IDF_GORAG_RU_CA.paa";
		hiddenSelections[] = {"camo","camo1","insignia"};
		hiddenSelectionsTextures[] = {"\PB_Israeli_Kit\data\IDF_Fatigues_co.paa","PB_British_Kit\data\TacGloves_Clk_CO.paa"};
	};
	class PB_IDF_Coveralls_B: B_Soldier_base_F
	{
		scope = 2;
		author = "kartsa";
		model = "\a3\Characters_F_Enoch\Uniforms\I_E_Coveralls_01_F.p3d";
		picture = "\PB_MAIN\ui\ISR\PB_IDF_Coveralls_ca.paa";
		hiddenSelections[] = {"camo1","camo2","camo3","insignia"};
		hiddenSelectionsTextures[] = 
		{
			"\PB_Israeli_Kit\data\idf_coveralls_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_pants_co.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
///BACKPACKS////
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
	class PB_IDF_Gora: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[IDF] Field Shirt";
		picture = "\PB_MAIN\ui\ISR\PB_IDF_GORA_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_IDF_Gora_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_IDF_Gora_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[IDF] Field Shirt (Rolled-Up)";
		picture = "\PB_MAIN\ui\ISR\PB_IDF_GORA_RU_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_IDF_Gora_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_IDF_GoraG: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[IDF] Field Shirt with Gloves";
		picture = "\PB_MAIN\ui\ISR\PB_IDF_GORAG_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_IDF_GoraG_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_IDF_GoraG_RU: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[IDF] Field Shirt with Gloves (Rolled-Up)";
		picture = "\PB_MAIN\ui\ISR\PB_IDF_GORAG_RU_CA.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_IDF_GoraG_B_RU";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
	class PB_IDF_Coveralls: Uniform_Base
	{
		scope = 2;
		author = "Kartsa";
		displayName = "[IDF] Tanker Overalls";
		picture = "\PB_MAIN\ui\ISR\PB_IDF_Coveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PB_IDF_Coveralls_B";
			containerClass = "Supply45";
			mass = 50;
			allowedSlots[] = {"701","801","901"};
			armor = 0;
		};
	};
///HATS///
///HELMETS
	class PB_IDF_mich_bare: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_MAIN\ui\ISR\PB_IDF_MICH_BARE_CA.paa";
		scope = 2;
		displayName = "[IDF] Helmet";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\PB_Israeli_Kit\data\GREEN_mich_rhino_co.paa",
			"\PB_Universal_Kit\data\GRN_mich_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa"
		};
		allowedFacewear[] =
		{
			"", 1,  
			"dz_G_IDF_Mitznefet_Cover2_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover2",0.5,
			"dz_G_IDF_Mitznefet_Cover3_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover3",0.5,
			"dz_G_IDF_Mitznefet_Cover4_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover4",0.5,
			"dz_G_IDF_Mitznefet_Cover_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover",0.5
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
	class PB_IDF_mich_bare_headset: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_MAIN\ui\ISR\PB_IDF_MICH_BARE_HEADSET_CA.paa";
		displayName = "[IDF] Helmet (Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_bowman";
		hiddenSelections[] = {"Camo","Camo1","Camo2", "bowman"};
		hiddenSelectionsTextures[] = 
		{
			"\PB_Israeli_Kit\data\Green_mich_rhino_co.paa",
			"\PB_Universal_Kit\data\GRN_mich_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
		};
		allowedFacewear[] =
		{
			"", 1,  
			"dz_G_IDF_Mitznefet_Cover2_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover2",0.5,
			"dz_G_IDF_Mitznefet_Cover3_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover3",0.5,
			"dz_G_IDF_Mitznefet_Cover4_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover4",0.5,
			"dz_G_IDF_Mitznefet_Cover_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover",0.5
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
	class PB_IDF_mich_bare_alt: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_MAIN\ui\ISR\PB_IDF_MICH_BARE_ALT_CA.paa";
		scope = 2;
		displayName = "[IDF] Helmet (Alt)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_alt";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\PB_Israeli_Kit\data\Green_mich_rhino_co.paa",
			"\PB_Universal_Kit\data\GRN_mich_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
		};
		allowedFacewear[] =
		{
			"", 1,  
			"dz_G_IDF_Mitznefet_Cover2_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover2",0.5,
			"dz_G_IDF_Mitznefet_Cover3_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover3",0.5,
			"dz_G_IDF_Mitznefet_Cover4_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover4",0.5,
			"dz_G_IDF_Mitznefet_Cover_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover",0.5
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
	class PB_IDF_mich_bare_norotos: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_MAIN\ui\ISR\PB_IDF_MICH_BARE_NOROTOS_CA.paa";
		scope = 2;
		displayName = "[IDF] Helmet (Norotos)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\PB_Israeli_Kit\data\green_mich_rhino_co.paa",
			"\PB_Universal_Kit\data\GRN_mich_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
		};
		allowedFacewear[] =
		{
			"", 1,  
			"dz_G_IDF_Mitznefet_Cover2_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover2",0.5,
			"dz_G_IDF_Mitznefet_Cover3_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover3",0.5,
			"dz_G_IDF_Mitznefet_Cover4_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover4",0.5,
			"dz_G_IDF_Mitznefet_Cover_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover",0.5
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
	class PB_IDF_mich_bare_norotos_headset: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_MAIN\ui\ISR\PB_IDF_mich_bare_norotos_ALT_headset_CA.paa";
		scope = 2;
		displayName = "[IDF] Helmet (Norotos/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_bowman";
		hiddenSelections[] = {"Camo","Camo1","Camo2", "bowman"};
		hiddenSelectionsTextures[] = 
		{
			"PB_Israeli_Kit\data\green_mich_rhino_co.paa",
			"\PB_Universal_Kit\data\GRN_mich_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
		};
		allowedFacewear[] =
		{
			"", 1,  
			"dz_G_IDF_Mitznefet_Cover2_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover2",0.5,
			"dz_G_IDF_Mitznefet_Cover3_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover3",0.5,
			"dz_G_IDF_Mitznefet_Cover4_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover4",0.5,
			"dz_G_IDF_Mitznefet_Cover_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover",0.5
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
	class PB_IDF_mich_bare_norotos_alt: Helmet_Base
	{
		author = "Kartsa";
		picture = "\PB_MAIN\ui\ISR\PB_IDF_MICH_BARE_NOROTOS_ALT_CA.paa";
		scope = 2;
		displayName = "[IDF] Helmet (Norotos/Alt)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt";
		hiddenSelections[] = {"Camo","Camo1","Camo2"};
		hiddenSelectionsTextures[] = 
		{
			"PB_Israeli_Kit\data\green_mich_rhino_co.paa",
			"\PB_Universal_Kit\data\GRN_mich_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
		};
		allowedFacewear[] =
		{
			"", 1,  
			"dz_G_IDF_Mitznefet_Cover2_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover2",0.5,
			"dz_G_IDF_Mitznefet_Cover3_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover3",0.5,
			"dz_G_IDF_Mitznefet_Cover4_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover4",0.5,
			"dz_G_IDF_Mitznefet_Cover_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover",0.5
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
	class PB_IDF_mich_bare_norotos_alt_headset: Helmet_Base
	{
		picture = "\PB_MAIN\ui\ISR\PB_IDF_MICH_BARE_NOROTOS_ALT_HEADSET_CA.paa";
		scope = 2;
		displayName = "[IDF] Helmet (Norotos/Alt/Headset)";
		model = "\rhsusf\addons\rhsusf_infantry\gear\head\mich_bare_01_nor1_alt_bowman";
		hiddenSelections[] = {"Camo","Camo1","Camo2", "bowman"};
		hiddenSelectionsTextures[] = 
		{
			"PB_Israeli_Kit\data\green_mich_rhino_co.paa",
			"\PB_Universal_Kit\data\GRN_mich_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\rhs_helmet_ach_acc_co.paa",
			"\rhsusf\addons\rhsusf_infantry\gear\head\data\bowman_base_co.paa"
		};
		allowedFacewear[] =
		{
			"", 1,  
			"dz_G_IDF_Mitznefet_Cover2_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover2",0.5,
			"dz_G_IDF_Mitznefet_Cover3_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover3",0.5,
			"dz_G_IDF_Mitznefet_Cover4_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover4",0.5,
			"dz_G_IDF_Mitznefet_Cover_Desert",0.5,
			"dz_G_IDF_Mitznefet_Cover",0.5
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
///VESTS///
};