
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_ISR_SOL: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_ISR_Faction";
		genericNames="PB_HebrewMen";
		vehicleClass="Men";
		editorSubcategory="PB_ISR_Infantry";
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
			"PB_IDF_mich_bare",
			"PB_GREEN_M12_Vest",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
		respawnLinkedItems[]=
		{
			"PB_IDF_mich_bare",
			"PB_GREEN_M12_Vest",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"Binoculars"
		};
	};
	class PB_ISR_SOL_R: PB_ISR_SOL
	{
		editorpreview = "PB_EP\ui\Israel\PB_ISR_SOL_R.jpg";
		vehicleClass = "PB_ISR_Infantry";
		editorCategory = "PB_ISR_Top";
		editorSubcategory = "PB_ISR_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		headgearProbability=100;
        icon= "iconMan";
		uniformClass = "PB_IDF_GoraG";
		allowedHeadgear[]=
		{
			"PB_IDF_mich_bare",
			"PB_IDF_mich_bare_alt",
			"PB_IDF_mich_bare_norotos",
			"PB_IDF_mich_bare_norotos_alt",
			"PB_IDF_mich_bare_norotos_alt_headset",
			"PB_IDF_mich_bare_norotos_headset"
		};
		headgearList[] = 
		{
			"PB_IDF_mich_bare",1,
			"PB_IDF_mich_bare_alt",1,
			"PB_IDF_mich_bare_norotos",1,
			"PB_IDF_mich_bare_norotos_alt",1,
			"PB_IDF_mich_bare_norotos_alt_headset",1,
			"PB_IDF_mich_bare_norotos_headset",1
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		displayName = "Rifleman";
		role = "Rifleman";
		backpack = "PB_ISR_RIF_BP";
		weapons[] = {"PB_ISR_RIF_M4","Throw","Put"};
		respawnWeapons[] = {"PB_ISR_RIF_M4","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"HandGrenade","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};
	class PB_ISR_SOL_SL: PB_ISR_SOL_R
	{
		editorpreview = "PB_EP\ui\Israel\PB_ISR_SOL_SL.jpg";
        icon= "iconManLeader";
		displayName = "Squadleader";
		uniformClass = "PB_IDF_Gora";
		backpack = "PB_ISR_RADIO_BAG";
		magazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};
	class PB_ISR_SOL_MK: PB_ISR_SOL_R
	{
		editorpreview = "PB_EP\ui\Israel\PB_ISR_SOL_MK.jpg";
        icon= "iconMan";
		displayName = "Marksman";
		uniformClass = "PB_IDF_Gora";
		weapons[] = {"PB_ISR_MK_M4","Throw","Put"};
		respawnWeapons[] = {"PB_ISR_MK_M4","Throw","Put"};
		magazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"SmokeShell","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};
    class PB_ISR_SOL_MED: PB_ISR_SOL_R
	{
		editorpreview = "PB_EP\ui\Israel\PB_ISR_SOL_MED.jpg";
		displayName = "Medic";
        icon = "iconManLeader";
        role = "iconManMedic";
        attendant = "1";
		backpack = "PB_ISR_MED_BAG";
	};
    class PB_ISR_SOL_MG: PB_ISR_SOL_R
	{
		editorpreview = "PB_EP\ui\Israel\PB_ISR_SOL_MG.jpg";
		displayName = "Machinegunner";
        role = "MachineGunner";
        icon = "iconManMG";
        weapons[] = {"PB_ISR_MG_MEGEV","Throw","Put"};
		respawnWeapons[] = {"PB_ISR_MG_MEGEV","Throw","Put"};
        backpack = "PB_ISR_MG_BAG";
		magazines[] = {"150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer"};
		respawnMagazines[] = {"150Rnd_762x54_Box_Tracer","150Rnd_762x54_Box_Tracer"};
	};
	class PB_ISR_SOL_SNI: PB_ISR_SOL_R
	{
		editorpreview = "PB_EP\ui\Israel\PB_ISR_SOL_SNI.jpg";
		displayName = "Sniper";
		backpack = "";
        weapons[] = {"PB_ISR_SNI_M24","rhsusf_weap_glock17g4","Throw","Put"};
		respawnWeapons[] = {"PB_ISR_SNI_M24","rhsusf_weap_glock17g4","Throw","Put"};
		respawnMagazines[] = {"SmokeShell","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_5Rnd_762x51_m62_mag","rhsusf_5Rnd_762x51_m62_mag","rhsusf_5Rnd_762x51_m62_mag","rhsusf_5Rnd_762x51_m62_mag","rhsusf_5Rnd_762x51_m62_mag","rhsusf_5Rnd_762x51_m62_mag","rhsusf_5Rnd_762x51_m62_mag"};
		magazines[] = {"SmokeShell","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_5Rnd_762x51_m62_mag","rhsusf_5Rnd_762x51_m62_mag","rhsusf_5Rnd_762x51_m62_mag","rhsusf_5Rnd_762x51_m62_mag","rhsusf_5Rnd_762x51_m62_mag","rhsusf_5Rnd_762x51_m62_mag","rhsusf_5Rnd_762x51_m62_mag"};
	};
	class PB_ISR_SOL_RAT: PB_ISR_SOL_R
	{
		editorpreview = "PB_EP\ui\Israel\PB_ISR_SOL_RAT.jpg";
		displayName = "Rifleman (AT)";
		weapons[] = {"PB_ISR_RIF_M4","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"PB_ISR_RIF_M4","rhs_weap_m72a7","Throw","Put"};
	};
	class PB_ISR_SOL_HAT: PB_ISR_SOL_R
	{
		editorpreview = "PB_EP\ui\Israel\PB_ISR_SOL_HAT.jpg";
		displayName = "AT Rifleman (Mini-Spike)";
        role = "MissileSpecialist";
        icon = "iconManAT";
		backpack = "PB_ISR_AT_BP";
		weapons[] = {"PB_ISR_RIF_M4","Launch_I_Titan_short_F","Throw","Put"};
		respawnWeapons[] = {"PB_ISR_RIF_M4","Launch_I_Titan_short_F","Throw","Put"};
		magazines[] = {"Titan_AT","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"Titan_AT","SmokeShell","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};
	class PB_ISR_SOL_C: PB_ISR_SOL_R
	{
		editorpreview = "PB_EP\ui\Israel\PB_ISR_SOL_C.jpg";
		displayName = "Crewman";
		role = "Crewman";
		backpack = "";
		uniformclass =  "PB_IDF_Coveralls";
		linkedItems[]=
		{
			"V_TacVest_oli",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"V_TacVest_oli",
			"H_HelmetCrew_I",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		class EventHandlers: EventHandlers{};
		weapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m4_carryhandle","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};
	class PB_ISR_SOL_JP: PB_ISR_SOL_R
	{
		editorpreview = "PB_EP\ui\Israel\PB_ISR_SOL_JP.jpg";
		displayName = "Jet Pilot";
		role = "Crewman";
		uniformClass = "PB_GREEN_HP";
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
		class EventHandlers: EventHandlers{};
		weapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_glock17g4","Throw","Put"};
        magazines[] = {"SmokeShellBlue","SmokeShellBlue","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
		respawnMagazines[] = {"SmokeShellBlue","SmokeShellBlue","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ","rhsusf_mag_17Rnd_9x19_FMJ"};
	};
	class PB_ISR_SOL_HP: PB_ISR_SOL_C
	{
		editorpreview = "PB_EP\ui\Israel\PB_ISR_SOL_HP.jpg";
		displayName = "Heli Pilot";
		role = "Crewman";
		uniformClass = "PB_Green_HP";
		backpack = "";
		class EventHandlers: EventHandlers{};
		linkedItems[]=
		{
			"H_PilotHelmetHeli_O",
			"V_TacChestrig_gren_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"H_PilotHelmetHeli_O",
			"V_TacChestrig_gren_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class PB_ISR_SOL_ENG: PB_ISR_SOL_R
	{
		editorpreview = "PB_EP\ui\Israel\PB_ISR_SOL_ENG.jpg";
		displayName = "Engineer";
		role = "Sapper";
		icon = "IconManEngineer";
        backpack = "PB_ISR_ENG_BP";
		engineer=1;
	};
	class PB_ISR_SOL_EOD: PB_ISR_SOL_R
	{
		editorpreview = "PB_EP\ui\Israel\PB_ISR_SOL_EOD.jpg";
		displayName = "EOD";
		role = "Sapper";
		icon = "iconManExplosive";
        backpack = "PB_ISR_EOD_BP";
		engineer=1;
		canDeactivateMines=1;
		detectSkill=38;
	};
	class PB_ISR_SOL_GRE: PB_ISR_SOL_R
	{
		editorpreview = "PB_EP\ui\Israel\PB_ISR_SOL_GRE.jpg";
		displayName = "Grenadier";
		backpack = "PB_ISR_GRE_BP";
		weapons[] = {"PB_ISR_RIF_M4_GL","Throw","Put"};
		respawnWeapons[] = {"PB_ISR_RIF_M4_GL","Throw","Put"};
		magazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
		respawnMagazines[] = {"rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_M441_HE","rhs_mag_m714_White""rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag","rhs_mag_30Rnd_556x45_M855A1_Stanag"};
	};