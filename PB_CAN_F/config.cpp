class CfgPatches
{
	class PB_CAN_F
	{
		units[] = 
		{
			"PB_CAN_SOL_R", "PB_CAN_SOL_SL", "PB_CAN_SOL_MED", "PB_CAN_SOL_MG", "PB_CAN_SOL_SNI", "PB_CAN_SOL_RAT", "PB_CAN_SOL_HAT",
			"PB_CAN_SOL_C", "PB_CAN_SOL_HP", "PB_CAN_SOL_JP", "PB_CAN_SOL_ENG", "PB_CAN_SOL_EOD", "PB_CAN_SOL_GRE", "PB_CAN_LEO",
			"PB_CAN_TOW", "PB_CAN_COUGAR_4X4", "PB_CAN_COUGAR_6x6", "PB_CAN_RADAR", "PB_CAN_MRZR", "PB_CAN_L16", "PB_CAN_M777",
			"PB_CAN_C130", "PB_CAN_C130C", "PB_CAN_Chinook",
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Canadian_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_CAN_Faction
	{
		displayName = "Canadian Armed Forces";
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
	class PB_CAN_AA
	{
		displayName = "Anti-Air";
	};
	class PB_CAN_APCs
	{
		displayName = "APCs";
	};
	class PB_CAN_ART
	{
		displayName = "Artillery";
	};
	class PB_CAN_Boats
	{
		displayName = "Boats";
	};
	class PB_CAN_Cars
	{
		displayName = "Cars";
	};	
	class PB_CAN_Drones
	{
		displayName = "Drones";
	};	
	class PB_CAN_HELI
	{
		displayName = "Helicopters";
	};
	class PB_CAN_IFVs
	{
		displayName = "IFVs";
	};
	class PB_CAN_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_CAN_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_CAN_Planes
	{
		displayName = "Planes";
	};
	class PB_CAN_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_CAN_Trucks
	{
		displayName = "Trucks";
	};
	class PB_CAN_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_CAN_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_CAN_Top
	{
		displayname = "Canadian Armed Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_CAN_AA
	{
		displayName = "Anti-Air";
	};
	class PB_CAN_APCs
	{
		displayName = "APCs";
	};
	class PB_CAN_ART
	{
		displayName = "Artillery";
	};
	class PB_CAN_Boats
	{
		displayName = "Boats";
	};
	class PB_CAN_Cars
	{
		displayName = "Cars";
	};
	class PB_CAN_Drones
	{
		displayName = "Drones";
	};	
	class PB_CAN_HELI
	{
		displayName = "Helicopters";
	};
	class PB_CAN_IFVs
	{
		displayName = "IFVs";
	};
	class PB_CAN_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_CAN_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_CAN_Planes
	{
		displayName = "Planes";
	};
	class PB_CAN_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_CAN_Trucks
	{
		displayName = "Trucks";
	};
	class PB_CAN_TUR
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