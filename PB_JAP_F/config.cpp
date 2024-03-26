class CfgPatches
{
	class PB_JAP_F
	{
		units[] = 
		{
			"PB_JAP_SOL_R","PB_JAP_SOL_HAT","PB_JAP_SOL_SL","PB_JAP_SOL_MED","PB_JAP_SOL_MG","PB_JAP_SOL_SNI","PB_JAP_SOL_C",
			"PB_JAP_SOL_HP","PB_JAP_SOL_JP","PB_JAP_SOL_EOD","PB_JAP_SOL_ENG","PB_JAP_SOL_AA","PB_JAP_L16","PB_JAP_TYPE16",
			"PB_JAP_OH6D","PB_JAP_AH64E","PB_JAP_Chinook","PB_JAP_UH60M"
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Japan_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_JAP_Faction
	{
		displayName = "Japan Self-Defense Forces";
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
	class PB_JAP_AA
	{
		displayName = "Anti-Air";
	};
	class PB_JAP_APCs
	{
		displayName = "APCs";
	};
	class PB_JAP_ART
	{
		displayName = "Artillery";
	};
	class PB_JAP_Boats
	{
		displayName = "Boats";
	};
	class PB_JAP_Cars
	{
		displayName = "Cars";
	};	
	class PB_JAP_Drones
	{
		displayName = "Drones";
	};	
	class PB_JAP_HELI
	{
		displayName = "Helicopters";
	};
	class PB_JAP_IFVs
	{
		displayName = "IFVs";
	};
	class PB_JAP_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_JAP_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_JAP_Planes
	{
		displayName = "Planes";
	};
	class PB_JAP_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_JAP_Trucks
	{
		displayName = "Trucks";
	};
	class PB_JAP_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_JAP_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_JAP_Top
	{
		displayname = "Japan Self-Defense Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_JAP_AA
	{
		displayName = "Anti-Air";
	};
	class PB_JAP_APCs
	{
		displayName = "APCs";
	};
	class PB_JAP_ART
	{
		displayName = "Artillery";
	};
	class PB_JAP_Boats
	{
		displayName = "Boats";
	};
	class PB_JAP_Cars
	{
		displayName = "Cars";
	};
	class PB_JAP_Drones
	{
		displayName = "Drones";
	};	
	class PB_JAP_HELI
	{
		displayName = "Helicopters";
	};
	class PB_JAP_IFVs
	{
		displayName = "IFVs";
	};
	class PB_JAP_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_JAP_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_JAP_Planes
	{
		displayName = "Planes";
	};
	class PB_JAP_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_JAP_Trucks
	{
		displayName = "Trucks";
	};
	class PB_JAP_TUR
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