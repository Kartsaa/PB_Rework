class CfgPatches
{
	class PB_BUL_F
	{
		units[] = 
		{
			"PB_BUL_SOL_HAT","PB_BUL_SOL_RAT","PB_BUL_SOL_R","PB_BUL_SOL_SL","PB_BUL_SOL_AA","PB_BUL_SOL_MET","PB_BUL_SOL_SL","PB_BUL_SOL_MED","PB_BUL_SOL_MG",
			"PB_BUL_SOL_LAR","PB_BUL_SOL_MG","PB_BUL_SOL_SNI","PB_BUL_SOL_C","PB_BUL_SOL_JP","PB_BUL_SOL_HP","PB_BUL_SOL_ENG","PB_BUL_SOL_EOD","PB_BUL_SOL_GRE",
			"PB_BUL_M82","PB_BUL_AGS30","PB_BUL_Metis","PB_BUL_Konkurs","PB_BUL_T72M","PB_BUL_BMP1P","PB_BUL_BTR60","PB_BUL_M1114","PB_BUL_BRDM2ATGM",
			"PB_BUL_BRDM2MG","PB_BUL_UAZ_O","PB_BUL_UAZ_C","PB_BUL_2S1","PB_BUL_ZU23","PB_BUL_SU25","PB_BUL_MIG29","PB_BUL_MI17","PB_BUL_MI24"
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Bulgarian_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_BUL_Faction
	{
		displayName = "Bulgarian Armed Forces";
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
	class PB_BUL_AA
	{
		displayName = "Anti-Air";
	};
	class PB_BUL_APCs
	{
		displayName = "APCs";
	};
	class PB_BUL_ART
	{
		displayName = "Artillery";
	};
	class PB_BUL_Boats
	{
		displayName = "Boats";
	};
	class PB_BUL_Cars
	{
		displayName = "Cars";
	};	
	class PB_BUL_Drones
	{
		displayName = "Drones";
	};	
	class PB_BUL_HELI
	{
		displayName = "Helicopters";
	};
	class PB_BUL_IFVs
	{
		displayName = "IFVs";
	};
	class PB_BUL_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_BUL_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_BUL_Planes
	{
		displayName = "Planes";
	};
	class PB_BUL_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_BUL_Trucks
	{
		displayName = "Trucks";
	};
	class PB_BUL_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_BUL_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_BUL_Top
	{
		displayname = "Bulgarian Armed Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_BUL_AA
	{
		displayName = "Anti-Air";
	};
	class PB_BUL_APCs
	{
		displayName = "APCs";
	};
	class PB_BUL_ART
	{
		displayName = "Artillery";
	};
	class PB_BUL_Boats
	{
		displayName = "Boats";
	};
	class PB_BUL_Cars
	{
		displayName = "Cars";
	};
	class PB_BUL_Drones
	{
		displayName = "Drones";
	};	
	class PB_BUL_HELI
	{
		displayName = "Helicopters";
	};
	class PB_BUL_IFVs
	{
		displayName = "IFVs";
	};
	class PB_BUL_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_BUL_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_BUL_Planes
	{
		displayName = "Planes";
	};
	class PB_BUL_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_BUL_Trucks
	{
		displayName = "Trucks";
	};
	class PB_BUL_TUR
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