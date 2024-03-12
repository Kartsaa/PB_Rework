
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_BUL_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Russian","NoGlasses","LanguageRUS_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_BUL_Faction";
		genericNames="PB_BulgarianMen";
		vehicleClass="Men";
		editorSubcategory="PB_BUL_Infantry";
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
			"PB_GREEN_Carrier_Lite",
			"PB_GRN_mich_bare",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"PB_GREEN_Carrier_Lite",
			"PB_GRN_mich_bare",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
	class PB_BUL_SOL_R: PB_BUL_SOL
	{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SOL_R.jpg";
		vehicleClass = "PB_BUL_Infantry";
		editorCategory = "PB_BUL_Top";
		editorSubcategory = "PB_BUL_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_M18_GoraG";
		backpack = "PB_BUL_RIF_BP";
		allowedHeadgear[]=
		{
			"PB_GRN_mich_bare",
			"PB_GRN_mich_bare_alt",
			"PB_GRN_mich_bare_headset",
			"PB_GRN_mich_bare_norotos",
			"PB_GRN_mich_bare_norotos_alt",
			"PB_GRN_mich_bare_norotos_alt_headset",
			"PB_GRN_mich_bare_norotos_headset",
			"PB_M18_H_N",
			"PB_M18_H_N_A",
			"PB_M18_H_N_H"
		};
		headgearList[] = 
		{
			"PB_GRN_mich_bare", 1,
			"PB_GRN_mich_bare_alt", 1,
			"PB_GRN_mich_bare_headset", 1,
			"PB_GRN_mich_bare_norotos", 1,
			"PB_GRN_mich_bare_norotos_alt", 1,
			"PB_GRN_mich_bare_norotos_alt_headset", 1,
			"PB_GRN_mich_bare_norotos_headset", 1,
			"PB_M18_H_N", 1,
			"PB_M18_H_N_A", 1,
			"PB_M18_H_N_H", 1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		weapons[] = {"PB_ARM1","Throw","Put"};
		respawnWeapons[] = {"PB_ARM1","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855"};
	};
	class PB_BUL_SOL_RAT: PB_BUL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SOL_RAT.jpg";
		displayName = "Rifleman (AT)";
		weapons[] = {"PB_ARM1","rhs_weap_rpg26","Throw","Put"};
		respawnWeapons[] = {"PB_ARM1","rhs_weap_rpg26","Throw","Put"};
	};
    class PB_BUL_SOL_HAT: PB_BUL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SOL_HAT.jpg";
		displayName = "AT Rifleman";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "PB_BUL_AT_BP";
		weapons[] = {"PB_ARM1","rhs_weap_rpg7","Throw","Put"};
		respawnWeapons[] = {"PB_ARM1","rhs_weap_rpg7","Throw","Put"};
        magazines[] = {"rhs_rpg7_PG7VL_mag","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855"};
		respawnMagazines[] = {"rhs_rpg7_PG7VL_mag","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855"};
	};
	class PB_BUL_SOL_MET: PB_BUL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SOL_MET.jpg";
		displayName = "AT Rifleman (Metis)";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "";
		weapons[] = {"PB_ARM1","launch_O_Vorona_green_F","Throw","Put"};
		respawnWeapons[] = {"PB_ARM1","launch_O_Vorona_green_F","Throw","Put"};
        magazines[] = {"Vorona_HEAT","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855"};
		respawnMagazines[] = {"Vorona_HEAT","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855"};
	};
	class PB_BUL_SOL_AA: PB_BUL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SOL_AA.jpg";
		displayName = "AA Rifleman";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "PB_BUL_AA_BP";
		weapons[] = {"PB_ARM1","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"PB_ARM1","rhs_weap_igla","Throw","Put"};
        magazines[] = {"rhs_mag_9k38_rocket","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855"};
		respawnMagazines[] = {"rhs_mag_9k38_rocket","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855"};
	};
	class PB_BUL_SOL_SL: PB_BUL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_GREEN_Carrier_Rig",
			"PB_M18_H_N_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_GREEN_Carrier_Rig",
			"PB_M18_H_N_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_M18_GoraG_RU";
		backpack = "PB_BUL_RADIO_BAG";
		magazines[] = {"SmokeShell","SmokeShell","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855"};
	};
    class PB_BUL_SOL_MED: PB_BUL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_BUL_MED_BAG";
	};
	class PB_BUL_SOL_LAR: PB_BUL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SOL_LAR.jpg";
		displayName = "Autorifleman";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_LMG556","Throw","Put"};
		respawnWeapons[] = {"PB_LMG556","Throw","Put"};
        backpack = "PB_BUL_RIF_BAG";
		magazines[] = {"HandGrenade","SmokeShell","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855"};
	};
    class PB_BUL_SOL_MG: PB_BUL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_PKP","Throw","Put"};
		respawnWeapons[] = {"PB_PKP","Throw","Put"};
        backpack = "PB_BUL_MG_BAG";
		magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR"};
	};
	class PB_BUL_SOL_SNI: PB_BUL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SOL_SNI.jpg";
		displayName = "Sniper";
		backpack = "";
        weapons[] = {"PB_BUL_SNI_SVD","rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"PB_BUL_SNI_SVD","rhs_weap_makarov_pm","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
		magazines[] = {"SmokeShell","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1"};
	};
	class PB_BUL_SOL_C: PB_BUL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		backpack = "";
		uniformclass = "PB_M18_Gora";
		linkedItems[]=
		{
			"PB_GREEN_modular",
			"rhs_tsh4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_GREEN_modular",
			"rhs_tsh4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855"};
	};
	class PB_BUL_SOL_JP: PB_BUL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SOL_JP.jpg";
		displayName = "Jet Pilot";
		role = "Crewman";
		uniformClass = "rhsgref_uniform_olive";
		backpack = "";
		linkedItems[]=
		{
			"rhs_zsh7a_alt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"rhs_zsh7a_alt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_makarov_pm","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S"};
	};
	class PB_BUL_SOL_HP: PB_BUL_SOL_JP
	{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SOL_HP.jpg";
		displayName = "Heli Pilot";
		role = "Crewman";
		uniformClass = "PB_Green_GoraG";
		backpack = "";
		linkedItems[]=
		{
			"rhs_zsh7a_mike_green_alt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"rhs_zsh7a_mike_green_alt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class PB_BUL_SOL_ENG: PB_BUL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_BUL_ENG_BP";
		engineer=1;
	};
	class PB_BUL_SOL_EOD: PB_BUL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_BUL_EOD_BP";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
	};
	class PB_BUL_SOL_GRE: PB_BUL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SOL_GRE.jpg";
		displayName = "Grenadier";
		backpack = "PB_BUL_GRE_BP";
		weapons[] = {"PB_ARM1_GL","Throw","Put"};
		respawnWeapons[] = {"PB_ARM1_GL","Throw","Put"};
		magazines[] = {"rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_GRD40_White","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855"};
		respawnMagazines[] = {"rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_GRD40_White""PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855","PB_30Rnd_556x45_AK_M855"};
	};