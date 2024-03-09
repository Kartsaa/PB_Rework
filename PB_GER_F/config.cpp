class CfgPatches
{
	class PB_GER_F
	{
		units[] = 
		{
			"PB_GER_SOL_R","PB_GER_SOL_SL","PB_GER_SOL_MED","PB_GER_SOL_MG","PB_GER_SOL_SNI","PB_GER_SOL_AT","PB_GER_SOL_C","PB_GER_SOL_JP",
			"PB_GER_SOL_ENG", "PB_GER_SOL_HP","PB_GER_SOL_EOD","PB_GER_SOL_GRE","PB_GER_SOL_AA","PB_GER_LEO",
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_German_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_GER_Faction
	{
		displayName = "Bundeswehr";
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
	class PB_GER_AA
	{
		displayName = "Anti-Air";
	};
	class PB_GER_APCs
	{
		displayName = "APCs";
	};
	class PB_GER_ART
	{
		displayName = "Artillery";
	};
	class PB_GER_Boats
	{
		displayName = "Boats";
	};
	class PB_GER_Cars
	{
		displayName = "Cars";
	};	
	class PB_GER_Drones
	{
		displayName = "Drones";
	};	
	class PB_GER_HELI
	{
		displayName = "Helicopters";
	};
	class PB_GER_IFVs
	{
		displayName = "IFVs";
	};
	class PB_GER_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_GER_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_GER_Planes
	{
		displayName = "Planes";
	};
	class PB_GER_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_GER_Trucks
	{
		displayName = "Trucks";
	};
	class PB_GER_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_GER_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_GER_Top
	{
		displayname = "Bundeswehr";
	};
};
class CfgEditorSubcategories
{
	class PB_GER_AA
	{
		displayName = "Anti-Air";
	};
	class PB_GER_APCs
	{
		displayName = "APCs";
	};
	class PB_GER_ART
	{
		displayName = "Artillery";
	};
	class PB_GER_Boats
	{
		displayName = "Boats";
	};
	class PB_GER_Cars
	{
		displayName = "Cars";
	};
	class PB_GER_Drones
	{
		displayName = "Drones";
	};	
	class PB_GER_HELI
	{
		displayName = "Helicopters";
	};
	class PB_GER_IFVs
	{
		displayName = "IFVs";
	};
	class PB_GER_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_GER_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_GER_Planes
	{
		displayName = "Planes";
	};
	class PB_GER_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_GER_Trucks
	{
		displayName = "Trucks";
	};
	class PB_GER_TUR
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