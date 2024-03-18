class CfgPatches
{
	class PB_IRE_F
	{
		units[] = 
		{
			"PB_IRE_SOL_R","PB_IRE_SOL_SL","PB_IRE_SOL_MG","PB_IRE_SOL_MED","PB_IRE_SOL_SNI","PB_IRE_SOL_HAT","PB_IRE_SOL_RAT",
			"PB_IRE_SOL_JAV","PB_IRE_SOL_C","PB_IRE_SOL_EOD","PB_IRE_SOL_ENG","PB_IRE_SOL_GRE","PB_IRE_PIRANHA",
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_IRISH_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_IRE_Faction
	{
		displayName = "Irish Defence Forces";
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
	class PB_IRE_AA
	{
		displayName = "Anti-Air";
	};
	class PB_IRE_APCs
	{
		displayName = "APCs";
	};
	class PB_IRE_ART
	{
		displayName = "Artillery";
	};
	class PB_IRE_Boats
	{
		displayName = "Boats";
	};
	class PB_IRE_Cars
	{
		displayName = "Cars";
	};	
	class PB_IRE_Drones
	{
		displayName = "Drones";
	};	
	class PB_IRE_HELI
	{
		displayName = "Helicopters";
	};
	class PB_IRE_IFVs
	{
		displayName = "IFVs";
	};
	class PB_IRE_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_IRE_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_IRE_Planes
	{
		displayName = "Planes";
	};
	class PB_IRE_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_IRE_Trucks
	{
		displayName = "Trucks";
	};
	class PB_IRE_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_IRE_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_IRE_Top
	{
		displayname = "Irish Defence Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_IRE_AA
	{
		displayName = "Anti-Air";
	};
	class PB_IRE_APCs
	{
		displayName = "APCs";
	};
	class PB_IRE_ART
	{
		displayName = "Artillery";
	};
	class PB_IRE_Boats
	{
		displayName = "Boats";
	};
	class PB_IRE_Cars
	{
		displayName = "Cars";
	};
	class PB_IRE_Drones
	{
		displayName = "Drones";
	};	
	class PB_IRE_HELI
	{
		displayName = "Helicopters";
	};
	class PB_IRE_IFVs
	{
		displayName = "IFVs";
	};
	class PB_IRE_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_IRE_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_IRE_Planes
	{
		displayName = "Planes";
	};
	class PB_IRE_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_IRE_Trucks
	{
		displayName = "Trucks";
	};
	class PB_IRE_TUR
	{
		displayName = "Turrets";
	};
};
#include "cfggroups.hpp"
#include "cfgweapons.hpp"
class Eventhandlers;
class CfgVehicles
{
	#include "cfgBackpacks.hpp"
	#include "cfgInfantry.hpp"
	#include "cfgVehicles.hpp"
};