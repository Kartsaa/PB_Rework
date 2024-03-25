///INHERI///
class RHS_M119_WD;
class I_MBT_03_cannon_F;
class rhsusf_CGRCAT1A2_M2_usmc_d;
class rhsusf_M1237_M2_usarmy_d;
class rhsusf_mrzr4_d;
class B_Radar_System_01_F;
class rhs_bmp2e_vdv;
class RHS_MK19_TriPod_WD;
class RHS_M252_D;
class RHS_TOW_TriPod_USMC_WD;
class rhs_D30_vmf;
class RHS_ZU23_base;
class PB_HUN_ITK_A: RHS_ZU23_base
    {
		scope = 0;
        class Turrets;
    };
   	class PB_HUN_ITK_B :PB_HUN_ITK_A
    {
		scope = 0;
        class Turrets:Turrets
        {
            class MainTurret;
        };
    };
class PB_HUN_ITK_C: PB_HUN_ITK_B
    {
		scope = 0;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
            };
			class CargoTurret_01;
        };
    };
class rhs_KORD_high_MSV;
class B_APC_Tracked_01_AA_F;
class rhsgref_hidf_m1025;
class rhsgref_hidf_m1025_m2;
class I_Plane_Fighter_04_F;
class rhssaf_army_o_t72s;
class rhs_pts_vmf;
class RHS_Mi24V_vvsc;
class rhsgref_cdf_reg_Mi8amt;
class PB_HUN_T72_A: rhssaf_army_o_t72s
{
	scope = 1;
    class Turrets;
};
class PB_HUN_T72_B: PB_HUN_T72_A
{
		scope = 1;
        class Turrets:Turrets
        {
            class MainTurret;
        };
};
class PB_HUN_T72_C: PB_HUN_T72_B
{
	scope = 1;
    class Turrets:Turrets
    {
        class MainTurret:MainTurret
        {
            class Turrets;
        };
     };
};
class PB_HUN_T72_D: PB_HUN_T72_C
{
	scope = 1;
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            class Turrets: Turrets
            {
                class CommanderOptics;
				class CommanderMG;
			};
        };
    };
};
class rhs_btr80_msv;
class rhs_btr80a_msv;
///ARTILLERY///
///AA///
///TANKS///
	class PB_HUN_LEO: I_MBT_03_cannon_F
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_LEO.jpg";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		side = "1";
		faction = "PB_HUN_Faction";
		editorCategory = "PB_HUN_Top";
		editorSubcategory = "PB_HUN_Tanks";
		vehicleclass = "PB_HUN_Tanks";
		crew = "PB_HUN_SOL_C";
		displayname = "Leopard 2SG";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[]=
		{
			"PB_LEO_HUN",1
		};
		class TextureSources
		{
				class PB_LEO_HUN
				{
					displayName="Olive";
					author="Kartsa";
					textures[]=
					{
						"PB_CAN_F\data\OLV_mbt_03_ext01_co.paa",
						"PB_CAN_F\data\OLV_mbt_03_ext02_co.paa",
						"PB_CAN_F\data\OLV_mbt_03_rcws_co.paa",
						"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
					};
					factions[]=
					{
						"PB_HUN_Faction"
					};
				};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class PB_HUN_T72 : PB_HUN_T72_D 
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_T72.jpg";
		scope = 2;
		side = 1;
		forceInGarage = 0;
		author = "Kartsa";
		faction = "PB_HUN_FACTION";
		editorCategory = "PB_HUN_TOP";
		editorSubcategory = "PB_HUN_Tanks";
		crew = "PB_HUN_RIF_C_TD";
		vehicleclass = "PB_HUN_Tanks";
		displayname = "T-72M1";
		rhs_decalParameters[] = {};	
        class Turrets : Turrets {
            class MainTurret : MainTurret {;
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics { GunnerType = "PB_HUN_SOL_C"; };
					class CommanderMG: CommanderMG {};
                };			
			};
        };
    };
///APCS///
	class PB_HUN_BTR80: rhs_btr80_msv
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_BTR80.jpg";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		side = "1";
		faction = "PB_HUN_Faction";
		editorCategory = "PB_HUN_Top";
		editorSubcategory = "PB_HUN_APCs";
		vehicleclass = "PB_HUN_APCs";
		crew = "PB_HUN_SOL_C";
		rhs_decalParameters[] = {};	
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class PB_HUN_BTR80A: rhs_btr80a_msv
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_BTR80A.jpg";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		side = "1";
		faction = "PB_HUN_Faction";
		editorCategory = "PB_HUN_Top";
		editorSubcategory = "PB_HUN_APCs";
		vehicleclass = "PB_HUN_APCs";
		crew = "PB_HUN_SOL_C";
		rhs_decalParameters[] = {};	
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class PB_HUN_PTS: rhs_pts_vmf
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_PTS.jpg";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		side = "1";
		faction = "PB_HUN_Faction";
		editorCategory = "PB_HUN_Top";
		editorSubcategory = "PB_HUN_APCs";
		vehicleclass = "PB_HUN_APCs";
		crew = "PB_HUN_SOL_R";
		displayname = "PTS";
		rhs_decalParameters[] = {};	
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
///CARS///
	class PB_HUN_M1025: rhsgref_hidf_m1025
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_M1025.jpg";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		side = "1";
		faction = "PB_HUN_Faction";
		editorCategory = "PB_HUN_Top";
		editorSubcategory = "PB_HUN_Cars";
		vehicleclass = "PB_HUN_Cars";
		crew = "PB_HUN_SOL_R";
		rhs_decalParameters[] = {};	
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class PB_HUN_M1025_M2: rhsgref_hidf_m1025_m2
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_M1025_M2.jpg";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		side = "1";
		faction = "PB_HUN_Faction";
		editorCategory = "PB_HUN_Top";
		editorSubcategory = "PB_HUN_Cars";
		vehicleclass = "PB_HUN_Cars";
		crew = "PB_HUN_SOL_R";
		rhs_decalParameters[] = {};	
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
///MRAP///
///HELICOPTERS///
	class PB_HUN_Mi24: RHS_Mi24V_vvsc
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_MI24.jpg";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		side = "1";
		faction = "PB_HUN_Faction";
		editorCategory = "PB_HUN_Top";
		editorSubcategory = "PB_HUN_HELI";
		vehicleclass = "PB_HUN_HELI";
		displayname = "Mil Mi-24";
		crew = "PB_HUN_SOL_HP";
		hiddenSelections[] = {"camo1","camo2","exhaust","tail_decals","n1","n2","moving_map"};
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[]=
		{
			"PB_Mi24_C_HUN",1
		};
		class TextureSources
		{
			class PB_Mi24_C_HUN
			{
				displayName="Hungary";
				author="Kartsa";
				textures[]=
				{
					"\PB_HUN_F\data\Hun_mi24_001_co.paa",
					"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo1_co.paa",
					"rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
				};
				factions[]=
				{
					"PB_HUN_Faction"
				};
			};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class PB_HUN_Mi17: rhsgref_cdf_reg_Mi8amt
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_MI17.jpg";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		side = "1";
		faction = "PB_HUN_Faction";
		editorCategory = "PB_HUN_Top";
		editorSubcategory = "PB_HUN_HELI";
		vehicleclass = "PB_HUN_HELI";
		crew = "PB_HUN_SOL_HP";
		displayname = "Mil Mi-17";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","n1","n2","tail_decals"};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
///TURRETS///
///PLANES///
	class PB_HUN_GRIPEN: I_Plane_Fighter_04_F
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_GRIPEN.jpg";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 0;
		side = "1";
		faction = "PB_HUN_Faction";
		editorCategory = "PB_HUN_Top";
		editorSubcategory = "PB_HUN_Planes";
		vehicleclass = "PB_HUN_Planes";
		crew = "PB_HUN_SOL_JP";
		displayname = "JAS 39 Gripen";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[]=
		{
			"CamoGrey",1,
			"DigitalCamoGrey",0,
			"DigitalCamoGreen",0
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};