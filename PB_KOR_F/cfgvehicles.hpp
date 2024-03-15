///INHERI///
class RHS_TOW_TriPod_WD;
class RHS_M252_WD;
class RHS_M119_WD;
class rhs_Metis_9k115_2_msv;
class RHS_UH60M;
class O_APC_Wheeled_02_rcws_v2_F;
class B_Truck_01_ammo_F;
class B_Truck_01_fuel_F;
class B_Truck_01_Repair_F;
class rhsusf_m109_usarmy;
class PB_UK_AH64E;
class RHS_MELB_AH6M;
class RHS_MELB_MH6M;
class RHS_UH60M2;
class PB_KOR_UH60M_A: RHS_UH60M
{
	scope = 0;
    class Turrets;
};
class PB_KOR_UH60M_B: PB_KOR_UH60M_A
{
	scope = 0;
    class Turrets: Turrets
    {
        class CopilotTurret;
        class MainTurret;
        class RightDoorGun;
        class CargoTurret_01;
        class CargoTurret_02;
        class CargoTurret_03;
        class CargoTurret_04;
    };
};
class RHS_CH_47F_10;
///ARTILLERY///
class PB_KOR_187: RHS_M252_WD
{
    editorpreview = "PB_EP\ui\Korea\PB_KOR_187.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_KOR_Faction";
	editorCategory = "PB_KOR_Top";
	editorSubcategory = "PB_KOR_ART";
	vehicleclass = "PB_KOR_ART";
	crew = "PB_KOR_SOL_R";
	displayname = "KM-187 ";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_KOR_KH179: RHS_M119_WD
{
    editorpreview = "PB_EP\ui\Australia\PB_AUS_M777.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_KOR_Faction";
	editorCategory = "PB_KOR_Top";
	editorSubcategory = "PB_KOR_ART";
	vehicleclass = "PB_KOR_ART";
	crew = "PB_KOR_SOL_R";
	displayname = "KH179 ";
    
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_KOR_K55: rhsusf_m109_usarmy
{
	scope = 2;
    editorpreview = "PB_EP\ui\Korea\PB_KOR_K55.jpg";
	scopeCurator = 2;
	side = "1";
	faction = "PB_KOR_Faction";
	editorCategory = "PB_KOR_Top";
	editorSubcategory = "PB_KOR_ART";
	vehicleclass = "PB_KOR_ART";
	crew = "PB_KOR_SOL_C";
	displayname = "K-55 ";
    
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///TANKS///
///APCS///
class PB_KOR_K808: O_APC_Wheeled_02_rcws_v2_F
{
    editorpreview = "PB_EP\ui\Korea\PB_KOR_K808.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_KOR_Faction";
	editorCategory = "PB_KOR_Top";
	editorSubcategory = "PB_KOR_APCs";
	vehicleclass = "PB_KOR_APCs";
	crew = "PB_KOR_SOL_C";
	displayname = "K808 White Tiger";
    
	hiddenSelections[] = {"camo1","camo2","camo3","CamoNet","CamoSlat"};
	textureslist[] =
	{
		"PB_KOR_APC", 1
	};	
	class EventHandlers : EventHandlers
	{
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};
	textureList[]=
	{
		"PB_KOR_APC",	1
	};
		class TextureSources
		{
			class PB_KOR_APC
			{
				displayName="Korean Vehicle Camo";
				author="Kartsa";
				Textures[] = 
				{
					"PB_KOR_F\data\kor_apc_01.paa",
					"PB_KOR_F\data\kor_apc_02.paa",
					"PB_KOR_F\data\kor_apc_03.paa",
					"A3\Armor_F\Data\camonet_green_co.paa",
					"A3\armor_f\data\cage_olive_co.paa"
				};
				factions[]=
				{
					"PB_KORFaction"
				};
			};
		};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///MRAPS///
///CARS///
///HELICOPTERS///
class PB_KOR_AH64E: PB_UK_AH64E
{
    editorpreview = "PB_EP\ui\Korea\PB_KOR_AH64E.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_KOR_Faction";
	editorCategory = "PB_KOR_Top";
	editorSubcategory = "PB_KOR_HELI";
	vehicleclass = "PB_KOR_HELI";
	crew = "PB_KOR_SOL_HP";
    
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_KOR_MD500_A: RHS_MELB_AH6M
{
    editorpreview = "PB_EP\ui\Korea\PB_KOR_MD500_A.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_KOR_Faction";
	editorCategory = "PB_KOR_Top";
	editorSubcategory = "PB_KOR_HELI";
	vehicleclass = "PB_KOR_HELI";
	crew = "PB_KOR_SOL_HP";
	displayname = "MD-500 (Armed)";
    
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa",""};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_KOR_MD500: RHS_MELB_MH6M
{
    editorpreview = "PB_EP\ui\Korea\PB_KOR_MD500.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_KOR_Faction";
	editorCategory = "PB_KOR_Top";
	editorSubcategory = "PB_KOR_HELI";
	vehicleclass = "PB_KOR_HELI";
	crew = "PB_KOR_SOL_HP";
	displayname = "MD-500";
    
	hiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa",""};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_KOR_Chinook: RHS_CH_47F_10
{
    editorpreview = "PB_EP\ui\Korea\PB_KOR_Chinook.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_KOR_Faction";
	editorCategory = "PB_KOR_Top";
	editorSubcategory = "PB_KOR_HELI";
	vehicleclass = "PB_KOR_HELI";
	crew = "PB_KOR_SOL_HP";
	displayname = "Chinook";
	hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
	hiddenSelectionsTextures[] = 
	{
		"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa",
		"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa",
		"",
		"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_KOR_UH60M: PB_KOR_UH60M_B
{
    editorpreview = "PB_EP\ui\Korea\PB_KOR_UH60M.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_KOR_Faction";
	editorCategory = "PB_KOR_Top";
	editorSubcategory = "PB_KOR_HELI";
	vehicleclass = "PB_KOR_HELI";
	crew = "PB_KOR_SOL_HP";
    class Turrets: Turrets
    {
        class CopilotTurret: CopilotTurret
        {
        };
        class MainTurret: MainTurret
        {
			gunnerType = "PB_KOR_SOL_HP";
        };
        class RightDoorGun: RightDoorGun
        {
			gunnerType = "PB_KOR_SOL_HP";
        };
        class CargoTurret_01: CargoTurret_01
        {
        };
        class CargoTurret_02: CargoTurret_02
        {
        };
        class CargoTurret_03: CargoTurret_03
        {
        };
        class CargoTurret_04: CargoTurret_04
        {
        };
    };
};
class PB_KOR_UH60M2: RHS_UH60M2
{
    editorpreview = "PB_EP\ui\Korea\PB_KOR_UH60M2.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_KOR_Faction";
	editorCategory = "PB_KOR_Top";
	editorSubcategory = "PB_KOR_HELI";
	vehicleclass = "PB_KOR_HELI";
	crew = "PB_KOR_SOL_HP";
};
///TURRETS///
class PB_KOR_TOW: RHS_TOW_TriPod_WD
{
    editorpreview = "PB_EP\ui\Korea\PB_KOR_TOW.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_KOR_Faction";
	editorCategory = "PB_KOR_Top";
	editorSubcategory = "PB_KOR_TUR";
	vehicleclass = "PB_KOR_TUR";
	crew = "PB_KOR_SOL_R";
	displayname = "BGM-71 TOW";
    
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_KOR_METIS: rhs_Metis_9k115_2_msv
{
    editorpreview = "PB_EP\ui\Korea\PB_KOR_METIS.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_KOR_Faction";
	editorCategory = "PB_KOR_Top";
	editorSubcategory = "PB_KOR_TUR";
	vehicleclass = "PB_KOR_TUR";
	crew = "PB_KOR_SOL_R";
    
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///TRUCKS///
class PB_KOR_HEMTT_A: B_Truck_01_ammo_F
{
    editorpreview = "PB_EP\ui\Korea\PB_KOR_HEMTT_A.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_KOR_Faction";
	editorCategory = "PB_KOR_Top";
	editorSubcategory = "PB_KOR_Trucks";
	vehicleclass = "PB_KOR_Trucks";
	crew = "PB_KOR_SOL_R";
    
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_KOR_HEMTT_F: B_Truck_01_fuel_F
{
    editorpreview = "PB_EP\ui\Korea\PB_KOR_HEMTT_F.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_KOR_Faction";
	editorCategory = "PB_KOR_Top";
	editorSubcategory = "PB_KOR_Trucks";
	vehicleclass = "PB_KOR_Trucks";
	crew = "PB_KOR_SOL_R";
    
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_KOR_HEMTT_R: B_Truck_01_Repair_F
{
    editorpreview = "PB_EP\ui\Korea\PB_KOR_HEMTT_R.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_KOR_Faction";
	editorCategory = "PB_KOR_Top";
	editorSubcategory = "PB_KOR_Trucks";
	vehicleclass = "PB_KOR_Trucks";
	crew = "PB_KOR_SOL_R";
    
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};