class CfgPatches
{
	class PB_UK_F
	{
		units[] = 
		{
			"PB_UK_SOL_R","PB_UK_SOL_RAT","PB_UK_SOL_SL","PB_UK_SOL_MK","PB_UK_SOL_GRE","PB_UK_SOL_MG","PB_UK_SOL_SNI","PB_UK_SOL_R_NLAW","PB_UK_SOL_R_JAV",
			"PB_UK_SOL_R_CG","PB_UK_SOL_MED","PB_UK_SOL_C","PB_UK_SOL_JP","PB_UK_SOL_HP","PB_UK_SOL_END","PB_UK_SOL_EOD"
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_British_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_UK_Faction
	{
		displayName = "British Army";
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
	class PB_British_AA
	{
		displayName = "Anti-Air";
	};
	class PB_British_APCs
	{
		displayName = "APCs";
	};
	class PB_British_ART
	{
		displayName = "Artillery";
	};
	class PB_British_Cars
	{
		displayName = "Cars";
	};
	class PB_British_Drones
	{
		displayName = "Drones";
	};	
	class PB_British_HELI
	{
		displayName = "Helicopters";
	};
	class PB_British_IFVs
	{
		displayName = "IFVs";
	};
	class PB_British_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_British_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_British_Planes
	{
		displayName = "Planes";
	};
	class PB_British_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_Bbritish_Trucks
	{
		displayName = "Trucks";
	};
	class PB_British_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_British_Top
	{
		displayname = "British Army";
	};
};
class CfgEditorSubcategories
{
	class PB_British_AA
	{
		displayName = "Anti-Air";
	};
	class PB_British_APCs
	{
		displayName = "APCs";
	};
	class PB_British_ART
	{
		displayName = "Artillery";
	};
	class PB_British_Cars
	{
		displayName = "Cars";
	};
	class PB_British_Drones
	{
		displayName = "Drones";
	};	
	class PB_British_HELI
	{
		displayName = "Helicopters";
	};
	class PB_British_IFVs
	{
		displayName = "IFVs";
	};
	class PB_British_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_British_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_British_Planes
	{
		displayName = "Planes";
	};
	class PB_British_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_Bbritish_Trucks
	{
		displayName = "Trucks";
	};
	class PB_British_TUR
	{
		displayName = "Turrets";
	};
};
#include "cfggroups.hpp"
#include "cfgweapons.hpp"
class CfgVehicles
{
	#include "cfgBackpacks.hpp"
	#include "cfgInfantry.hpp"
	#include "cfgVehicles.hpp"
};