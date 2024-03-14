///INHERI///
class rhsusf_m1a1fep_wd;
class rhsusf_m1a2sep2wd_usarmy;
class rhs_2s1_tv;
class RHS_CH_47F_10;
class PB_POL_2S1_A: rhs_2s1_tv
{
	scope = 0;
     class Turrets;
};
class PB_POL_2S1_B: PB_POL_2S1_A
{
	scope = 0;
    class Turrets: Turrets
    {
        class MainTurret;
    };
};
class PB_POL_2S1_C: PB_POL_2S1_B
{
	scope = 0;
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            class Turrets;
        };
    };
};
class PB_POL_2S1_D: PB_POL_2S1_C
{
	scope = 0;
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            class Turrets: Turrets
			{
                class CommanderOptics;
                class LoaderOptics;
            };
        };
    };	
};
class rhsusf_M142_usarmy_WD;
class RHS_BM21_MSV_01;
class rhs_bmp1d_msv;
class rhs_bmp1k_msv;
class B_T_APC_Wheeled_01_cannon_F;
class rhsgref_BRDM2_msv;
class rhsusf_CGRCAT1A2_M2_usmc_wd;
class rhsusf_CGRCAT1A2_usmc_wd;
class rhsusf_m1240a1_usarmy_wd;
class rhsusf_m1240a1_m2_usarmy_wd;
class rhsusf_m1043_w_m2;
class rhsusf_m1043_w;
class rhs_zsu234_aa;
class RHS_AH64D_wd;
class rhs_mig29s_vvs;
///ARTILLERY///
class PB_POL_2S1 : PB_POL_2S1_D 
{
    	editorpreview = "PB_EP\ui\Poland\PB_POL_2S1.jpg";
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "PB_POL_FACTION";
		editorCategory = "PB_POL_TOP";
		editorSubcategory = "PB_POL_ART";
		crew = "PB_POL_SOL_C";
		vehicleclass = "PB_POL_ART";
		rhs_decalParameters[] = {};
        class Turrets : Turrets {
            class MainTurret : MainTurret {;
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics { GunnerType = "PB_POL_SOL_C"; };
                    class LoaderOptics: LoaderOptics { GunnerType = "PB_POL_SOL_C"; };
                };			
			};
        };
};
class PB_POL_HIMARS : rhsusf_M142_usarmy_WD 
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_HIMARS.jpg";
	scope = 2;
	side = 1;
	author = "Kartsa";
	faction = "PB_POL_FACTION";
	editorCategory = "PB_POL_TOP";
	editorSubcategory = "PB_POL_ART";
	crew = "PB_POL_SOL_C";
	vehicleclass = "PB_POL_ART";
	rhs_decalParameters[] = {};
};
class PB_POL_GRAD : RHS_BM21_MSV_01 
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_GRAD.jpg";
	scope = 2;
	side = 1;
	author = "Kartsa";
	faction = "PB_POL_FACTION";
	editorCategory = "PB_POL_TOP";
	editorSubcategory = "PB_POL_ART";
	crew = "PB_POL_SOL_C";
	vehicleclass = "PB_POL_ART";
	rhs_decalParameters[] = {};
};
///TANKS///
class PB_POL_M1FEP: rhsusf_m1a1fep_wd
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_M1FEP.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_POL_Faction";
	editorCategory = "PB_POL_Top";
	editorSubcategory = "PB_POL_Tanks";
	vehicleclass = "PB_POL_Tanks";
	crew = "PB_POL_SOL_C";
	displayname = "M1A1 Abrams (FEP)";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_POL_M1SEPV2: rhsusf_m1a2sep2wd_usarmy
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_M1SEPV2.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_POL_Faction";
	editorCategory = "PB_POL_Top";
	editorSubcategory = "PB_POL_Tanks";
	vehicleclass = "PB_POL_Tanks";
	crew = "PB_POL_SOL_C";
	displayname = "M1A1 Abrams (SEPv2)";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///APCS///
class PB_POL_ROSOMAK: B_T_APC_Wheeled_01_cannon_F
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_ROSOMAK.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_POL_Faction";
	editorCategory = "PB_POL_Top";
	editorSubcategory = "PB_POL_APCs";
	vehicleclass = "PB_POL_APCs";
	crew = "PB_POL_SOL_C";
	displayname = "KTO Rosomak";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_POL_BWP1D: rhs_bmp1d_msv
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_BWP1D.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_POL_Faction";
	editorCategory = "PB_POL_Top";
	editorSubcategory = "PB_POL_APCs";
	vehicleclass = "PB_POL_APCs";
	crew = "PB_POL_SOL_C";
	displayname = "BWP-1D";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_POL_BWP1K: rhs_bmp1k_msv
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_BWP1K.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_POL_Faction";
	editorCategory = "PB_POL_Top";
	editorSubcategory = "PB_POL_APCs";
	vehicleclass = "PB_POL_APCs";
	crew = "PB_POL_SOL_C";
	displayname = "BWP-1K";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_POL_BRDM2: rhsgref_BRDM2_msv
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_BRDM2.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_POL_Faction";
	editorCategory = "PB_POL_Top";
	editorSubcategory = "PB_POL_APCs";
	vehicleclass = "PB_POL_APCs";
	crew = "PB_POL_SOL_C";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///MRAPS///
class PB_POL_COUGAR_M2: rhsusf_CGRCAT1A2_M2_usmc_wd
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_COUGAR_M2.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_POL_Faction";
	editorCategory = "PB_POL_Top";
	editorSubcategory = "PB_POL_APCs";
	vehicleclass = "PB_POL_APCs";
	crew = "PB_POL_SOL_R";
	displayname = "Cougar 4x4 (M2)";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_POL_COUGAR: rhsusf_CGRCAT1A2_usmc_wd
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_COUGAR.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_POL_Faction";
	editorCategory = "PB_POL_Top";
	editorSubcategory = "PB_POL_APCs";
	vehicleclass = "PB_POL_APCs";
	crew = "PB_POL_SOL_R";
	displayname = "Cougar 4x4 (M2)";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_POL_OSHKOSH: rhsusf_m1240a1_usarmy_wd
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_OSHKOSH.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_POL_Faction";
	editorCategory = "PB_POL_Top";
	editorSubcategory = "PB_POL_APCs";
	vehicleclass = "PB_POL_APCs";
	crew = "PB_POL_SOL_R";
	displayname = "Oshkosh M-ATV";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_POL_OSHKOSH_M2: rhsusf_m1240a1_m2_usarmy_wd
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_OSHKOSH_M2.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_POL_Faction";
	editorCategory = "PB_POL_Top";
	editorSubcategory = "PB_POL_APCs";
	vehicleclass = "PB_POL_APCs";
	crew = "PB_POL_SOL_R";
	displayname = "Oshkosh M-ATV (M2)";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///CARS///
class PB_POL_M1043: rhsusf_m1043_w
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_M1043.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_POL_Faction";
	editorCategory = "PB_POL_Top";
	editorSubcategory = "PB_POL_Cars";
	vehicleclass = "PB_POL_Cars";
	crew = "PB_POL_SOL_R";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_POL_M1043_M2: rhsusf_m1043_w_m2
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_M1043_M2.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_POL_Faction";
	editorCategory = "PB_POL_Top";
	editorSubcategory = "PB_POL_Cars";
	vehicleclass = "PB_POL_Cars";
	crew = "PB_POL_SOL_R";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///HELICOPTERS///
class PB_POL_AH64E: RHS_AH64D_wd
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_AH64E.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_POL_Faction";
	editorCategory = "PB_POL_Top";
	editorSubcategory = "PB_POL_HELI";
	vehicleclass = "PB_POL_HELI";
	crew = "PB_POL_SOL_HP";
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
///AA///
class PB_POL_SHILKA: rhs_zsu234_aa
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_SHILKA.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_POL_Faction";
	editorCategory = "PB_POL_Top";
	editorSubcategory = "PB_POL_AA";
	vehicleclass = "PB_POL_AA";
	crew = "PB_POL_SOL_C";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///PLANES////
class PB_POL_MIG29: rhs_mig29s_vvs
{
    editorpreview = "PB_EP\ui\Poland\PB_POL_MIG29.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_POL_Faction";
	editorCategory = "PB_POL_Top";
	editorSubcategory = "PB_POL_Planes";
	vehicleclass = "PB_POL_Planes";
	crew = "PB_POL_SOL_JP";
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};