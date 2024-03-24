///INHERI///
class I_MBT_03_cannon_F;
class rhsusf_m113_usarmy;
class rhsusf_m113_usarmy_supply;
class rhsusf_m113_usarmy_medical;
class rhsusf_m113_usarmy_unarmed;
class O_APC_Wheeled_02_rcws_v2_F;
class rhsusf_M142_usmc_WD;
class RHS_M252_WD;
class RHS_C130J_Cargo;
///ARTILLERY///

class PB_EST_M252: RHS_M252_WD
{
	editorpreview = "PB_EP\ui\Estonia\PB_EST_M252.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_EST_Faction";
	editorCategory = "PB_EST_Top";
	editorSubcategory = "PB_EST_ART";
	vehicleclass = "PB_EST_ART";
	crew = "PB_EST_SOL_R";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_EST_M142: rhsusf_M142_usmc_WD
{
	editorpreview = "PB_EP\ui\Estonia\PB_EST_M142.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_EST_Faction";
	editorCategory = "PB_EST_Top";
	editorSubcategory = "PB_EST_ART";
	vehicleclass = "PB_EST_ART";
	crew = "PB_EST_SOL_C";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///AA///
///TANKS///
///APCS///
class PB_EST_OTOKAR: O_APC_Wheeled_02_rcws_v2_F
{
	editorpreview = "PB_EP\ui\Estonia\PB_EST_OTOKAR.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_EST_Faction";
	editorCategory = "PB_EST_Top";
	editorSubcategory = "PB_EST_APCs";
	vehicleclass = "PB_EST_APCs";
	crew = "PB_EST_SOL_C";
	displayname = "Otokar ARMA";
	hiddenSelections[] = {"camo1","camo2","camo3","CamoNet","CamoSlat"};
	texturelist[] =
	{
		"PB_EST_APC",1,
	};	
	class EventHandlers : EventHandlers
	{
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};
		class TextureSources
		{
			class PB_EST_APC
			{
				displayName="Olive";
				author="Kartsa";
				Textures[] = 
				{
					"PB_EST_F\data\EST_otokar_co.paa",
					"PB_KOR_F\data\KOR_apc_02.paa",
					"PB_KOR_F\data\KOR_apc_03.paa",
					"A3\Armor_F\Data\camonet_green_co.paa",
					"A3\armor_f\data\cage_olive_co.paa"
				};
				factions[]=
				{
					"PB_EST_Faction"
				};
			};
		};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///CARS///
///MRAP///
///HELICOPTERS///
///TURRETS///
///PLANES///