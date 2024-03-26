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
			"PB_German_Kit",
			"PB_Finnish_Kit"
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
		picture = "PB_Main\ui\UK\PB_RT1523BIG_MTP_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\MTP_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523BIG_DPM: PB_RT1523BIG_Base
	{
		displayName = "[DPM] RT-1523G BIG";
		picture = "PB_Main\ui\UK\PB_RT1523BIG_DPM_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\DPM_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
		scopeCurator = 2;
	};
	class PB_RT1523_MTP: PB_RT1523G_Base
	{
		
		displayName = "[MTP] RT-1523G";
		picture = "PB_Main\ui\UK\PB_RT1523_MTP_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\MTP_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_DPM: PB_RT1523G_Base
	{
		displayName = "[DPM] RT-1523G";
		picture = "PB_Main\ui\UK\PB_RT1523_DPM_ca.paa";
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
		picture = "\PB_Main\UI\AUS\PB_RT1523BIG_AMCU_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\AMCU_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_AMCU: PB_RT1523G_Base
	{
		
		displayName = "[AMCU] RT-1523G";
		picture = "\PB_Main\UI\AUS\PB_RT1523_AMCU_ca.paa";
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
		picture = "PB_Main\ui\CAN\PB_RT1523BIG_CADPATTW_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\CADPATTW_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_CADPATTW: PB_RT1523G_Base
	{
		
		displayName = "[CADPAT-TW] RT-1523G";
		picture = "PB_Main\ui\CAN\PB_RT1523BIG_CADPATTW_CA.paa";
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
		picture = "PB_Main\ui\CAN\PB_RT1523BIG_CADPATAR_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\CADPATAR_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_CADPATAR: PB_RT1523G_Base
	{
		
		displayName = "[CADPAT-AR] RT-1523G";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\CADPATAR_PRC177_CO.paa"};
		picture = "PB_Main\ui\CAN\PB_RT1523_CADPATAR_CA.paa";
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
		picture = "PB_Main\ui\CAN\PB_RT1523BIG_CADPATMT_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\CADPATMT_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_CADPATMT: PB_RT1523G_Base
	{
		
		displayName = "[CADPAT-MT] RT-1523G";
		picture = "PB_Main\ui\CAN\PB_RT1523BIG_CADPATMT_CA.paa";
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
		picture = "\PB_Main\UI\GER\PB_RT1523BIG_FLECK_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\FLECK_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_FLECK: PB_RT1523G_Base
	{
		
		displayName = "[FLECKTARN] RT-1523G";
		picture = "\PB_Main\UI\GER\PB_RT1523_FLECK_CA.paa";
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
		picture = "\PB_Main\UI\GER\PB_RT1523BIG_TROP_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\TROP_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_TROP: PB_RT1523G_Base
	{
		
		displayName = "[TROPENTARN] RT-1523G";
		picture = "\PB_Main\UI\GER\PB_RT1523_TROP_CA.paa";
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
		picture = "\PB_Main\UI\GER\PB_RT1523BIG_SCHNEE_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\SCHEE_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_SCHNEE: PB_RT1523G_Base
	{
		
		displayName = "[SCHNEETARN] RT-1523G";
		picture = "\PB_Main\UI\GER\PB_RT1523_SCHNEE_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\SCHNEE_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
////FINNISH////
	class PB_Radiobag_M05: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_M05: PB_RT1523BIG_Base
	{
		displayName = "[M05] RT-1523G BIG";
		picture = "PB_Main\ui\FIN\PB_RT1523BIG_M05_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\M05_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_M05: PB_RT1523G_Base
	{
		
		displayName = "[M05] RT-1523G";
		picture = "PB_Main\ui\FIN\PB_RT1523_M05_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\M05_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_Radiobag_M04: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_M04: PB_RT1523BIG_Base
	{
		displayName = "[M04] RT-1523G BIG";
		picture = "PB_Main\ui\FIN\PB_RT1523BIG_M04_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\M04_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_M04: PB_RT1523G_Base
	{
		
		displayName = "[M04] RT-1523G";
		picture = "PB_Main\ui\FIN\PB_RT1523_M04_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\M04_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
////BELGIAN////
	class PB_Radiobag_JIGSAW: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_JIGSAW: PB_RT1523BIG_Base
	{
		displayName = "[JIGSAW] RT-1523G BIG";
		picture = "\PB_Main\ui\BEL\PB_RT1523BIG_JIGSAW_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\JIGSAW_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_JIGSAW: PB_RT1523G_Base
	{
		
		displayName = "[JIGSAW] RT-1523G";
		picture = "\PB_Main\ui\BEL\PB_RT1523_JIGSAW_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\JIGSAW_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
///GREEN///
	class PB_Radiobag_GREEN: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_GREEN: PB_RT1523BIG_Base
	{
		displayName = "[GREEN] RT-1523G BIG";
		picture = "PB_Main\ui\UNI\PB_RT1523BIG_GREEN_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\GREEN_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_GREEN: PB_RT1523G_Base
	{
		
		displayName = "[GREEN] RT-1523G";
		picture = "PB_Main\ui\UNI\PB_RT1523_GREEN_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\GREEN_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
///POLISH////
	class PB_Radiobag_WZ93W: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_WZ93W: PB_RT1523BIG_Base
	{
		displayName = "[WZ93W] RT-1523G BIG";
		picture = "PB_Main\ui\POL\PB_RT1523BIG_WZ93W_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\WZ93W_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_WZ93W: PB_RT1523G_Base
	{
		displayName = "[WZ93W] RT-1523G";
		picture = "PB_Main\ui\POL\PB_RT1523_WZ93W_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\WZ93W_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
///KOREAN///
	class PB_Radiobag_GRANITEB: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_GRANITEB: PB_RT1523BIG_Base
	{
		displayName = "[GRANITEB] RT-1523G BIG";
		picture = "\PB_Main\ui\KOR\PB_RT1523BIG_GRANITEB_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\GRANITEB_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_GRANITEB: PB_RT1523G_Base
	{
		
		displayName = "[GRANITEB] RT-1523G";
		picture = "\PB_Main\ui\KOR\PB_RT1523_GRANITEB_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\GRANITEB_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
///SWEDEN///
	class PB_Radiobag_M90: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_M90: PB_RT1523BIG_Base
	{
		displayName = "[M90] RT-1523G BIG";
		picture = "PB_Main\ui\SWE\PB_RT1523BIG_M90_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\M90_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_M90: PB_RT1523G_Base
	{
		
		displayName = "[M90] RT-1523G";
		picture = "PB_Main\ui\SWE\PB_RT1523_M90_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\M90_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
///GREEK///
	class PB_Radiobag_GRELIZ: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_GRELIZ: PB_RT1523BIG_Base
	{
		displayName = "[GREEK LIZARD] RT-1523G BIG";
		picture = "\PB_Main\ui\GRE\PB_RT1523BIG_GRELIZ_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\GRELIZ_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_GRELIZ: PB_RT1523G_Base
	{
		
		displayName = "[GREEK LIZARD] RT-1523G";
		picture = "\PB_Main\ui\GRE\PB_RT1523_GRELIZ_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\GRELIZ_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
///MULTICUM///
	class PB_Radiobag_MULTICAM: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_MULTICAM: PB_RT1523BIG_Base
	{
		displayName = "[MULTICAM] RT-1523G BIG";
		picture = "\PB_MAIN\ui\UNI\PB_RT1523BIG_MULTICAM_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\MULTICAM_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_MULTICAM: PB_RT1523G_Base
	{
		
		displayName = "[MULTICAM] RT-1523G";
		picture = "\PB_MAIN\ui\UNI\PB_RT1523_MULTICAM_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\MULTICAM_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
///IRISH///
	class PB_Radiobag_IDPM: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_IDPM: PB_RT1523BIG_Base
	{
		displayName = "[IDPM] RT-1523G BIG";
		picture = "\PB_Main\ui\IRE\PB_rt1523big_idpm_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\IDPM_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_IDPM: PB_RT1523G_Base
	{
		
		displayName = "[IDPM] RT-1523G";
		picture = "\PB_Main\ui\IRE\PB_rt1523_idpm_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\IDPM_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
///TURKISH///
	class PB_Radiobag_MEHMETCIK: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_MEHMETCIK: PB_RT1523BIG_Base
	{
		displayName = "[MEHMETCIK] RT-1523G BIG";
		picture = "\PB_MAIN\UI\TUR\PB_RT1523BIG_MEHMETCIK_CA.PAA";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\MEHMETCIK_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_MEHMETCIK: PB_RT1523G_Base
	{
		
		displayName = "[MEHMETCIK] RT-1523G";
		picture = "\PB_MAIN\UI\TUR\PB_RT1523_MEHMETCIK_CA.PAA";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\MEHMETCIK_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_Radiobag_TURDIG: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_TURDIG: PB_RT1523BIG_Base
	{
		displayName = "[TURKISH DIGITAL] RT-1523G BIG";
		picture = "\PB_MAIN\UI\TUR\PB_RT1523BIG_TURDIG_CA.PAA";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\TURDIG_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_TURDIG: PB_RT1523G_Base
	{
		
		displayName = "[TURKISH DIGITAL] RT-1523G";
		picture = "\PB_MAIN\UI\TUR\PB_RT1523_TURDIG_CA.PAA";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\TURDIG_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
///NORWAY///
	class PB_Radiobag_M98: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_M98: PB_RT1523BIG_Base
	{
		displayName = "[M98] RT-1523G BIG";
		picture = "\PB_Main\ui\NOR\PB_RT1523BIG_M98_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\M98_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_M98: PB_RT1523G_Base
	{
		
		displayName = "[M98] RT-1523G";
		picture = "\PB_Main\ui\NOR\PB_RT1523BIG_M98_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\M98_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
///ESTDCU///
	class PB_Radiobag_ESTDCU: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_ESTDCU: PB_RT1523BIG_Base
	{
		displayName = "[ESTDCU] RT-1523G BIG";
		picture = "\PB_Main\ui\EST\PB_RT1523BIG_ESTDCU_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\ESTDCU_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_ESTDCU: PB_RT1523G_Base
	{
		
		displayName = "[ESTDCU] RT-1523G";
		picture = "\PB_Main\ui\EST\PB_RT1523_ESTDCU_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\ESTDCU_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
///HUNGARY///
	class PB_Radiobag_2015M: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_2015M: PB_RT1523BIG_Base
	{
		displayName = "[2015M] RT-1523G BIG";
		picture = "\PB_Main\ui\HUN\PB_RT1523_2015M_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\2015M_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_2015M: PB_RT1523G_Base
	{
		
		displayName = "[2015M] RT-1523G";
		picture = "\PB_Main\ui\HUN\PB_RT1523BIG_2015M_CA.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\2015M_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
///JAPAN///

	class PB_Radiobag_Type2: PB_Bag_Base_2
	{
		tf_range = 40000;
	};
	class PB_RT1523BIG_Type2: PB_RT1523BIG_Base
	{
		displayName = "[Type II] RT-1523G BIG";
		picture = "\PB_Main\ui\JAP\PB_RT1523BIG_Type2_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\Type2_NICECOMM2_co.paa"};
		range = 40000;
		scope = 2;
	};
	class PB_RT1523_Type2: PB_RT1523G_Base
	{
		
		displayName = "[Type II] RT-1523G";
		picture = "\PB_Main\ui\JAP\PB_RT1523_Type2_ca.paa";
		hiddenSelectionsTextures[] = {"\PB_T_TFAR\data\Type2_PRC177_CO.paa"};
		range = 40000;
		scope = 2;
	};
};