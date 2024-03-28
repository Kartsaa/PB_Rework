
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_TUR_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Enoch","Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_TUR_Faction";
		genericNames="PB_TurkishMen";
		vehicleClass="Men";
		editorSubcategory="PB_TUR_Infantry";
		nakedUniform = "BasicBody";
		portrait="";
		picture="";
		icon="iconMan";
		accuracy=3.9000001;
		camouflage=1.1;
		minFTURTime=10;
		scope=0;
		scopeCurator=0;
		linkedItems[]=
		{
			"PB_TURDIG_MODULAR_LITE",
			"PB_TURDIG_H_N",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"PB_TURDIG_MODULAR_LITE",
			"PB_TURDIG_H_N",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
	class PB_TUR_SOL_R: PB_TUR_SOL
	{
		editorpreview = "PB_EP\ui\Turkey\PB_TUR_SOL_R.jpg";
		vehicleClass = "PB_TUR_Infantry";
		editorCategory = "PB_TUR_Top";
		editorSubcategory = "PB_TUR_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_TURDIG_GORA";
		backpack = "PB_TUR_RIF_BP";
		allowedHeadgear[]=
		{
			"PB_TURDIG_H_N",
			"PB_TURDIG_H_N_H",
			"PB_TURDIG_H_N_A"
		};
		headgearList[] = 
		{
			"PB_TURDIG_H_N",1,
			"PB_TURDIG_H_N_H",1,
			"PB_TURDIG_H_N_A",1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		weapons[] = {"PB_TUR_RIF_MPT55","Throw","Put"};
		respawnWeapons[] = {"PB_TUR_RIF_MPT55","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};
	class PB_TUR_SOL_SL: PB_TUR_SOL_R
	{
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_TURDIG_MODULAR_LITE",
			"PB_TURDIG_H_N_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_TURDIG_MODULAR_LITE",
			"PB_TURDIG_H_N_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_TURDIG_GORA_RU";
		backpack = "PB_TUR_RADIO_BAG";
		magazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};
    class PB_TUR_SOL_MED: PB_TUR_SOL_R
	{
		editorpreview = "PB_EP\ui\Turkey\PB_TUR_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_TUR_MED_BAG";
	};
    class PB_TUR_SOL_MG: PB_TUR_SOL_R
	{
		editorpreview = "PB_EP\ui\Turkey\PB_TUR_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_TUR_MG_MPT55","Throw","Put"};
		respawnWeapons[] = {"PB_TUR_MG_MPT55","Throw","Put"};
        backpack = "PB_TUR_MG_BAG";
		magazines[] = {"rhs_mag_100Rnd_556x45_M855_cmag_mixed","rhs_mag_100Rnd_556x45_M855_cmag_mixed"};
		respawnMagazines[] = {"rhs_mag_100Rnd_556x45_M855_cmag_mixed","rhs_mag_100Rnd_556x45_M855_cmag_mixed"};
	};
	class PB_TUR_SOL_MK: PB_TUR_SOL_R
	{
		editorpreview = "PB_EP\ui\Turkey\PB_TUR_SOL_MK.jpg";
		displayName = "Marksman";
		backpack = "";
        weapons[] = {"PB_TUR_MK_MPT76","hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"PB_TUR_MK_MPT76","hgun_P07_blk_F","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
		magazines[] = {"SmokeShell","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
	};
	class PB_TUR_SOL_RAT: PB_TUR_SOL_R
	{
		editorpreview = "PB_EP\ui\Turkey\PB_TUR_SOL_RAT.jpg";
		displayName = "Rifleman (LAT)";
		weapons[] = {"PB_TUR_RIF_MPT55","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"PB_TUR_RIF_MPT55","rhs_weap_m72a7","Throw","Put"};
	};
	class PB_TUR_SOL_C: PB_TUR_SOL_R
	{
		editorpreview = "PB_EP\ui\Turkey\PB_TUR_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		uniformClass = "PB_TURDIG_GORAG";
		backpack = "";
		linkedItems[]=
		{
			"PB_TURDIG_Modular",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_TURDIG_Modular",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[] = {"PB_TUR_RIF_MPT55","Throw","Put"};
		respawnWeapons[] = {"PB_TUR_RIF_MPT55","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};
	class PB_TUR_SOL_JP: PB_TUR_SOL_R
	{
		editorpreview = "PB_EP\ui\Turkey\PB_TUR_SOL_JP.jpg";
		displayName = "Jet Pilot";
		role = "Crewman";
		uniformClass = "U_B_pilotCoveralls";
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
		weapons[] = {"hgun_P07_blk_F","Throw","Put"};
		respawnWeapons[] = {"hgun_P07_blk_F","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","16Rnd_9x21_mag","16Rnd_9x21_mag","16Rnd_9x21_mag","16Rnd_9x21_mag"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","16Rnd_9x21_mag","16Rnd_9x21_mag","16Rnd_9x21_mag","16Rnd_9x21_mag"};
	};
	class PB_TUR_SOL_HP: PB_TUR_SOL_C
	{
		editorpreview = "PB_EP\ui\Turkey\PB_TUR_SOL_HP.jpg";
		displayName = "Heli Pilot";
		role = "Crewman";
		uniformClass = "PB_Green_GoraG";
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
	class PB_TUR_SOL_ENG: PB_TUR_SOL_R
	{
		editorpreview = "PB_EP\ui\Turkey\PB_TUR_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_TUR_ENG_BP";
		engineer=1;
	};
	class PB_TUR_SOL_EOD: PB_TUR_SOL_R
	{
		editorpreview = "PB_EP\ui\Turkey\PB_TUR_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_TUR_EOD_BP";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
	};
	class PB_TUR_SOL_GRE: PB_TUR_SOL_R
	{
		editorpreview = "PB_EP\ui\Turkey\PB_TUR_SOL_GRE.jpg";
		displayName = "Grenadier";
		backpack = "PB_TUR_GRE_BP";
		weapons[] = {"PB_TUR_RIF_MPT55_GL","Throw","Put"};
		respawnWeapons[] = {"PB_TUR_RIF_MPT55_GL","Throw","Put"};
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White""rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};