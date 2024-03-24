class CfgPatches
{
	class PB_EST_F
	{
		units[] = 
		{
			"PB_EST_SOL_R","PB_EST_SOL_SL","PB_EST_SOL_MED","PB_EST_SOL_MG","PB_EST_SOL_MK","PB_EST_SOL_HAT","PB_EST_SOL_C",
			"PB_EST_SOL_JP","PB_EST_SOL_HP","PB_EST_SOL_ENG","PB_EST_SOL_EOD","PB_EST_SOL_GRE","PB_EST_M252","PB_EST_OTOKAR",
			"PB_EST_M142",
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Estonian_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_EST_Faction
	{
		displayName = "Estonian Defence Forces";
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
	class PB_EST_AA
	{
		displayName = "Anti-Air";
	};
	class PB_EST_APCs
	{
		displayName = "APCs";
	};
	class PB_EST_ART
	{
		displayName = "Artillery";
	};
	class PB_EST_Boats
	{
		displayName = "Boats";
	};
	class PB_EST_Cars
	{
		displayName = "Cars";
	};	
	class PB_EST_Drones
	{
		displayName = "Drones";
	};	
	class PB_EST_HELI
	{
		displayName = "Helicopters";
	};
	class PB_EST_IFVs
	{
		displayName = "IFVs";
	};
	class PB_EST_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_EST_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_EST_Planes
	{
		displayName = "Planes";
	};
	class PB_EST_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_EST_Trucks
	{
		displayName = "Trucks";
	};
	class PB_EST_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_EST_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_EST_Top
	{
		displayname = "Estonian Defence Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_EST_AA
	{
		displayName = "Anti-Air";
	};
	class PB_EST_APCs
	{
		displayName = "APCs";
	};
	class PB_EST_ART
	{
		displayName = "Artillery";
	};
	class PB_EST_Boats
	{
		displayName = "Boats";
	};
	class PB_EST_Cars
	{
		displayName = "Cars";
	};
	class PB_EST_Drones
	{
		displayName = "Drones";
	};	
	class PB_EST_HELI
	{
		displayName = "Helicopters";
	};
	class PB_EST_IFVs
	{
		displayName = "IFVs";
	};
	class PB_EST_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_EST_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_EST_Planes
	{
		displayName = "Planes";
	};
	class PB_EST_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_EST_Trucks
	{
		displayName = "Trucks";
	};
	class PB_EST_TUR
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