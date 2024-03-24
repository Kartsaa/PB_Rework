
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_EST_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_EST_Faction";
		genericNames="PB_EstonianMen";
		vehicleClass="Men";
		editorSubcategory="PB_EST_Infantry";
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
			"PB_ESTDCU_Carrier_Lite",
			"PB_ESTDCU_H_R",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"PB_ESTDCU_Carrier_Lite",
			"PB_ESTDCU_H_R",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
	class PB_EST_SOL_R: PB_EST_SOL
	{
		editorpreview = "PB_EP\ui\Estonia\PB_EST_SOL_R.jpg";
		vehicleClass = "PB_EST_Infantry";
		editorCategory = "PB_EST_Top";
		editorSubcategory = "PB_EST_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_ESTDCU_ACU";
		allowedHeadgear[]=
		{
			"PB_ESTDCU_H",
			"PB_ESTDCU_H_R"
		};
		headgearList[] = 
		{
			"PB_ESTDCU_H",1,
			"PB_ESTDCU_H_R",1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		backpack = "PB_EST_RIF_BP";
		weapons[] = {"PB_EST_RIF_RAHE","Throw","Put"};
		respawnWeapons[] = {"PB_EST_RIF_RAHE","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG"};
	};
	class PB_EST_SOL_SL: PB_EST_SOL_R
	{
		editorpreview = "PB_EP\ui\Estonia\PB_EST_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_ESTDCU_Carrier_Rig",
			"PB_ESTDCU_H_R",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars",
			"rhsusf_ANPVS_14"
		};
		respawnLinkedItems[]=
		{
			"PB_ESTDCU_Carrier_Rig",
			"PB_ESTDCU_H_R",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars",
			"rhsusf_ANPVS_14"
		};
		uniformClass = "PB_ESTDCU_ACU_R";
		backpack = "PB_EST_RADIO_BAG";
		weapons[] = {"PB_EST_RIF_RAHE","Throw","Put"};
		respawnWeapons[] = {"PB_EST_RIF_RAHE","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG"};
	};
    class PB_EST_SOL_MED: PB_EST_SOL_R
	{
		editorpreview = "PB_EP\ui\Estonia\PB_EST_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_EST_MED_BAG";
	};
    class PB_EST_SOL_MG: PB_EST_SOL_R
	{
		editorpreview = "PB_EP\ui\Estonia\PB_EST_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_EST_MG_NEGEV","Throw","Put"};
		respawnWeapons[] = {"PB_EST_MG_NEGEV","Throw","Put"};
        backpack = "PB_EST_MG_BAG";
		magazines[] = {"150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer"};
		respawnMagazines[] = {"150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer"};
	};
	class PB_EST_SOL_MK: PB_EST_SOL_R
	{
		editorpreview = "PB_EP\ui\Estonia\PB_EST_SOL_MK.jpg";
		displayName = "Marksman";
		backpack = "";
        weapons[] = {"PB_EST_MK_RAHEL","Throw","Put"};
		respawnWeapons[] = {"PB_EST_MK_RAHEL","Throw","Put"};	
		magazines[] = {"HandGrenade","SmokeShell","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
	};
	class PB_EST_SOL_HAT: PB_EST_SOL_R
	{
		editorpreview = "PB_EP\ui\Estonia\PB_EST_SOL_HAT.jpg";
		backpack = "PB_EST_AT_BP";
		displayName = "AT Rifleman";
        role = "MissileSpecialist";
        icon = "iconManAT";
		weapons[] = {"PB_EST_RIF_RAHE","launch_MRAWS_green_raiL_F","Throw","Put"};
		respawnWeapons[] = {"PB_EST_RIF_RAHE","launch_MRAWS_green_raiL_F","Throw","Put"};
		magazines[] = {"MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG"};
		respawnMagazines[] = {"MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG"};
	};
	class PB_EST_SOL_C: PB_EST_SOL_R
	{
		editorpreview = "PB_EP\ui\Estonia\PB_EST_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		uniformclass = "PB_ESTDCU_ACU";
		backpack = "";
		linkedItems[]=
		{
			"PB_ESTDCU_Carrier_Lite",
			"rhsusf_cvc_green_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_ESTDCU_Carrier_Lite",
			"rhsusf_cvc_green_helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[] = {"PB_RAHES","Throw","Put"};
		respawnWeapons[] = {"PB_RAHES","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG"};
	};
	class PB_EST_SOL_JP: PB_EST_SOL_R
	{
		editorpreview = "PB_EP\ui\Estonia\PB_EST_SOL_JP.jpg";
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
	class PB_EST_SOL_HP: PB_EST_SOL_C
	{
		editorpreview = "PB_EP\ui\Estonia\PB_EST_SOL_HP.jpg";
		displayName = "Heli Pilot";
		role = "Crewman";
		backpack = "";
		linkedItems[]=
		{
			"PB_ESTDCU_Carrier_Lite",
			"H_PilotHelmetHeli_O",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_ESTDCU_Carrier_Lite",
			"H_PilotHelmetHeli_O",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class PB_EST_SOL_ENG: PB_EST_SOL_R
	{
		editorpreview = "PB_EP\ui\Estonia\PB_EST_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_EST_ENG_BP";
		engineer=1;
	};
	class PB_EST_SOL_EOD: PB_EST_SOL_R
	{
		editorpreview = "PB_EP\ui\Estonia\PB_EST_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_EST_EOD_BP";
		engineer=1;
		CanDeactivateMines=1;
		detectSkill=38;
	};
	class PB_EST_SOL_GRE: PB_EST_SOL_R
	{
		editorpreview = "PB_EP\ui\Estonia\PB_EST_SOL_GRE.jpg";
		displayName = "Grenadier";
		backpack = "PB_EST_GRE_BP";
		weapons[] = {"PB_EST_RIF_RAHE_GL","Throw","Put"};
		respawnWeapons[] = {"PB_EST_RIF_RAHE_GL","Throw","Put"};
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG"};
		respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White""rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG","rhs_mag_30Rnd_556x45_M855A1_PMAG"};
	};