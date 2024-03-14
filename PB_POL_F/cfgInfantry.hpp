
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_POL_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Euro","NoGlasses","LanguagePOL_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_POL_Faction";
		genericNames="PolishMen";
		vehicleClass="Men";
		editorSubcategory="PB_POL_Infantry";
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
			"PB_WZ93W_Carrier_Lite",
			"PB_WZ93W_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"PB_WZ93W_Carrier_Lite",
			"PB_WZ93W_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
	class PB_POL_SOL_R: PB_POL_SOL
	{
    	editorpreview = "PB_EP\ui\Poland\PB_POL_SOL_R.jpg";
		vehicleClass = "PB_POL_Infantry";
		editorCategory = "PB_POL_Top";
		editorSubcategory = "PB_POL_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_WZ93W_GoraG";
		allowedHeadgear[]=
		{
			"PB_WZ93W_Helmet",
			"PB_WZ93W_Helmet_Ess"
		};
		headgearList[] = 
		{
			"PB_WZ93W_Helmet",1,
			"PB_WZ93W_Helmet_Ess",1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		backpack = "PB_POL_RIF_BP";
		weapons[] = {"PB_POL_RIF_GROT","Throw","Put"};
		respawnWeapons[] = {"PB_POL_RIF_GROT","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
	};
	class PB_POL_SOL_RAT: PB_POL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Poland\PB_POL_SOL_RAT.jpg";
		displayName = "Rifleman (AT)";
		weapons[] = {"PB_POL_RIF_GROT","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"PB_POL_RIF_GROT","rhs_weap_m72a7","Throw","Put"};
	};
	class PB_POL_SOL_ATCG: PB_POL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Poland\PB_POL_SOL_ATCG.jpg";
		backpack = "PB_POL_ATCG_BP";
		displayName = "AT Rifleman (CG)";
		weapons[] = {"PB_POL_RIF_GROT","launch_MRAWS_green_rail_F","Throw","Put"};
		respawnWeapons[] = {"PB_POL_RIF_GROT","launch_MRAWS_green_rail_F","Throw","Put"};
		magazines[] = {"MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
		respawnMagazines[] = {"MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
	};
	class PB_POL_SOL_RPG: PB_POL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Poland\PB_POL_SOL_RPG.jpg";
		backpack = "PB_POL_RPG_BP";
		displayName = "AT Rifleman (RPG)";
		weapons[] = {"PB_POL_RIF_GROT","rhs_weap_rpg7","Throw","Put"};
		respawnWeapons[] = {"PB_POL_RIF_GROT","rhs_weap_rpg7","Throw","Put"};
		magazines[] = {"rhs_rpg7_PG7VL_mag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
	};
	class PB_POL_SOL_SL: PB_POL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Poland\PB_POL_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_VZ95W_Carrier_Rig",
			"PB_WZ93W_Helmet_ESS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_VZ95W_Carrier_Rig",
			"PB_WZ93W_Helmet_ESS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_WZ93W_GoraG_RU";
		backpack = "PB_POL_RADIO_BAG";
		weapons[] = {"PB_POL_RIF_GROT_SL","Throw","Put"};
		respawnWeapons[] = {"PB_POL_RIF_GROT_SL","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
	};
    class PB_POL_SOL_MED: PB_POL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Poland\PB_POL_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_POL_MED_BAG";
	};
    class PB_POL_SOL_MG: PB_POL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Poland\PB_POL_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_PKM","Throw","Put"};
		respawnWeapons[] = {"PB_PKM","Throw","Put"};
        backpack = "PB_POL_MG_BAG";
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
	};
	class PB_POL_SOL_SNI: PB_POL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Poland\PB_POL_SOL_SNI.jpg";
		displayName = "Sniper";
		backpack = "";
        weapons[] = {"PB_POL_SNI_SWD","UK3CB_BAF_L105A1","Throw","Put"};
		respawnWeapons[] = {"PB_POL_SNI_SWD","UK3CB_BAF_L105A1","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
		magazines[] = {"SmokeShell","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
	};
	class PB_POL_SOL_C: PB_POL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Poland\PB_POL_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		backpack = "";
		linkedItems[]=
		{
			"V_TacCHestrig_oli_F",
			"H_Tank_eaf_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"V_TacCHestrig_oli_F",
			"H_Tank_eaf_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[] = {"PB_POL_RIF_GROT","Throw","Put"};
		respawnWeapons[] = {"PB_POL_RIF_GROT","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
	};
	class PB_POL_SOL_JP: PB_POL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Poland\PB_POL_SOL_JP.jpg";
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
	class PB_POL_SOL_HP: PB_POL_SOL_C
	{
    	editorpreview = "PB_EP\ui\Poland\PB_POL_SOL_HP.jpg";
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
	class PB_POL_SOL_ENG: PB_POL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Poland\PB_POL_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_POL_ENG_BP";
		engineer=1;
	};
	class PB_POL_SOL_EOD: PB_POL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Poland\PB_POL_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_POL_EOD_BP";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
	};