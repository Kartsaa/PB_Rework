
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_GER_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_GER_Faction";
		genericNames="PB_GermanMen";
		vehicleClass="Men";
		editorSubcategory="PB_GER_Infantry";
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
			"PB_FLECK_CARRIERLITE_CO",
			"PB_FLECK_M92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"PB_FLECK_CARRIERLITE_CO",
			"PB_FLECK_M92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
	class PB_GER_SOL_R: PB_GER_SOL
	{
		vehicleClass = "PB_GER_Infantry";
		editorCategory = "PB_GER_Top";
		editorSubcategory = "PB_GER_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_FLECK_ACU";
		backpack = "PB_GER_RIF_BP";
		weapons[] = {"PB_GER_RIF_G36","Throw","Put"};
		respawnWeapons[] = {"PB_GER_RIF_G36","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
	};
	class PB_GER_SOL_SL: PB_GER_SOL_R
	{
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_FLECK_CARRIERLITE_CO",
			"PB_FLECK_M92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_FLECK_CARRIERLITE_CO",
			"PB_FLECK_M92",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_FLECK_ACU_R";
		backpack = "PB_GER_RADIO_BAG";
		magazines[] = {"SmokeShell","SmokeShell","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
	};
    class PB_GER_SOL_MED: PB_GER_SOL_R
	{
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_GER_MED_BAG";
	};
    class PB_GER_SOL_MG: PB_GER_SOL_R
	{
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_GER_MG_MG5","Throw","Put"};
		respawnWeapons[] = {"PB_GER_MG_MG5","Throw","Put"};
        backpack = "PB_GER_MG_BAG";
		magazines[] = {"rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51"};
		respawnMagazines[] = {"rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51"};
	};
	class PB_GER_SOL_SNI: PB_GER_SOL_R
	{
		displayName = "Sniper";
		linkedItems[]=
		{
			"PB_FLECK_CARRIERLITE_CO",
			"PB_FLECK_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "rhsusfino_lerca_1200lack"
		};
		respawnLinkedItems[]=
		{
			"PB_FLECK_CARRIERLITE_CO",
			"PB_FLECK_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "rhsusfino_lerca_1200lack"
		};
		backpack = "";
        weapons[] = {"PB_GER_SNI_AWM","rhsusf_weap_glock17g4","Throw","Put"};
		respawnWeapons[] = {"PB_GER_SNI_AWM","rhsusf_weap_glock17g4","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000"};
		magazines[] = {"SmokeShell","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000","rhs_5Rnd_338lapua_t5000"};
	};
	class PB_GER_SOL_AT: PB_GER_SOL_R
	{
		displayName = "AT Rifleman";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "PB_GER_AT_BP";
		weapons[] = {"PB_GER_RIF_G36","RB_PZF3","Throw","Put"};
		respawnWeapons[] = {"PB_GER_RIF_G36","RB_PZF3","Throw","Put"};
		magazines[] = {"PB_DM12_HEAT_F","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
		respawnMagazines[] = {"PB_DM12_HEAT_F","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
	};
	class PB_GER_SOL_AA: PB_GER_SOL_R
	{
		displayName = "AA Rifleman";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "PB_GER_AA_BP";
		weapons[] = {"PB_GER_RIF_G36","rhs_weap_fim92","Throw","Put"};
		respawnWeapons[] = {"PB_GER_RIF_G36","rhs_weap_fim92","Throw","Put"};
		magazines[] = {"Titan_AA","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
		respawnMagazines[] = {"Titan_AA","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
	};
	class PB_GER_SOL_C: PB_GER_SOL_R
	{
		displayName = "Crewman";
		role = "Crewman";
		uniformclass = "PB_FLECK_GoraG_RU";
		backpack = "";
		linkedItems[]=
		{
			"PB_FLECK_Modular",
			"H_Tank_eaf_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_FLECK_Modular",
			"H_Tank_eaf_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
	};
	class PB_GER_SOL_JP: PB_GER_SOL_R
	{
		displayName = "Jet Pilot";
		role = "Crewman";
		uniformClass = "U_B_pilotCoveralls";
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
	class PB_GER_SOL_HP: PB_GER_SOL_C
	{
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
	class PB_GER_SOL_ENG: PB_GER_SOL_R
	{
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_GER_ENG_BP";
		engineer=1;
	};
	class PB_GER_SOL_EOD: PB_GER_SOL_R
	{
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_GER_EOD_BP";
		engineer=1;
		CanDeactivateMines=1;
		detectSkill=38;
	};
	class PB_GER_SOL_GRE: PB_GER_SOL_R
	{
		displayName = "Grenadier";
		backpack = "PB_GER_GRE_BP";
		weapons[] = {"PB_GER_RIF_G36GL","Throw","Put"};
		respawnWeapons[] = {"PB_GER_RIF_G36GL","Throw","Put"};
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
		respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White""PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
	};