
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_KOR_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Asian","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_KOR_Faction";
		genericNames="PB_KoreanMen";
		vehicleClass="Men";
		editorSubcategory="PB_KOR_Infantry";
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
			"PB_GRANITEB_Modular_Lite",
			"PB_GRANITEB_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"PB_GRANITEB_Modular_Lite",
			"PB_GRANITEB_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
	class PB_KOR_SOL_R: PB_KOR_SOL
	{
    	editorpreview = "PB_EP\ui\Korea\PB_KOR_SOL_R.jpg";
		vehicleClass = "PB_KOR_Infantry";
		editorCategory = "PB_KOR_Top";
		editorSubcategory = "PB_KOR_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_GRANITEB_GoraG";
		backpack = "PB_KOR_RIF_BP";
		weapons[] = {"PB_KOR_RIF_K2","Throw","Put"};
		respawnWeapons[] = {"PB_KOR_RIF_K2","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
	};
	class PB_KOR_SOL_RAT: PB_KOR_SOL_R
	{
    	editorpreview = "PB_EP\ui\Korea\PB_KOR_SOL_RAT.jpg";
		displayName = "Rifleman (AT)";
		weapons[] = {"PB_KOR_RIF_K2","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"PB_KOR_RIF_K2","rhs_weap_m72a7","Throw","Put"};
	};
	class PB_KOR_SOL_AT: PB_KOR_SOL_R
	{
    	editorpreview = "PB_EP\ui\Korea\PB_KOR_SOL_AT.jpg";
		displayName = "AT Rifleman";
		weapons[] = {"PB_KOR_RIF_K2","PB_PZF3","Throw","Put"};
		backpack = "PB_KOR_AT_BP";
		respawnWeapons[] = {"PB_KOR_RIF_K2","PB_PZF3","Throw","Put"};
		magazines[] = {"HandGrenade","SmokeShell","PB_DM12_HEAT_F","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","PB_DM12_HEAT_F","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
	};
	class PB_KOR_SOL_SL: PB_KOR_SOL_R
	{
    	editorpreview = "PB_EP\ui\Korea\PB_KOR_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_GRANITEB_Modular_Lite",
			"PB_GRANITEB_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_GRANITEB_Modular_Lite",
			"PB_GRANITEB_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_GRANITEB_GoraG_RU";
		backpack = "PB_KOR_RADIO_BAG";
		weapons[] = {"PB_KOR_RIF_K2","Throw","Put"};
		respawnWeapons[] = {"PB_KOR_RIF_K2","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
	};
    class PB_KOR_SOL_MED: PB_KOR_SOL_R
	{
    	editorpreview = "PB_EP\ui\Korea\PB_KOR_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_KOR_MED_BAG";
	};
    class PB_KOR_SOL_MG: PB_KOR_SOL_R
	{
    	editorpreview = "PB_EP\ui\Korea\PB_KOR_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"rhs_weap_m249","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249","Throw","Put"};
        backpack = "PB_KOR_MG_BAG";
		magazines[] = {"rhsusf_200rnd_556x45_M855_box","rhsusf_200rnd_556x45_M855_box"};
		respawnMagazines[] = {"rhsusf_200rnd_556x45_M855_box","rhsusf_200rnd_556x45_M855_box"};
	};
	class PB_KOR_SOL_SNI: PB_KOR_SOL_R
	{
    	editorpreview = "PB_EP\ui\Korea\PB_KOR_SOL_SNI.jpg";
		displayName = "Sniper";
		backpack = "";
        weapons[] = {"PB_KOR_SNI_K14","UK3CB_BAF_L105A1","Throw","Put"};
		respawnWeapons[] = {"PB_KOR_SNI_K14","UK3CB_BAF_L105A1","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010"};
		magazines[] = {"SmokeShell","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010","rhsusf_5Rnd_300winmag_xm2010"};
	};
	class PB_KOR_SOL_C: PB_KOR_SOL_R
	{
    	editorpreview = "PB_EP\ui\Korea\PB_KOR_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		backpack = "";
		uniformclass = "PB_GRANITEB_GoraG";
		linkedItems[]=
		{
			"PB_GRANITEB_Modular",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_GRANITEB_Modular",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[] = {"PB_K2","Throw","Put"};
		respawnWeapons[] = {"PB_K2","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
	};
	class PB_KOR_SOL_JP: PB_KOR_SOL_R
	{
    	editorpreview = "PB_EP\ui\Korea\PB_KOR_SOL_JP.jpg";
		displayName = "Jet Pilot";
		role = "Crewman";
		uniformClass = "PB_Green_JP";
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
		weapons[] = {"UK3CB_BAF_L105A1","Throw","Put"};
		respawnWeapons[] = {"UK3CB_BAF_L105A1","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd"};
	};
	class PB_KOR_SOL_HP: PB_KOR_SOL_C
	{
    	editorpreview = "PB_EP\ui\Korea\PB_KOR_SOL_HP.jpg";
		displayName = "Heli Pilot";
		role = "Crewman";
		uniformClass = "PB_Green_HP";
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
	class PB_KOR_SOL_ENG: PB_KOR_SOL_R
	{
    	editorpreview = "PB_EP\ui\Korea\PB_KOR_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_KOR_ENG_BP";
		engineer=1;
	};
	class PB_KOR_SOL_EOD: PB_KOR_SOL_R
	{
    	editorpreview = "PB_EP\ui\Korea\PB_KOR_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_KOR_EOD_BP";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
	};
	class PB_KOR_SOL_GRE: PB_KOR_SOL_R
	{
    	editorpreview = "PB_EP\ui\Korea\PB_KOR_SOL_GRE.jpg";
		displayName = "Grenadier";
		backpack = "PB_KOR_GRE_BP";
		weapons[] = {"PB_KOR_RIF_K2_GL","Throw","Put"};
		respawnWeapons[] = {"PB_KOR_RIF_SCAR_LGL","Throw","Put"};
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
		respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White""rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
	};