
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_FRA_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Euro","Head_Enoch","NoGlasses","LanguageENGFRE_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_FRA_Faction";
		genericNames="PB_FrenchMen";
		vehicleClass="Men";
		editorSubcategory="PB_FRA_Infantry";
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
			"PB_TAN_Carrier_Lite",
			"PB_CCE_H_N",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"PB_TAN_Carrier_Lite",
			"PB_CCE_H_N",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
	class PB_FRA_SOL_R: PB_FRA_SOL
	{
		editorpreview = "PB_EP\ui\France\PB_FRA_SOL_R.jpg";
		vehicleClass = "PB_FRA_Infantry";
		editorCategory = "PB_FRA_Top";
		editorSubcategory = "PB_FRA_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_CCE_U";
		allowedHeadgear[]=
		{
			"PB_CCE_H_N",
			"PB_CCE_H_N_H",
			"PB_CCE_H_N_A"
		};
		headgearList[] = 
		{
			"PB_CCE_H_N",1.
			"PB_CCE_H_N_H",1,
			"PB_CCE_H_N_A",1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		backpack = "PB_FRA_RIF_BP";
		weapons[] = {"PB_FRA_RIF_HK416","Throw","Put"};
		respawnWeapons[] = {"PB_FRA_RIF_HK416","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};
	class PB_FRA_SOL_SL: PB_FRA_SOL_R
	{
		editorpreview = "PB_EP\ui\France\PB_FRA_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_TAN_CARRIER_RIG",
			"PB_CCE_H_N_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_TAN_CARRIER_RIG",
			"PB_CCE_H_N_A",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		backpack = "PB_FRA_RADIO_BAG";
		weapons[] = {"PB_FRA_RIF_HK416","Throw","Put"};
		respawnWeapons[] = {"PB_FRA_RIF_HK416","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};
    class PB_FRA_SOL_MED: PB_FRA_SOL_R
	{
		editorpreview = "PB_EP\ui\France\PB_FRA_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_FRA_MED_BAG";
	};
    class PB_FRA_SOL_MG: PB_FRA_SOL_R
	{
		editorpreview = "PB_EP\ui\France\PB_FRA_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_FRA_MG_MINIMI","Throw","Put"};
		respawnWeapons[] = {"PB_FRA_MG_MINIMI","Throw","Put"};
        backpack = "PB_FRA_MG_BAG";
		magazines[] = {"rhsusf_200Rnd_556x45_M855_mixed_box","rhsusf_200Rnd_556x45_M855_mixed_box"};
		respawnMagazines[] = {"rhsusf_200Rnd_556x45_M855_mixed_box","rhsusf_200Rnd_556x45_M855_mixed_box"};
	};
	class PB_FRA_SOL_MK: PB_FRA_SOL_R
	{
		editorpreview = "PB_EP\ui\France\PB_FRA_SOL_MK.jpg";
		displayName = "Marksman";
		backpack = "";
        weapons[] = {"PB_FRA_MK_SCARH","Throw","Put"};
		respawnWeapons[] = {"PB_FRA_MK_SCARH","Throw","Put"};	
		magazines[] = {"HandGrenade","SmokeShell","rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk","rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk","rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk","rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk","rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk","rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk","rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk","rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk","rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk","rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk","rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk"};
	};
	class PB_FRA_SOL_LAT: PB_FRA_SOL_R
	{
		editorpreview = "PB_EP\ui\France\PB_FRA_SOL_LAT.jpg";
		displayName = "Rifleman (AT)";
        role = "MissileSpecialist";
        icon = "iconManAT";
		weapons[] = {"PB_FRA_RIF_HK416","rhs_weap_m136","Throw","Put"};
		respawnWeapons[] = {"PB_FRA_RIF_HK416","rhs_weap_m136","Throw","Put"};
	};
	class PB_FRA_SOL_HAT: PB_FRA_SOL_R
	{
		editorpreview = "PB_EP\ui\France\PB_FRA_SOL_HAT.jpg";
		backpack = "";
		displayName = "AT Rifleman";
        role = "MissileSpecialist";
        icon = "iconManAT";
		weapons[] = {"PB_FRA_RIF_HK416","launch_O_Vorona_Green_F","Throw","Put"};
		respawnWeapons[] = {"PB_FRA_RIF_HK416","launch_O_Vorona_Green_F","Throw","Put"};
		magazines[] = {"Vorona_HEAT","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"Vorona_HEAT","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};
	class PB_FRA_SOL_GRE: PB_FRA_SOL_R
	{
		editorpreview = "PB_EP\ui\France\PB_FRA_SOL_GRE.jpg";
		displayName = "Grenadier";
		backpack = "PB_FRA_GRE_BP";
		weapons[] = {"PB_FRA_RIF_HK416_GL","Throw","Put"};
		respawnWeapons[] = {"PB_FRA_RIF_HK416_GL","Throw","Put"};
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
		respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White""rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
	};
	class PB_FRA_SOL_C: PB_FRA_SOL_R
	{
		editorpreview = "PB_EP\ui\France\PB_FRA_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		backpack = "";
		linkedItems[]=
		{
			"PB_TAN_Modular",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_TAN_Modular",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};
	class PB_FRA_SOL_JP: PB_FRA_SOL_R
	{
		editorpreview = "PB_EP\ui\France\PB_FRA_SOL_JP.jpg";
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
	class PB_FRA_SOL_HP: PB_FRA_SOL_C
	{
		editorpreview = "PB_EP\ui\France\PB_FRA_SOL_HP.jpg";
		displayName = "Heli Pilot";
		role = "Crewman";
		uniformClass = "PB_CCE_U";
		backpack = "";
		linkedItems[]=
		{
			"rhsusf_hgu56p_visor",
			"V_TacVest_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"rhsusf_hgu56p_visor",
			"V_TacVest_oli",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class PB_FRA_SOL_ENG: PB_FRA_SOL_R
	{
		editorpreview = "PB_EP\ui\France\PB_FRA_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_FRA_ENG_BP";
		engineer=1;
	};
	class PB_FRA_SOL_EOD: PB_FRA_SOL_R
	{
		editorpreview = "PB_EP\ui\France\PB_FRA_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_FRA_EOD_BP";
		engineer=1;
		CanDeactivateMines=1;
		detectSkill=38;
	};