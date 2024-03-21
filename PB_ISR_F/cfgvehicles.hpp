///INHERI///
class B_MBT_01_cannon_F;
class B_MBT_01_TUSK_F;
class rhsusf_m113d_usarmy;
class rhsusf_m113d_usarmy_unarmed;
class rhsusf_m113d_usarmy_MK19;
class rhsusf_m113d_usarmy_supply;
class B_APC_Tracked_01_rcws_F;
class B_APC_Tracked_01_CRV_F;
class rhsusf_m1043_d_m2;
class rhsusf_m1043_d_mk19;
class rhsusf_m1043_d;
class RHS_UH60M_d;
class B_Truck_01_Repair_F;
class B_Truck_01_cargo_F;
class B_Truck_01_fuel_F;
class rhsusf_m109d_usarmy;
class B_SAM_System_03_F;
class RHS_C130J;
class RHS_C130J_Cargo;
class RHS_AH64D;
class RHS_UH60M2_d;
class rhsusf_CH53E_USMC_D;
class rhsusf_CH53E_USMC_cargo;
class PB_ISR_UH60M_A: RHS_UH60M_d
{
	scope = 0;
    class Turrets;
};
class PB_ISR_UH60M_B: PB_ISR_UH60M_A
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
class PB_ISR_M109: rhsusf_m109d_usarmy
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_M109.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_ART";
	vehicleclass = "PB_ISR_ART";
	crew = "PB_ISR_SOL_C";
	displayname = "M109 Doher";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///TANKS///
class PB_ISR_MERKAVA: B_MBT_01_cannon_F
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_MERKAVA.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_Tanks";
	vehicleclass = "PB_ISR_Tanks";
	crew = "PB_ISR_SOL_C";
	displayname = "Merkava Mark 4M";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_ISR_MERKAVA_LIC: B_MBT_01_TUSK_F
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_MERKAVA_LIC.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_Tanks";
	vehicleclass = "PB_ISR_Tanks";
	crew = "PB_ISR_SOL_C";
	displayname = "Merkava Mark 4 LIC";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///APCS///
class PB_ISR_M113: rhsusf_m113d_usarmy_unarmed
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_M113.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_APCs";
	vehicleclass = "PB_ISR_APCs";
	crew = "PB_ISR_SOL_C";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_ISR_M113_MG: rhsusf_m113d_usarmy
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_M113_MG.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_APCs";
	vehicleclass = "PB_ISR_APCs";
	crew = "PB_ISR_SOL_C";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_ISR_M113_MK19: rhsusf_m113d_usarmy_mk19
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_M113_MK19.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_APCs";
	vehicleclass = "PB_ISR_APCs";
	crew = "PB_ISR_SOL_C";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_ISR_M113_AMMO: rhsusf_m113d_usarmy_supply
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_M113_AMMO.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_APCs";
	vehicleclass = "PB_ISR_APCs";
	crew = "PB_ISR_SOL_C";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_ISR_NAMER: B_APC_Tracked_01_rcws_F
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_NAMER.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_APCs";
	vehicleclass = "PB_ISR_APCs";
	crew = "PB_ISR_SOL_C";
	displayname = "Namer";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_ISR_NEMMERA: B_APC_Tracked_01_CRV_F
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_NEMMERA.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_APCs";
	vehicleclass = "PB_ISR_APCs";
	crew = "PB_ISR_SOL_C";
	displayname = "Nemmera";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///MRAPS///
///TURRETS///
class PB_ISR_PATRIOT: B_SAM_System_03_F
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_PATRIOT.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_TUR";
	vehicleclass = "PB_ISR_TUR";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///CARS///
class PB_ISR_M1043_M2: rhsusf_m1043_d_m2
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_M1043_M2.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_Cars";
	vehicleclass = "PB_ISR_Cars";
	crew = "PB_ISR_SOL_R";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_ISR_M1043_MK19: rhsusf_m1043_d_mk19
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_M1043_MK19.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_Cars";
	vehicleclass = "PB_ISR_Cars";
	crew = "PB_ISR_SOL_R";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_ISR_M1043: rhsusf_m1043_d
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_M1043.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_Cars";
	vehicleclass = "PB_ISR_Cars";
	crew = "PB_ISR_SOL_R";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///TRUCKS///
class PB_ISR_HEMTT_R: B_Truck_01_Repair_F
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_HEMTT_R.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_Trucks";
	vehicleclass = "PB_ISR_Truck";
	crew = "PB_ISR_SOL_R";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_ISR_HEMTT_F: B_Truck_01_Fuel_F
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_HEMTT_F.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_Trucks";
	vehicleclass = "PB_ISR_Truck";
	crew = "PB_ISR_SOL_R";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_ISR_HEMTT_C: B_Truck_01_Cargo_F
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_HEMTT_C.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_Trucks";
	vehicleclass = "PB_ISR_Truck";
	crew = "PB_ISR_SOL_R";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///HELICOPTERS///
class PB_ISR_UH60M: RHS_UH60M2_d
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_UH60M.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_HELI";
	vehicleclass = "PB_ISR_HELI";
	crew = "PB_ISR_SOL_HP";
	hiddenSelections[] = {"camo1","camo2","camo3","filter"};
	hiddenSelectionsTextures[] = 
	{
		"PB_ISR_F\data\idf_uh60m_fuselage_co.paa",
		"PB_ISR_F\data\idf_uh60m_engine_co.paa",
		"rhsusf\addons\rhsusf_a2port_air\uh60m\data\default_co.paa",
		"rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
	};

};
class PB_ISR_AH64: RHS_AH64D
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_AH64.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_HELI";
	vehicleclass = "PB_ISR_HELI";
	crew = "PB_ISR_SOL_HP";
	hiddenSelections[] = {"camo1","camo2","camo3","Pilot_MFD_L","Pilot_MFD_R","Gunner_MFD_L","Gunner_MFD_R"};
	hiddenSelectionsTextures[] = 
	{
		"\PB_ISR_F\data\IDF_ah64d_body_co.paa",
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
class PB_ISR_CH53E: rhsusf_CH53E_USMC_D
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_CH53E.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_HELI";
	vehicleclass = "PB_ISR_HELI";
	crew = "PB_ISR_SOL_HP";
	hiddenSelections[] = {"camo","camo1","n1","n2"};
	hiddenSelectionsTextures[] = 
	{
		"\PB_ISR_F\data\idf_ch53_01_co.paa",
		"rhsusf\addons\rhsusf_ch53\data\ch53_acc_co.paa",
		"",
		""
	};

};
class PB_ISR_CH53E_cargo: rhsusf_CH53E_USMC_cargo
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_CH53E_CARGO.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_HELI";
	vehicleclass = "PB_ISR_HELI";
	crew = "PB_ISR_SOL_HP";
	hiddenSelections[] = {"camo","camo1","n1","n2"};
	hiddenSelectionsTextures[] = 
	{
		"\PB_ISR_F\data\idf_ch53_01_co.paa",
		"rhsusf\addons\rhsusf_ch53\data\ch53_acc_co.paa",
		"",
		""
	};

};
///PLANES///
class PB_ISR_C130J: RHS_C130J
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_C130J.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_Planes";
	vehicleclass = "PB_ISR_Planes";
	crew = "PB_ISR_SOL_HP";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_ISR_C130J_Cargo: RHS_C130J_Cargo
{
	editorpreview = "PB_EP\ui\Israel\PB_ISR_C130J_CARGO.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_ISR_Faction";
	editorCategory = "PB_ISR_Top";
	editorSubcategory = "PB_ISR_Planes";
	vehicleclass = "PB_ISR_Planes";
	crew = "PB_ISR_SOL_HP";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};