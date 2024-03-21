
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_UN_SOL_B: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Enoch","Head_Euro","BlackHead_A3","Head_Greek","Head_TK","Head_Russian","Head_Tanoan","G_Civil_male","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_UN_Faction";
		genericNames = "NatoMen";
		vehicleClass="Men";
		editorSubcategory="PB_UN_Infantry";
		nakedUniform = "U_BasicBody";
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
			"PB_UN_Platecarrier_01",
			"PB_UN_PASGT",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_UN_Platecarrier_01",
			"PB_UN_PASGT",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class PB_UN_SOL_R: PB_UN_SOL_B
	{
		editorpreview = "PB_EP\ui\UN\PB_UN_SOL_R.jpg";
		vehicleClass = "PB_UN_Infantry";
		editorCategory = "PB_UN_Top";
		editorSubcategory = "PB_UN_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		headgearProbability=100;
        icon= "iconMan";
		allowedHeadgear[]=
		{
			"PB_UN_PASGT",
			"PB_UN_LWH",
			"PB_UN_LWH_ESS",
			"PB_UN_LWH_HESS",
			"PB_UN_6B27M",
			"PB_UN_6B27M_ESS",
			"PB_UN_M97",
			"PB_UN_M97_COVER",
			"PB_UN_M97_ESS"
		};
		headgearList[] = 
		{
			"PB_UN_PASGT",1,
			"PB_UN_LWH",1,
			"PB_UN_LWH_ESS",1,
			"PB_UN_LWH_HESS",1,
			"PB_UN_6B27M",0.5,
			"PB_UN_6B27M_ESS",0.5,
			"PB_UN_M97",1,
			"PB_UN_M97_COVER",1,
			"PB_UN_M97_ESS",1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		displayName = "Peacekeeper";
		role = "Peacekeeper";
		uniformClass = "PB_UN_Gora";
		backpack = "PB_UN_RIF_BAG";
		weapons[] = {"rhs_weap_m16a4_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"};
		respawnMagazines[] = {"SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"};
	};
    class PB_UN_SOL_RAT: PB_UN_SOL_R
	{
		editorpreview = "PB_EP\ui\UN\PB_UN_SOL_RAT.jpg";
		displayName = "Peackeeper (LAT)";
		weapons[] = {"rhs_weap_m16a4_carryhandle","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle","rhs_weap_m72a7","Throw","Put"};
	};
    class PB_UN_SOL_MED: PB_UN_SOL_R
	{
		editorpreview = "PB_EP\ui\UN\PB_UN_SOL_MED.jpg";
		displayName = "Peacekeeper (Medic)";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		uniformClass = "PB_UN_Gora_RU";
		backpack = "PB_UN_MED_BAG";
        weapons[] = {"rhs_weap_m16a4_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m16a4_carryhandle","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red","rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red"};
	};
    class PB_UN_SOL_OFF: PB_UN_SOL_R
	{
		editorpreview = "PB_EP\ui\UN\PB_UN_SOL_OFF.jpg";
		displayName = "Peackeeper (Officer)";
        icon = "iconManLeader";
		uniformClass = "PB_UN_Gora_RU";
		backpack = "PB_UN_RADIO_BAG";
		linkedItems[]=
		{
			"PB_UN_Beret",
			"V_Rangemaster_belt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_UN_Beret",
			"V_Rangemaster_belt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "Binoculars"
		};
		headgearProbability=100;
		allowedHeadgear[]=
		{
			"PB_UN_Beret",
			"PB_UN_Boonie",
			"PB_UN_Cap",
			"rhsgref_un_beret"
		};
		headgearList[] = 
		{
			"PB_UN_Beret",0.4,
			"PB_UN_Boonie",0.2,
			"PB_UN_Cap",0.8,
			"rhsgref_un_beret",0.1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};		
        weapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m1911a1","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP","rhsusf_mag_7x45acp_MHP"};
	};
    class PB_UN_SOL_SNI: PB_UN_SOL_R
	{
		editorpreview = "PB_EP\ui\UN\PB_UN_SOL_SNI.jpg";
		displayName = "Peacekeeper (Sniper)";
		linkedItems[]=
		{
			"PB_UN_Platecarrier_01",
			"PB_UN_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "rhsusf_bino_lerca_1200_black"
		};
		respawnLinkedItems[]=
		{
			"PB_UN_Platecarrier_01",
			"PB_UN_Boonie",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
            "rhsusf_bino_lerca_1200_black"
		};
		backpack = "";
        weapons[] = {"PB_UN_SNI_M24","Throw","Put"};
		respawnWeapons[] = {"PB_UN_SNI_M24","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag"};
		magazines[] = {"SmokeShell","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag","rhsusf_5Rnd_762x51_m62_Mag"};
	};
    class PB_UN_SOL_MG: PB_UN_SOL_R
	{
		editorpreview = "PB_EP\ui\UN\PB_UN_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
		uniformClass = "PB_MTP_ACU";
        weapons[] = {"rhs_weap_m249","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249","Throw","Put"};
        backpack = "PB_UN_MG_BAG";
		magazines[] = {"rhsusf_100Rnd_556x45_M855_soft_pouch","rhsusf_100Rnd_556x45_M855_soft_pouch","rhsusf_100Rnd_556x45_M855_soft_pouch","rhsusf_100Rnd_556x45_M855_soft_pouch","rhsusf_100Rnd_556x45_M855_soft_pouch","rhsusf_100Rnd_556x45_M855_soft_pouch"};
		respawnMagazines[] = {"rhsusf_100Rnd_556x45_M855_soft_pouch","rhsusf_100Rnd_556x45_M855_soft_pouch","rhsusf_100Rnd_556x45_M855_soft_pouch","rhsusf_100Rnd_556x45_M855_soft_pouch"};
	};
	class PB_UN_SOL_ENG: PB_UN_SOL_R
	{
		editorpreview = "PB_EP\ui\UN\PB_UN_SOL_ENG.jpg";
		displayName = "Peacekeeper (Engineer)";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_UN_ENG_BAG";
		engineer=1;
	};
	class PB_UN_SOL_EOD: PB_UN_SOL_R
	{
		editorpreview = "PB_EP\ui\UN\PB_UN_SOL_EOD.jpg";
		displayName = "Peacekeeper (EOD)";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_UN_EOD_BAG";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
	};
	class PB_UN_SOL_HP: PB_UN_SOL_B
	{
		editorpreview = "PB_EP\ui\UN\PB_UN_SOL_R.jpg";
        icon= "iconMan";
		displayName = "Peacekeeper Pilot";
		role = "Pilot";
		backpack = "";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		linkedItems[]=
		{
			"PB_UN_Platecarrier_01",
			"PB_UN_LWH_HESS",
			"rhs_googles_black",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_UN_Platecarrier_01",
			"PB_UN_LWH_HESS",
			"rhs_googles_black",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};