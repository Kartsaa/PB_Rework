///INHERI///
class RHS_M119_WD;
class rhsusf_m1a1aimwd_usarmy;
class rhsusf_m113_usarmy;
class rhsusf_m113_usarmy_unarmed;
class rhsusf_m1240a1_usarmy_wd;
class B_T_LSV_01_unarmed_F;
class RHS_UH60M_d;
class PB_AUS_UH60M_A: RHS_UH60M_d
{
	scope = 0;
    class Turrets;
};
class PB_AUS_UH60M_B: PB_AUS_UH60M_A
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
class PB_AUS_M777: RHS_M119_WD
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_AUS_Faction";
	editorCategory = "PB_AUS_Top";
	editorSubcategory = "PB_AUS_ART";
	vehicleclass = "PB_AUS_ART";
	crew = "PB_AUS_SOL_R";
	displayname = "M777 Howitzer";
    editorpreview = "PB_EP\ui\Australia\PB_AUS_M777.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///TANKS///
class PB_AUS_M1A1: rhsusf_m1a1aimwd_usarmy
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_AUS_Faction";
	editorCategory = "PB_AUS_Top";
	editorSubcategory = "PB_AUS_Tanks";
	vehicleclass = "PB_AUS_Tanks";
	crew = "PB_AUS_SOL_C";
	displayname = "M1A1 Abrams";
    editorpreview = "PB_EP\ui\Australia\PB_AUS_M1A1.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///APCS///
class PB_AUS_M113: rhsusf_m113_usarmy_unarmed
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_AUS_Faction";
	editorCategory = "PB_AUS_Top";
	editorSubcategory = "PB_AUS_APCs";
	vehicleclass = "PB_AUS_APCs";
	crew = "PB_AUS_SOL_C";
    editorpreview = "PB_EP\ui\Australia\PB_AUS_M113.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_AUS_M113_MG: rhsusf_m113_usarmy
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_AUS_Faction";
	editorCategory = "PB_AUS_Top";
	editorSubcategory = "PB_AUS_APCs";
	vehicleclass = "PB_AUS_APCs";
	crew = "PB_AUS_SOL_C";
    editorpreview = "PB_EP\ui\Australia\PB_AUS_M113_MG.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///MRAPS///
class PB_AUS_HAWKEI: rhsusf_m1240a1_usarmy_wd
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_AUS_Faction";
	editorCategory = "PB_AUS_Top";
	editorSubcategory = "PB_AUS_MRAP";
	vehicleclass = "PB_AUS_MRAP";
	crew = "PB_AUS_SOL_R";
    displayname = "Hawkei";
    editorpreview = "PB_EP\ui\Australia\PB_AUS_Hawkei.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///CARS///
class PB_AUS_DAGOR: B_T_LSV_01_unarmed_F
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_AUS_Faction";
	editorCategory = "PB_AUS_Top";
	editorSubcategory = "PB_AUS_Cars";
	vehicleclass = "PB_AUS_Cars";
	crew = "PB_AUS_SOL_R";
    displayname = "DAGOR";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///HELICOPTERS///
class PB_AUS_UH60M: PB_AUS_UH60M_B
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_AUS_Faction";
	editorCategory = "PB_AUS_Top";
	editorSubcategory = "PB_AUS_HELI";
	vehicleclass = "PB_AUS_HELI";
	crew = "PB_AUS_SOL_HP";
    editorpreview = "PB_EP\ui\Australia\PB_AUS_UH60M.jpg";
    class Turrets: Turrets
    {
        class CopilotTurret: CopilotTurret
        {
        };
        class MainTurret: MainTurret
        {
			gunnerType = "PB_AUS_SOL_HP";
        };
        class RightDoorGun: RightDoorGun
        {
			gunnerType = "PB_AUS_SOL_HP";
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
class PB_AUS_Chinook: RHS_CH_47F_10
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_AUS_Faction";
	editorCategory = "PB_AUS_Top";
	editorSubcategory = "PB_AUS_HELI";
	vehicleclass = "PB_AUS_HELI";
	crew = "PB_AUS_SOL_HP";
	displayname = "Chinook";
    editorpreview = "PB_EP\ui\British\PB_UK_Chinook.jpg";
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