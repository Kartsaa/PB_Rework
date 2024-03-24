///INHERI///
class I_MBT_03_cannon_F;
class rhsusf_m113_usarmy;
class rhsusf_m113_usarmy_supply;
class rhsusf_m113_usarmy_medical;
class rhsusf_m113_usarmy_unarmed;
class rhsusf_m109_usarmy;
class RHS_C130J;
class RHS_C130J_Cargo;
///ARTILLERY///

class PB_NOR_M109: rhsusf_m109_usarmy
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_NOR_Faction";
	editorCategory = "PB_NOR_Top";
	editorSubcategory = "PB_NOR_ART";
	vehicleclass = "PB_NOR_ART";
	crew = "PB_NOR_SOL_C";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///AA///
///TANKS///
	class PB_NOR_LEO: I_MBT_03_cannon_F
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_NOR_Faction";
		editorCategory = "PB_NOR_Top";
		editorSubcategory = "PB_NOR_Tanks";
		vehicleclass = "PB_NOR_Tanks";
		crew = "PB_NOR_SOL_C";
		displayname = "Leopard 2SG";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[]=
		{
			"PB_LEO_NOR",1
		};
		class TextureSources
		{
				class PB_LEO_NOR
				{
					displayName="Olive";
					author="Kartsa";
					textures[]=
					{
						"PB_NOR_F\data\OLV_mbt_03_ext01_co.paa",
						"PB_NOR_F\data\OLV_mbt_03_ext02_co.paa",
						"PB_NOR_F\data\OLV_mbt_03_rcws_co.paa",
						"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
					};
					factions[]=
					{
						"PB_NOR_Faction"
					};
				};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
///APCS///
	class PB_NOR_M113A3_M2: rhsusf_m113_usarmy
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_NOR_Faction";
		editorCategory = "PB_NOR_Top";
		editorSubcategory = "PB_NOR_APCs";
		vehicleclass = "PB_NOR_APCs";
		crew = "PB_NOR_SOL_R";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = 
		{
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_od_co.paa"
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class PB_NOR_M113A3_AMMO: rhsusf_m113_usarmy_supply
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_NOR_Faction";
		editorCategory = "PB_NOR_Top";
		editorSubcategory = "PB_NOR_APCs";
		vehicleclass = "PB_NOR_APCs";
		crew = "PB_NOR_SOL_R";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = 
		{
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_od_co.paa"
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class PB_NOR_M113A3_MED: rhsusf_m113_usarmy_medical
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_NOR_Faction";
		editorCategory = "PB_NOR_Top";
		editorSubcategory = "PB_NOR_APCs";
		vehicleclass = "PB_NOR_APCs";
		crew = "PB_NOR_SOL_R";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = 
		{
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_od_co.paa"
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
	class PB_NOR_M113A3: rhsusf_m113_usarmy_unarmed
	{
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_NOR_Faction";
		editorCategory = "PB_NOR_Top";
		editorSubcategory = "PB_NOR_APCs";
		vehicleclass = "PB_NOR_APCs";
		crew = "PB_NOR_SOL_R";
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6"};
		hiddenSelectionsTextures[] = 
		{
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_od_l_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_02_od_l_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa",
			"rhsusf\addons\rhsusf_m113\data_new\m113a3_shield_od_co.paa"
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
///CARS///
///MRAP///
///HELICOPTERS///
///TURRETS///
///PLANES///
class PB_NOR_C130J: RHS_C130J
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_NOR_Faction";
	editorCategory = "PB_NOR_Top";
	editorSubcategory = "PB_NOR_Planes";
	vehicleclass = "PB_NOR_Planes";
	crew = "PB_NOR_SOL_HP";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_NOR_C130J_Cargo: RHS_C130J_Cargo
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_NOR_Faction";
	editorCategory = "PB_NOR_Top";
	editorSubcategory = "PB_NOR_Planes";
	vehicleclass = "PB_NOR_Planes";
	crew = "PB_NOR_SOL_HP";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};