class CfgPatches
{
	class PB_BEL_F
	{
		units[] = 
		{
			"PB_BEL_SOL_R","PB_BEL_SOL_SL", "PB_BEL_SOL_MED", "PB_BEL_SOL_RAT", "PB_BEL_SOL_MG", "PB_BEL_SOL_SNI","PB_BEL_SOL_C","PB_BEL_SOL_JP",
			"PB_BEL_SOL_HP","PB_BEL_SOL_ENG","PB_BEL_SOL_EOD","PB_BEL_SOL_GRE", "PB_BEL_OSHKOSH_LATV", "PB_BEL_M1", "PB_BEL_OSHKOSH_M240_LATV",
			"PB_BEL_PIRANHA_APC", 
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Belgian_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_BEL_Faction
	{
		displayName = "Belgian Armed Forces";
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
	class PB_BEL_AA
	{
		displayName = "Anti-Air";
	};
	class PB_BEL_APCs
	{
		displayName = "APCs";
	};
	class PB_BEL_ART
	{
		displayName = "Artillery";
	};
	class PB_BEL_Boats
	{
		displayName = "Boats";
	};
	class PB_BEL_Cars
	{
		displayName = "Cars";
	};	
	class PB_BEL_Drones
	{
		displayName = "Drones";
	};	
	class PB_BEL_HELI
	{
		displayName = "Helicopters";
	};
	class PB_BEL_IFVs
	{
		displayName = "IFVs";
	};
	class PB_BEL_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_BEL_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_BEL_Planes
	{
		displayName = "Planes";
	};
	class PB_BEL_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_BEL_Trucks
	{
		displayName = "Trucks";
	};
	class PB_BEL_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_BEL_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_BEL_Top
	{
		displayname = "Belgian Armed Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_BEL_AA
	{
		displayName = "Anti-Air";
	};
	class PB_BEL_APCs
	{
		displayName = "APCs";
	};
	class PB_BEL_ART
	{
		displayName = "Artillery";
	};
	class PB_BEL_Boats
	{
		displayName = "Boats";
	};
	class PB_BEL_Cars
	{
		displayName = "Cars";
	};
	class PB_BEL_Drones
	{
		displayName = "Drones";
	};	
	class PB_BEL_HELI
	{
		displayName = "Helicopters";
	};
	class PB_BEL_IFVs
	{
		displayName = "IFVs";
	};
	class PB_BEL_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_BEL_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_BEL_Planes
	{
		displayName = "Planes";
	};
	class PB_BEL_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_BEL_Trucks
	{
		displayName = "Trucks";
	};
	class PB_BEL_TUR
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