////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Tue Dec 12 17:20:40 2023 : 'file' last modified on Mon Nov 09 00:32:17 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_C_TFAR
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = 
		{
			"tfar_core",
			"tfar_backpacks",
			"PB_Main",
			"PB_British_Kit",
			"PB_Australian_Kit", 
			"PB_Canadian_Kit",
			"PB_German_Kit"
		};
		skipWhenMissingDependencies = 1;
	};
};
class CfgVehicles
{
///BASES///
	class Bag_Base;
	class PB_Bag_Base_2: Bag_Base
	{
		tf_hasLRradio = 1;
		tf_range = 40000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
	class PB_RT1523BIG_Base: Bag_Base
	{
		author = "Raspu, Gandi, Nkey";
		displayName = "RT-1523G BIG (ASIP)";
		descriptionShort = "RT-1523G BIG (ASIP) long range radio 40km";
		picture = "\z\tfar\addons\backpacks\rt1523g\ui\rt1523g_icon.paa";
		model = "\z\tfar\addons\backpacks\models\clf_nicecomm2";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\z\tfar\addons\backpacks\models\data\clf_nicecomm2_nato_multi_co.paa"};
		maximumLoad = 140;
		mass = 160;
		scope = 0;
		scopeCurator = 0;
		tf_range = 40000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "airborne";
	};
	class PB_RT1523G_Base: Bag_Base
	{
		scope = 0;
		scopeCurator = 0;
		author = "Raspu, Gandi, Nkey";
		displayName = "RT-1523G (ASIP)";
		descriptionShort = "RT-1523G (ASIP) long range radio 40km";
		picture = "\z\tfar\addons\backpacks\rt1523g\ui\rt1523g_icon.paa";
		model = "\z\tfar\addons\backpacks\models\clf_prc117g_ap";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\z\tfar\addons\backpacks\models\data\clf_prc117g_ap_co.paa"};
		maximumLoad = 80;
		mass = 70;
		tf_range = 40000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "airborne";
	};
///BRITISH///
	class PB_Radiobag_MTP: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_Radiobag_DPM: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_MTP: PB_RT1523BIG_Base
	{
		displayName = "[MTP] RT-1523G BIG";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\MTP_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523BIG_DPM: PB_RT1523BIG_Base
	{
		displayName = "[DPM] RT-1523G BIG";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\DPM_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
		scopeCurator = 2;
	};
	class PB_RT1523_MTP: PB_RT1523G_Base
	{
		
		displayName = "[MTP] RT-1523G";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\MTP_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_DPM: PB_RT1523G_Base
	{
		displayName = "[DPM] RT-1523G";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\DPM_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
///AUSSIE///
	class PB_Radiobag_AMCU: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_AMCU: PB_RT1523BIG_Base
	{
		displayName = "[AMCU] RT-1523G BIG";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\AMCU_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_AMCU: PB_RT1523G_Base
	{
		
		displayName = "[AMCU] RT-1523G";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\AMCU_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
///CANADA///
	class PB_Radiobag_CADPATTW: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_CADPATTW: PB_RT1523BIG_Base
	{
		displayName = "[CADPAT-TW] RT-1523G BIG";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\CADPATTW_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_CADPATTW: PB_RT1523G_Base
	{
		
		displayName = "[CADPAT-TW] RT-1523G";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\CADPATTW_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_Radiobag_CADPATAR: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_CADPATAR: PB_RT1523BIG_Base
	{
		displayName = "[CADPAT-AR] RT-1523G BIG";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\CADPATTW_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_CADPATAR: PB_RT1523G_Base
	{
		
		displayName = "[CADPAT-AR] RT-1523G";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\CADPATAR_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_Radiobag_CADPATMT: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_CADPATMT: PB_RT1523BIG_Base
	{
		displayName = "[CADPAT-MT] RT-1523G BIG";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\CADPATTW_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_CADPATMT: PB_RT1523G_Base
	{
		
		displayName = "[CADPAT-MT] RT-1523G";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\CADPATMT_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
////GERMANY///
	class PB_Radiobag_FLECK: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_FLECK: PB_RT1523BIG_Base
	{
		displayName = "[FLECKTARN] RT-1523G BIG";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\FLECK_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_FLECK: PB_RT1523G_Base
	{
		
		displayName = "[FLECKTARN] RT-1523G";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\FLECK_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_Radiobag_TROP: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_TROP: PB_RT1523BIG_Base
	{
		displayName = "[TROPENTARN] RT-1523G BIG";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\TROP_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_TROP: PB_RT1523G_Base
	{
		
		displayName = "[TROPENTARN] RT-1523G";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\TROP_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_Radiobag_SCHNEE: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_SCHNEE: PB_RT1523BIG_Base
	{
		displayName = "[SCHNEETARN] RT-1523G BIG";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\SCHEE_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_SCHNEE: PB_RT1523G_Base
	{
		
		displayName = "[SCHNEETARN] RT-1523G";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\SCHNEE_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
};