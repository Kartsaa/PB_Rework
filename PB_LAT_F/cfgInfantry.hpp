
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_LAT_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Euro","Head_Enoch","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_LAT_Faction";
		genericNames="PB_LatvianMen";
		vehicleClass="Men";
		editorSubcategory="PB_LAT_Infantry";
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
			"PB_LATPAT_TST",
			"PB_LATPAT_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"PB_LATPAT_TST",
			"PB_LATPAT_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
	class PB_LAT_SOL_R: PB_LAT_SOL
	{
		editorpreview = "PB_EP\ui\Latvia\PB_LAT_SOL_R.jpg";
		vehicleClass = "PB_LAT_Infantry";
		editorCategory = "PB_LAT_Top";
		editorSubcategory = "PB_LAT_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_LATPAT_ACU";
		backpack = "PB_LAT_RIF_BP";
		allowedHeadgear[]=
		{
			"PB_LATPAT_H",
			"PB_LATPAT_H_ESS",
			"PB_LATPAT_H_HESS"
		};
		headgearList[] = 
		{
			"PB_LATPAT_H",1,
			"PB_LATPAT_H_ESS",1,
			"PB_LATPAT_H_HESS",1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		weapons[] = {"PB_LAT_RIF_G36","Throw","Put"};
		respawnWeapons[] = {"PB_LAT_RIF_G36","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
	};
	class PB_LAT_SOL_RAT: PB_LAT_SOL_R
	{
		editorpreview = "PB_EP\ui\Latvia\PB_LAT_SOL_RAT.jpg";
		displayName = "Rifleman (AT)";
		weapons[] = {"PB_LAT_RIF_G36","rhs_weap_M136","Throw","Put"};
		respawnWeapons[] = {"PB_LAT_RIF_G36","rhs_weap_M136","Throw","Put"};
	};
	class PB_LAT_SOL_AT: PB_LAT_SOL_R
	{
		editorpreview = "PB_EP\ui\Latvia\PB_LAT_SOL_AT.jpg";
		displayName = "AT Rifleman";
		weapons[] = {"PB_LAT_RIF_G36","rhs_weap_maaws","Throw","Put"};
		backpack = "PB_LAT_AT_BP";
		respawnWeapons[] = {"PB_LAT_RIF_G36","rhs_weap_maaws","Throw","Put"};
		magazines[] = {"HandGrenade","SmokeShell","MRAWS_HEAT_F","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","MRAWS_HEAT_F","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
	};
	class PB_LAT_SOL_AA: PB_LAT_SOL_R
	{
		editorpreview = "PB_EP\ui\Latvia\PB_LAT_SOL_AA.jpg";
		displayName = "AA Rifleman";
		weapons[] = {"PB_LAT_RIF_G36","RHS_WEAP_FIM92","Throw","Put"};
		backpack = "PB_LAT_AA_BP";
		respawnWeapons[] = {"PB_LAT_RIF_G36","RHS_WEAP_FIM92","Throw","Put"};
		magazines[] = {"HandGrenade","SmokeShell","RHS_FIM92_MAG","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","RHS_FIM92_MAG","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
	};
	class PB_LAT_SOL_SL: PB_LAT_SOL_R
	{
		editorpreview = "PB_EP\ui\Latvia\PB_LAT_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_LATPAT_TST",
			"PB_LATPAT_H_ESS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_LATPAT_TST",
			"PB_LATPAT_H_ESS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_GRANITEB_GoraG_RU";
		backpack = "PB_LAT_RADIO_BAG";
		weapons[] = {"PB_LAT_RIF_G36","Throw","Put"};
		respawnWeapons[] = {"PB_LAT_RIF_G36","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
	};
    class PB_LAT_SOL_MED: PB_LAT_SOL_R
	{
		editorpreview = "PB_EP\ui\Latvia\PB_LAT_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_LAT_MED_BAG";
	};
    class PB_LAT_SOL_MG: PB_LAT_SOL_R
	{
		editorpreview = "PB_EP\ui\Latvia\PB_LAT_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_LAT_MG_MINIMI","Throw","Put"};
		respawnWeapons[] = {"PB_LAT_MG_MINIMI","Throw","Put"};
        backpack = "PB_LAT_MG_BAG";
		magazines[] = {"rhsusf_200rnd_556x45_M855_box","rhsusf_200rnd_556x45_M855_box"};
		respawnMagazines[] = {"rhsusf_200rnd_556x45_M855_box","rhsusf_200rnd_556x45_M855_box"};
	};
	class PB_LAT_SOL_SNI: PB_LAT_SOL_R
	{
		editorpreview = "PB_EP\ui\Latvia\PB_LAT_SOL_SNI.jpg";
		displayName = "Sniper";
		backpack = "";
        weapons[] = {"PB_LAT_SNI_AW","RHSUSF_WEAP_GLOCK17G4","Throw","Put"};
		respawnWeapons[] = {"PB_LAT_SNI_AW","RHSUSF_WEAP_GLOCK17G4","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","RHSUSF_MAG_17RND_9X19_MAG","RHSUSF_MAG_17RND_9X19_MAG","RHSUSF_MAG_17RND_9X19_MAG","UK3CB_BAF_338_5RND_TRACER","UK3CB_BAF_338_5RND_TRACER","UK3CB_BAF_338_5RND_TRACER","UK3CB_BAF_338_5RND_TRACER","UK3CB_BAF_338_5RND_TRACER","UK3CB_BAF_338_5RND_TRACER","UK3CB_BAF_338_5RND_TRACER"};
		magazines[] = {"SmokeShell","RHSUSF_MAG_17RND_9X19_MAG","RHSUSF_MAG_17RND_9X19_MAG","RHSUSF_MAG_17RND_9X19_MAG","UK3CB_BAF_338_5RND_TRACER","UK3CB_BAF_338_5RND_TRACER","UK3CB_BAF_338_5RND_TRACER","UK3CB_BAF_338_5RND_TRACER","UK3CB_BAF_338_5RND_TRACER","UK3CB_BAF_338_5RND_TRACER","UK3CB_BAF_338_5RND_TRACER"};
	};
	class PB_LAT_SOL_C: PB_LAT_SOL_R
	{
		editorpreview = "PB_EP\ui\Latvia\PB_LAT_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		backpack = "";
		uniformclass = "PB_LATPAT_GoraG";
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
	};
	class PB_LAT_SOL_HP: PB_LAT_SOL_C
	{
		editorpreview = "PB_EP\ui\Latvia\PB_LAT_SOL_HP.jpg";
		displayName = "Heli Pilot";
		role = "Crewman";
		uniformClass = "PB_LATPAT_GORAG";
		backpack = "";
		linkedItems[]=
		{
			"PB_LATPAT_TST",
			"RHSUSF_HGU56P_VISOR_BLACK",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_LATPAT_TST",
			"RHSUSF_HGU56P_VISOR_BLACK",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class PB_LAT_SOL_ENG: PB_LAT_SOL_R
	{
		editorpreview = "PB_EP\ui\Latvia\PB_LAT_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_LAT_ENG_BP";
		engineer=1;
	};
	class PB_LAT_SOL_EOD: PB_LAT_SOL_R
	{
		editorpreview = "PB_EP\ui\Latvia\PB_LAT_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_LAT_EOD_BP";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
	};
	class PB_LAT_SOL_GRE: PB_LAT_SOL_R
	{
		editorpreview = "PB_EP\ui\Latvia\PB_LAT_SOL_GRE.jpg";
		displayName = "Grenadier";
		backpack = "PB_LAT_GRE_BP";
		weapons[] = {"PB_LAT_RIF_G36_GL","Throw","Put"};
		respawnWeapons[] = {"PB_LAT_RIF_G36_GL","Throw","Put"};
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
		respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White""PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36","PB_M856A1_G36"};
	};