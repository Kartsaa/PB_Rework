class CfgPatches
{
	class PB_HUN_F
	{
		units[] = 
		{
			"PB_HUN_SOL_R","PB_HUN_SOL_SL","PB_HUN_SOL_MED","PB_HUN_SOL_MG","PB_HUN_SOL_SNI","PB_HUN_SOL_HAT","PB_HUN_SOL_C",
			"PB_HUN_SOL_JP","PB_HUN_SOL_HP","PB_HUN_SOL_ENG","PB_HUN_SOL_EOD","PB_HUN_SOL_GRE","PB_HUN_LEO","PB_HUN_T72",
			"PB_HUN_BTR80","PB_HUN_BTR80A","PB_HUN_M1025","PB_HUN_M1025_M2","PB_HUN_PTS","PB_HUN_GRIPEN","PB_HUN_Mi24",
			"PB_HUN_Mi17",

		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Hungary_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_HUN_Faction
	{
		displayName = "Hungarian Defence Forces";
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
	class PB_HUN_AA
	{
		displayName = "Anti-Air";
	};
	class PB_HUN_APCs
	{
		displayName = "APCs";
	};
	class PB_HUN_ART
	{
		displayName = "Artillery";
	};
	class PB_HUN_Boats
	{
		displayName = "Boats";
	};
	class PB_HUN_Cars
	{
		displayName = "Cars";
	};	
	class PB_HUN_Drones
	{
		displayName = "Drones";
	};	
	class PB_HUN_HELI
	{
		displayName = "Helicopters";
	};
	class PB_HUN_IFVs
	{
		displayName = "IFVs";
	};
	class PB_HUN_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_HUN_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_HUN_Planes
	{
		displayName = "Planes";
	};
	class PB_HUN_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_HUN_Trucks
	{
		displayName = "Trucks";
	};
	class PB_HUN_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_HUN_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_HUN_Top
	{
		displayname = "Hungarian Defence Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_HUN_AA
	{
		displayName = "Anti-Air";
	};
	class PB_HUN_APCs
	{
		displayName = "APCs";
	};
	class PB_HUN_ART
	{
		displayName = "Artillery";
	};
	class PB_HUN_Boats
	{
		displayName = "Boats";
	};
	class PB_HUN_Cars
	{
		displayName = "Cars";
	};
	class PB_HUN_Drones
	{
		displayName = "Drones";
	};	
	class PB_HUN_HELI
	{
		displayName = "Helicopters";
	};
	class PB_HUN_IFVs
	{
		displayName = "IFVs";
	};
	class PB_HUN_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_HUN_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_HUN_Planes
	{
		displayName = "Planes";
	};
	class PB_HUN_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_HUN_Trucks
	{
		displayName = "Trucks";
	};
	class PB_HUN_TUR
	{
		displayName = "Turrets";
	};
};
#include "cfggroups.hpp"
#include "cfgweapons.hpp"
#include "cfgworlds.hpp"
class Eventhandlers;
class CfgVehicles
{
	#include "cfgBackpacks.hpp"
	#include "cfgInfantry.hpp"
	#include "cfgVehicles.hpp"
};