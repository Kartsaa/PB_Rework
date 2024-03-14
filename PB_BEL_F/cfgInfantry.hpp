
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_BEL_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Enoch","Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_BEL_Faction";
		genericNames="PB_BelgianMen";
		vehicleClass="Men";
		editorSubcategory="PB_BEL_Infantry";
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
			"PB_vest_spc_rifleman_TAN",
			"PB_JIGSAW_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
		respawnLinkedItems[]=
		{
			"PB_vest_spc_rifleman_TAN",
			"PB_JIGSAW_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
		};
	};
	class PB_BEL_SOL_R: PB_BEL_SOL
	{
    	editorpreview = "PB_EP\ui\Belgium\PB_BEL_SOL_R.jpg";
		vehicleClass = "PB_BEL_Infantry";
		editorCategory = "PB_BEL_Top";
		editorSubcategory = "PB_BEL_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_JIGSAW_GoraG";
		backpack = "PB_BEL_RIF_BP";
		weapons[] = {"PB_BEL_RIF_SCARL","Throw","Put"};
		respawnWeapons[] = {"PB_BEL_RIF_SCARL","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
	};
	class PB_BEL_SOL_RAT: PB_BEL_SOL_R
	{
		displayName = "Rifleman (AT)";
		weapons[] = {"PB_BEL_RIF_SCARL","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"PB_BEL_RIF_SCARL","rhs_weap_m72a7","Throw","Put"};
    	editorpreview = "PB_EP\ui\Belgium\PB_BEL_SOL_RAT.jpg";
	};
	class PB_BEL_SOL_SL: PB_BEL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Belgium\PB_BEL_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_vest_spc_radio_TAN",
			"PB_JIGSAW_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_vest_spc_radio_TAN",
			"PB_JIGSAW_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_JIGSAW_GoraG_RU";
		backpack = "PB_BEL_RADIO_BAG";
		weapons[] = {"PB_BEL_RIF_SCARL_SL","Throw","Put"};
		respawnWeapons[] = {"PB_BEL_RIF_SCARL_SL","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
	};
    class PB_BEL_SOL_MED: PB_BEL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Belgium\PB_BEL_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_BEL_MED_BAG";
	};
    class PB_BEL_SOL_MG: PB_BEL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Belgium\PB_BEL_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_BEL_MG_MINIMI","Throw","Put"};
		respawnWeapons[] = {"PB_BEL_MG_MINIMI","Throw","Put"};
        backpack = "PB_BEL_MG_BAG";
		magazines[] = {"rhsusf_200rnd_556x45_M855_box","rhsusf_200rnd_556x45_M855_box"};
		respawnMagazines[] = {"rhsusf_200rnd_556x45_M855_box","rhsusf_200rnd_556x45_M855_box"};
	};
	class PB_BEL_SOL_SNI: PB_BEL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Belgium\PB_BEL_SOL_SNI.jpg";
		displayName = "Sniper";
		backpack = "";
        weapons[] = {"PB_BEL_SNI_AWM","UK3CB_BAF_L9A1","Throw","Put"};
		respawnWeapons[] = {"PB_BEL_SNI_AWM","UK3CB_BAF_L9A1","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer"};
		magazines[] = {"SmokeShell","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer","UK3CB_BAF_338_5Rnd_Tracer"};
	};
	class PB_BEL_SOL_C: PB_BEL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Belgium\PB_BEL_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		backpack = "";
		uniformclass = "PB_Green_GoraG";
		linkedItems[]=
		{
			"PB_vest_spc_crewman_TAN",
			"PB_JIGSAW_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_vest_spc_crewman_TAN",
			"PB_JIGSAW_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[] = {"PB_BEL_RIF_SCARL","Throw","Put"};
		respawnWeapons[] = {"PB_BEL_RIF_SCARL","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
	};
	class PB_BEL_SOL_JP: PB_BEL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Belgium\PB_BEL_SOL_JP.jpg";
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
		weapons[] = {"UK3CB_BAF_L9A1","Throw","Put"};
		respawnWeapons[] = {"UK3CB_BAF_L9A1","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd","UK3CB_BAF_9_13Rnd"};
	};
	class PB_BEL_SOL_HP: PB_BEL_SOL_C
	{
    	editorpreview = "PB_EP\ui\Belgium\PB_BEL_SOL_HP.jpg";
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
	class PB_BEL_SOL_ENG: PB_BEL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Belgium\PB_BEL_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_BEL_ENG_BP";
		engineer=1;
	};
	class PB_BEL_SOL_EOD: PB_BEL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Belgium\PB_BEL_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_BEL_EOD_BP";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
	};
	class PB_BEL_SOL_GRE: PB_BEL_SOL_R
	{
    	editorpreview = "PB_EP\ui\Belgium\PB_BEL_SOL_GRE.jpg";
		displayName = "Grenadier";
		backpack = "PB_BEL_GRE_BP";
		weapons[] = {"PB_BEL_RIF_SCARL_GL","Throw","Put"};
		respawnWeapons[] = {"PB_BEL_RIF_SCAR_LGL","Throw","Put"};
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
		respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White""rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag","rhs_mag_30Rnd_556x45_M855_Stanag"};
	};