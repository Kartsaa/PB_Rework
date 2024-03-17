class CfgPatches
{
	class PB_GRE_F
	{
		units[] = 
		{
			"PB_GRE_SOL_R","PB_GRE_SOL_RAT","PB_GRE_SOL_AT","PB_GRE_SOL_SL","PB_GRE_SOL_MED","PB_GRE_SOL_MG","PB_GRE_SOL_MK",
			"PB_GRE_SOL_C","PB_GRE_SOL_HP","PB_GRE_SOL_JP","PB_GRE_SOL_ENG","PB_GRE_SOL_EOD","PB_GRE_LEO","PB_GRE_BMP1",
			"PB_GRE_M113A3_AMMO","PB_GRE_M113A3_M2","PB_GRE_M113A3_MK19","PB_GRE_M113A3_MED","PB_GRE_M113A3","PB_GRE_M1025_M2",
			"PB_GRE_M1025_MK19","PB_GRE_M1025","PB_GRE_M1117","PB_GRE_HEMTT_A","PB_GRE_HEMTT_F","PB_GRE_HEMTT_R",
			"PB_GRE_HEMTT_T","PB_GRE_HEMTT_M","PB_GRE_HEMTT_C","PB_GRE_AH64E","PB_GRE_M109","PB_GRE_Chinook",
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Greek_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_GRE_Faction
	{
		displayName = "Hellenic Armed Forces";
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
	class PB_GRE_AA
	{
		displayName = "Anti-Air";
	};
	class PB_GRE_APCs
	{
		displayName = "APCs";
	};
	class PB_GRE_ART
	{
		displayName = "Artillery";
	};
	class PB_GRE_Boats
	{
		displayName = "Boats";
	};
	class PB_GRE_Cars
	{
		displayName = "Cars";
	};	
	class PB_GRE_Drones
	{
		displayName = "Drones";
	};	
	class PB_GRE_HELI
	{
		displayName = "Helicopters";
	};
	class PB_GRE_IFVs
	{
		displayName = "IFVs";
	};
	class PB_GRE_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_GRE_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_GRE_Planes
	{
		displayName = "Planes";
	};
	class PB_GRE_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_GRE_Trucks
	{
		displayName = "Trucks";
	};
	class PB_GRE_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_GRE_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_GRE_Top
	{
		displayname = "Hellenic Armed Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_GRE_AA
	{
		displayName = "Anti-Air";
	};
	class PB_GRE_APCs
	{
		displayName = "APCs";
	};
	class PB_GRE_ART
	{
		displayName = "Artillery";
	};
	class PB_GRE_Boats
	{
		displayName = "Boats";
	};
	class PB_GRE_Cars
	{
		displayName = "Cars";
	};
	class PB_GRE_Drones
	{
		displayName = "Drones";
	};	
	class PB_GRE_HELI
	{
		displayName = "Helicopters";
	};
	class PB_GRE_IFVs
	{
		displayName = "IFVs";
	};
	class PB_GRE_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_GRE_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_GRE_Planes
	{
		displayName = "Planes";
	};
	class PB_GRE_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_GRE_Trucks
	{
		displayName = "Trucks";
	};
	class PB_GRE_TUR
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