
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_JAP_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Asian","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_JAP_Faction";
		genericNames="PB_Japanese";
		vehicleClass="Men";
		editorSubcategory="PB_JAP_Infantry";
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
			"PB_Type2_T3_Rig",
			"PB_Type2_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"PB_Type2_T3_Rig",
			"PB_Type2_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
	class PB_JAP_SOL_R: PB_JAP_SOL
	{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_SOL_R.jpg";
		vehicleClass = "PB_JAP_Infantry";
		editorCategory = "PB_JAP_Top";
		editorSubcategory = "PB_JAP_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_Type2_GoraG";
		allowedHeadgear[]=
		{
			"PB_Type2_H",
			"PB_Type2_H_R"
		};
		headgearList[] = 
		{
			"PB_Type2_H",1,
			"PB_Type2_H_R",1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		backpack = "PB_JAP_RIF_BP";
		weapons[] = {"PB_JAP_RIF_T20","Throw","Put"};
		respawnWeapons[] = {"PB_JAP_RIF_T20","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"};
	};
	class PB_JAP_SOL_HAT: PB_JAP_SOL_R
	{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_SOL_HAT.jpg";
		backpack = "PB_JAP_AT_BP";
		displayName = "AT Rifleman";
		weapons[] = {"PB_JAP_RIF_T20","rhs_weap_maaws","Throw","Put"};
		respawnWeapons[] = {"PB_JAP_RIF_T20","rhs_weap_maaws","Throw","Put"};
		magazines[] = {"MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"};
		respawnMagazines[] = {"MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"};
	};
	class PB_JAP_SOL_AA: PB_JAP_SOL_R
	{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_SOL_AA.jpg";
		backpack = "PB_JAP_AA_BP";
		displayName = "AA Rifleman";
		weapons[] = {"PB_JAP_RIF_T20","rhs_weap_fim92","Throw","Put"};
		respawnWeapons[] = {"PB_JAP_RIF_T20","rhs_weap_fim92","Throw","Put"};
		magazines[] = {"rhs_fim92_mag","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"};
		respawnMagazines[] = {"rhs_fim92_mag","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"};
	};
	class PB_JAP_SOL_SL: PB_JAP_SOL_R
	{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_Type2_T3_Rig",
			"PB_Type2_H_R",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_Type2_T3_Rig",
			"PB_Type2_H_R",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_Type2_GoraG_RU";
		backpack = "PB_JAP_RADIO_BAG";
		weapons[] = {"PB_JAP_RIF_T20","Throw","Put"};
		respawnWeapons[] = {"PB_JAP_RIF_T20","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"};
	};
    class PB_JAP_SOL_MED: PB_JAP_SOL_R
	{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_JAP_MED_BAG";
	};
    class PB_JAP_SOL_MG: PB_JAP_SOL_R
	{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"rhs_weap_m249","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249","Throw","Put"};
        backpack = "PB_JAP_MG_BAG";
		magazines[] = {"rhsusf_200rnd_556x45_M855_mixed_box","rhsusf_200rnd_556x45_M855_mixed_box"};
		respawnMagazines[] = {"rhsusf_200rnd_556x45_M855_mixed_box","rhsusf_200rnd_556x45_M855_mixed_box"};
	};
	class PB_JAP_SOL_SNI: PB_JAP_SOL_R
	{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_SOL_SNI.jpg";
		displayName = "Sniper";
		backpack = "";
        weapons[] = {"PB_JAP_SNI_M24","UK3CB_BAF_L105A1","Throw","Put"};
		respawnWeapons[] = {"PB_JAP_SNI_M24","UK3CB_BAF_L105A1","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag"};
		magazines[] = {"SmokeShell","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag"};
	};
	class PB_JAP_SOL_C: PB_JAP_SOL_R
	{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		backpack = "";
		linkedItems[]=
		{
			"PB_Type2_T3_Vest",
			"rhsusf_cvc_green_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_Type2_T3_Vest",
			"rhsusf_cvc_green_ess",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[] = {"PB_Type20","Throw","Put"};
		respawnWeapons[] = {"PB_Type20","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red","rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red"};
	};
	class PB_JAP_SOL_JP: PB_JAP_SOL_R
	{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_SOL_JP.jpg";
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
	class PB_JAP_SOL_HP: PB_JAP_SOL_C
	{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_SOL_HP.jpg";
		displayName = "Heli Pilot";
		role = "Crewman";
		backpack = "";
		linkedItems[]=
		{
			"PB_Type2_T3_Vest",
			"rhsusf_hgu56p_visor_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_Type2_T3_Vest",
			"rhsusf_hgu56p_visor_green",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class PB_JAP_SOL_ENG: PB_JAP_SOL_R
	{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_JAP_ENG_BP";
		engineer=1;
	};
	class PB_JAP_SOL_EOD: PB_JAP_SOL_R
	{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_JAP_EOD_BP";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
	};