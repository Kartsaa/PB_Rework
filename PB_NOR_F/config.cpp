class CfgPatches
{
	class PB_NOR_F
	{
		units[] = 
		{
			"PB_NOR_SOL_R","PB_NOR_SOL_SL","PB_NOR_SOL_MED","PB_NOR_SOL_MG","PB_NOR_SOL_MK","PB_NOR_SOL_HAT","PB_NOR_SOL_LAT","PB_NOR_SOL_ENG",
			"PB_NOR_SOL_EOD","PB_NOR_SOL_C","PB_NOR_SOL_HP","PB_NOR_SOL_JP","PB_NOR_LEO","PB_NOR_M113A3_M2","PB_NOR_M113A3_MED","PB_NOR_M113A3_AMMO",
			"PB_NOR_M113A3","PB_NOR_M109","PB_NOR_C130J","PB_NOR_C130J_CARGO"
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Norway_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_NOR_Faction
	{
		displayName = "Norwegian Armed Forces";
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
	class PB_NOR_AA
	{
		displayName = "Anti-Air";
	};
	class PB_NOR_APCs
	{
		displayName = "APCs";
	};
	class PB_NOR_ART
	{
		displayName = "Artillery";
	};
	class PB_NOR_Boats
	{
		displayName = "Boats";
	};
	class PB_NOR_Cars
	{
		displayName = "Cars";
	};	
	class PB_NOR_Drones
	{
		displayName = "Drones";
	};	
	class PB_NOR_HELI
	{
		displayName = "Helicopters";
	};
	class PB_NOR_IFVs
	{
		displayName = "IFVs";
	};
	class PB_NOR_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_NOR_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_NOR_Planes
	{
		displayName = "Planes";
	};
	class PB_NOR_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_NOR_Trucks
	{
		displayName = "Trucks";
	};
	class PB_NOR_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_NOR_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_NOR_Top
	{
		displayname = "Norwegian Armed Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_NOR_AA
	{
		displayName = "Anti-Air";
	};
	class PB_NOR_APCs
	{
		displayName = "APCs";
	};
	class PB_NOR_ART
	{
		displayName = "Artillery";
	};
	class PB_NOR_Boats
	{
		displayName = "Boats";
	};
	class PB_NOR_Cars
	{
		displayName = "Cars";
	};
	class PB_NOR_Drones
	{
		displayName = "Drones";
	};	
	class PB_NOR_HELI
	{
		displayName = "Helicopters";
	};
	class PB_NOR_IFVs
	{
		displayName = "IFVs";
	};
	class PB_NOR_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_NOR_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_NOR_Planes
	{
		displayName = "Planes";
	};
	class PB_NOR_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_NOR_Trucks
	{
		displayName = "Trucks";
	};
	class PB_NOR_TUR
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