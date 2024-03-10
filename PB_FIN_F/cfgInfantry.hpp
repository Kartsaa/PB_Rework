
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_FIN_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_FIN_Faction";
		genericNames="PB_FinnishMen";
		vehicleClass="Men";
		editorSubcategory="PB_FIN_Infantry";
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
			"PB_M05_TST",
			"PB_M05_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
		respawnLinkedItems[]=
		{
			"PB_M05_TST",
			"PB_M05_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
		};
	};
	class PB_FIN_SOL_R: PB_FIN_SOL
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SOL_R.jpg";
		vehicleClass = "PB_FIN_Infantry";
		editorCategory = "PB_FIN_Top";
		editorSubcategory = "PB_FIN_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_M05_GoraG";
		allowedHeadgear[]=
		{
			"PB_M05_H",
			"PB_M05_H_ESS",
			"PB_M05_H_HESS"
		};
		headgearList[] = 
		{
			"PB_M05_H",1,
			"PB_M05_H_ESS",1,
			"PB_M05_H_HESS",1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		backpack = "PB_FIN_RIF_BP";
		weapons[] = {"PB_RK62","Throw","Put"};
		respawnWeapons[] = {"PB_RK62","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag"};
	};
	class PB_FIN_SOL_SL: PB_FIN_SOL_R
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_M05_TST",
			"PB_M05_H_HESS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_M05_TST",
			"PB_M05_H_HESS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_M05_GoraG_RU";
		backpack = "PB_FIN_RADIO_BAG";
		weapons[] = {"PB_FIN_RIF_RK62M2","Throw","Put"};
		respawnWeapons[] = {"PB_FIN_RIF_RK62M2","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag"};
	};
    class PB_FIN_SOL_MED: PB_FIN_SOL_R
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_FIN_MED_BAG";
	};
    class PB_FIN_SOL_MG: PB_FIN_SOL_R
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_PKM","Throw","Put"};
		respawnWeapons[] = {"PB_PKM","Throw","Put"};
        backpack = "PB_FIN_MG_BAG";
		magazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_100Rnd_762x54mmR_green"};
	};
	class PB_FIN_SOL_MK: PB_FIN_SOL_R
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SOL_MK.jpg";
		displayName = "Marksman";
		backpack = "";
        weapons[] = {"PB_FIN_RIF_RK62M2","Throw","Put"};
		respawnWeapons[] = {"PB_FIN_RIF_RK62M2","Throw","Put"};
	};
	class PB_FIN_SOL_SNI: PB_FIN_SOL_R
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SOL_SNI.jpg";
		displayName = "Sniper";
		linkedItems[]=
		{
			"PB_M05_TST",
			"PB_M05_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_M05_TST",
			"PB_M05_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "binoculars"
		};
		backpack = "";
        weapons[] = {"PB_FIN_SNI_TRG","rhsusf_weap_glock17g4","Throw","Put"};
		respawnWeapons[] = {"PB_FIN_SNI_TRG","rhsusf_weap_glock17g4","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000"};
		magazines[] = {"SmokeShell","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000"};
	};
	class PB_FIN_SOL_LAT: PB_FIN_SOL_R
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SOL_LAT.jpg";
		displayName = "Rifleman (AT)";
        role = "MissileSpecialist";
        icon = "iconManAT";
		weapons[] = {"PB_RK62","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"PB_RK62","rhs_weap_m72a7","Throw","Put"};
	};
	class PB_FIN_SOL_HAT: PB_FIN_SOL_R
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SOL_HAT.jpg";
		displayName = "Rifleman (HAT)";
        role = "MissileSpecialist";
        icon = "iconManAT";
		weapons[] = {"PB_RK62","launch_NLAW_F","Throw","Put"};
		respawnWeapons[] = {"PB_RK62","launch_NLAW_F","Throw","Put"};
	};
	class PB_FIN_SOL_AA: PB_FIN_SOL_R
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SOL_AA.jpg";
		displayName = "AA Rifleman";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "PB_FIN_AA_BP";
		weapons[] = {"PB_RK62","rhs_weap_fim92","Throw","Put"};
		respawnWeapons[] = {"PB_RK62","rhs_weap_fim92","Throw","Put"};
		magazines[] = {"Titan_AA","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag"};
		respawnMagazines[] = {"Titan_AA","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag"};
	};
	class PB_FIN_SOL_C: PB_FIN_SOL_R
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		uniformclass = "PB_Green_GoraG_RU";
		backpack = "";
		linkedItems[]=
		{
			"PB_M05_TST",
			"rhs_tsh4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_M05_TST",
			"rhs_tsh4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag","PB_RK_Mag"};
	};
	class PB_FIN_SOL_JP: PB_FIN_SOL_R
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SOL_JP.jpg";
		displayName = "Jet Pilot";
		role = "Crewman";
		uniformClass = "PB_Green_JP";
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
		weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
	};
	class PB_FIN_SOL_HP: PB_FIN_SOL_C
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SOL_HP.jpg";
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
	class PB_FIN_SOL_ENG: PB_FIN_SOL_R
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SOL_ENG.jpg";
		displayName = "Pioneer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_FIN_ENG_BP";
		engineer=1;
	};
	class PB_FIN_SOL_EOD: PB_FIN_SOL_R
	{
		editorPreview = "\PB_EP\ui\FInladn\PB_FIN_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_FIN_EOD_BP";
		engineer=1;
		CanDeactivateMines=1;
		detectSkill=38;
	};