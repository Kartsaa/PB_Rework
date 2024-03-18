///INHERI///
class RHS_M119_WD;
class rhsusf_m1a1aimwd_usarmy;
class rhsusf_m113_usarmy;
class rhsusf_m113_usarmy_unarmed;
class rhsusf_m1240a1_usarmy_wd;
class B_T_LSV_01_unarmed_F;
class RHS_UH60M_d;
class B_T_APC_WHeeled_01_cannon_F;
class PB_IRE_UH60M_A: RHS_UH60M_d
{
	scope = 0;
    class Turrets;
};
class PB_IRE_UH60M_B: PB_IRE_UH60M_A
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
///TANKS///
///APCS///
class PB_IRE_PIRANHA: B_T_APC_WHeeled_01_cannon_F
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_IRE_Faction";
	editorCategory = "PB_IRE_Top";
	editorSubcategory = "PB_IRE_APCs";
	vehicleclass = "PB_IRE_APCs";
	crew = "PB_IRE_SOL_C";
	displayname = "Piranha IIIC";
    	editorpreview = "\PB_EP\ui\IRELAND\PB_IRE_PIRANHA.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///MRAPS///
///CARS///
///HELICOPTERS///