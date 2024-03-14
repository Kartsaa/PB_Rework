///INHERI///
class RHS_M252_WD;
class rhsusf_m1a1aimwd_usarmy;
class rhsusf_m113_usarmy;
class rhsusf_m113_usarmy_unarmed;
class rhsusf_m1240a1_m240_usarmy_wd;
class rhsusf_m1240a1_usarmy_wd;
class B_T_LSV_01_unarmed_F;
class RHS_UH60M_d;
class B_T_APC_Wheeled_01_cannon_F;
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
class PB_BEL_M1: RHS_M252_WD
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BEL_Faction";
	editorCategory = "PB_BEL_Top";
	editorSubcategory = "PB_BEL_ART";
	vehicleclass = "PB_BEL_ART";
	crew = "PB_BEL_SOL_R";
	displayname = "M1 Mortar";
    editorpreview = "PB_EP\ui\Belgium\PB_BEL_M1.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///TANKS///
///APCS///
class PB_BEL_PIRANHA_APC: B_T_APC_Wheeled_01_cannon_F
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BEL_Faction";
	editorCategory = "PB_BEL_Top";
	editorSubcategory = "PB_BEL_APCs";
	vehicleclass = "PB_BEL_APCs";
	crew = "PB_BEL_SOL_C";
	displayname = "Piranha IIIC";
    editorpreview = "PB_EP\ui\Belgium\PB_BEL_PIRANHA_APC.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///MRAPS///
class PB_BEL_OSHKOSH_M240_LATV: rhsusf_m1240a1_m240_usarmy_wd
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BEL_Faction";
	editorCategory = "PB_BEL_Top";
	editorSubcategory = "PB_BEL_MRAP";
	vehicleclass = "PB_BEL_MRAP";
	crew = "PB_BEL_SOL_R";
	displayname = "Oshkosh L-ATV (M240)";
    editorpreview = "PB_EP\ui\Belgium\PB_BEL_OSHKOSH_M240_LATV.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_BEL_OSHKOSH_LATV: rhsusf_m1240a1_usarmy_wd
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BEL_Faction";
	editorCategory = "PB_BEL_Top";
	editorSubcategory = "PB_BEL_MRAP";
	vehicleclass = "PB_BEL_MRAP";
	crew = "PB_BEL_SOL_R";
	displayname = "Oshkosh L-ATV";
    editorpreview = "PB_EP\ui\Belgium\PB_BEL_OSHKOSH_LATV.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///CARS///
///HELICOPTERS///