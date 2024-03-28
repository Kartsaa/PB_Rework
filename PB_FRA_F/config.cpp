class CfgPatches
{
	class PB_FRA_F
	{
		units[] = 
		{
			"PB_FRA_SOL_SL","PB_FRA_SOL_R","PB_FRA_SOL_MED","PB_FRA_SOL_MG","PB_FRA_SOL_MK","PB_FRA_SOL_HAT","PB_FRA_SOL_LAT",
			"PB_FRA_SOL_GRE","PB_FRA_SOL_C","PB_FRA_SOL_JP","PB_FRA_SOL_HP","PB_FRA_SOL_EOD","PB_FRA_SOL_ENG","PB_FRA_MORTAR",
			"PB_FRA_C130J","PB_FRA_C130J_Cargo"
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_French_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_FRA_Faction
	{
		displayName = "French Armed Forces";
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
	class PB_FRA_AA
	{
		displayName = "Anti-Air";
	};
	class PB_FRA_APCs
	{
		displayName = "APCs";
	};
	class PB_FRA_ART
	{
		displayName = "Artillery";
	};
	class PB_FRA_Boats
	{
		displayName = "Boats";
	};
	class PB_FRA_Cars
	{
		displayName = "Cars";
	};	
	class PB_FRA_Drones
	{
		displayName = "Drones";
	};	
	class PB_FRA_HELI
	{
		displayName = "Helicopters";
	};
	class PB_FRA_IFVs
	{
		displayName = "IFVs";
	};
	class PB_FRA_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_FRA_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_FRA_Planes
	{
		displayName = "Planes";
	};
	class PB_FRA_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_FRA_Trucks
	{
		displayName = "Trucks";
	};
	class PB_FRA_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_FRA_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_FRA_Top
	{
		displayname = "French Armed Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_FRA_AA
	{
		displayName = "Anti-Air";
	};
	class PB_FRA_APCs
	{
		displayName = "APCs";
	};
	class PB_FRA_ART
	{
		displayName = "Artillery";
	};
	class PB_FRA_Boats
	{
		displayName = "Boats";
	};
	class PB_FRA_Cars
	{
		displayName = "Cars";
	};
	class PB_FRA_Drones
	{
		displayName = "Drones";
	};	
	class PB_FRA_HELI
	{
		displayName = "Helicopters";
	};
	class PB_FRA_IFVs
	{
		displayName = "IFVs";
	};
	class PB_FRA_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_FRA_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_FRA_Planes
	{
		displayName = "Planes";
	};
	class PB_FRA_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_FRA_Trucks
	{
		displayName = "Trucks";
	};
	class PB_FRA_TUR
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