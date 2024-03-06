class CfgPatches
{
	class PB_AUS_F
	{
		units[] = 
		{
			"PB_AUS_SOL_R"
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Australian_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_AUS_Faction
	{
		displayName = "Australian Defence Force";
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
	class PB_AUS_AA
	{
		displayName = "Anti-Air";
	};
	class PB_AUS_APCs
	{
		displayName = "APCs";
	};
	class PB_AUS_ART
	{
		displayName = "Artillery";
	};
	class PB_AUS_Boats
	{
		displayName = "Boats";
	};
	class PB_AUS_Cars
	{
		displayName = "Cars";
	};	
	class PB_AUS_Drones
	{
		displayName = "Drones";
	};	
	class PB_AUS_HELI
	{
		displayName = "Helicopters";
	};
	class PB_AUS_IFVs
	{
		displayName = "IFVs";
	};
	class PB_AUS_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_AUS_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_AUS_MRAP_D
	{
		displayName = "MRAPs (Desert)";
	};
	class PB_AUS_Planes
	{
		displayName = "Planes";
	};
	class PB_AUS_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_AUS_Trucks
	{
		displayName = "Trucks";
	};
	class PB_AUS_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_AUS_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_AUS_Top
	{
		displayname = "AUS Armed Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_AUS_AA
	{
		displayName = "Anti-Air";
	};
	class PB_AUS_APCs
	{
		displayName = "APCs";
	};
	class PB_AUS_ART
	{
		displayName = "Artillery";
	};
	class PB_AUS_Boats
	{
		displayName = "Boats";
	};
	class PB_AUS_Cars
	{
		displayName = "Cars";
	};
	class PB_AUS_Drones
	{
		displayName = "Drones";
	};	
	class PB_AUS_HELI
	{
		displayName = "Helicopters";
	};
	class PB_AUS_IFVs
	{
		displayName = "IFVs";
	};
	class PB_AUS_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_AUS_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_AUS_Planes
	{
		displayName = "Planes";
	};
	class PB_AUS_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_AUS_Trucks
	{
		displayName = "Trucks";
	};
	class PB_AUS_TUR
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