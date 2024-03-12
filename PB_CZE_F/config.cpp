class CfgPatches
{
	class PB_CZE_F
	{
		units[] = 
		{
			"PB_CZE_SOL_R","PB_CZE_SOL_SL","PB_CZE_SOL_MED","PB_CZE_SOL_MG","PB_CZE_SOL_SNI","PB_CZE_SOL_RAT","PB_CZE_SOL_HAT", "PB_CZE_SOL_JP", "PB_CZE_SOL_HP",
			"PB_CZE_SOL_C","PB_CZE_SOL_ENG","PB_CZE_SOL_EOD","PB_CZE_SOL_GRE","PB_CZE_T72M","PB_CZE_PANDUR","PB_CZE_BVP1","PB_CZE_BVP2","PB_CZE_BRDM2",
			"PB_CZE_GRIPEN","PB_CZE_ALCA","PB_CZE_Viper","PB_CZE_Mi17"
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Czech_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_CZE_Faction
	{
		displayName = "Army of the Czech Republic";
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
	class PB_CZE_AA
	{
		displayName = "Anti-Air";
	};
	class PB_CZE_APCs
	{
		displayName = "APCs";
	};
	class PB_CZE_ART
	{
		displayName = "Artillery";
	};
	class PB_CZE_Boats
	{
		displayName = "Boats";
	};
	class PB_CZE_Cars
	{
		displayName = "Cars";
	};	
	class PB_CZE_Drones
	{
		displayName = "Drones";
	};	
	class PB_CZE_HELI
	{
		displayName = "Helicopters";
	};
	class PB_CZE_IFVs
	{
		displayName = "IFVs";
	};
	class PB_CZE_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_CZE_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_CZE_Planes
	{
		displayName = "Planes";
	};
	class PB_CZE_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_CZE_Trucks
	{
		displayName = "Trucks";
	};
	class PB_CZE_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_CZE_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_CZE_Top
	{
		displayname = "Army of the Czech Republic";
	};
};
class CfgEditorSubcategories
{
	class PB_CZE_AA
	{
		displayName = "Anti-Air";
	};
	class PB_CZE_APCs
	{
		displayName = "APCs";
	};
	class PB_CZE_ART
	{
		displayName = "Artillery";
	};
	class PB_CZE_Boats
	{
		displayName = "Boats";
	};
	class PB_CZE_Cars
	{
		displayName = "Cars";
	};
	class PB_CZE_Drones
	{
		displayName = "Drones";
	};	
	class PB_CZE_HELI
	{
		displayName = "Helicopters";
	};
	class PB_CZE_IFVs
	{
		displayName = "IFVs";
	};
	class PB_CZE_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_CZE_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_CZE_Planes
	{
		displayName = "Planes";
	};
	class PB_CZE_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_CZE_Trucks
	{
		displayName = "Trucks";
	};
	class PB_CZE_TUR
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