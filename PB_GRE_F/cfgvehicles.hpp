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
class rhs_bmp1_msv;
class I_MBT_03_cannon_F;
class rhsusf_m113_usarmy;
class rhsusf_m113_usarmy_supply;
class rhsusf_m113_usarmy_MK19;
class rhsusf_m113_usarmy_unarmed;
class rhsusf_m113_usarmy_medical;
class rhsgref_hidf_m1025_m2;
class rhsgref_hidf_m1025_mk19;
class rhsgref_hidf_m1025;
class rhsusf_M1117_O;
class PB_GRE_UH60M_A: RHS_UH60M
{
	scope = 0;
    class Turrets;
};
class PB_GRE_UH60M_B: PB_GRE_UH60M_A
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
class PB_GRE_M1117_A: rhsusf_M1117_O
{
	scope = 0;
	class Turrets;
};
class PB_GRE_M1117_B: PB_GRE_M1117_A
{
		scope = 0;
	class Turrets: Turrets
	{
		class MainTurret;
		class MainTurret_Out;
		class MainTurret2_Out;
	};
};
class B_T_Truck_01_ammo_F;
class B_T_Truck_01_fuel_F;
class B_T_Truck_01_Repair_F;
class B_T_Truck_01_Transport_F;
class B_T_Truck_01_Covered_F;
class B_T_Truck_01_Mover_F;
class RHS_CH_47F_10;
///ARTILLERY///
class PB_GRE_M109: rhsusf_m109_usarmy
{
	scope = 2;
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_M109.jpg";
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_ART";
	vehicleclass = "PB_GRE_ART";
	crew = "PB_GRE_SOL_C";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///TANKS///
class PB_GRE_LEO: I_MBT_03_cannon_F
{
   	 editorpreview = "\PB_EP\ui\GREECE\PB_GRE_LEO.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_GRE_Faction";
		editorCategory = "PB_GRE_Top";
		editorSubcategory = "PB_GRE_Tanks";
		vehicleclass = "PB_GRE_Tanks";
		crew = "PB_GRE_SOL_C";
		displayname = "Leopard 2SG HEL";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[]=
		{
			"PB_LEO_GRE",1
		};
		class TextureSources
		{
				class PB_LEO_GRE
				{
					displayName="Greek Vehicle Camo";
					author="Kartsa";
					textures[]=
					{
						"PB_GRE_F\data\gre_leo_01_co.paa",
						"PB_GRE_F\data\gre_leo_02_co.paa",
						"PB_FIN_F\data\OLV_mbt_03_rcws_co.paa",
						"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
					};
					factions[]=
					{
						"PB_GRE_Faction"
					};
				};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
};
///APCS///
class PB_GRE_BMP1: rhs_bmp1_msv
{
	scope = 2;
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_BMP1.jpg";
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_APCs";
	vehicleclass = "PB_GRE_APCs";
	crew = "PB_GRE_SOL_C";
	rhs_decalParameters[] = {};		
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_GRE_M113A3_M2: rhsusf_m113_usarmy
{
	scope = 2;
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_M113A3_M2.jpg";
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_APCs";
	vehicleclass = "PB_GRE_APCs";
	crew = "PB_GRE_SOL_R";
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] = 
	{
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_od_co.paa"
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_GRE_M113A3_AMMO: rhsusf_m113_usarmy_supply
{
	scope = 2;
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_M113A3_AMMO.jpg";
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_APCs";
	vehicleclass = "PB_GRE_APCs";
	crew = "PB_GRE_SOL_R";
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] = 
	{
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_od_co.paa"
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_GRE_M113A3_MK19: rhsusf_m113_usarmy_MK19
{
	scope = 2;
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_M113A3_MK19.jpg";
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_APCs";
	vehicleclass = "PB_GRE_APCs";
	crew = "PB_GRE_SOL_R";
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] = 
	{
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_od_co.paa"
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_GRE_M113A3_MED: rhsusf_m113_usarmy_medical
{
	scope = 2;
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_M113A3_MED.jpg";
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_APCs";
	vehicleclass = "PB_GRE_APCs";
	crew = "PB_GRE_SOL_R";
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] = 
	{
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_od_co.paa"
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_GRE_M113A3: rhsusf_m113_usarmy_unarmed
{
	scope = 2;
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_M113A3.jpg";
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_APCs";
	vehicleclass = "PB_GRE_APCs";
	crew = "PB_GRE_SOL_R";
	hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
	hiddenSelectionsTextures[] = 
	{
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_od_co.paa"
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///MRAPS///
class PB_GRE_M1117: PB_GRE_M1117_B
{
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_M1117.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_MRAP";
	vehicleclass = "PB_BUL_MRAP";
	crew = "PB_BUL_SOL_R";
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gunnertype = "PB_BUL_SOL_R";
		};
		class MainTurret_Out: MainTurret_Out
		{
		};
		class MainTurret2_Out: MainTurret2_Out
		{
		};
	};
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///CARS///
class PB_GRE_M1025_M2: rhsgref_hidf_m1025_m2
{
	scope = 2;
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_M1025_M2.jpg";
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_Cars";
	vehicleclass = "PB_GRE_Car";
	crew = "PB_GRE_SOL_R";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_GRE_M1025_MK19: rhsgref_hidf_m1025_mk19
{
	scope = 2;
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_M1025_MK19.jpg";
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_Cars";
	vehicleclass = "PB_GRE_Car";
	crew = "PB_GRE_SOL_R";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_GRE_M1025: rhsgref_hidf_m1025
{
	scope = 2;
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_M1025.jpg";
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_Cars";
	vehicleclass = "PB_GRE_Car";
	crew = "PB_GRE_SOL_R";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///HELICOPTERS///
class PB_GRE_Chinook: RHS_CH_47F_10
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_British_Top";
	editorSubcategory = "PB_British_HELI";
	vehicleclass = "PB_British_HELI";
	crew = "PB_GRE_SOL_HP";
	displayname = "Chinook";
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_CHINOOK.jpg";
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
class PB_GRE_AH64E: PB_UK_AH64E
{
	scope = 2;
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_AH64E.jpg";
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_HELI";
	vehicleclass = "PB_GRE_HELI";
	crew = "PB_GRE_SOL_HP";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///TURRETS///
///TRUCKS///
class PB_GRE_HEMTT_A: B_T_Truck_01_ammo_F
{
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_HEMTT_A.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_Trucks";
	vehicleclass = "PB_GRE_Trucks";
	crew = "PB_GRE_SOL_R";
    
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_GRE_HEMTT_F: B_T_Truck_01_fuel_F
{
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_HEMTT_F.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_Trucks";
	vehicleclass = "PB_GRE_Trucks";
	crew = "PB_GRE_SOL_R";
    
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_GRE_HEMTT_R: B_T_Truck_01_Repair_F
{
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_HEMTT_R.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_Trucks";
	vehicleclass = "PB_GRE_Trucks";
	crew = "PB_GRE_SOL_R";
    
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_GRE_HEMTT_T: B_T_Truck_01_Transport_F
{
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_HEMTT_T.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_Trucks";
	vehicleclass = "PB_GRE_Trucks";
	crew = "PB_GRE_SOL_R";
    
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_GRE_HEMTT_C: B_T_Truck_01_Covered_F
{
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_HEMTT_C.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_Trucks";
	vehicleclass = "PB_GRE_Trucks";
	crew = "PB_GRE_SOL_R";
    
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_GRE_HEMTT_M: B_T_Truck_01_Mover_F
{
    editorpreview = "\PB_EP\ui\GREECE\PB_GRE_HEMTT_M.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_GRE_Faction";
	editorCategory = "PB_GRE_Top";
	editorSubcategory = "PB_GRE_Trucks";
	vehicleclass = "PB_GRE_Trucks";
	crew = "PB_GRE_SOL_R";
    
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};