
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_UK_SOL_B: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Enoch","Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_UK_Faction";
		genericNames="NatoMen";
		vehicleClass="Men";
		editorSubcategory="PB_British_Infantry";
		nakedUniform = "U_BasicBody";
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
			"PB_MTP_Modular_Lite",
			"PB_MTP_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "rhsusf_AN_PVS_14"
		};
		respawnLinkedItems[]=
		{
			"PB_MTP_Modular_Lite",
			"PB_MTP_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "rhsusf_AN_PVS_14"
		};
	};
	class PB_UK_SOL_R: PB_UK_SOL_B
	{
		vehicleClass = "PB_British_Infantry";
		editorCategory = "PB_British_Top";
		editorSubcategory = "PB_British_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		headgearProbability=100;
        icon= "iconMan";
    	editorpreview = "PB_EP\ui\British\PB_UK_SOL_R.jpg";
		allowedHeadgear[]=
		{
			"PB_MTP_H",
			"PB_MTP_H_C",
			"PB_MTP_SF_H",
		};
		headgearList[] = 
		{
			"PB_MTP_H",1,
			"PB_MTP_H_C",1,
			"PB_MTP_SF_H",0.5
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_MTP_ACU";
		backpack = "PB_UK_RIF_BAG";
		weapons[] = {"PB_RIF_F_L85A3","Throw","Put"};
		respawnWeapons[] = {"PB_RIF_F_L85A3","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T"};
	};
    class PB_UK_SOL_RAT: PB_UK_SOL_R
	{
		displayName = "Rifleman (M136)";
		weapons[] = {"PB_RIF_F_L85A3","UK3CB_BAF_AT4_CS_AT_Launcher","Throw","Put"};
		respawnWeapons[] = {"PB_RIF_F_L85A3","UK3CB_BAF_AT4_CS_AT_Launcher","Throw","Put"};
    	editorpreview = "PB_EP\ui\British\PB_UK_SOL_RAT.jpg";
	};
    class PB_UK_SOL_MED: PB_UK_SOL_R
	{
    	editorpreview = "PB_EP\ui\British\PB_UK_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		uniformClass = "PB_MTP_ACU_R";
		backpack = "PB_UK_MED_BAG";
        weapons[] = {"PB_RIF_F_L85A3","Throw","Put"};
		respawnWeapons[] = {"PB_RIF_F_L85A3","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T"};
	};
    class PB_UK_SOL_SL: PB_UK_SOL_R
	{
		displayName = "Squadleader";
        icon = "iconManLeader";
		uniformClass = "PB_MTP_ACU_R";
		backpack = "PB_UK_RADIO_BAG";
    	editorpreview = "PB_EP\ui\British\PB_UK_SOL_SL.jpg";
		linkedItems[]=
		{
			"PB_MTP_Modular_Lite",
			"PB_MTP_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "rhsusf_AN_PVS_14",
            "Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_MTP_Modular_Lite",
			"PB_MTP_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "rhsusf_AN_PVS_14",
            "Binoculars"
		};		
        weapons[] = {"PB_RIF_F_L85A3","UK3CB_BAF_L131A1","Throw","Put"};
		respawnWeapons[] = {"PB_RIF_F_L85A3","UK3CB_BAF_L131A1","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd"};
	};
    class PB_UK_SOL_MK: PB_UK_SOL_R
	{
    	editorpreview = "PB_EP\ui\British\PB_UK_SOL_MK.jpg";
		displayName = "Marksman";
		linkedItems[]=
		{
			"PB_MTP_Modular_Lite",
			"PB_MTP_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "rhsusf_AN_PVS_14",
            "rhsusf_bino_lerca_1200_black"
		};
		respawnLinkedItems[]=
		{
			"PB_MTP_Modular_Lite",
			"PB_MTP_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "rhsusf_AN_PVS_14",
            "rhsusf_bino_lerca_1200_black"
		};
		backpack = "";
        weapons[] = {"PB_SNI_F_L129A1","Throw","Put"};
		respawnWeapons[] = {"PB_SNI_F_L129A1","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","UK3CB_BAF_762_L42A1_20Rnd_T","UK3CB_BAF_762_L42A1_20Rnd_T","UK3CB_BAF_762_L42A1_20Rnd_T","UK3CB_BAF_762_L42A1_20Rnd_T","UK3CB_BAF_762_L42A1_20Rnd_T","UK3CB_BAF_762_L42A1_20Rnd_T"};
		magazines[] = {"SmokeShell","UK3CB_BAF_762_L42A1_20Rnd_T","UK3CB_BAF_762_L42A1_20Rnd_T","UK3CB_BAF_762_L42A1_20Rnd_T","UK3CB_BAF_762_L42A1_20Rnd_T","UK3CB_BAF_762_L42A1_20Rnd_T","UK3CB_BAF_762_L42A1_20Rnd_T"};
	};
    class PB_UK_SOL_GRE: PB_UK_SOL_R
	{
		displayName = "Grenadier";
		uniformClass = "PB_MTP_ACU";
    	editorpreview = "PB_EP\ui\British\PB_UK_SOL_GRE.jpg";
        weapons[] = {"PB_RIF_F_L85GL","Throw","Put"};
		respawnWeapons[] = {"PB_RIF_F_L85GL","Throw","Put"};
        backpack = "PB_UK_GRE_BAG";
		magazines[] = {"UK3CB_BAF_1Rnd_HE_grenade_Shell","UK3CB_BAF_1Rnd_HE_grenade_Shell","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T"};
		respawnMagazines[] = {"UK3CB_BAF_1Rnd_HE_grenade_Shell","UK3CB_BAF_1Rnd_HE_grenade_Shell","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T"};
	};
    class PB_UK_SOL_MG: PB_UK_SOL_R
	{
    	editorpreview = "PB_EP\ui\British\PB_UK_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
		uniformClass = "PB_MTP_ACU";
        weapons[] = {"UK3CB_BAF_L7A2","Throw","Put"};
		respawnWeapons[] = {"UK3CB_BAF_L7A2","Throw","Put"};
        backpack = "PB_UK_MG_BAG";
		magazines[] = {"UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_762_100Rnd_T"};
		respawnMagazines[] = {"UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_762_100Rnd_T","UK3CB_BAF_762_100Rnd_T"};
	};
    class PB_UK_SOL_SNI: PB_UK_SOL_R
	{
    	editorpreview = "PB_EP\ui\British\PB_UK_SOL_SNI.jpg";
		displayName = "Sniper";
		linkedItems[]=
		{
			"PB_MTP_Modular_Lite",
			"PB_MTP_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "rhsusf_AN_PVS_14",
            "rhsusf_bino_lerca_1200_black"
		};
		respawnLinkedItems[]=
		{
			"PB_MTP_Modular_Lite",
			"PB_MTP_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "rhsusf_AN_PVS_14",
            "rhsusf_bino_lerca_1200_black"
		};
		backpack = "PB_UK_SNI_BAG";
        weapons[] = {"PB_SNI_F_L115A3","UK3CB_BAF_L131A1","Throw","Put"};
		respawnWeapons[] = {"PB_SNI_F_L115A3","UK3CB_BAF_L131A1","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer"};
		magazines[] = {"SmokeShell","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_9_17Rnd","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer"};
	};
    class PB_UK_SOL_R_NLAW: PB_UK_SOL_R
	{
    	editorpreview = "PB_EP\ui\British\PB_UK_SOL_R_NLAW.jpg";
		displayName = "Rifleman (NLAW)";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "PB_UK_RIF_BAG";
		weapons[] = {"PB_RIF_F_L85A3","UK3CB_BAF_NLAW_Launcher","Throw","Put"};
		respawnWeapons[] = {"PB_RIF_F_L85A3","UK3CB_BAF_NLAW_Launcher","Throw","Put"};
	};
    class PB_UK_SOL_R_JAV: PB_UK_SOL_R
	{
    	editorpreview = "PB_EP\ui\British\PB_UK_SOL_R_JAV.jpg";
		displayName = "AT Rifleman (Javelin)";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "";
		weapons[] = {"PB_RIF_F_L85A3","rhs_weap_fgm148","Throw","Put"};
		respawnWeapons[] = {"PB_RIF_F_L85A3","rhs_weap_fgm148","Throw","Put"};
        magazines[] = {"rhs_fgm148_magazine_AT","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T"};
		respawnMagazines[] = {"rhs_fgm148_magazine_AT","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T"};
	};
    class PB_UK_SOL_R_CG: PB_UK_SOL_R
	{
    	editorpreview = "PB_EP\ui\British\PB_UK_SOL_R_CG.jpg";
		displayName = "AT Rifleman (MAAWS)";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "PB_UK_AT_BAG";
		weapons[] = {"PB_RIF_F_L85A3","PB_AT_M3","Throw","Put"};
		respawnWeapons[] = {"PB_RIF_F_L85A3","PB_AT_M3","Throw","Put"};
        magazines[] = {"rhs_mag_maaws_HEAT","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T"};
		respawnMagazines[] = {"rhs_mag_maaws_HEAT","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T"};
	};
	class PB_UK_SOL_C: PB_UK_SOL_R
	{
    	editorpreview = "PB_EP\ui\British\PB_UK_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		uniformClass = "PB_MTP_GoraG_RU";
		backpack = "";
		linkedItems[]=
		{
			"PB_MTP_Modular",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_MTP_Modular",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[] = {"UK3CB_BAF_L22A2","Throw","Put"};
		respawnWeapons[] = {"UK3CB_BAF_L22A2","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T"};
	};
	class PB_UK_SOL_JP: PB_UK_SOL_R
	{
    	editorpreview = "PB_EP\ui\British\PB_UK_SOL_JP.jpg";
		displayName = "Jet Pilot";
		role = "Crewman";
		uniformClass = "U_B_PilotCoveralls";
		backpack = "";
		linkedItems[]=
		{
			"H_PilotHelmetFighter_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"H_PilotHelmetFighter_B",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[] = {"UK3CB_BAF_L22A2","Throw","Put"};
		respawnWeapons[] = {"UK3CB_BAF_L22A2","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","UK3CB_BAF_556_30Rnd_T","UK3CB_BAF_556_30Rnd_T"};
	};
	class PB_UK_SOL_HP: PB_UK_SOL_JP
	{
    	editorpreview = "PB_EP\ui\British\PB_UK_SOL_HP.jpg";
		displayName = "Heli Pilot";
		role = "Crewman";
		uniformClass = "PB_MTP_GoraG_RU";
		backpack = "";
		linkedItems[]=
		{
			"H_PilotHelmetHeli_O",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"H_PilotHelmetHeli_O",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class PB_UK_SOL_ENG: PB_UK_SOL_R
	{
    	editorpreview = "PB_EP\ui\British\PB_UK_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_UK_ENG_BAG";
		engineer=1;
	};
	class PB_UK_SOL_EOD: PB_UK_SOL_R
	{
    	editorpreview = "PB_EP\ui\British\PB_UK_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_UK_EOD_BAG";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
	};