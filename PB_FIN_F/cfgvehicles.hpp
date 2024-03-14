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
class PB_FIN_ITK_A: RHS_ZU23_base
    {
		scope = 0;
        class Turrets;
    };
   	class PB_FIN_ITK_B :PB_FIN_ITK_A
    {
		scope = 0;
        class Turrets:Turrets
        {
            class MainTurret;
        };
    };
class PB_FIN_ITK_C: PB_FIN_ITK_B
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
class PB_FIN_ITPSV_BASE: B_APC_Tracked_01_AA_F {
		class turrets;
		scope = 0;
	};
class PB_FIN_ITPSV_BASE_01: PB_FIN_ITPSV_BASE {
		class Turrets: Turrets {
			class MainTurret;
			scope = 0;
		};
	};
///ARTILLERY///
///AA///
	class PB_FIN_IPTSV: PB_FIN_ITPSV_BASE_01
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_IPTSV.jpg";
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "PB_FIN_FACTION";
		editorCategory = "PB_FIN_TOP";
		editorSubcategory = "PB_FIN_AA";
		crew = "PB_FIN_SOL_C";
		vehicleclass = "PB_FIN_AA";
		typicalCargo[] = {"PB_FIN_SOL_C"};
		hiddenSelections[] = {"camo1","camo2","camo3","CamoNet"};
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		texturelist[] = { 
			"PB_FIN_ITPSV_M05",1,
			"PB_FIN_ITPSV_M05W",0
		};
		displayname = "ITPSV 90 Marksman";
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"autocannon_35mm",
				};
				magazines[]=
				{
					"680Rnd_35mm_AA_shells_Tracer_Red",
				};
			};
		};
		class texturesources 
		{
			class PB_FIN_ITPSV_M05
			{
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"PB_FIN_FACTION" 
				};
				Textures[] = 
				{
					"PB_FIN_F\data\iptsv_aa_vartalo_co.paa",
					"PB_FIN_F\data\iptsv_vart_co.paa",
					"PB_FIN_F\data\itpsv_torni_co.paa"
				};
			};
			class PB_FIN_ITPSV_M05W
			{
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"PB_FIN_FACTION" 
				};
				Textures[] = 
				{
					"PB_FIN_F\data\iptsv_W_vartalo.paa",
					"PB_FIN_F\data\vaunu_W_vartalo.paa",
					"PB_FIN_F\data\iptsv_W_torni.paa"
				};
			};
		};
	};	
///TANKS///
	class PB_FIN_LEO: I_MBT_03_cannon_F
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_LEO.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_FIN_Faction";
		editorCategory = "PB_FIN_Top";
		editorSubcategory = "PB_FIN_Tanks";
		vehicleclass = "PB_FIN_Tanks";
		crew = "PB_FIN_SOL_C";
		displayname = "Leopard 2SG";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[]=
		{
			"PB_LEO_M05S",1,
			"PB_LEO_M05W",0
		};
		class TextureSources
		{
				class PB_LEO_M05S
				{
					displayName="Finnish Summer";
					author="Kartsa";
					textures[]=
					{
						"PB_FIN_F\data\Leo_ext_01_co.paa",
						"PB_FIN_F\data\Leo_ext_02_co.paa",
						"PB_FIN_F\data\OLV_mbt_03_rcws_co.paa",
						"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
					};
					factions[]=
					{
						"PB_FIN_Faction"
					};
				};
				class PB_LEO_M05W
				{
					displayName="Finnish Winter";
					author="Kartsa";
					textures[]=
					{
						"PB_FIN_F\data\Leo_ext_W_01_co.paa",
						"PB_FIN_F\data\Leo_ext_W_02_co.paa",
						"PB_FIN_F\data\OLV_mbt_03_rcws_co.paa",
						"PB_FIN_F\Data\camonet_winter_co.paa"
					};
					factions[]=
					{
						"PB_FIN_Faction"
					};
				};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
///APCS///
	class PB_FIN_BMP2 : rhs_bmp2e_vdv 
    {
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "PB_FIN_FACTION";
		editorCategory = "PB_FIN_TOP";
		editorSubcategory = "PB_FIN_APCs";
		crew = "PB_FIN_SOL_C";
		vehicleclass = "PB_FIN_APCs";
		typicalCargo[] = {"PB_FIN_SOL_C"};
		displayname = "BMP-2";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
        texturelist[] = 
        {
            "PB_FIN_BMPM05",1,
            "PB_FIN_BMPM05W",0
        };
		rhs_decalParameters[] = {};		
        class TextureSources
		{
			class PB_FIN_BMPM05
			{
				displayName = "Finnish Summer";
				author = "Kartsa";
				textures[] = {"PB_FIN_F\data\BMP_1_co.paa","PB_FIN_F\data\BMP_2_co.paa","PB_FIN_F\data\BMP_3_co.paa","PB_FIN_F\data\BMP_4_co.paa","PB_FIN_F\data\BMP_5_co.paa","PB_FIN_F\data\BMP_6_co.paa"};
			};
            class PB_FIN_BMPM05W
			{
				displayName = "Finnish Winter";
				author = "Kartsa";
				textures[] = {"PB_FIN_F\data\BMP_1_W_co.paa","PB_FIN_F\data\BMP_2_W_co.paa","PB_FIN_F\data\BMP_3_W_co.paa","PB_FIN_F\data\BMP_4_W_co.paa","PB_FIN_F\data\BMP_5_W_co.paa","PB_FIN_F\data\BMP_6_W_co.paa"};
			};
		};
    };
///CARS///
	
	class O_Truck_02_covered_F;
	class PB_FIN_SISU_COV: O_Truck_02_covered_F
	{
		
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SISU_COV.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_FIN_FACTION";
		editorCategory = "PB_FIN_TOP";
		editorSubcategory = "PB_FIN_Trucks";
		vehicleclass = "PB_FIN_Trucks";
		crew = "PB_FIN_SOL_R";
		displayname = "Sisu (COVERED)";
		hiddenselections[] = { "camo1","camo2","camo3"."camo4" };
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};

		textureList[] = 
		{
			"PB_FIN_SISU_COV_M05",1,
			"PB_FIN_SISU_COV_M05W",0
		};
		hiddenSelectionsMaterials[]=
		{
			"PB_FIN_F\data\sisu_02_kab.rvmat"
		};
		class TextureSources
		{
			class PB_FIN_SISU_COV_M05
			{
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"PB_FIN_FACTION" 
				};
				Textures[] = {
					"\PB_FIN_F\data\sisu_02_kab_co.paa",
					"\PB_FIN_F\data\sisu_02_kuz_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
			class PB_FIN_SISU_COV_M05W
			{
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"PB_FIN_FACTION" 
				};
				Textures[] = {
					"\PB_FIN_F\data\sisu_02_w_kab_co.paa",
					"\PB_FIN_F\data\sisu_02_w_kuz_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class O_Truck_02_transport_F;
	class PB_FIN_SISU: O_Truck_02_transport_F
	{
		
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SISU.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_FIN_FACTION";
		editorCategory = "PB_FIN_TOP";
		editorSubcategory = "PB_FIN_Trucks";
		vehicleclass = "PB_FIN_Trucks";
		crew = "PB_FIN_SOL_R";
		displayname = "Sisu (Transport)";
		hiddenselections[] = { "camo1","camo2","camo3"."camo4" };
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = 
		{
			"PB_FIN_SISU_M05",1,
			"PB_FIN_SISU_M05W",0
		};
		hiddenSelectionsMaterials[]=
		{
			"PB_FIN_F\data\sisu_02_kab.rvmat"
		};
		class TextureSources
		{
			class PB_FIN_SISU_M05
			{
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"PB_FIN_FACTION" 
				};
				Textures[] = {
					"\PB_FIN_F\data\sisu_02_kab_co.paa",
					"\PB_FIN_F\data\sisu_02_kuz_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
			class PB_FIN_SISU_M05W
			{
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"PB_FIN_FACTION" 
				};
				Textures[] = {
					"\PB_FIN_F\data\sisu_02_w_kab_co.paa",
					"\PB_FIN_F\data\sisu_02_w_kuz_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class O_Truck_02_box_F;
	class PB_FIN_SISU_REPAIR: O_Truck_02_box_F
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SISU_REPAIR.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_FIN_FACTION";
		editorCategory = "PB_FIN_TOP";
		editorSubcategory = "PB_FIN_Trucks";
		vehicleclass = "PB_FIN_Trucks";
		crew = "PB_FIN_SOL_R_ENG";
		displayname = "Sisu (Repair)";
		hiddenselections[] = { "camo1","camo2","camo3"."camo4" };
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"PB_FIN_SISU_REP_M05",1,
			"PB_FIN_SISU_REP_M05W",0
		};
		hiddenSelectionsMaterials[]=
		{
			"PB_FIN_F\data\sisu_02_kab.rvmat"
		};
		class TextureSources
		{
			class PB_FIN_SISU_REP_M05
			{
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"PB_FIN_FACTION" 
				};
				Textures[] = {
					"\PB_FIN_F\data\sisu_02_kab_co.paa",
					"\PB_FIN_F\data\sisu_02_repair_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
			class PB_FIN_SISU_REP_M05W
			{
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"PB_FIN_FACTION" 
				};
				Textures[] = {
					"\PB_FIN_F\data\sisu_02_w_kab_co.paa",
					"\PB_FIN_F\data\sisu_02_w_repair_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class O_Truck_02_medical_F;
	class PB_FIN_SISU_MEDICAL: O_Truck_02_medical_F
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SISU_MEDICAL.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_FIN_FACTION";
		editorCategory = "PB_FIN_TOP";
		editorSubcategory = "PB_FIN_Trucks";
		vehicleclass = "PB_FIN_Trucks";
		crew = "PB_FIN_SOL_MED";
		displayname = "Sisu (Medical)";
		hiddenselections[] = { "camo1","camo2","camo3"."camo4" };
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = 
		{
			"PB_FIN_SISU_MED_M05",1,
			"PB_FIN_SISU_MED_M05W",0
		};
		hiddenSelectionsMaterials[]=
		{
			"PB_FIN_F\data\sisu_02_kab.rvmat"
		};
		
		class TextureSources
		{
			class PB_FIN_SISU_MED_M05
			{
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"PB_FIN_FACTION" 
				};
				Textures[] = {
					"\PB_FIN_F\data\sisu_02_kab_co.paa",
					"\PB_FIN_F\data\sisu_02_kuz_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
			class PB_FIN_SISU_MED_M05W
			{
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"PB_FIN_FACTION" 
				};
				Textures[] = {
					"\PB_FIN_F\data\sisu_02_w_kab_co.paa",
					"\PB_FIN_F\data\sisu_02_w_kuz_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class O_Truck_02_Ammo_F;
	class PB_FIN_SISU_AMMO: O_Truck_02_Ammo_F
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SISU_AMMO.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_FIN_FACTION";
		editorCategory = "PB_FIN_TOP";
		editorSubcategory = "PB_FIN_Trucks";
		vehicleclass = "PB_FIN_Trucks";
		crew = "PB_FIN_SOL_R";
		displayname = "Sisu (Ammo)";
		hiddenselections[] = { "camo1","camo2","camo3"."camo4" };
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"PB_FIN_SISU_AMMO_M05",1,
			"PB_FIN_SISU_AMMO_M05W",0
		};
		hiddenSelectionsMaterials[]=
		{
			"PB_FIN_F\data\sisu_02_kab.rvmat"
		};
		
		class TextureSources
		{
			class PB_FIN_SISU_AMMO_M05
			{
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"PB_FIN_FACTION" 
				};
				Textures[] = {
					"\PB_FIN_F\data\sisu_02_kab_co.paa",
					"\PB_FIN_F\data\sisu_02_repair_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
			class PB_FIN_SISU_AMMO_M05W
			{
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"PB_FIN_FACTION" 
				};
				Textures[] = {
					"\PB_FIN_F\data\sisu_02_w_kab_co.paa",
					"\PB_FIN_F\data\sisu_02_w_repair_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa"
				};
			};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class O_Truck_02_fuel_F;
	class PB_FIN_SISU_FUEL: O_Truck_02_fuel_F
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SISU_FUEL.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_FIN_FACTION";
		editorCategory = "PB_FIN_TOP";
		editorSubcategory = "PB_FIN_Trucks";
		vehicleclass = "PB_FIN_Trucks";
		crew = "PB_FIN_SOL_R";
		displayname = "Sisu (Fuel)";
		hiddenselections[] = { "camo1","camo2","camo3"."camo4" };
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[] = {
			"PB_FIN_SISU_FUEL_M05",1,
			"PB_FIN_SISU_FUEL_M05W",0
		};
		hiddenSelectionsMaterials[]=
		{
			"PB_FIN_F\data\sisu_02_kab.rvmat"
		};
		class TextureSources
		{
			class PB_FIN_SISU_FUEL_M05
			{
				displayName = "Finnish Summer";
				author = "Kartsa";
				factions[] = {
					"PB_FIN_FACTION" 
				};
				Textures[] = {
					"\PB_FIN_F\data\sisu_02_kab_co.paa",
					"\PB_FIN_F\data\sisu_02_fuel_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa",
				};
			};
			class PB_FIN_SISU_FUEL_M05W
			{
				displayName = "Finnish Winter";
				author = "Kartsa";
				factions[] = {
					"PB_FIN_FACTION" 
				};
				Textures[] = {
					"\PB_FIN_F\data\sisu_02_w_kab_co.paa",
					"\PB_FIN_F\data\sisu_02_w_fuel_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa",
					"\a3\soft_f_beta\truck_02\data\truck_02_chassis_co.paa",
				};
			};
		};
	};
///MRAPS///
///HELICOPTERS///
///TURRETS///
	class PB_FIN_KRH: RHS_M252_D
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_KRH.jpg";
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "PB_FIN_FACTION";
		editorCategory = "PB_FIN_TOP";
		editorSubcategory = "PB_FIN_ART";
		vehicleClass = "PB_FIN_ART";
		crew = "PB_FIN_SOL_R";
		typicalCargo[] = {"PB_FIN_SOL_R"};
		displayname = "81 KRH 96";
	};
	class PB_FIN_KRKK: RHS_MK19_TriPod_WD
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_KRKK.jpg";
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "PB_FIN_FACTION";
		editorCategory = "PB_FIN_TOP";
		editorSubcategory = "PB_FIN_TUR";
		crew = "PB_FIN_SOL_R";
		typicalCargo[] = {"PB_FIN_SOL_R"};
		displayname = "40 KRKK 2005";
		vehicleclass = "PB_FIN_TUR";
	};
	class PB_FIN_PSTOHJ: RHS_TOW_TriPod_USMC_WD
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_PSTOHJ.jpg";
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "PB_FIN_FACTION";
		editorCategory = "PB_FIN_TOP";
		editorSubcategory = "PB_FIN_TUR";
		crew = "PB_FIN_SOL_R";
		vehicleclass = "PB_FIN_TUR";
		typicalCargo[] = {"PB_FIN_SOL_R"};
		displayname = "PSTOHJ 83";
	};
	class PB_FIN_ITK65 : PB_FIN_ITK_C 
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_ITK65.jpg";
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "PB_FIN_FACTION";
		editorCategory = "PB_FIN_TOP";
		editorSubcategory = "PB_FIN_TUR";
		crew = "PB_FIN_SOL_R";
		vehicleclass = "PB_FIN_TUR";
		typicalCargo[] = {"PB_FIN_SOL_R"};
		displayname = "23 ITK 65";
        class Turrets : Turrets 
        {
            class MainTurret: MainTurret{};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType = "PB_FIN_SOL_R";
			};
        };
    };
	class PB_FIN_ITK96: rhs_KORD_high_MSV
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_ITK96.jpg";
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "PB_FIN_FACTION";
		editorCategory = "PB_FIN_TOP";
		editorSubcategory = "PB_FIN_TUR";
		crew = "PB_FIN_SOL_R";
		vehicleclass = "PB_FIN_TUR";
		typicalCargo[] = {"PB_FIN_SOL_R"};
		displayname = "12.7 ITKK 96";
	};
	class PB_FIN_PSH74: rhs_D30_vmf
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_PSH74.jpg";
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "PB_FIN_FACTION";
		editorCategory = "PB_FIN_TOP";
		editorSubcategory = "PB_FIN_TUR";
		crew = "PB_FIN_SOL_R";
		vehicleclass = "PB_FIN_TUR";
		typicalCargo[] = {"PB_FIN_SOL_R"};
		displayname = "122 H 63";
	};
///PLANES///