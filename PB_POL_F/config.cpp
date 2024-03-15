class CfgPatches
{
	class PB_POL_F
	{
		units[] = 
		{
			"PB_POL_SOL_R","PB_POL_SOL_SL","PB_POL_SOL_RAT","PB_POL_SOL_MED","PB_POL_SOL_MG","PB_POL_SOL_SNI","PB_POL_SOL_C","PB_POL_SOL_RPG","PB_POL_SOL_ATCG",
			"PB_POL_SOL_C","PB_POL_SOL_ENG","PB_POL_SOL_HP","PB_POL_SOL_JP","PB_POL_SOL_ENG","PB_POL_SOL_EOD","PB_POL_M1FEP","PB_POL_M1SEPV2","PB_POL_2S1",
			"PB_POL_HIMARS","PB_POL_GRAD","PB_POL_BWP1D","PB_POL_BWP1K","PB_POL_BRDM2","PB_POL_ROSOMAK","PB_POL_COUGAR","PB_POL_COUGAR_M2","PB_POL_OSHKOSH",
			"PB_POL_OSHKOSH_M2","PB_POL_M1043","PB_POL_M1043_M2","PB_POL_SHILKA","PB_POL_AH64E","PB_POL_MIG29",
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Polish_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_POL_Faction
	{
		displayName = "Armed Forces of the Republic of Poland";
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
	class PB_POL_AA
	{
		displayName = "Anti-Air";
	};
	class PB_POL_APCs
	{
		displayName = "APCs";
	};
	class PB_POL_ART
	{
		displayName = "Artillery";
	};
	class PB_POL_Boats
	{
		displayName = "Boats";
	};
	class PB_POL_Cars
	{
		displayName = "Cars";
	};	
	class PB_POL_Drones
	{
		displayName = "Drones";
	};	
	class PB_POL_HELI
	{
		displayName = "Helicopters";
	};
	class PB_POL_IFVs
	{
		displayName = "IFVs";
	};
	class PB_POL_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_POL_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_POL_Planes
	{
		displayName = "Planes";
	};
	class PB_POL_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_POL_Trucks
	{
		displayName = "Trucks";
	};
	class PB_POL_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_POL_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_POL_Top
	{
		displayname = "Armed Forces of the Republic of Poland";
	};
};
class CfgEditorSubcategories
{
	class PB_POL_AA
	{
		displayName = "Anti-Air";
	};
	class PB_POL_APCs
	{
		displayName = "APCs";
	};
	class PB_POL_ART
	{
		displayName = "Artillery";
	};
	class PB_POL_Boats
	{
		displayName = "Boats";
	};
	class PB_POL_Cars
	{
		displayName = "Cars";
	};
	class PB_POL_Drones
	{
		displayName = "Drones";
	};	
	class PB_POL_HELI
	{
		displayName = "Helicopters";
	};
	class PB_POL_IFVs
	{
		displayName = "IFVs";
	};
	class PB_POL_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_POL_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_POL_Planes
	{
		displayName = "Planes";
	};
	class PB_POL_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_POL_Trucks
	{
		displayName = "Trucks";
	};
	class PB_POL_TUR
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