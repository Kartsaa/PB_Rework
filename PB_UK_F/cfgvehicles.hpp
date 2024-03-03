///INHERITANCE////
class Eventhandlers;
class I_APC_tracked_03_cannon_F;
class PB_UK_FV510_O: I_APC_tracked_03_cannon_F
{
		
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_UK_Faction";
	editorCategory = "PB_British_Top";
	editorSubcategory = "PB_British_APCs";
	vehicleclass = "PB_British_APCs";
	crew = "PB_UK_SOL_C";
	displayname = "FV510 Warrior";
	hiddenselections[] = { "camo1","camo2","CamoNet","CamoSlat"};
	class EventHandlers : EventHandlers
	{
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};
	textureList[] = 
	{
		"PB_Warrior_T_O",1,
		"PB_Warrior_T_D",0
	};
	class TextureSources
	{
			class PB_Warrior_T_O
			{
				displayName = "Olive";
				author = "Kartsa";
				factions[] = {
					"PB_UK_Faction"
				};
				Textures[] = {
					"PB_UK_F\data\PB_Warrior_Ext_O_co.paa",
					"PB_UK_F\data\PB_Warrior_Ext2_O_co.paa",
                    "A3\armor_f\data\cage_olive_co.paa",
                    "A3\armor_f\data\camonet_nato_green_co.paa"
				};
			};
			class PB_Warrior_T_D
			{
				displayName = "Tan";
				author = "Kartsa";
				factions[] = {
					"PB_UK_Faction"
				};
				Textures[] = {
					"PB_UK_F\data\PB_Warrior_Ext_D_co.paa",
					"PB_UK_F\data\PB_Warrior_Ext2_D_co.paa",
                    "A3\armor_f\data\cage_sand_co.paa",
                    "A3\armor_f\data\camonet_nato_desert_co.paa"
				};
			};
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_UK_FV510_D: PB_UK_FV510_O
{
		
	editorSubcategory = "PB_British_APCs_D";
	vehicleclass = "PB_British_APCs_D";
	hiddenselections[] = { "camo1","camo2","CamoNet","CamoSlat"};
	textureList[] = 
	{
		"PB_Warrior_T_O",0,
		"PB_Warrior_T_D",1
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};