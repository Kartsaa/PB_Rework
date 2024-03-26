class CfgPatches
{
	class PB_LAT_F
	{
		units[] = 
		{
			"PB_LAT_SOL_R","PB_LAT_SOL_RAT","PB_LAT_SOL_AT","PB_LAT_SOL_SL","PB_LAT_SOL_MED","PB_LAT_SOL_MG","PB_LAT_SOL_SNI",
			"PB_LAT_SOL_C","PB_LAT_SOL_HP","PB_LAT_SOL_ENG","PB_LAT_SOL_EOD","PB_LAT_SOL_GRE","PB_LAT_SOL_AA","PB_LAT_L16",
			"PB_LAT_M109","PB_LAT_M142","PB_LAT_MAX650","PB_LAT_DAGOR"
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Latvian_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_LAT_Faction
	{
		displayName = "Latvian National Armed Forces";
		priority = 3;
		side = 1;
		icon = "";
	};
};
class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
class CfgVehicleClasses
{
	class PB_LAT_AA
	{
		displayName = "Anti-Air";
	};
	class PB_LAT_APCs
	{
		displayName = "APCs";
	};
	class PB_LAT_ART
	{
		displayName = "Artillery";
	};
	class PB_LAT_Boats
	{
		displayName = "Boats";
	};
	class PB_LAT_Cars
	{
		displayName = "Cars";
	};	
	class PB_LAT_Drones
	{
		displayName = "Drones";
	};	
	class PB_LAT_HELI
	{
		displayName = "Helicopters";
	};
	class PB_LAT_IFVs
	{
		displayName = "IFVs";
	};
	class PB_LAT_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_LAT_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_LAT_Planes
	{
		displayName = "Planes";
	};
	class PB_LAT_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_LAT_Trucks
	{
		displayName = "Trucks";
	};
	class PB_LAT_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_LAT_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_LAT_Top
	{
		displayname = "Latvian National Armed Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_LAT_AA
	{
		displayName = "Anti-Air";
	};
	class PB_LAT_APCs
	{
		displayName = "APCs";
	};
	class PB_LAT_ART
	{
		displayName = "Artillery";
	};
	class PB_LAT_Boats
	{
		displayName = "Boats";
	};
	class PB_LAT_Cars
	{
		displayName = "Cars";
	};
	class PB_LAT_Drones
	{
		displayName = "Drones";
	};	
	class PB_LAT_HELI
	{
		displayName = "Helicopters";
	};
	class PB_LAT_IFVs
	{
		displayName = "IFVs";
	};
	class PB_LAT_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_LAT_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_LAT_Planes
	{
		displayName = "Planes";
	};
	class PB_LAT_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_LAT_Trucks
	{
		displayName = "Trucks";
	};
	class PB_LAT_TUR
	{
		displayName = "Turrets";
	};
};
#include "cfgworlds.hpp"
#include "cfggroups.hpp"
#include "cfgweapons.hpp"
class Eventhandlers;
class CfgVehicles
{
	#include "cfgBackpacks.hpp"
	#include "cfgInfantry.hpp"
	#include "cfgVehicles.hpp"
};