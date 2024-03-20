	class rhs_uh1h_un;
	class rhsgref_hidf_m113a3_unarmed;
	class rhsusf_m113_usarmy_M2_90;
	class rhsusf_m1043_d_m2;
	class rhsusf_m1043_d;
	class rhsgref_un_m1117;
	class PB_UN_M1117_A: rhsgref_un_m1117
	{
		scope = 0;
		class Turrets;
	};
	class PB_UN_M1117_B: PB_UN_M1117_A
	{
			scope = 0;
		class Turrets: Turrets
		{
			class MainTurret;
			class MainTurret_Out;
			class MainTurret2_Out;
		};
	};
	class PB_UN_UH1H: rhs_uh1h_un
	{
		author = "Kartsa";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "PB_UN_Faction";
		vehicleClass = "PB_UN_HELI";
		editorCategory = "PB_UN_Top";
		editorSubcategory = "PB_UN_HELI";
		displayName = "UH-1H";
		crew = "PB_UN_SOL_HP";
		editorpreview = "PB_EP\ui\UN\PB_UN_UH1H.jpg";
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportWeapons{};
	};
	class PB_UN_M113A3: rhsgref_hidf_m113a3_unarmed
	{
		author = "Kartsa";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "PB_UN_Faction";
		vehicleClass = "PB_UN_APCs";
		editorCategory = "PB_UN_Top";
		editorSubcategory = "PB_UN_APCs";
		editorpreview = "PB_EP\ui\UN\PB_UN_M113A3.jpg";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4"};   
		HiddenSelectionsTextures[] = 
		{
			"PB_UN_F\data\UN_m113a3_01_co.paa",
			"PB_UN_F\data\UN_m113a3_02_co.paa",
			"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_03_lg_co.paa",
			"PB_UN_F\data\UN_m113a3_03_co.paa"
		};
		crew = "PB_UN_SOL_R";
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportWeapons{};
	};
	class PB_UN_M113A3_M2: rhsusf_m113_usarmy_M2_90
	{
		author = "Kartsa";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "PB_UN_Faction";
		vehicleClass = "PB_UN_APCs";
		editorCategory = "PB_UN_Top";
		editorSubcategory = "PB_UN_APCs";
		editorpreview = "PB_EP\ui\UN\PB_UN_M113A3_M2.jpg";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};		
		HiddenSelectionsTextures[] = 
		{
			"PB_UN_F\data\UN_m113a3_01_co.paa",
			"PB_UN_F\data\UN_m113a3_02_co.paa",
			"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_03_lg_co.paa",
			"PB_UN_F\data\UN_m113a3_03_co.paa",
			"PB_UN_F\data\UN_m23_pintle_co.paa"
		};
		crew = "PB_UN_SOL_R";
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportWeapons{};
	};
	class PB_UN_M1043_M2: rhsusf_m1043_d_m2
	{
		author = "Kartsa";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "PB_UN_Faction";
		vehicleClass = "PB_UN_CArs";
		editorCategory = "PB_UN_Top";
		editorSubcategory = "PB_UN_Cars";
		editorpreview = "PB_EP\ui\UN\PB_UN_M1043_M2.jpg";
		hiddenSelections[] = {"exterior","interior","A2","wheels","mainbody","hood gratting","camo1","camo2","camo3","unitdecals_1","unitdecals_2","ind_wait","ind_brake","ind_highbeam"};
		HiddenSelectionsTextures[] = 
		{
			"PB_UN_F\data\UN_m998_exterior_co.paa",
			"PB_UN_F\data\UN_m998_interior_co.paa",
			"PB_UN_F\data\UN_A2_parts_co.paa",
			"PB_UN_F\data\UN_wheel_wranglermt_co.paa",
			"PB_UN_F\data\UN_m998_mainbody_co.paa",
			"PB_UN_F\data\UN_gratting_co.paa",
			"PB_UN_F\data\UN_tile_exmetal_co.paa",
			"PB_UN_F\data\UN_m1043_co.paa",
			"PB_UN_F\data\UN_mk64mount_co.paa"
			
		};
		crew = "PB_UN_SOL_R";
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportWeapons{};
	};
	class PB_UN_M1043: rhsusf_m1043_d
	{
		author = "Kartsa";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "PB_UN_Faction";
		vehicleClass = "PB_UN_CArs";
		editorCategory = "PB_UN_Top";
		editorSubcategory = "PB_UN_Cars";
		editorpreview = "PB_EP\ui\UN\PB_UN_M1043.jpg";
		hiddenSelections[] = { "exterior","interior","A2","wheels","mainbody","hood gratting","camo1","camo2","unitdecals_1","unitdecals_2","ind_wait","ind_brake","ind_highbeam"};		
		hiddenselectionstextures[] =
		{
			"PB_UN_F\data\UN_m998_exterior_co.paa",
			"PB_UN_F\data\UN_m998_interior_co.paa",
			"PB_UN_F\data\UN_A2_parts_co.paa",
			"PB_UN_F\data\UN_wheel_wranglermt_co.paa",
			"PB_UN_F\data\UN_m998_mainbody_co.paa",
			"PB_UN_F\data\UN_gratting_co.paa",
			"PB_UN_F\data\UN_tile_exmetal_co.paa",
			"PB_UN_F\data\UN_m1043_co.paa",
			"",
			""
		};
		crew = "PB_UN_SOL_R";
		class TransportMagazines{};
		class TransportItems{};
		class TransportBackpacks{};
		class TransportWeapons{};
	};
	class PB_UN_M1117: PB_UN_M1117_B
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_UN_Faction";
		editorCategory = "PB_UN_Top";
		editorSubcategory = "PB_UN_MRAP";
		vehicleclass = "PB_UN_MRAP";
		editorpreview = "PB_EP\ui\UN\PB_UN_M1117.jpg";
		crew = "PB_UN_SOL_R";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnertype = "PB_UN_SOL_R";
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