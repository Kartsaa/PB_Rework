class CfgPatches
{
	class PB_KOR_F
	{
		units[] = 
		{
			"PB_KOR_SOL_R","PB_KOR_SOL_RAT","PB_KOR_SOL_SL","PB_KOR_SOL_MED","PB_KOR_SOL_MG","PB_KOR_SOL_SNI","PB_KOR_SOL_C","PB_KOR_SOL_JP","PB_KOR_SOL_HP",
			"PB_KOR_SOL_ENG","PB_KOR_SOL_EOD","PB_KOR_SOL_GRE","PB_KOR_SOL_AT","PB_KOR_TOW","PB_KOR_METIS","PB_KOR_K808","PB_KOR_187","PB_KOR_HEMTT_A",
			"PB_KOR_HEMTT_F","PB_KOR_HEMTT_R","PB_KOR_KH179","PB_KOR_K55","PB_KOR_AH64E","PB_KOR_Chinook","PB_KOR_MD500","PB_KOR_MD500_A","PB_KOR_UH60M2"
			"PB_KOR_UH60M"
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Korean_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_KOR_Faction
	{
		displayName = "Republic of Korea Armed Forces";
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
	class PB_KOR_AA
	{
		displayName = "Anti-Air";
	};
	class PB_KOR_APCs
	{
		displayName = "APCs";
	};
	class PB_KOR_ART
	{
		displayName = "Artillery";
	};
	class PB_KOR_Boats
	{
		displayName = "Boats";
	};
	class PB_KOR_Cars
	{
		displayName = "Cars";
	};	
	class PB_KOR_Drones
	{
		displayName = "Drones";
	};	
	class PB_KOR_HELI
	{
		displayName = "Helicopters";
	};
	class PB_KOR_IFVs
	{
		displayName = "IFVs";
	};
	class PB_KOR_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_KOR_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_KOR_Planes
	{
		displayName = "Planes";
	};
	class PB_KOR_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_KOR_Trucks
	{
		displayName = "Trucks";
	};
	class PB_KOR_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_KOR_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_KOR_Top
	{
		displayname = "Republic of Korea Armed Forces";
	};
};
class CfgEditorSubcategories
{
	class PB_KOR_AA
	{
		displayName = "Anti-Air";
	};
	class PB_KOR_APCs
	{
		displayName = "APCs";
	};
	class PB_KOR_ART
	{
		displayName = "Artillery";
	};
	class PB_KOR_Boats
	{
		displayName = "Boats";
	};
	class PB_KOR_Cars
	{
		displayName = "Cars";
	};
	class PB_KOR_Drones
	{
		displayName = "Drones";
	};	
	class PB_KOR_HELI
	{
		displayName = "Helicopters";
	};
	class PB_KOR_IFVs
	{
		displayName = "IFVs";
	};
	class PB_KOR_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_KOR_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_KOR_Planes
	{
		displayName = "Planes";
	};
	class PB_KOR_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_KOR_Trucks
	{
		displayName = "Trucks";
	};
	class PB_KOR_TUR
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