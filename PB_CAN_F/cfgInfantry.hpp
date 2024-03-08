
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_CAN_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Enoch","Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_CAN_Faction";
		genericNames="NatoMen";
		vehicleClass="Men";
		editorSubcategory="PB_CAN_Infantry";
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
			"PB_CADPATMT_Carrier_Rig",
			"PB_CADPATMT_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"PB_CADPATMT_Carrier_Rig",
			"PB_CADPATMT_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
	class PB_CAN_SOL_R: PB_CAN_SOL
	{
    	editorpreview = "PB_EP\ui\Canada\PB_CAN_SOL_R.jpg";
		vehicleClass = "PB_CAN_Infantry";
		editorCategory = "PB_CAN_Top";
		editorSubcategory = "PB_CAN_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		headgearProbability=100;
        icon= "iconMan";
		allowedHeadgear[]=
		{
			"PB_CADPATMT_H",
			"PB_CADPATMT_H_ESS",
			"PB_CADPATMT_H_HESS"
		};
		headgearList[] = 
		{
			"PB_CADPATMT_H",1,
			"PB_CADPATMT_H_ESS",1,
			"PB_CADPATMT_H_HESS",1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_CADPATMT_GoraG";
		backpack = "PB_CAN_RIF_BP";
		weapons[] = {"PB_CAN_RIF_C7","Throw","Put"};
		respawnWeapons[] = {"PB_CAN_RIF_C7","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red"};
	};
	class PB_CAN_SOL_SL: PB_CAN_SOL_R
	{
    	editorpreview = "PB_EP\ui\Canada\PB_CAN_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_CADPATMT_CARRIERLITE",
			"PB_CADPATMT_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_CADPATMT_CARRIERLITE",
			"PB_CADPATMT_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_CADPATMT_GoraG_RU";
		backpack = "PB_CAN_RADIO_BAG";
		weapons[] = {"PB_CAN_RIF_C8","Throw","Put"};
		respawnWeapons[] = {"PB_CAN_RIF_C8","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red"};
	};
    class PB_CAN_SOL_MED: PB_CAN_SOL_R
	{
    	editorpreview = "PB_EP\ui\Canada\PB_CAN_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_CAN_MED_BAG";
	};
    class PB_CAN_SOL_MG: PB_CAN_SOL_R
	{
    	editorpreview = "PB_EP\ui\Canada\PB_CAN_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_CAN_MG_C9","Throw","Put"};
		respawnWeapons[] = {"PB_CAN_MG_C9","Throw","Put"};
        backpack = "PB_CAN_MG_BAG";
		magazines[] = {"rhsusf_200rnd_556x45_M855_box","rhsusf_200rnd_556x45_M855_box"};
		respawnMagazines[] = {"rhsusf_200rnd_556x45_M855_box","rhsusf_200rnd_556x45_M855_box"};
	};
	class PB_CAN_SOL_SNI: PB_CAN_SOL_R
	{
    	editorpreview = "PB_EP\ui\Canada\PB_CAN_SOL_SNI.jpg";
		displayName = "Sniper";
		linkedItems[]=
		{
			"PB_CADPATMT_CARRIERLITE",
			"PB_CADPATMT_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "rhsusfino_lerca_1200lack"
		};
		respawnLinkedItems[]=
		{
			"PB_CADPATMT_CARRIERLITE",
			"PB_CADPATMT_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "rhsusfino_lerca_1200lack"
		};
		backpack = "";
        weapons[] = {"PB_SNI_C14","hlc_Pistol_M11A1D","Throw","Put"};
		respawnWeapons[] = {"PB_SNI_C14","hlc_Pistol_M11A1D","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","hlc_15Rnd_9x19_B_P226","hlc_15Rnd_9x19_B_P226","hlc_15Rnd_9x19_B_P226","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000"};
		magazines[] = {"SmokeShell","hlc_15Rnd_9x19_B_P226","hlc_15Rnd_9x19_B_P226","hlc_15Rnd_9x19_B_P226","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000"};
	};
	class PB_CAN_SOL_RAT: PB_CAN_SOL_R
	{
    	editorpreview = "PB_EP\ui\Canada\PB_CAN_SOL_RAT.jpg";
		displayName = "Rifleman (LAT)";
		weapons[] = {"PB_CAN_RIF_C7","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"PB_CAN_RIF_C7","rhs_weap_m72a7","Throw","Put"};
	};
	class PB_CAN_SOL_HAT: PB_CAN_SOL_R
	{
    	editorpreview = "PB_EP\ui\Canada\PB_CAN_SOL_HAT.jpg";
		displayName = "AT Rifleman";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "PB_CAN_AT_BP";
		weapons[] = {"PB_CAN_RIF_C8","PB_CAN_AT_CG","Throw","Put"};
		respawnWeapons[] = {"PB_CAN_RIF_C8","PB_CAN_AT_CG","Throw","Put"};
		magazines[] = {"rhs_mag_maaws_HEAT","SmokeShell","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red"};
		respawnMagazines[] = {"rhs_mag_maaws_HEAT","SmokeShell","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red"};
	};
	class PB_CAN_SOL_C: PB_CAN_SOL_R
	{
    	editorpreview = "PB_EP\ui\Canada\PB_CAN_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		backpack = "";
		linkedItems[]=
		{
			"PB_CADPATMT_CARRIERLITE",
			"PB_CADPATMT_H_HESS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_CADPATMT_CARRIERLITE",
			"PB_CADPATMT_H_HESS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[] = {"PB_CAN_RIF_C8","Throw","Put"};
		respawnWeapons[] = {"PB_CAN_RIF_C8","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red"};
	};
	class PB_CAN_SOL_JP: PB_CAN_SOL_R
	{
    	editorpreview = "PB_EP\ui\Canada\PB_CAN_SOL_JP.jpg";
		displayName = "Jet Pilot";
		role = "Crewman";
		uniformClass = "U_I_pilotCoveralls";
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
		weapons[] = {"hlc_Pistol_M11A1D","Throw","Put"};
		respawnWeapons[] = {"hlc_Pistol_M11A1D","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","hlc_15Rnd_9x19_B_P226","hlc_15Rnd_9x19_B_P226","hlc_15Rnd_9x19_B_P226","hlc_15Rnd_9x19_B_P226"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","hlc_15Rnd_9x19_B_P226","hlc_15Rnd_9x19_B_P226","hlc_15Rnd_9x19_B_P226","hlc_15Rnd_9x19_B_P226"};
	};
	class PB_CAN_SOL_HP: PB_CAN_SOL_C
	{
    	editorpreview = "PB_EP\ui\Canada\PB_CAN_SOL_HP.jpg";
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
	class PB_CAN_SOL_ENG: PB_CAN_SOL_R
	{
    	editorpreview = "PB_EP\ui\Canada\PB_CAN_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_CAN_ENG_BP";
		engineer=1;
	};
	class PB_CAN_SOL_EOD: PB_CAN_SOL_R
	{
    	editorpreview = "PB_EP\ui\Canada\PB_CAN_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_CAN_EOD_BP";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
	};
	class PB_CAN_SOL_GRE: PB_CAN_SOL_R
	{
    	editorpreview = "PB_EP\ui\Canada\PB_CAN_SOL_GRE.jpg";
		displayName = "Grenadier";
		backpack = "PB_CAN_GRE_BP";
		weapons[] = {"PB_CAN_RIF_C7M203","Throw","Put"};
		respawnWeapons[] = {"PB_CAN_RIF_C7M203","Throw","Put"};
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red"};
		respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White""rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red"};
	};