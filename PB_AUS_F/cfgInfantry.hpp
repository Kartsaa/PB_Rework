
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_AUS_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Enoch","Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_AUS_Faction";
		genericNames="NatoMen";
		vehicleClass="Men";
		editorSubcategory="PB_AUS_Infantry";
		nakedUniform = "UasicBody";
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
			"PB_AMCU_Modular_Lite",
			"PB_AMCU_TCH_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"PB_AMCU_Modular_Lite",
			"PB_AMCU_TCH_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
	class PB_AUS_SOL_R: PB_AUS_SOL
	{
		vehicleClass = "PB_AUS_Infantry";
		editorCategory = "PB_AUS_Top";
		editorSubcategory = "PB_AUS_Infantry";
    	editorpreview = "PB_EP\ui\Australia\PB_AUS_SOL_R.jpg";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		headgearProbability=100;
        icon= "iconMan";
		allowedHeadgear[]=
		{
			"PB_AUS_TCH",
			"PB_AUS_TCH_H"
		};
		headgearList[] = 
		{
			"PB_AUS_TCH",1,
			"PB_AUS_TCH_H",1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_AMCU_ACU";
		backpack = "PB_AUS_RIF_BP";
		weapons[] = {"PB_AUS_RIF_EF88","Throw","Put"};
		respawnWeapons[] = {"PB_AUS_RIF_EF88","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
	};
	class PB_AUS_SOL_SL: PB_AUS_SOL_R
	{
    	editorpreview = "PB_EP\ui\Australia\PB_AUS_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_AMCU_Modular_Lite",
			"PB_AMCU_TCH_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_AMCU_Modular_Lite",
			"PB_AMCU_TCH_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_AMCU_ACU_R";
		backpack = "PB_AUS_RADIO_BAG";
		magazines[] = {"SmokeShell","SmokeShell","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
	};
    class PB_AUS_SOL_MED: PB_AUS_SOL_R
	{
    	editorpreview = "PB_EP\ui\Australia\PB_AUS_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_AUS_MED_BAG";
	};
    class PB_AUS_SOL_MG: PB_AUS_SOL_R
	{
    	editorpreview = "PB_EP\ui\Australia\PB_AUS_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_AUS_MG_F89","Throw","Put"};
		respawnWeapons[] = {"PB_AUS_MG_F89","Throw","Put"};
        backpack = "PB_AUS_MG_BAG";
		magazines[] = {"rhsusf_200Rnd_556x45_M855_soft_pouch_coyote","rhsusf_200Rnd_556x45_M855_soft_pouch_coyote"};
		respawnMagazines[] = {"rhsusf_200Rnd_556x45_M855_soft_pouch_coyote","rhsusf_200Rnd_556x45_M855_soft_pouch_coyote"};
	};
	class PB_AUS_SOL_SNI: PB_AUS_SOL_R
	{
    	editorpreview = "PB_EP\ui\Australia\PB_AUS_SOL_SNI.jpg";
		displayName = "Sniper";
		linkedItems[]=
		{
			"PB_MTP_Modular_Lite",
			"PB_MTP_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "rhsusfino_lerca_1200lack"
		};
		respawnLinkedItems[]=
		{
			"PB_MTP_Modular_Lite",
			"PB_MTP_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "rhsusfino_lerca_1200lack"
		};
		backpack = "";
        weapons[] = {"PB_AUS_SNI_SR98","UK3CB_BAF_L9A1","Throw","Put"};
		respawnWeapons[] = {"PB_AUS_SNI_SR98","UK3CB_BAF_L9A1","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer"};
		magazines[] = {"SmokeShell","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer"};
	};
	class PB_AUS_SOL_RAT: PB_AUS_SOL_R
	{
    	editorpreview = "PB_EP\ui\Australia\PB_AUS_SOL_RAT.jpg";
		displayName = "Rifleman (LAT)";
		weapons[] = {"PB_AUS_RIF_EF88","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"PB_AUS_RIF_EF88","rhs_weap_m72a7","Throw","Put"};
	};
	class PB_AUS_SOL_HAT: PB_AUS_SOL_R
	{
    	editorpreview = "PB_EP\ui\Australia\PB_AUS_SOL_HAT.jpg";
		displayName = "AR Rifleman";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "PB_AUS_ATP";
		weapons[] = {"PB_AUS_RIF_EF88","PB_AUS_AT_CG","Throw","Put"};
		respawnWeapons[] = {"PB_AUS_RIF_EF88","PB_AUS_AT_CG","Throw","Put"};
		magazines[] = {"rhs_mag_maaws_HEAT","SmokeShell","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
		respawnMagazines[] = {"rhs_mag_maaws_HEAT","SmokeShell","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
	};
    class PB_AUS_SOL_JAV: PB_AUS_SOL_R
	{
    	editorpreview = "PB_EP\ui\Australia\PB_AUS_SOL_JAV.jpg";
		displayName = "AT Rifleman (Javelin)";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "";
		weapons[] = {"PB_AUS_RIF_EF88","rhs_weap_fgm148","Throw","Put"};
		respawnWeapons[] = {"PB_AUS_RIF_EF88","rhs_weap_fgm148","Throw","Put"};
        magazines[] = {"rhs_fgm148_magazine_AT","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
		respawnMagazines[] = {"rhs_fgm148_magazine_AT","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
	};
	class PB_AUS_SOL_C: PB_AUS_SOL_R
	{
    	editorpreview = "PB_EP\ui\Australia\PB_AUS_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		backpack = "";
		linkedItems[]=
		{
			"PB_AMCU_Modular",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_AMCU_Modular",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[] = {"PB_AUS_RIF_EF88","Throw","Put"};
		respawnWeapons[] = {"PB_AUS_RIF_EF88","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
	};
	class PB_AUS_SOL_JP: PB_AUS_SOL_R
	{
    	editorpreview = "PB_EP\ui\Australia\PB_AUS_SOL_JP.jpg";
		displayName = "Jet Pilot";
		role = "Crewman";
		uniformClass = "U_B_PilotCoveralls";
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
		weapons[] = {"UK3CB_BAF_L9A1","Throw","Put"};
		respawnWeapons[] = {"UK3CB_BAF_L9A1","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd"};
	};
	class PB_AUS_SOL_HP: PB_AUS_SOL_C
	{
    	editorpreview = "PB_EP\ui\Australia\PB_AUS_SOL_HP.jpg";
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
	class PB_AUS_SOL_ENG: PB_AUS_SOL_R
	{
    	editorpreview = "PB_EP\ui\Australia\PB_AUS_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_AUS_ENG_BP";
		engineer=1;
	};
	class PB_AUS_SOL_EOD: PB_AUS_SOL_R
	{
    	editorpreview = "PB_EP\ui\Australia\PB_AUS_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_AUS_EOD_BP";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
	};
	class PB_AUS_SOL_GRE: PB_AUS_SOL_R
	{
    	editorpreview = "PB_EP\ui\Australia\PB_AUS_SOL_GRE.jpg";
		displayName = "Grenadier";
		backpack = "PB_AUS_GRE_BP";
		weapons[] = {"PB_AUS_RIF_EF88GL","Throw","Put"};
		respawnWeapons[] = {"PB_AUS_RIF_EF88GL","Throw","Put"};
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
		respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White""PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
	};