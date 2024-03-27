
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_DEN_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Euro","Head_Enoch","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_DEN_Faction";
		genericNames="PB_DanishMen";
		vehicleClass="Men";
		editorSubcategory="PB_DEN_Infantry";
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
			"PB_MULTICAM_Modular_Lite",
			"PB_MULTICAM_MICH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_MULTICAM_Modular_Lite",
			"PB_MULTICAM_MICH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
	};
	class PB_DEN_SOL_R: PB_DEN_SOL
	{
		editorpreview = "PB_EP\ui\Denmark\PB_DEN_SOL_R.jpg";
		vehicleClass = "PB_DEN_Infantry";
		editorCategory = "PB_DEN_Top";
		editorSubcategory = "PB_DEN_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_MULTICAM_ACU";
		allowedHeadgear[]=
		{
			"PB_MULTICAM_MICH",
			"PB_MULTICAM_MICH_ALT",
			"PB_MULTICAM_MICH_C_H_N",
			"PB_MULTICAM_C_H_N_A",
			"PB_MULTICAM_C_H_N_H",
			"PB_MULTICAM_MICH_N",
			"PB_MULTICAM_MICH_N_ALT",
			"PB_MULTICAM_MICH_N_H"
		};
		headgearList[] = 
		{
			"PB_MULTICAM_MICH",1,
			"PB_MULTICAM_MICH_ALT",1,
			"PB_MULTICAM_MICH_C_H_N",1,
			"PB_MULTICAM_C_H_N_A",1,
			"PB_MULTICAM_C_H_N_H",1,
			"PB_MULTICAM_MICH_N",1,
			"PB_MULTICAM_MICH_N_ALT",1,
			"PB_MULTICAM_MICH_N_H",1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		backpack = "PB_DEN_RIF_BP";
		weapons[] = {"PB_DEN_RIF_GM10","Throw","Put"};
		respawnWeapons[] = {"PB_DEN_RIF_GM10","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG"};
	};
	class PB_DEN_SOL_SL: PB_DEN_SOL_R
	{
		editorpreview = "PB_EP\ui\Denmark\PB_DEN_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		uniformClass = "PB_MULTICAM_ACU_R";
		backpack = "PB_DEN_RADIO_BAG";
		magazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG"};
	};
    class PB_DEN_SOL_MED: PB_DEN_SOL_R
	{
		editorpreview = "PB_EP\ui\Denmark\PB_DEN_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_DEN_MED_BAG";
	};
    class PB_DEN_SOL_MG: PB_DEN_SOL_R
	{
		editorpreview = "PB_EP\ui\Denmark\PB_DEN_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_DEN_MG_MINIMI","Throw","Put"};
		respawnWeapons[] = {"PB_DEN_MG_MINIMI","Throw","Put"};
        backpack = "PB_DEN_MG_BAG";
		magazines[] = {"rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote","rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote"};
		respawnMagazines[] = {"rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote","rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote"};
	};
	class PB_DEN_SOL_MK: PB_DEN_SOL_R
	{
		editorpreview = "PB_EP\ui\Denmark\PB_DEN_SOL_MK.jpg";
		displayName = "Marksman";
		backpack = "";
        weapons[] = {"PB_DEN_MK_C20","Throw","Put"};
		respawnWeapons[] = {"PB_DEN_MK_C20","Throw","Put"};	
		magazines[] = {"HandGrenade","SmokeShell","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
	};
	class PB_DEN_SOL_LAT: PB_DEN_SOL_R
	{
		editorpreview = "PB_EP\ui\Denmark\PB_DEN_SOL_LAT.jpg";
		displayName = "Rifleman (AT)";
        role = "MissileSpecialist";
        icon = "iconManAT";
		weapons[] = {"PB_DEN_RIF_GM10","rhs_weap_m136","Throw","Put"};
		respawnWeapons[] = {"PB_DEN_RIF_GM10","rhs_weap_m136","Throw","Put"};
	};
	class PB_DEN_SOL_HAT: PB_DEN_SOL_R
	{
		editorpreview = "PB_EP\ui\Denmark\PB_DEN_SOL_HAT.jpg";
		backpack = "PB_DEN_AT_BP";
		displayName = "AT Rifleman";
        role = "MissileSpecialist";
        icon = "iconManAT";
		weapons[] = {"PB_DEN_RIF_GM10","launch_MRAWS_green_rail_F","Throw","Put"};
		respawnWeapons[] = {"PB_DEN_RIF_GM10","launch_MRAWS_green_rail_F","Throw","Put"};
		magazines[] = {"MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG"};
		respawnMagazines[] = {"MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG","rhs_mag_30Rnd_556x45_M855_PMAG"};
	};
	class PB_DEN_SOL_C: PB_DEN_SOL_R
	{
		editorpreview = "PB_EP\ui\Denmark\PB_DEN_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		uniformclass = "PB_M84_GoraG_RU";
		backpack = "";
		linkedItems[]=
		{
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
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
	class PB_DEN_SOL_JP: PB_DEN_SOL_R
	{
		editorpreview = "PB_EP\ui\Denmark\PB_DEN_SOL_JP.jpg";
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
		weapons[] = {"UK3CB_BAF_L105A2","Throw","Put"};
		respawnWeapons[] = {"UK3CB_BAF_L105A2","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","UK3CB_BAF_9_15Rnd","UK3CB_BAF_9_15Rnd","UK3CB_BAF_9_15Rnd","UK3CB_BAF_9_15Rnd"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","UK3CB_BAF_9_15Rnd","UK3CB_BAF_9_15Rnd","UK3CB_BAF_9_15Rnd","UK3CB_BAF_9_15Rnd"};
	};
	class PB_DEN_SOL_HP: PB_DEN_SOL_C
	{
		editorpreview = "PB_EP\ui\Denmark\PB_DEN_SOL_HP.jpg";
		displayName = "Heli Pilot";
		role = "Crewman";
		uniformClass = "PB_MULTICAM_GORA";
		backpack = "";
		linkedItems[]=
		{
			"rhsusf_hgu56p_visor",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"rhsusf_hgu56p_visor",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class PB_DEN_SOL_ENG: PB_DEN_SOL_R
	{
		editorpreview = "PB_EP\ui\Denmark\PB_DEN_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_DEN_ENG_BP";
		engineer=1;
	};
	class PB_DEN_SOL_EOD: PB_DEN_SOL_R
	{
		editorpreview = "PB_EP\ui\Denmark\PB_DEN_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_DEN_EOD_BP";
		engineer=1;
		CanDeactivateMines=1;
		detectSkill=38;
	};
	class PB_DEN_SOL_GRE: PB_DEN_SOL_R
	{
		editorpreview = "PB_EP\ui\Denmark\PB_DEN_SOL_GRE.jpg";
		displayName = "Grenadier";
		backpack = "PB_DEN_GRE_BP";
		weapons[] = {"PB_DEN_RIF_GM10_GL","Throw","Put"};
		respawnWeapons[] = {"PB_DEN_RIF_GM10_GL","Throw","Put"};
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red"};
		respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White""rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red"};
	};