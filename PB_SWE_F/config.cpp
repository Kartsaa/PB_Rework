class CfgPatches
{
	class PB_SWE_F
	{
		units[] = 
		{
			"PB_SWE_SOL_R","PB_SWE_SOL_SL","PB_SWE_SOL_MED","PB_SWE_SOL_MG","PB_SWE_SOL_MK","PB_SWE_SOL_SNI","PB_SWE_SOL_HAT","PB_SWE_SOL_LAT","PB_SWE_SOL_C",
			"PB_SWE_SOL_HP","PB_SWE_SOL_JP","PB_SWE_SOL_ENG","PB_SWE_SOL_EOD","PB_SWE_LEO","PB_SWE_TGB16_MG","PB_SWE_TGB16_GL","PB_SWE_MORTAR","PB_SWE_SAAB"
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Swedish_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_SWE_Faction
	{
		displayName = "Swedish Armed Forces";
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
	class PB_SWE_AA
	{
		displayName = "Anti-Air";
	};
	class PB_SWE_APCs
	{
		displayName = "APCs";
	};
	class PB_SWE_ART
	{
		displayName = "Artillery";
	};
	class PB_SWE_Boats
	{
		displayName = "Boats";
	};
	class PB_SWE_Cars
	{
		displayName = "Cars";
	};	
	class PB_SWE_Drones
	{
		displayName = "Drones";
	};	
	class PB_SWE_HELI
	{
		displayName = "Helicopters";
	};
	class PB_SWE_IFVs
	{
		displayName = "IFVs";
	};
	class PB_SWE_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_SWE_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_SWE_Planes
	{
		displayName = "Planes";
	};
	class PB_SWE_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_SWE_Trucks
	{
		displayName = "Trucks";
	};
	class PB_SWE_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_SWE_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_SWE_Top
	{
		displayname = "Swedish Armed Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_SWE_AA
	{
		displayName = "Anti-Air";
	};
	class PB_SWE_APCs
	{
		displayName = "APCs";
	};
	class PB_SWE_ART
	{
		displayName = "Artillery";
	};
	class PB_SWE_Boats
	{
		displayName = "Boats";
	};
	class PB_SWE_Cars
	{
		displayName = "Cars";
	};
	class PB_SWE_Drones
	{
		displayName = "Drones";
	};	
	class PB_SWE_HELI
	{
		displayName = "Helicopters";
	};
	class PB_SWE_IFVs
	{
		displayName = "IFVs";
	};
	class PB_SWE_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_SWE_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_SWE_Planes
	{
		displayName = "Planes";
	};
	class PB_SWE_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_SWE_Trucks
	{
		displayName = "Trucks";
	};
	class PB_SWE_TUR
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