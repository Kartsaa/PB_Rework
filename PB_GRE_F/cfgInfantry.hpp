
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_GRE_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Greek","NoGlasses","LanguageGRE_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_GRE_Faction";
		genericNames="GreekMen";
		vehicleClass="Men";
		editorSubcategory="PB_GRE_Infantry";
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
			"PB_GRELIZ_H",
			"PB_GREEN_Carrier_Lite",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"PB_GRELIZ_H",
			"PB_GREEN_Carrier_Lite",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class PB_GRE_SOL_R: PB_GRE_SOL
	{
    	editorpreview = "\PB_EP\ui\GREECE\PB_GRE_SOL_R.jpg";
		vehicleClass = "PB_GRE_Infantry";
		editorCategory = "PB_GRE_Top";
		editorSubcategory = "PB_GRE_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
        icon= "iconMan";
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_GRELIZ_GoraG";
		backpack = "PB_GRE_RIF_BP";
		weapons[] = {"PB_G3","Throw","Put"};
		respawnWeapons[] = {"PB_G3","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
	};
	class PB_GRE_SOL_RAT: PB_GRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\GREECE\PB_GRE_SOL_RAT.jpg";
		displayName = "Rifleman (AT)";
		weapons[] = {"PB_G3","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"PB_G3","rhs_weap_m72a7","Throw","Put"};
	};
	class PB_GRE_SOL_AT: PB_GRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\GREECE\PB_GRE_SOL_AT.jpg";
		displayName = "AT Rifleman";
		weapons[] = {"PB_G3","rhs_weap_maaws","Throw","Put"};
		backpack = "PB_GRE_AT_BP";
		respawnWeapons[] = {"PB_G3","rhs_weap_maaws","Throw","Put"};
		magazines[] = {"HandGrenade","SmokeShell","MRAWS_HEAT_F","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","MRAWS_HEAT_F","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
	};
	class PB_GRE_SOL_SL: PB_GRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\GREECE\PB_GRE_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		linkedItems[]=
		{
			"PB_GREEN_Carrier_Rig",
			"PB_GRELIZ_H_R",
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
			"PB_GRELIZ_H_R",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		uniformClass = "PB_GRELIZ_Gora_RU";
		backpack = "PB_GRE_RADIO_BAG";
		weapons[] = {"PB_G3","Throw","Put"};
		respawnWeapons[] = {"PB_G3","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
	};
    class PB_GRE_SOL_MED: PB_GRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\GREECE\PB_GRE_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_GRE_MED_BAG";
	};
    class PB_GRE_SOL_MG: PB_GRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\GREECE\PB_GRE_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_MINIMI_762","Throw","Put"};
		respawnWeapons[] = {"PB_MINIMI_762","Throw","Put"};
        backpack = "PB_GRE_MG_BAG";
		magazines[] = {"PB_200Rnd_762x51_M62","PB_200Rnd_762x51_M62"};
		respawnMagazines[] = {"PB_200Rnd_762x51_M62","PB_200Rnd_762x51_M62"};
	};
	class PB_GRE_SOL_MK: PB_GRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\GREECE\PB_GRE_SOL_MK.jpg";
		displayName = "Marksman";
		backpack = "";
        weapons[] = {"PB_GRE_MK_G3","rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"PB_GRE_MK_G3","rhsusf_weap_m1911a1","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
		magazines[] = {"SmokeShell","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
	};
	class PB_GRE_SOL_C: PB_GRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\GREECE\PB_GRE_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		backpack = "";
		linkedItems[]=
		{
			"rhs_tsh4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"rhs_tsh4",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		weapons[] = {"UK3CB_BAF_L91A1","Throw","Put"};
		respawnWeapons[] = {"UK3CB_BAF_L91A1","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","UK3CB_BAF_9_30Rnd","UK3CB_BAF_9_30Rnd","UK3CB_BAF_9_30Rnd","UK3CB_BAF_9_30Rnd"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","UK3CB_BAF_9_30Rnd","UK3CB_BAF_9_30Rnd","UK3CB_BAF_9_30Rnd","UK3CB_BAF_9_30Rnd"};
	};
	class PB_GRE_SOL_JP: PB_GRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\GREECE\PB_GRE_SOL_JP.jpg";
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
		weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
	};
	class PB_GRE_SOL_HP: PB_GRE_SOL_C
	{
    	editorpreview = "\PB_EP\ui\GREECE\PB_GRE_SOL_HP.jpg";
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
	class PB_GRE_SOL_ENG: PB_GRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\GREECE\PB_GRE_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_GRE_ENG_BP";
		engineer=1;
	};
	class PB_GRE_SOL_EOD: PB_GRE_SOL_R
	{
    	editorpreview = "\PB_EP\ui\GREECE\PB_GRE_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_GRE_EOD_BP";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
	};