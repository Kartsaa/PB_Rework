
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_CZE_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_CZE_Faction";
		genericNames="PB_CzechMen";
		vehicleClass="Men";
		editorSubcategory="PB_CZE_Infantry";
		nakedUniform = "BasicBody";
		portrait="";
		picture="";
		icon="iconMan";
		accuracy=3.9000001;
		camouflage=1.1;
		minFireTime=10;
		scope=0;
		scopeCurator=0;
		linkedItems[]=
		{
			"PB_VZ95W_Modular_Lite",
			"PB_VZ95W_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"PB_VZ95W_Modular_Lite",
			"PB_VZ95W_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
	class PB_CZE_SOL_R: PB_CZE_SOL
	{
    	editorpreview = "PB_EP\ui\Czech\PB_CZE_SOL_R.jpg";
		vehicleClass = "PB_CZE_Infantry";
		editorCategory = "PB_CZE_Top";
		editorSubcategory = "PB_CZE_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_VZ95W_ACU";
		backpack = "PB_CZE_RIF_BP";
		allowedHeadgear[]=
		{
			"PB_VZ95W_H",
			"PB_VZ95W_H_ESS",
			"PB_VZ95W_H_HESS"
		};
		headgearList[] = 
		{
			"PB_VZ95W_H",1,
			"PB_VZ95W_H_ESS",1,
			"PB_VZ95W_H_HESS",1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		weapons[] = {"PB_CZE_RIF_BREN2","Throw","Put"};
		respawnWeapons[] = {"PB_CZE_RIF_BREN2","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red"};
	};
	class PB_CZE_SOL_SL: PB_CZE_SOL_R
	{
    	editorpreview = "PB_EP\ui\Czech\PB_CZE_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_FLECK_CARRIERLITE_CO",
			"PB_VZ95W_H_HESS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_VZ95W_Modular_Lite",
			"PB_VZ95W_H_HESS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_VZ95W_ACU_R";
		backpack = "PB_CZE_RADIO_BAG";
		magazines[] = {"SmokeShell","SmokeShell","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red"};
	};
    class PB_CZE_SOL_MED: PB_CZE_SOL_R
	{
    	editorpreview = "PB_EP\ui\Czech\PB_CZE_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_CZE_MED_BAG";
	};
    class PB_CZE_SOL_MG: PB_CZE_SOL_R
	{
    	editorpreview = "PB_EP\ui\Czech\PB_CZE_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_MINIMI_762","Throw","Put"};
		respawnWeapons[] = {"PB_MINIMI_762","Throw","Put"};
        backpack = "PB_CZE_MG_BAG";
		magazines[] = {"PB_200Rnd_762x51_M80","PB_200Rnd_762x51_M80"};
		respawnMagazines[] = {"PB_200Rnd_762x51_M80","PB_200Rnd_762x51_M80"};
	};
	class PB_CZE_SOL_SNI: PB_CZE_SOL_R
	{
    	editorpreview = "PB_EP\ui\Czech\PB_CZE_SOL_SNI.jpg";
		displayName = "Sniper";
		backpack = "";
        weapons[] = {"PB_CZE_SNI_TRG","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"PB_CZE_SNI_TRG","hgun_P07_blk_F","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000"};
		magazines[] = {"SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000"};
	};
	class PB_CZE_SOL_RAT: PB_CZE_SOL_R
	{
    	editorpreview = "PB_EP\ui\Czech\PB_CZE_SOL_RAT.jpg";
		displayName = "Rifleman (LAT)";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "PB_CZE_RIF_BP";
		weapons[] = {"PB_CZE_RIF_BREN2","rhs_weap_rpg75","Throw","Put"};
		respawnWeapons[] = {"PB_CZE_RIF_BREN2","rhs_weap_rpg75","Throw","Put"};
	};
	class PB_CZE_SOL_HAT: PB_CZE_SOL_R
	{
    	editorpreview = "PB_EP\ui\Czech\PB_CZE_SOL_HAT.jpg";
		displayName = "AT Rifleman";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "PB_CZE_AT_BP";
		weapons[] = {"PB_CZE_RIF_BREN2","rhs_weap_rpg7","Throw","Put"};
		respawnWeapons[] = {"PB_CZE_RIF_BREN2","rhs_weap_rpg7","Throw","Put"};	
		magazines[] = {"rhs_rpg7_PG7VL_mag","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red"};
	};
	class PB_CZE_SOL_C: PB_CZE_SOL_R
	{
    	editorpreview = "PB_EP\ui\Czech\PB_CZE_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		backpack = "";
		linkedItems[]=
		{
			"PB_VZ95W_Modular",
			"rhs_tsh4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_VZ95W_Modular",
			"rhs_tsh4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[] = {"PB_QIN_CZ_BREN2_556_8","Throw","Put"};
		respawnWeapons[] = {"PB_QIN_CZ_BREN2_556_8","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red"};
	};
	class PB_CZE_SOL_JP: PB_CZE_SOL_R
	{
    	editorpreview = "PB_EP\ui\Czech\PB_CZE_SOL_JP.jpg";
		displayName = "Jet Pilot";
		role = "Crewman";
		uniformClass = "PB_GREEN_JP";
		backpack = "";
		linkedItems[]=
		{
			"RHS_jetpilot_usaf",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"RHS_jetpilot_usaf",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[] = {"hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"hgun_P07_blk_F","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag"};
	};
	class PB_CZE_SOL_HP: PB_CZE_SOL_C
	{
    	editorpreview = "PB_EP\ui\Czech\PB_CZE_SOL_HP.jpg";
		displayName = "Heli Pilot";
		role = "Crewman";
		uniformClass = "PB_Green_GoraG";
		backpack = "";
		linkedItems[]=
		{
			"rhs_zsh7a_mike_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"rhs_zsh7a_mike_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class PB_CZE_SOL_ENG: PB_CZE_SOL_R
	{
    	editorpreview = "PB_EP\ui\Czech\PB_CZE_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_CZE_ENG_BP";
		engineer=1;
	};
	class PB_CZE_SOL_EOD: PB_CZE_SOL_R
	{
    	editorpreview = "PB_EP\ui\Czech\PB_CZE_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_CZE_EOD_BP";
		engineer=1;
		CanDeactivateMines=1;
		detectSkill=38;
	};
	class PB_CZE_SOL_GRE: PB_CZE_SOL_R
	{
    	editorpreview = "PB_EP\ui\Czech\PB_CZE_SOL_GRE.jpg";
		displayName = "Grenadier";
		backpack = "PB_CZE_GRE_BP";
		weapons[] = {"PB_CZE_RIF_BREN2_GL","Throw","Put"};
		respawnWeapons[] = {"PB_CZE_RIF_BREN2_GL","Throw","Put"};
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red"};
		respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White""PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red"};
	};