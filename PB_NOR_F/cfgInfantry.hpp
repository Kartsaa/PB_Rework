
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_NOR_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_NOR_Faction";
		genericNames="PB_NorwegianMen";
		vehicleClass="Men";
		editorSubcategory="PB_NOR_Infantry";
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
			"rhsusf_mbav_rifleman",
			"PB_M98_FAST",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"rhsusf_mbav_rifleman",
			"PB_M98_FAST",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
	class PB_NOR_SOL_R: PB_NOR_SOL
	{
		vehicleClass = "PB_NOR_Infantry";
		editorCategory = "PB_NOR_Top";
		editorSubcategory = "PB_NOR_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_M98_ACU";
		allowedHeadgear[]=
		{
			"PB_M98_FAST",
			"PB_M98_FAST_H",
			"PB_M98_FAST_C",
			"PB_M98_FAST_C_H"
		};
		headgearList[] = 
		{
			"PB_M98_FAST",1,
			"PB_M98_FAST_H",1,
			"PB_M98_FAST_C",1,
			"PB_M98_FAST_C_H",1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		backpack = "PB_NOR_RIF_BP";
		weapons[] = {"PB_NOR_RIF_HK416","Throw","Put"};
		respawnWeapons[] = {"PB_NOR_RIF_HK416","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};
	class PB_NOR_SOL_SL: PB_NOR_SOL_R
	{
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_M98_Mbav_rifleman",
			"PB_M98_FAST_C_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_M98_Mbav_rifleman",
			"PB_M98_FAST_C_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_M98_ACU_RU";
		backpack = "PB_NOR_RADIO_BAG";
		weapons[] = {"PB_NOR_RIF_HK416","Throw","Put"};
		respawnWeapons[] = {"PB_NOR_RIF_HK416","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};
    class PB_NOR_SOL_MED: PB_NOR_SOL_R
	{
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_NOR_MED_BAG";
		linkedItems[]=
		{
			"rhsusf_mbav_medic",
			"PB_M98_FAST_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"rhsusf_mbav_medic",
			"PB_M98_FAST_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
    class PB_NOR_SOL_MG: PB_NOR_SOL_R
	{
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_NOR_MG_MINIMI","Throw","Put"};
		respawnWeapons[] = {"PB_NOR_MG_MINIMI","Throw","Put"};
		linkedItems[]=
		{
			"rhsusf_mbav_mg",
			"PB_M98_FAST_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"rhsusf_mbav_mg",
			"PB_M98_FAST_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
        backpack = "PB_NOR_MG_BAG";
		magazines[] = {"rhsusf_200rnd_556x45_M855_mixed_box","rhsusf_200rnd_556x45_M855_mixed_box"};
		respawnMagazines[] = {"rhsusf_200rnd_556x45_M855_mixed_box","rhsusf_200rnd_556x45_M855_mixed_box"};
	};
	class PB_NOR_SOL_MK: PB_NOR_SOL_R
	{
		displayName = "Marksman";
		backpack = "";
        weapons[] = {"PB_NOR_MK_HK417","Throw","Put"};
		respawnWeapons[] = {"PB_NOR_MK_HK417","Throw","Put"};	
		magazines[] = {"HandGrenade","SmokeShell","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag","rhsusf_20Rnd_762x51_m62_Mag"};
	};
	class PB_NOR_SOL_LAT: PB_NOR_SOL_R
	{
		displayName = "Rifleman (AT)";
        role = "MissileSpecialist";
        icon = "iconManAT";
		weapons[] = {"PB_NOR_RIF_HK416","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"PB_NOR_RIF_HK416","rhs_weap_m72a7","Throw","Put"};
	};
	class PB_NOR_SOL_HAT: PB_NOR_SOL_R
	{
		backpack = "PB_NOR_AT_BP";
		displayName = "AT Rifleman";
        role = "MissileSpecialist";
        icon = "iconManAT";
		weapons[] = {"PB_NOR_RIF_HK416","rhs_weap_maaws","Throw","Put"};
		respawnWeapons[] = {"PB_NOR_RIF_HK416","rhs_weap_maaws","Throw","Put"};
		magazines[] = {"MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"MRAWS_HEAT_F","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};
	class PB_NOR_SOL_C: PB_NOR_SOL_R
	{
		displayName = "Crewman";
		role = "Crewman";
		uniformclass = "PB_M98_GoraG";
		backpack = "";
		linkedItems[]=
		{
			"rhsusf_mbav",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"rhsusf_mbav",
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
	class PB_NOR_SOL_JP: PB_NOR_SOL_R
	{
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
	class PB_NOR_SOL_HP: PB_NOR_SOL_C
	{
		displayName = "Heli Pilot";
		role = "Crewman";
		uniformClass = "PB_M98_GoraG";
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
	class PB_NOR_SOL_ENG: PB_NOR_SOL_R
	{
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_NOR_ENG_BP";
		engineer=1;
	};
	class PB_NOR_SOL_EOD: PB_NOR_SOL_R
	{
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_NOR_EOD_BP";
		engineer=1;
		CanDeactivateMines=1;
		detectSkill=38;
	};
	class PB_NOR_SOL_GRE: PB_NOR_SOL_R
	{
		displayName = "Grenadier";
		backpack = "PB_NOR_GRE_BP";
		linkedItems[]=
		{
			"rhsusf_mbav_grenadier",
			"PB_M98_FAST_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"rhsusf_mbav_grenadier",
			"PB_M98_FAST_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		weapons[] = {"PB_NOR_RIF_HK416_GL","Throw","Put"};
		respawnWeapons[] = {"PB_NOR_RIF_HK416_GL","Throw","Put"};
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White""rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};