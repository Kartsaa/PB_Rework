
	class B_MRAP_01_F;
	class B_MRAP_01_hmg_F;
	class B_MRAP_01_gmg_F;
	class B_MBT_01_cannon_F;
	class B_MBT_01_TUSK_F;
	class B_APC_Tracked_01_CRV_F;
	class B_APC_Tracked_01_rcws_F;
	class I_APC_Wheeled_03_cannon_F;
	class B_APC_Wheeled_01_cannon_F;
	class LSV_01_unarmed_base_F;
	class LSV_01_armed_base_F;
	class LSV_01_AT_base_F;
	class I_APC_tracked_03_cannon_F;
	class Plane_CAS_02_dynamicLoadout_base_F;
///MATV///
	class PB_MATV: B_MRAP_01_F
	{
		author = "CapryCorn, Kartsa";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "BLU_F";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"PB_Blu_Olive",1,
			"PB_Blu_Desert",1,
			"PB_Blu_UN",0,
			"PB_Blu_SNW",0,
		};
		class TextureSources
		{
			class PB_Blu_Olive
			{
				displayName = "Olive";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\OLV_mrap_01_base_co.paa","PB_Vehicle_T\data\OLV_mrap_01_add_co.paa"};
			};
			class PB_Blu_Desert
			{
				displayName = "Desert";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\DES_mrap_01_base_co.paa","PB_Vehicle_T\data\DES_mrap_01_add_co.paa"};
			};
			class PB_Blu_UN
			{
				displayName = "UN";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\UN_mrap_01_base_co.paa","PB_Vehicle_T\data\UN_mrap_01_add_co.paa"};
			};
			class PB_Blu_SNW
			{
				displayName = "Snow";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\SNW_mrap_01_base_co.paa","PB_Vehicle_T\data\SNW_mrap_01_add_co.paa"};
			};
		};
	};
	class PB_MATV_HMG: B_MRAP_01_hmg_F
	{
		author = "CapryCorn, Kartsa";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "BLU_F";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		
		textureList[] = {
			"PB_Blu_Olive",1,
			"PB_Blu_Desert",1,
			"PB_Blu_UN",0,
			"PB_Blu_SNW",0,
		};
		class TextureSources
		{
			class PB_Blu_Olive
			{
				displayName = "Olive";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\OLV_mrap_01_base_co.paa","PB_Vehicle_T\data\OLV_mrap_01_add_co.paa","PB_Vehicle_T\data\OLV_mrap_01_trrt_co.paa"};
			};
			class PB_Blu_Desert
			{
				displayName = "Desert";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\DES_mrap_01_base_co.paa","PB_Vehicle_T\data\DES_mrap_01_add_co.paa","PB_Vehicle_T\data\DES_mrap_01_trrt_co.paa"};
			};
			class PB_Blu_UN
			{
				displayName = "UN";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\UN_mrap_01_base_co.paa","PB_Vehicle_T\data\UN_mrap_01_add_co.paa","PB_Vehicle_T\data\UN_mrap_01_trrt_co.paa"};
			};
			class PB_Blu_SNW
			{
				displayName = "Snow";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\SNW_mrap_01_base_co.paa","PB_Vehicle_T\data\SNW_mrap_01_add_co.paa","PB_Vehicle_T\data\SNW_mrap_01_trrt_co.paa"};
			};
		};
	};
	class PB_MATV_GMG: B_MRAP_01_gmg_F
	{
		author = "CapryCorn, Kartsa";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "BLU_F";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"PB_Blu_Olive",1,
			"PB_Blu_Desert",1,
			"PB_Blu_UN",0,
			"PB_Blu_SNW",0,
		};
		class TextureSources
		{
			class PB_Blu_Olive
			{
				displayName = "Olive";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\OLV_mrap_01_base_co.paa","PB_Vehicle_T\data\OLV_mrap_01_add_co.paa","PB_Vehicle_T\data\OLV_mrap_01_trrt_co.paa"};
			};
			class PB_Blu_Desert
			{
				displayName = "Desert";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\DES_mrap_01_base_co.paa","PB_Vehicle_T\data\DES_mrap_01_add_co.paa","PB_Vehicle_T\data\DES_mrap_01_trrt_co.paa"};
			};
			class PB_Blu_UN
			{
				displayName = "UN";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\UN_mrap_01_base_co.paa","PB_Vehicle_T\data\UN_mrap_01_add_co.paa","PB_Vehicle_T\data\UN_mrap_01_trrt_co.paa"};
			};
			class PB_Blu_SNW
			{
				displayName = "Snow";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\SNW_mrap_01_base_co.paa","PB_Vehicle_T\data\SNW_mrap_01_add_co.paa","PB_Vehicle_T\data\SNW_mrap_01_trrt_co.paa"};
			};
		};
	};
///MERKAVA///
	class PB_Merkava_Mk4: B_MBT_01_cannon_F
	{
		author = "CapryCorn, Kartsa";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "BLU_F";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"PB_Blu_Olive",1,
			"PB_Blu_Desert",1,
			"PB_Blu_SNW",0
		};
		class TextureSources
		{
			class PB_Blu_Olive
			{
				displayName = "Olive";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\OLV_mbt_01_body_co.paa","PB_Vehicle_T\data\OLV_mbt_01_tow_co.paa","a3\Armor_F\Data\camonet_green_CO.paa"};
			};
			class PB_Blu_Desert
			{
				displayName = "Desert";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\DES_mbt_01_body_co.paa","PB_Vehicle_T\data\DES_mbt_01_tow_co.paa","PB_Vehicle_T\data\camonet_desert_CO.paa"};
			};
			class PB_Blu_Snow
			{
				displayName = "UN";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\UN_mbt_01_body_co.paa","PB_Vehicle_T\data\UN_mbt_01_tow_co.paa","PB_Vehicle_T\data\camonet_snow_CO.paa"};
			};
		};
	};
	class PB_Merkava_Mk4_TUSK: B_MBT_01_TUSK_F
	{
		author = "CapryCorn, Kartsa";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "BLU_F";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"PB_Blu_Olive",1,
			"PB_Blu_Desert",1,
			"PB_Blu_SNW",0
		};
		class TextureSources
		{
			class PB_Blu_Olive
			{
				displayName = "Olive";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\OLV_mbt_01_body_co.paa","PB_Vehicle_T\data\OLV_mbt_01_tow_co.paa","PB_Vehicle_T\data\OLV_mbt_addons_co.paa","a3\Armor_F\Data\camonet_green_CO.paa"};
			};
			class PB_Blu_Desert
			{
				displayName = "Desert";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\DES_mbt_01_body_co.paa","PB_Vehicle_T\data\DES_mbt_01_tow_co.paa","PB_Vehicle_T\data\DES_mbt_addons_co.paa","PB_Vehicle_T\data\camonet_desert_CO.paa"};
			};
			class PB_Blu_Snow
			{
				displayName = "UN";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\UN_mbt_01_body_co.paa","PB_Vehicle_T\data\UN_mbt_01_tow_co.paa","PB_Vehicle_T\data\UN_mbt_addons_co.paa","PB_Vehicle_T\data\camonet_snow_CO.paa"};
			};
		};
	};
///NAMER///
	class PB_Namer: B_APC_Tracked_01_rcws_F
	{
		author = "CapryCorn, Kartsa";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "BLU_F";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"PB_Blu_Olive",1,
			"PB_Blu_Desert",1,
			"PB_Blu_UN",0
		};
		class TextureSources
		{
			class PB_Blu_Olive
			{
				displayName = "Olive";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\OLV_apc_tracked_01_body_co.paa","PB_Vehicle_T\data\OLV_mbt_01_body_co.paa","PB_Vehicle_T\data\OLV_turret_co.paa","PB_Vehicle_T\data\camonet_green_CO.paa"};
			};
			class PB_Blu_Desert
			{
				displayName = "Desert";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\DES_apc_tracked_01_body_co.paa","PB_Vehicle_T\data\DES_mbt_01_body_co.paa","PB_Vehicle_T\data\DES_turret_co.paa","PB_Vehicle_T\data\camonet_desert_CO.paa"};
			};
			class PB_Blu_UN
			{
				displayName = "UN";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\UN_apc_tracked_01_body_co.paa","PB_Vehicle_T\data\UN_mbt_01_body_co.paa","PB_Vehicle_T\data\UN_turret_co.paa","PB_Vehicle_T\data\camonet_snow_CO.paa"};
			};
		};
	};
	class PB_Nemmera: B_APC_Tracked_01_CRV_F
	{
		author = "CapryCorn, Kartsa";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "BLU_F";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"PB_Blu_Olive",1,
			"PB_Blu_Desert",1,
			"PB_Blu_UN",0
		};
		class TextureSources
		{
			class PB_Blu_Olive
			{
				displayName = "Olive";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\OLV_apc_tracked_01_body_co.paa","PB_Vehicle_T\data\OLV_mbt_01_body_co.paa","PB_Vehicle_T\data\OLV_turret_co.paa","PB_Vehicle_T\data\OLV_apc_tracked_01_crv_co.paa","PB_Vehicle_T\data\camonet_green_CO.paa"};
			};
			class PB_Blu_Desert
			{
				displayName = "Desert";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\DES_apc_tracked_01_body_co.paa","PB_Vehicle_T\data\DES_mbt_01_body_co.paa","PB_Vehicle_T\data\DES_turret_co.paa","PB_Vehicle_T\data\DES_apc_tracked_01_crv_co.paa","PB_Vehicle_T\data\camonet_desert_CO.paa"};
			};
			class PB_Blu_UN
			{
				displayName = "UN";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\UN_apc_tracked_01_body_co.paa","PB_Vehicle_T\data\UN_mbt_01_body_co.paa","PB_Vehicle_T\data\UN_turret_co.paa","PB_Vehicle_T\data\UN_apc_tracked_01_crv_co.paa","PB_Vehicle_T\data\camonet_snow_CO.paa"};
			};
		};
	};
///PANDUR///
	class PB_Pandur_II: I_APC_Wheeled_03_cannon_F
	{
		author = "CapryCorn, Kartsa";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "BLU_F";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"PB_Blu_Olive",1,
			"PB_Blu_Desert",1,
			"PB_Blu_UN",0
		};
		class TextureSources
		{
			class PB_Blu_Olive
			{
				displayName = "Olive";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\OLV_apc_wheeled_03_ext_co.paa","PB_Vehicle_T\data\OLV_apc_wheeled_03_ext2_co.paa","PB_Vehicle_T\data\OLV_rcws30_co.paa","PB_Vehicle_T\data\OLV_apc_wheeled_03_ext_alpha_co.paa","PB_Vehicle_T\data\camonet_green_CO.paa","PB_Vehicle_T\data\cage_olive_CO.paa"};
			};
			class PB_Blu_Desert
			{
				displayName = "Desert";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\DES_apc_wheeled_03_ext_co.paa","PB_Vehicle_T\data\DES_apc_wheeled_03_ext2_co.paa","PB_Vehicle_T\data\DES_rcws30_co.paa","PB_Vehicle_T\data\DES_apc_wheeled_03_ext_alpha_co.paa","PB_Vehicle_T\data\camonet_desert_CO.paa","PB_Vehicle_T\data\cage_desert_CO.paa"};
			};
			class PB_Blu_UN
			{
				displayName = "UN";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\UN_apc_wheeled_03_ext_co.paa","PB_Vehicle_T\data\UN_apc_wheeled_03_ext2_co.paa","PB_Vehicle_T\data\UN_rcws30_co.paa","PB_Vehicle_T\data\UN_apc_wheeled_03_ext_alpha_co.paa","PB_Vehicle_T\data\camonet_snow_CO.paa","PB_Vehicle_T\data\cage_snow_CO.paa"};
			};
		};
	};
///BADGER///
	class PB_Badger_IFV: B_APC_Wheeled_01_cannon_F
	{
		author = "CapryCorn, Kartsa";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "BLU_F";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"PB_Blu_Olive",1,
			"PB_Blu_Desert",1,
			"PB_Blu_UN",0
		};
		class TextureSources
		{
			class PB_Blu_Olive
			{
				displayName = "Olive";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\OLV_apc_wheeled_01_base_co.paa","PB_Vehicle_T\data\OLV_apc_wheeled_01_adds_co.paa","PB_Vehicle_T\data\OLV_apc_wheeled_01_tows_co.paa","a3\Armor_F\Data\camonet_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
			};
			class PB_Blu_Desert
			{
				displayName = "Desert";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\DES_apc_wheeled_01_base_co.paa","PB_Vehicle_T\data\DES_apc_wheeled_01_adds_co.paa","PB_Vehicle_T\data\DES_apc_wheeled_01_tows_co.paa","PB_Vehicle_T\data\camonet_desert_CO.paa","PB_Vehicle_T\data\cage_desert_co.paa"};
			};
			class PB_Blu_UN
			{
				displayName = "UN";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\UN_apc_wheeled_01_base_co.paa","PB_Vehicle_T\data\UN_apc_wheeled_01_adds_co.paa","PB_Vehicle_T\data\UN_apc_wheeled_01_tows_co.paa","PB_Vehicle_T\data\camonet_snow_CO.paa","PB_Vehicle_T\data\cage_snow_co.paa"};
			};
		};
	};
///DAGOR///
	class PB_Dagor_Desert: LSV_01_unarmed_base_F
	{
		
		author = "CapryCorn, Kartsa";
		scope = 2;
		forceInGarage = 1;
		side = 1;
		faction = "rhs_faction_usarmy_d";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"PB_Desert_Dagor",1,
			"PB_Olive_Dagor",0
		};
		displayName = "Polaris DAGOR (D)";
		crew = "rhsusf_army_ocp_arb_rifleman";
		class TextureSources
		{
			class PB_Desert_Dagor
			{
				displayName = "Desert";
				textures[] = {"PB_Vehicle_T\data\DES_Dagor_Body_co.paa","PB_Vehicle_T\data\DES_Dagor_Adds_co.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","PB_Vehicle_T\data\DES_Dagor_Adds_Ext_co.paa"};
			};
			class PB_Olive_Dagor
			{
				displayName = "Olive";
				textures[] = {"PB_Vehicle_T\data\OLV_Dagor_Body_co.paa","PB_Vehicle_T\data\OLV_Dagor_Adds_co.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","PB_Vehicle_T\data\OLV_Dagor_Adds_Ext_co.paa"};
			};
		};
	};	
	class PB_Dagor_Olive: PB_Dagor_Desert
	{
		side = 1;
		scope = 2;
		faction = "rhs_faction_usarmy_wd";
		displayName = "Polaris DAGOR (O)";
		crew = "rhsusf_army_ucp_rifleman";
		textureList[] = {
			"PB_Desert_Dagor",0,
			"PB_Olive_Dagor",1
		};
	};
	class PB_Dagor_Armed_Desert: LSV_01_armed_base_F
	{
		author = "CapryCorn, Kartsa";
		scope = 2;
		forceInGarage = 1;
		side = 1;
		faction = "rhs_faction_usarmy_d";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"PB_Desert_Dagor",1,
			"PB_Olive_Dagor",0
		};
		displayName = "Polaris DAGOR (D) (XM312)";
		crew = "rhsusf_army_ocp_arb_rifleman";
		class TextureSources
		{
			class PB_Desert_Dagor
			{
				displayName = "Desert";
				textures[] = {"PB_Vehicle_T\data\DES_Dagor_Body_co.paa","PB_Vehicle_T\data\DES_Dagor_Adds_co.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","PB_Vehicle_T\data\DES_Dagor_Adds_Ext_co.paa"};
			};
			class PB_Olive_Dagor
			{
				displayName = "Olive";
				textures[] = {"PB_Vehicle_T\data\OLV_Dagor_Body_co.paa","PB_Vehicle_T\data\OLV_Dagor_Adds_co.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","PB_Vehicle_T\data\OLV_Dagor_Adds_Ext_co.paa"};
			};
		};
	};
	class PB_Dagor_Armed_Olive: PB_Dagor_Armed_Desert
	{
		side = 1;
		scope = 2;
		faction = "rhs_faction_usarmy_wd";
		displayName = "Polaris DAGOR (O) (XM312)";
		crew = "rhsusf_army_ucp_rifleman";
		textureList[] = {
			"PB_Desert_Dagor",0,
			"PB_Olive_Dagor",1
		};
	};
	class PB_Dagor_AT_Desert: LSV_01_AT_base_F
	{
		author = "CapryCorn, Kartsa";
		scope = 2;
		forceInGarage = 1;
		side = 1;
		faction = "rhs_faction_usarmy_d";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"PB_Desert_Dagor",1,
			"PB_Olive_Dagor",0
		};
		displayName = "Polaris DAGOR (D) (Mini-Spike AT)";
		crew = "rhsusf_army_ocp_arb_rifleman";
		class TextureSources
		{
			class PB_Desert_Dagor
			{
				displayName = "Desert";
				textures[] = {"PB_Vehicle_T\data\DES_Dagor_Body_co.paa","PB_Vehicle_T\data\DES_Dagor_Adds_co.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","PB_Vehicle_T\data\DES_Dagor_Adds_Ext_co.paa","\A3\weapons_f_beta\launchers\titan\data\launcher_co.paa","\A3\weapons_f_beta\launchers\titan\data\tubem_co.paa"};
			};
			class PB_Olive_Dagor
			{
				displayName = "Olive";
				textures[] = {"PB_Vehicle_T\data\OLV_Dagor_Body_co.paa","PB_Vehicle_T\data\OLV_Dagor_Adds_co.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","PB_Vehicle_T\data\OLV_Dagor_Adds_Ext_co.paa","\A3\Weapons_F_Beta\Launchers\Titan\data\launcher_INDP_co.paa","\A3\Weapons_F_Beta\Launchers\Titan\data\tubem_INDP_co.paa"};
			};
		};
	};
	class PB_Dagor_AT_Olive: PB_Dagor_AT_Desert
	{
		side = 1;
		scope = 2;
		faction = "rhs_faction_usarmy_wd";
		displayName = "Polaris DAGOR (D) (Mini-Spike AT)";
		crew = "rhsusf_army_ucp_rifleman";
		textureList[] = {
			"PB_Desert_Dagor",0,
			"PB_Olive_Dagor",1
		};
	};
///WARRIUH///
	class PB_Warrior_IFV: I_APC_tracked_03_cannon_F
	{
		author = "CapryCorn, Kartsa";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "BLU_F";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"PB_Blu_Woodland",1,
			"PB_Blu_Desert",1,
			"PB_Blu_UN",0
		};
		class TextureSources
		{
			class PB_Blu_Woodland
			{
				displayName = "Woodland";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\OLV_apc_tracked_03_ext_co.paa","PB_Vehicle_T\data\OLV_apc_tracked_03_ext2_co.paa","a3\Armor_F\Data\camonet_green_CO.paa","A3\armor_f\data\cage_G1_co.paa"};
			};
			class PB_Blu_Desert
			{
				displayName = "Desert";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\DES_apc_tracked_03_ext_co.paa","PB_Vehicle_T\data\DES_apc_tracked_03_ext2_co.paa","PB_Vehicle_T\data\camonet_desert_CO.paa","PB_Vehicle_T\data\cage_desert_co.paa"};
			};
			class PB_Blu_Snow
			{
				displayName = "UN";
				author = "CapryCorn";
				textures[] = {"PB_Vehicle_T\data\UN_apc_tracked_03_ext_co.paa","PB_Vehicle_T\data\UN_apc_tracked_03_ext2_co.paa","PB_Vehicle_T\data\camonet_snow_CO.paa","PB_Vehicle_T\data\cage_snow_co.paa"};
			};
		};
	};
///YAK130///
	class PB_YAK130: Plane_CAS_02_dynamicLoadout_base_F
	{	
		author = "Holm, Kartsa";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 0;
		faction = "rhs_faction_vvs";
		displayName="Yak-130 (VSS)";
		crew="rhs_pilot";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"PB_Blu_CSAT",0,
			"PB_Blu_VSS",1
		};
		class TextureSources
		{
			class PB_Blu_CSAT
			{
				displayName="CSAT";
				author="BI";
				textures[]=
				{
					"\A3\Air_F_EPC\Plane_CAS_02\Data\fighter02_ext01_co.paa",
					"\A3\Air_F_EPC\Plane_CAS_02\Data\fighter02_ext02_co.paa"
				};
			};
			class PB_Blu_VSS
			{
				displayName="VSS";
				author="Holm";
				textures[]=
				{
					"PB_Vehicle_T\data\VVS_fighter02_ext01_co.paa",
					"PB_Vehicle_T\data\VVS_fighter02_ext02_co.paa"
				};
			};
		};
	};