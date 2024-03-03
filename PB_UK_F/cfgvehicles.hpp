///APCS////
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
///MRAPS///
class rhsusf_M1237_M2_usarmy_d;
class PB_UK_MASTIFF_M2_D: rhsusf_M1237_M2_usarmy_d
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_UK_Faction";
	editorCategory = "PB_British_Top";
	editorSubcategory = "PB_British_MRAP_D";
	vehicleclass = "PB_British_MRAP_D";
	crew = "PB_UK_SOL_R";
	displayname = "6x6 Mastiff (M2)";
	hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","pintle","camo7","camo8","camo9"};
	HiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_RG33L\data\RG33_Body_CO.paa",
		"rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_CO.paa",
		"rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_CO.paa",
		"rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_CO.paa",
		"rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
		"rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_CO.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
		"rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
		"rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa",
		""
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_UK_MASTIFF_M2_WD: rhsusf_M1237_M2_usarmy_d
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_UK_Faction";
	editorCategory = "PB_British_Top";
	editorSubcategory = "PB_British_MRAP";
	vehicleclass = "PB_British_MRAP";
	crew = "PB_UK_SOL_R";
	displayname = "6x6 Mastiff (M2)";
	hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","pintle","camo7","camo8","camo9"};
	HiddenSelectionsTextures[] = 
	{
		"rhsusf\addons\rhsusf_RG33L\data\RG33_Body_WD_CO.paa",
		"rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_WD_CO.paa",
		"rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_WD_CO.paa",
		"rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_WD_CO.paa",
		"rhsusf\addons\rhsusf_RG33L\data\RG33_TurretWD_CO.paa",
		"rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_WD_CO.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
		"rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
		"rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_wdl_co.paa",
		""
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class rhsusf_CGRCAT1A2_M2_usmc_d;
class PB_UK_MASTIFF_M2_D: rhsusf_M1237_M2_usarmy_d
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_UK_Faction";
	editorCategory = "PB_British_Top";
	editorSubcategory = "PB_British_MRAP_D";
	vehicleclass = "PB_British_MRAP_D";
	crew = "PB_UK_SOL_R";
	displayname = "Ridgeback (M2)";
	hiddenSelections[] = {"camo","camo1","camo2","pintle"};
	HiddenSelectionsTextures[] = 
	{
		"rhsusf\addons\rhsusf_cougar\data\CGR_Body_CO.paa",
		"",
		"rhsusf\addons\rhsusf_rg33l\data\MCTAGS_CO.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_UK_MASTIFF_M2_WD: rhsusf_M1237_M2_usarmy_d
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_UK_Faction";
	editorCategory = "PB_British_Top";
	editorSubcategory = "PB_British_MRAP";
	vehicleclass = "PB_British_MRAP";
	crew = "PB_UK_SOL_R";
	displayname = "Ridgeback (M2)";
	hiddenSelections[] = {"camo","camo1","camo2","pintle"};
	HiddenSelectionsTextures[] = 
	{
		"rhsusf\addons\rhsusf_cougar\data\CGR_Body_WD_CO.paa",
		"",
		"rhsusf\addons\rhsusf_rg33l\data\MCTAGS_WD_CO.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
////ARTILLERY///
class RHS_M119_D;
class PB_UK_L118: RHS_M119_D
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_UK_Faction";
	editorCategory = "PB_British_Top";
	editorSubcategory = "PB_British_ART";
	vehicleclass = "PB_British_ART";
	crew = "PB_UK_SOL_R";
	displayname = "L118 Light Gun";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class rhsusf_m109_usarmy;
class PB_UK_AS90: rhsusf_m109_usarmy
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_UK_Faction";
	editorCategory = "PB_British_Top";
	editorSubcategory = "PB_British_ART";
	vehicleclass = "PB_British_ART";
	crew = "PB_UK_SOL_C";
	displayname = "AS-90";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
////HELICOPTERS////
class RHS_AH64D_wd;
class PB_UK_AH64E: RHS_AH64D_wd
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_UK_Faction";
	editorCategory = "PB_British_Top";
	editorSubcategory = "PB_British_HELI";
	vehicleclass = "PB_British_HELI";
	crew = "PB_UK_SOL_HP";
	displayname = "AH-64E";
	hiddenSelections[] = {"camo1","camo2","camo3","Pilot_MFD_L","Pilot_MFD_R","Gunner_MFD_L","Gunner_MFD_R"};
	hiddenSelectionsTextures[] = 
	{
		"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_body_co.paa",
		"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_details_co.paa",
		"",
		"#(argb,8,8,3)color(0,0,0,1.0,co)",
		"#(argb,8,8,3)color(0,0,0,1.0,co)",
		"#(argb,8,8,3)color(0,0,0,1.0,co)",
		"#(argb,8,8,3)color(0,0,0,1.0,co)"
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class RHS_CH_47F_10;
class PB_UK_Chinook: RHS_CH_47F_10
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_UK_Faction";
	editorCategory = "PB_British_Top";
	editorSubcategory = "PB_British_HELI";
	vehicleclass = "PB_British_HELI";
	crew = "PB_UK_SOL_HP";
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
///BOATS///
class B_Boat_Transport_01_F;
class PB_UK_Speedboat: B_Boat_Transport_01_F
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_UK_Faction";
	editorCategory = "PB_British_Top";
	editorSubcategory = "PB_British_Boats";
	vehicleclass = "PB_British_Boats";
	crew = "PB_UK_SOL_R";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};