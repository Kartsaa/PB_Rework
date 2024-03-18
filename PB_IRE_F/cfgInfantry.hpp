
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_IRE_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Enoch","Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_IRE_Faction";
		genericNames="NatoMen";
		vehicleClass="Men";
		editorSubcategory="PB_IRE_Infantry";
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
			"PB_IDPM_VEST",
			"PB_IDPM_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"PB_IDPM_VEST",
			"PB_IDPM_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
	class PB_IRE_SOL_R: PB_IRE_SOL
	{
		vehicleClass = "PB_IRE_Infantry";
		editorCategory = "PB_IRE_Top";
		editorSubcategory = "PB_IRE_Infantry";
    	editorpreview = "\PB_EP\ui\IRELAND\PB_IRE_SOL_R.jpg";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_IDPM_GORA";
		backpack = "PB_IRE_RIF_BP";
		weapons[] = {"PB_IRE_RIF_AUGA3","Throw","Put"};
		respawnWeapons[] = {"PB_IRE_RIF_AUGA3","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
	};
	class PB_IRE_SOL_SL: PB_IRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\IRELAND\PB_IRE_SOL_SL.jpg";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_IDPM_VEST",
			"PB_IDPM_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_IDPM_VEST",
			"PB_IDPM_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_IDPM_GORA_RU";
		backpack = "PB_IRE_RADIO_BAG";
		magazines[] = {"SmokeShell","SmokeShell","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
	};
    class PB_IRE_SOL_MED: PB_IRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\IRELAND\PB_IRE_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_IRE_MED_BAG";
	};
    class PB_IRE_SOL_MG: PB_IRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\IRELAND\PB_IRE_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"rhs_weap_fnmag","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_fnmag","Throw","Put"};
        backpack = "PB_IRE_MG_BAG";
		magazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer"};
		respawnMagazines[] = {"rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m62_tracer"};
	};
	class PB_IRE_SOL_SNI: PB_IRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\IRELAND\PB_IRE_SOL_SNI.jpg";
		displayName = "Sniper";
		backpack = "";
        weapons[] = {"PB_IRE_SNI_AWP","UK3CB_BAF_L9A1","Throw","Put"};
		respawnWeapons[] = {"PB_IRE_SNI_AWP","UK3CB_BAF_L9A1","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer"};
		magazines[] = {"SmokeShell","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer"};
	};
	class PB_IRE_SOL_RAT: PB_IRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\IRELAND\PB_IRE_SOL_RAT.jpg";
		displayName = "Rifleman (LAT)";
		weapons[] = {"PB_IRE_RIF_AUGA3","rhs_weap_m136","Throw","Put"};
		respawnWeapons[] = {"PB_IRE_RIF_AUGA3","rhs_weap_m136","Throw","Put"};
	};
	class PB_IRE_SOL_HAT: PB_IRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\IRELAND\PB_IRE_SOL_HAT.jpg";
		displayName = "AT Rifleman";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "PB_IRE_AT_BP";
		weapons[] = {"PB_IRE_RIF_AUGA3","PB_IRE_AT_CG","Throw","Put"};
		respawnWeapons[] = {"PB_IRE_RIF_AUGA3","PB_IRE_AT_CG","Throw","Put"};
		magazines[] = {"rhs_mag_maaws_HEAT","SmokeShell","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
		respawnMagazines[] = {"rhs_mag_maaws_HEAT","SmokeShell","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
	};
    class PB_IRE_SOL_JAV: PB_IRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\IRELAND\PB_IRE_SOL_JAV.jpg";
		displayName = "AT Rifleman (Javelin)";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "";
		weapons[] = {"PB_IRE_RIF_AUGA3","rhs_weap_fgm148","Throw","Put"};
		respawnWeapons[] = {"PB_IRE_RIF_AUGA3","rhs_weap_fgm148","Throw","Put"};
        magazines[] = {"rhs_fgm148_magazine_AT","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
		respawnMagazines[] = {"rhs_fgm148_magazine_AT","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
	};
	class PB_IRE_SOL_C: PB_IRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\IRELAND\PB_IRE_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		backpack = "";
		linkedItems[]=
		{
			"PB_IDPM_Vest",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_IDPM_Vest",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[] = {"PB_IRE_RIF_AUGA3","Throw","Put"};
		respawnWeapons[] = {"PB_IRE_RIF_AUGA3","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
	};
	class PB_IRE_SOL_ENG: PB_IRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\IRELAND\PB_IRE_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_IRE_ENG_BP";
		engineer=1;
	};
	class PB_IRE_SOL_EOD: PB_IRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\IRELAND\PB_IRE_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_IRE_EOD_BP";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
	};
	class PB_IRE_SOL_GRE: PB_IRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\IRELAND\PB_IRE_SOL_GRE.jpg";
		displayName = "Grenadier";
		backpack = "PB_IRE_GRE_BP";
		weapons[] = {"PB_IRE_RIF_AUGA3_GL","Throw","Put"};
		respawnWeapons[] = {"PB_IRE_RIF_AUGA3_GL","Throw","Put"};
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
		respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White""PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG","PB_M856A1_AUG"};
	};