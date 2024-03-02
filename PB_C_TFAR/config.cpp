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
		version = "1.1.3";
		units[] = {};
		weapons[] = {};
		requiredVersion = "1.1.3";
		requiredAddons[] = 
		{
			"tfar_core",
			"tfar_backpacks",
			"PB_Main",
			"PB_British_Kit"
		};
		skipWhenMissingDependencies = 1;
	};
};
class CfgVehicles
{
	class Bag_Base;
	class Bag_Base_2: Bag_Base
	{
		tf_hasLRradio = 1;
		tf_range = 40000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
///BRITISH///
	class PB_Radiobag_MTP: Bag_Base
	{
		tf_hasLRradio = 1;
		tf_range = 40000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
	class PB_Radiobag_DPM: Bag_Base
	{
		tf_hasLRradio = 1;
		tf_range = 40000;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
};