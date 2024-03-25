
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_HUN_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Euro","Head_Enoch","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_HUN_Faction";
		genericNames="PB_HungarianMen";
		vehicleClass="Men";
		editorSubcategory="PB_HUN_Infantry";
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
			"PB_2015M_Modular_Lite",
			"PB_2015M_MICH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		respawnLinkedItems[]=
		{
			"PB_2015M_Modular_Lite",
			"PB_2015M_MICH",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
	};
	class PB_HUN_SOL_R: PB_HUN_SOL
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_SOL_R.jpg";
		vehicleClass = "PB_HUN_Infantry";
		editorCategory = "PB_HUN_Top";
		editorSubcategory = "PB_HUN_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_2015M_ACU";
		allowedHeadgear[]=
		{
			"PB_2015_MICH",
			"PB_2015_MICH_ALT",
			"PB_2015_MICH_N",
			"PB_2015_MICH_N_ALT",
			"PB_2015_MICH_N_H"
		};
		headgearList[] = 
		{
			"PB_2015_MICH",0.2,
			"PB_2015_MICH_ALT",0.2,
			"PB_2015_MICH_N",0.8,
			"PB_2015_MICH_N_ALT",0.8,
			"PB_2015_MICH_N_H",0.8
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		backpack = "PB_HUN_RIF_BP";
		weapons[] = {"PB_HUN_RIF_BREN","Throw","Put"};
		respawnWeapons[] = {"PB_HUN_RIF_BREN","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"};
	};
	class PB_HUN_SOL_SL: PB_HUN_SOL_R
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_2015M_CARRIER_RIG",
			"PB_2015M_MICH_N_ALT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_2015M_CARRIER_RIG",
			"PB_2015M_MICH_N_ALT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_2015M_ACU_R";
		backpack = "PB_HUN_RADIO_BAG";
		weapons[] = {"PB_HUN_RIF_BREN","Throw","Put"};
		respawnWeapons[] = {"PB_HUN_RIF_BREN","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"};
	};
    class PB_HUN_SOL_MED: PB_HUN_SOL_R
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_HUN_MED_BAG";
	};
    class PB_HUN_SOL_MG: PB_HUN_SOL_R
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"rhs_weap_fnmag","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_fnmag","Throw","Put"};
        backpack = "PB_HUN_MG_BAG";
		magazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer"};
		respawnMagazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer"};
	};
	class PB_HUN_SOL_SNI: PB_HUN_SOL_R
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_SOL_SNI.jpg";
		displayName = "Sniper";
		backpack = "";
        weapons[] = {"PB_HUN_SNI_M24","rhs_weap_cz99","Throw","Put"};
		respawnWeapons[] = {"PB_HUN_SNI_M24","rhs_weap_cz99","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag"};
		magazines[] = {"SmokeShell","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag"};
	};
	class PB_HUN_SOL_HAT: PB_HUN_SOL_R
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_SOL_HAT.jpg";
		backpack = "PB_HUN_AT_BP";
		displayName = "AT Rifleman";
        role = "MissileSpecialist";
        icon = "iconManAT";
		weapons[] = {"PB_HUN_RIF_BREN","rhs_weap_maaws","Throw","Put"};
		respawnWeapons[] = {"PB_HUN_RIF_BREN","rhs_weap_maaws","Throw","Put"};
		magazines[] = {"MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"};
		respawnMagazines[] = {"MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"};
	};
	class PB_HUN_SOL_C: PB_HUN_SOL_R
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		uniformclass = "PB_Green_Gora";
		backpack = "";
		linkedItems[]=
		{
			"PB_2015M_Modular",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_2015M_Modular",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[] = {"SMG_02_F","Throw","Put"};
		respawnWeapons[] = {"SMG_02_F","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag","30Rnd_9x21_Mag"};
	};
	class PB_HUN_SOL_JP: PB_HUN_SOL_R
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_SOL_JP.jpg";
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
		weapons[] = {"rhs_weap_cz99","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_cz99","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ","rhssaf_mag_15Rnd_9x19_FMJ"};
	};
	class PB_HUN_SOL_HP: PB_HUN_SOL_C
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_SOL_HP.jpg";
		displayName = "Heli Pilot";
		role = "Crewman";
		uniformClass = "PB_Green_GoraG";
		backpack = "";
		linkedItems[]=
		{
			"rhsusf_hgu56p_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"rhsusf_hgu56p_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class PB_HUN_SOL_ENG: PB_HUN_SOL_R
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_HUN_ENG_BP";
		engineer=1;
	};
	class PB_HUN_SOL_EOD: PB_HUN_SOL_R
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_HUN_EOD_BP";
		engineer=1;
		CanDeactivateMines=1;
		detectSkill=38;
	};
	class PB_HUN_SOL_GRE: PB_HUN_SOL_R
	{
		editorpreview = "PB_EP\ui\HUNGARY\PB_HUN_SOL_GRE.jpg";
		displayName = "Grenadier";
		backpack = "PB_HUN_GRE_BP";
		weapons[] = {"PB_HUN_RIF_BREN_GL","Throw","Put"};
		respawnWeapons[] = {"PB_HUN_RIF_BREN_GL","Throw","Put"};
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red"};
		respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White""PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red","PB_qin_30Rnd_556x45_Stanag_Tracer_Red"};
	};