///INHERI///
class RHS_M119_WD;
class RHS_M252_WD;
class B_T_LSV_01_unarmed_F;
class RHS_UH60M_d;
class B_T_APC_WHeeled_01_cannon_F;
class PB_GRE_M113A3_AMMO;
class PB_GRE_M113A3_M2;
class PB_GRE_M113A3_MED;
class PB_GRE_M113A3_MK19;
class PB_GRE_M113A3;
class RHS_UH60M2;
class rhs_uh1h_hidf_unarmed;
class PB_TUR_UH60M_A: RHS_UH60M_d
{
	scope = 0;
    class Turrets;
};
class PB_TUR_UH60M_B: PB_TUR_UH60M_A
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
class PB_TUR_MKEK: RHS_M252_WD
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_TUR_Faction";
	editorCategory = "PB_TUR_Top";
	editorSubcategory = "PB_TUR_ART";
	vehicleclass = "PB_TUR_ART";
	crew = "PB_TUR_SOL_R";
	displayname = "MKEK UT1";
	editorpreview = "PB_EP\ui\Turkey\PB_TUR_MKEK.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///TANKS///
///APCS///
class PB_TUR_M11A3_AMMO: PB_GRE_M113A3_AMMO
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_TUR_Faction";
	editorCategory = "PB_TUR_Top";
	editorSubcategory = "PB_TUR_APCs";
	vehicleclass = "PB_TUR_APCs";
	crew = "PB_TUR_SOL_C";
	editorpreview = "PB_EP\ui\Turkey\PB_TUR_M11A3_AMMO.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_TUR_M11A3_M2: PB_GRE_M113A3_M2
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_TUR_Faction";
	editorCategory = "PB_TUR_Top";
	editorSubcategory = "PB_TUR_APCs";
	vehicleclass = "PB_TUR_APCs";
	crew = "PB_TUR_SOL_C";
	editorpreview = "PB_EP\ui\Turkey\PB_TUR_M11A3_M2.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_TUR_M113A3_MED: PB_GRE_M113A3_MED
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_TUR_Faction";
	editorCategory = "PB_TUR_Top";
	editorSubcategory = "PB_TUR_APCs";
	vehicleclass = "PB_TUR_APCs";
	crew = "PB_TUR_SOL_C";
	editorpreview = "PB_EP\ui\Turkey\PB_TUR_M113A3_MED.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_TUR_M11A3_MK19: PB_GRE_M113A3_MK19
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_TUR_Faction";
	editorCategory = "PB_TUR_Top";
	editorSubcategory = "PB_TUR_APCs";
	vehicleclass = "PB_TUR_APCs";
	crew = "PB_TUR_SOL_C";
	editorpreview = "PB_EP\ui\Turkey\PB_TUR_M11A3_MK19.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_TUR_M113A3: PB_GRE_M113A3
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_TUR_Faction";
	editorCategory = "PB_TUR_Top";
	editorSubcategory = "PB_TUR_APCs";
	vehicleclass = "PB_TUR_APCs";
	crew = "PB_TUR_SOL_C";
	editorpreview = "PB_EP\ui\Turkey\PB_TUR_M113A3.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///MRAPS///
///CARS///
///HELICOPTERS///
class PB_TUR_UH60M: RHS_UH60M2
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_TUR_Faction";
	editorCategory = "PB_TUR_Top";
	editorSubcategory = "PB_TUR_HELI";
	vehicleclass = "PB_TUR_HELI";
	crew = "PB_TUR_SOL_HP";
	editorpreview = "PB_EP\ui\Turkey\PB_TUR_UH60M.jpg";
};
class PB_TUR_Chinook: RHS_CH_47F_10
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_TUR_Faction";
	editorCategory = "PB_TUR_Top";
	editorSubcategory = "PB_TUR_HELI";
	vehicleclass = "PB_TUR_HELI";
	crew = "PB_TUR_SOL_HP";
	displayname = "Chinook";
	editorpreview = "PB_EP\ui\Turkey\PB_TUR_CHINOOK.jpg";
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
class PB_TUR_Bell: rhs_uh1h_hidf_unarmed
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	forceingarage = 0;
	faction = "PB_TUR_Faction";
	editorCategory = "PB_TUR_Top";
	editorSubcategory = "PB_TUR_HELI";
	vehicleclass = "PB_TUR_HELI";
	crew = "PB_TUR_SOL_HP";
	displayname = "Bell 205";
	editorpreview = "PB_EP\ui\Turkey\PB_TUR_BELL.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};