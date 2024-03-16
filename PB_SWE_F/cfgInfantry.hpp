
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_SWE_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Euro","Head_Enoch","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_SWE_Faction";
		genericNames="PB_SwedishMen";
		vehicleClass="Men";
		editorSubcategory="PB_SWE_Infantry";
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
			"PB_M90_Modular_Lite",
			"PB_M90_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		respawnLinkedItems[]=
		{
			"PB_M90_Modular_Lite",
			"PB_M90_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
	};
	class PB_SWE_SOL_R: PB_SWE_SOL
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_SOL_R.jpg";
		vehicleClass = "PB_SWE_Infantry";
		editorCategory = "PB_SWE_Top";
		editorSubcategory = "PB_SWE_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_M90_GoraG";
		allowedHeadgear[]=
		{
			"PB_M90_H",
			"PB_M90_H_ESS",
			"PB_M90_H_HESS",
			"PB_M90_FAST",
			"PB_M90_FAST_H"
		};
		headgearList[] = 
		{
			"PB_M90_H",1,
			"PB_M90_H_ESS",1,
			"PB_M90_H_HESS",1,
			"PB_M90_FAST",0.1,
			"PB_M90_FAST_H",0.1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		backpack = "PB_SWE_RIF_BP";
		weapons[] = {"PB_SWE_RIF_AK24","Throw","Put"};
		respawnWeapons[] = {"PB_SWE_RIF_AK24","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG"};
	};
	class PB_SWE_SOL_SL: PB_SWE_SOL_R
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_M90_Modular_Lite",
			"PB_M90_H_HESS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_M90_Modular_Lite",
			"PB_M90_H_HESS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_M90_GoraG_RU";
		backpack = "PB_SWE_RADIO_BAG";
		weapons[] = {"PB_SWE_RIF_AK24_GL","Throw","Put"};
		respawnWeapons[] = {"PB_SWE_RIF_AK24_GL","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG"};
	};
    class PB_SWE_SOL_MED: PB_SWE_SOL_R
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_SWE_MED_BAG";
	};
    class PB_SWE_SOL_MG: PB_SWE_SOL_R
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_SWE_MG_KSP","Throw","Put"};
		respawnWeapons[] = {"PB_SWE_MG_KSP","Throw","Put"};
        backpack = "PB_SWE_MG_BAG";
		magazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer"};
		respawnMagazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer"};
	};
	class PB_SWE_SOL_MK: PB_SWE_SOL_R
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_SOL_MK.jpg";
		displayName = "Marksman";
		backpack = "";
        weapons[] = {"PB_SWE_MK_AK417","Throw","Put"};
		respawnWeapons[] = {"PB_SWE_MK_AK417","Throw","Put"};	
		magazines[] = {"HandGrenade","SmokeShell","ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer","ACE_20Rnd_762x51_Mag_Tracer"};
	};
	class PB_SWE_SOL_SNI: PB_SWE_SOL_R
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_SOL_SNI.jpg";
		displayName = "Sniper";
		linkedItems[]=
		{
			"PB_M90_TST",
			"PB_M90_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_M90_TST",
			"PB_M90_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "binoculars"
		};
		backpack = "";
        weapons[] = {"PB_SWE_SNI_KSP","rhsusf_weap_glock17g4","Throw","Put"};
		respawnWeapons[] = {"PB_SWE_SNI_KSP","rhsusf_weap_glock17g4","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer"};
		magazines[] = {"SmokeShell","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer"};
	};
	class PB_SWE_SOL_LAT: PB_SWE_SOL_R
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_SOL_LAT.jpg";
		displayName = "Rifleman (AT)";
        role = "MissileSpecialist";
        icon = "iconManAT";
		weapons[] = {"PB_SWE_RIF_AK24","rhs_weap_m136","Throw","Put"};
		respawnWeapons[] = {"PB_SWE_RIF_AK24","rhs_weap_m136","Throw","Put"};
	};
	class PB_SWE_SOL_HAT: PB_SWE_SOL_R
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_SOL_HAT.jpg";
		backpack = "PB_SWE_AT_BP";
		displayName = "AT Rifleman";
        role = "MissileSpecialist";
        icon = "iconManAT";
		weapons[] = {"PB_SWE_RIF_AK24","rhs_weap_maaws","Throw","Put"};
		respawnWeapons[] = {"PB_SWE_RIF_AK24","rhs_weap_maaws","Throw","Put"};
		magazines[] = {"MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG"};
		respawnMagazines[] = {"MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG"};
	};
	class PB_SWE_SOL_C: PB_SWE_SOL_R
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		uniformclass = "PB_M90_GoraG_RU";
		backpack = "";
		linkedItems[]=
		{
			"PB_M90_Modular",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_M90_Modular",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG"};
	};
	class PB_SWE_SOL_JP: PB_SWE_SOL_R
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_SOL_JP.jpg";
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
		weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
	};
	class PB_SWE_SOL_HP: PB_SWE_SOL_C
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_SOL_HP.jpg";
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
	class PB_SWE_SOL_ENG: PB_SWE_SOL_R
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_SWE_ENG_BP";
		engineer=1;
	};
	class PB_SWE_SOL_EOD: PB_SWE_SOL_R
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_SWE_EOD_BP";
		engineer=1;
		CanDeactivateMines=1;
		detectSkill=38;
	};