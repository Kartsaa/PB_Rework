///INHERI///
class rhs_t72bd_tv;
class PB_CZE_72_A: rhs_t72bd_tv
{
	class Turrets;
};
class PB_CZE_72_B: PB_CZE_72_A
{
	class Turrets: Turrets
	{
		class MainTurret;
	};
};
class PB_CZE_72_C: PB_CZE_72_B
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets;
		};
	};
};
class PB_CZE_72_D: PB_CZE_72_C
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics;
				class CommanderMG;
			};
		};
	};
};
class I_APC_Wheeled_03_cannon_F;
class rhs_bmp2e_msv;
class rhs_bmp1_msv;
class rhsgref_brdm2_msv;
class I_Plane_Fighter_04_F;
class rhs_l159_cdf_b_CDF;
class RHS_AH1Z_WD;
class rhsgref_cdf_b_reg_Mi8amt;
///ARTILLERY///
///TANKS///
class PB_CZE_T72M: PB_CZE_72_D
{
    editorpreview = "PB_EP\ui\Czech\PB_CZE_T72M.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CZE_Faction";
	editorCategory = "PB_CZE_Top";
	editorSubcategory = "PB_CZE_Tanks";
	vehicleclass = "PB_CZE_Tanks";
	crew = "PB_CZE_SOL_C";
	displayname = "T-72M4CZ";
	rhs_decalParameters[] = {};	
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					GunnerType = "PB_CZE_SOL_C";
				};
				class CommanderMG: CommanderMG
				{
				};
			};
		};
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
////APCS///
class PB_CZE_PANDUR: I_APC_Wheeled_03_cannon_F
{
    editorpreview = "PB_EP\ui\Czech\PB_CZE_PANDUR.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CZE_Faction";
	editorCategory = "PB_CZE_Top";
	editorSubcategory = "PB_CZE_APCs";
	vehicleclass = "PB_CZE_APCs";
	crew = "PB_CZE_SOL_C";
	displayname = "Pandur II";
	class EventHandlers : EventHandlers
	{
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};
	textureList[]=
	{
		"PB_CZE_PANDUR_O",1,
		"PB_CZE_PANDUR_D",0
	};
	class TextureSources
	{
		class PB_CZE_PANDUR_O
		{
			displayName="Olive";
			author="CapryCorn";
			textures[] = 
			{
				"PB_CZE_F\data\OLV_apc_wheeled_03_ext_co.paa",
				"PB_CZE_F\data\OLV_apc_wheeled_03_ext2_co.paa",
				"PB_CZE_F\data\OLV_rcws30_co.paa",
				"PB_CZE_F\data\OLV_apc_wheeled_03_ext_alpha_co.paa",
				"PB_CZE_F\data\camonet_green_CO.paa",
				"PB_CZE_F\data\cage_olive_CO.paa"
			};
			factions[]=
			{
				"PB_CZE_Faction"
			};
		};
		class PB_CZE_PANDUR_D
		{
			displayName="CapryCorn";
			author="Kartsa";
			textures[] = 
			{
				"PB_CZE_F\data\DES_apc_wheeled_03_ext_co.paa",
				"PB_CZE_F\data\DES_apc_wheeled_03_ext2_co.paa",
				"PB_CZE_F\data\DES_rcws30_co.paa",
				"PB_CZE_F\data\DES_apc_wheeled_03_ext_alpha_co.paa",
				"PB_CZE_F\data\camonet_desert_CO.paa",
				"PB_CZE_F\data\cage_desert_CO.paa"
			};
			factions[]=
			{
				"PB_CZE_Faction"
			};
		};
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_CZE_BVP1: rhs_bmp1_msv
{
    editorpreview = "PB_EP\ui\Czech\PB_CZE_BVP1.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CZE_Faction";
	editorCategory = "PB_CZE_Top";
	editorSubcategory = "PB_CZE_APCs";
	vehicleclass = "PB_CZE_APCs";
	crew = "PB_CZE_SOL_C";
	displayname = "BVP-1";
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_CZE_BVP2: rhs_bmp2e_msv
{
    editorpreview = "PB_EP\ui\Czech\PB_CZE_BVP2.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CZE_Faction";
	editorCategory = "PB_CZE_Top";
	editorSubcategory = "PB_CZE_APCs";
	vehicleclass = "PB_CZE_APCs";
	crew = "PB_CZE_SOL_C";
	displayname = "BVP-2";
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_CZE_BRDM2: rhsgref_brdm2_msv
{
    editorpreview = "PB_EP\ui\Czech\PB_CZE_BRDM2.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CZE_Faction";
	editorCategory = "PB_CZE_Top";
	editorSubcategory = "PB_CZE_APCs";
	vehicleclass = "PB_CZE_APCs";
	crew = "PB_CZE_SOL_C";
	displayname = "BRDM-2";
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
////PLANES///
class PB_CZE_GRIPEN: I_Plane_Fighter_04_F
{
    editorpreview = "PB_EP\ui\Czech\PB_CZE_GRIPEN.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CZE_Faction";
	editorCategory = "PB_CZE_Top";
	editorSubcategory = "PB_CZE_Planes";
	vehicleclass = "PB_CZE_Planes";
	crew = "PB_CZE_SOL_JP";
	displayname = "JAS 39 Gripen";
	class EventHandlers : EventHandlers
	{
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};
	textureList[]=
	{
		"CamoGrey",1,
		"DigitalCamoGrey",0,
		"DigitalCamoGreen",0
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_CZE_ALCA: rhs_l159_cdf_b_CDF
{
    editorpreview = "PB_EP\ui\Czech\PB_CZE_ALCA.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CZE_Faction";
	editorCategory = "PB_CZE_Top";
	editorSubcategory = "PB_CZE_Planes";
	vehicleclass = "PB_CZE_Planes";
	crew = "PB_CZE_SOL_JP";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///HELIS///
class PB_CZE_Viper: RHS_AH1Z_WD
{
    editorpreview = "PB_EP\ui\Czech\PB_CZE_VIPER.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CZE_Faction";
	editorCategory = "PB_CZE_Top";
	editorSubcategory = "PB_CZE_HELI";
	vehicleclass = "PB_CZE_HELI";
	crew = "PB_CZE_SOL_HP";
	displayname = "AH-1Z Viper";
	hiddenSelectionsTextures[] = {
		"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_body_co.paa",
		"\rhsusf\addons\rhsusf_a2port_air2\ah1z\data\ah1z_engines_co.paa",
		"",
		""
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_CZE_Mi17: rhsgref_cdf_b_reg_Mi8amt
{
    editorpreview = "PB_EP\ui\Czech\PB_CZE_MI17.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CZE_Faction";
	editorCategory = "PB_CZE_Top";
	editorSubcategory = "PB_CZE_HELI";
	vehicleclass = "PB_CZE_HELI";
	crew = "PB_CZE_SOL_HP";
	displayname = "Mi-17";
	hiddenselectionstextures[] = 
	{
		"PB_CZE_F\data\mi_171_co.paa",
		"PB_CZE_F\data\mi171_det_co.paa"
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};