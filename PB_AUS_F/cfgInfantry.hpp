
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_AUS_SOL_B: B_Soldier_base_G
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
	class PB_AUS_SOL_R: PB_AUS_SOL_B
	{
		vehicleClass = "PB_AUS_Infantry";
		editorCategory = "PB_AUS_Top";
		editorSubcategory = "PB_BAUS_Infantry";
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