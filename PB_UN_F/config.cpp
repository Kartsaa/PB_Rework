class CfgPatches
{
	class PB_UN_F
	{
		units[] = 
		{
			"PB_UN_SOL_R","PB_UN_SOL_RAT","PB_UN_SOL_MED","PB_UN_SOL_OFF","PB_UN_SOL_SNI","PB_UN_SOL_ENG","PB_UN_SOL_EOD","PB_UN_SOL_MG",
			"PB_UN_SOL_HP","PB_UN_UH1H","PB_UN_M113A3_M2","PB_UN_M113A3","PB_UN_M1043_M2","PB_UN_M1043","PB_UN_M1117"
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_UN_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_UN_Faction
	{
		displayName = "UN Peacekeepers";
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
	class PB_UN_AA
	{
		displayName = "Anti-Air";
	};
	class PB_UN_APCs
	{
		displayName = "APCs";
	};
	class PB_UN_APCs_D
	{
		displayName = "APCs (Desert)";
	};
	class PB_UN_ART
	{
		displayName = "Artillery";
	};
	class PB_UN_Boats
	{
		displayName = "Boats";
	};
	class PB_UN_Cars
	{
		displayName = "Cars";
	};	
	class PB_UN_Cars_D
	{
		displayName = "Cars (Desert)";
	};
	class PB_UN_Drones
	{
		displayName = "Drones";
	};	
	class PB_UN_HELI
	{
		displayName = "Helicopters";
	};
	class PB_UN_IFVs
	{
		displayName = "IFVs";
	};
	class PB_UN_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_UN_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_UN_MRAP_D
	{
		displayName = "MRAPs (Desert)";
	};
	class PB_UN_Planes
	{
		displayName = "Planes";
	};
	class PB_UN_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_UN_Trucks
	{
		displayName = "Trucks";
	};
	class PB_UN_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_UN_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_UN_Top
	{
		displayname = "UN Peacekeepers";
	};
};
class CfgEditorSubcategories
{
	class PB_UN_AA
	{
		displayName = "Anti-Air";
	};
	class PB_UN_APCs
	{
		displayName = "APCs";
	};
	class PB_UN_APCs_D
	{
		displayName = "APCs (Desert)";
	};
	class PB_UN_ART
	{
		displayName = "Artillery";
	};
	class PB_UN_Boats
	{
		displayName = "Boats";
	};
	class PB_UN_Cars
	{
		displayName = "Cars";
	};
	class PB_UN_Cars_D
	{
		displayName = "Cars (Desert)";
	};
	class PB_UN_Drones
	{
		displayName = "Drones";
	};	
	class PB_UN_HELI
	{
		displayName = "Helicopters";
	};
	class PB_UN_IFVs
	{
		displayName = "IFVs";
	};
	class PB_UN_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_UN_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_UN_MRAP_D
	{
		displayName = "MRAPs (Desert)";
	};
	class PB_UN_Planes
	{
		displayName = "Planes";
	};
	class PB_UN_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_UN_Trucks
	{
		displayName = "Trucks";
	};
	class PB_UN_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_UN_TUR
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