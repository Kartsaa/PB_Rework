class CfgPatches
{
	class PB_FIN_F
	{
		units[] = 
		{
			"PB_FIN_BMP2", "PB_FIN_LEO", "PB_FIN_PSTOHJ", "PB_FIN_KRH", "PB_FIN_KRKK","PB_FIN_ITK65","PB_FIN_ITK98","PB_FIN_PSH74",
			"PB_FIN_IPTSV", "PB_FIN_SISU_COV", "PB_FIN_SISU", "PB_FIN_SISU_REPAIR", "PB_FIN_SISU_MEDICAL", "PB_FIN_SISU_AMMO", "PB_FIN_SISU_FUEL",
			"PB_FIN_SOL_R", "PB_FIN_SOL_SL", "PB_FIN_SOL_MED", "PB_FIN_SOL_MG", "PB_FIN_SOL_MK", "PB_FIN_SOL_SNI", "PB_FIN_SOL_LAT", "PB_FIN_SOL_HAT",
			"PB_FIN_SOL_AA", "PB_FIN_SOL_C", "PB_FIN_SOL_JP", "PB_FIN_SOL_HP", "PB_FIN_SOL_ENG", "PB_FIN_SOL_EOD"
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Finnish_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_FIN_Faction
	{
		displayName = "Finnish Defence Forces";
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
	class PB_FIN_AA
	{
		displayName = "Anti-Air";
	};
	class PB_FIN_APCs
	{
		displayName = "APCs";
	};
	class PB_FIN_ART
	{
		displayName = "Artillery";
	};
	class PB_FIN_Boats
	{
		displayName = "Boats";
	};
	class PB_FIN_Cars
	{
		displayName = "Cars";
	};	
	class PB_FIN_Drones
	{
		displayName = "Drones";
	};	
	class PB_FIN_HELI
	{
		displayName = "Helicopters";
	};
	class PB_FIN_IFVs
	{
		displayName = "IFVs";
	};
	class PB_FIN_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_FIN_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_FIN_Planes
	{
		displayName = "Planes";
	};
	class PB_FIN_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_FIN_Trucks
	{
		displayName = "Trucks";
	};
	class PB_FIN_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_FIN_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_FIN_Top
	{
		displayname = "Finnish Defence Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_FIN_AA
	{
		displayName = "Anti-Air";
	};
	class PB_FIN_APCs
	{
		displayName = "APCs";
	};
	class PB_FIN_ART
	{
		displayName = "Artillery";
	};
	class PB_FIN_Boats
	{
		displayName = "Boats";
	};
	class PB_FIN_Cars
	{
		displayName = "Cars";
	};
	class PB_FIN_Drones
	{
		displayName = "Drones";
	};	
	class PB_FIN_HELI
	{
		displayName = "Helicopters";
	};
	class PB_FIN_IFVs
	{
		displayName = "IFVs";
	};
	class PB_FIN_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_FIN_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_FIN_Planes
	{
		displayName = "Planes";
	};
	class PB_FIN_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_FIN_Trucks
	{
		displayName = "Trucks";
	};
	class PB_FIN_TUR
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