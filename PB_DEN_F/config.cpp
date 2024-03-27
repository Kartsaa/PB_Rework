class CfgPatches
{
	class PB_DEN_F
	{
		units[] = 
		{
			"PB_DEN_SOL_R","PB_DEN_SOL_SL","PB_DEN_SOL_MED","PB_DEN_SOL_MG","PB_DEN_SOL_MK","PB_DEN_SOL_LAT","PB_DEN_SOL_HAT",
			"PB_DEN_SOL_C","PB_DEN_SOL_JP","PB_DEN_SOL_HP","PB_DEN_SOL_ENG","PB_DEN_SOL_EOD","PB_DEN_SOL_GRE","PB_DEN_MORTAR",
			"PB_DEN_LEO",
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Danish_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_DEN_Faction
	{
		displayName = "Danish Armed Forces";
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
	class PB_DEN_AA
	{
		displayName = "Anti-Air";
	};
	class PB_DEN_APCs
	{
		displayName = "APCs";
	};
	class PB_DEN_ART
	{
		displayName = "Artillery";
	};
	class PB_DEN_Boats
	{
		displayName = "Boats";
	};
	class PB_DEN_Cars
	{
		displayName = "Cars";
	};	
	class PB_DEN_Drones
	{
		displayName = "Drones";
	};	
	class PB_DEN_HELI
	{
		displayName = "Helicopters";
	};
	class PB_DEN_IFVs
	{
		displayName = "IFVs";
	};
	class PB_DEN_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_DEN_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_DEN_Planes
	{
		displayName = "Planes";
	};
	class PB_DEN_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_DEN_Trucks
	{
		displayName = "Trucks";
	};
	class PB_DEN_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_DEN_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_DEN_Top
	{
		displayname = "Danish Armed Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_DEN_AA
	{
		displayName = "Anti-Air";
	};
	class PB_DEN_APCs
	{
		displayName = "APCs";
	};
	class PB_DEN_ART
	{
		displayName = "Artillery";
	};
	class PB_DEN_Boats
	{
		displayName = "Boats";
	};
	class PB_DEN_Cars
	{
		displayName = "Cars";
	};
	class PB_DEN_Drones
	{
		displayName = "Drones";
	};	
	class PB_DEN_HELI
	{
		displayName = "Helicopters";
	};
	class PB_DEN_IFVs
	{
		displayName = "IFVs";
	};
	class PB_DEN_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_DEN_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_DEN_Planes
	{
		displayName = "Planes";
	};
	class PB_DEN_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_DEN_Trucks
	{
		displayName = "Trucks";
	};
	class PB_DEN_TUR
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