class CfgPatches
{
	class PB_TUR_F
	{
		units[] = 
		{
			"PB_TUR_SOL_R","PB_TUR_SOL_SL","PB_TUR_SOL_MED","PB_TUR_SOL_MG","PB_TUR_SOL_MK","PB_TUR_SOL_RAT","PB_TUR_SOL_GRE","PB_TUR_SOL_C",
			"PB_TUR_SOL_EOD","PB_TUR_SOL_ENG","PB_TUR_SOL_JP","PB_TUR_SOL_HP","PB_TUR_M11A3_AMMO","PB_TUR_M11A3_M2","PB_TUR_M113A3_MED",
			"PB_TUR_M113A3","PB_TUR_M113A3_MK19","PB_TUR_Chinook","PB_TUR_UH60","PB_TUR_Bell"
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Turkish_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_TUR_Faction
	{
		displayName = "Turkish Armed Forces";
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
	class PB_TUR_AA
	{
		displayName = "Anti-Air";
	};
	class PB_TUR_APCs
	{
		displayName = "APCs";
	};
	class PB_TUR_ART
	{
		displayName = "Artillery";
	};
	class PB_TUR_Boats
	{
		displayName = "Boats";
	};
	class PB_TUR_Cars
	{
		displayName = "Cars";
	};	
	class PB_TUR_Drones
	{
		displayName = "Drones";
	};	
	class PB_TUR_HELI
	{
		displayName = "Helicopters";
	};
	class PB_TUR_IFVs
	{
		displayName = "IFVs";
	};
	class PB_TUR_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_TUR_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_TUR_Planes
	{
		displayName = "Planes";
	};
	class PB_TUR_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_TUR_Trucks
	{
		displayName = "Trucks";
	};
	class PB_TUR_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_TUR_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_TUR_Top
	{
		displayname = "Turkish Armed Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_TUR_AA
	{
		displayName = "Anti-Air";
	};
	class PB_TUR_APCs
	{
		displayName = "APCs";
	};
	class PB_TUR_ART
	{
		displayName = "Artillery";
	};
	class PB_TUR_Boats
	{
		displayName = "Boats";
	};
	class PB_TUR_Cars
	{
		displayName = "Cars";
	};
	class PB_TUR_Drones
	{
		displayName = "Drones";
	};	
	class PB_TUR_HELI
	{
		displayName = "Helicopters";
	};
	class PB_TUR_IFVs
	{
		displayName = "IFVs";
	};
	class PB_TUR_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_TUR_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_TUR_Planes
	{
		displayName = "Planes";
	};
	class PB_TUR_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_TUR_Trucks
	{
		displayName = "Trucks";
	};
	class PB_TUR_TUR
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