class CfgPatches
{
	class PB_ISR_F
	{
		units[] = 
		{
			"PB_ISR_SOL_R","PB_ISR_SOL_SL","PB_ISR_SOL_MED","PB_ISR_SOL_MG","PB_ISR_SOL_SNI","PB_ISR_SOL_MK","PB_ISR_SOL_RAT",
			"PB_ISR_SOL_C","PB_ISR_SOL_HAT","PB_ISR_SOL_JP","PB_ISR_SOL_HP","PB_ISR_SOL_GRE","PB_ISR_SOL_ENG","PB_ISR_SOL_EOD",
			"PB_ISR_MERKAVA","PB_ISR_MERKAVA_LIC","PB_ISR_M113_MK19","PB_ISR_M113_AMMO","PB_ISR_NAMER","PB_ISR_NEMMERA",
			"PB_ISR_M1043_M2","PB_ISR_M1043","PB_ISR_M1043_MK19","PB_ISR_HEMTT_R","PB_ISR_HEMTT_C","PB_ISR_HEMTT_F",
			"PB_ISR_PATRIOT","PB_ISR_C130J","PB_ISR_C130J_Cargo","PB_ISR_AH64","PB_ISR_UH60M","PB_ISR_CH53E_cargo","PB_ISR_CH53E"
		};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_Israeli_Kit","PB_Main","PB_M_Uniforms","PB_M_Vests"};
	};
};
class cfgFactionClasses
{
	class PB_ISR_Faction
	{
		displayName = "Israeli Defence Force";
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
	class PB_ISR_AA
	{
		displayName = "Anti-Air";
	};
	class PB_ISR_APCs
	{
		displayName = "APCs";
	};
	class PB_ISR_ART
	{
		displayName = "Artillery";
	};
	class PB_ISR_Boats
	{
		displayName = "Boats";
	};
	class PB_ISR_Cars
	{
		displayName = "Cars";
	};	
	class PB_ISR_Drones
	{
		displayName = "Drones";
	};	
	class PB_ISR_HELI
	{
		displayName = "Helicopters";
	};
	class PB_ISR_IFVs
	{
		displayName = "IFVs";
	};
	class PB_ISR_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_ISR_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_ISR_Planes
	{
		displayName = "Planes";
	};
	class PB_ISR_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_ISR_Trucks
	{
		displayName = "Trucks";
	};
	class PB_ISR_Trucks_D
	{
		displayName = "Trucks (Desert)";
	};
	class PB_ISR_TUR
	{
		displayName = "Turrets";
	};
};
class CfgEditorCategories
{
	class PB_ISR_Top
	{
		displayname = "Israeli Defence Force";
	};
};
class CfgEditorSubcategories
{
	class PB_ISR_AA
	{
		displayName = "Anti-Air";
	};
	class PB_ISR_APCs
	{
		displayName = "APCs";
	};
	class PB_ISR_ART
	{
		displayName = "Artillery";
	};
	class PB_ISR_Boats
	{
		displayName = "Boats";
	};
	class PB_ISR_Cars
	{
		displayName = "Cars";
	};
	class PB_ISR_Drones
	{
		displayName = "Drones";
	};	
	class PB_ISR_HELI
	{
		displayName = "Helicopters";
	};
	class PB_ISR_IFVs
	{
		displayName = "IFVs";
	};
	class PB_ISR_Infantry
	{
		displayName = "Infantry";
	};	
	class PB_ISR_MRAP
	{
		displayName = "MRAPs";
	};
	class PB_ISR_Planes
	{
		displayName = "Planes";
	};
	class PB_ISR_Tanks
	{
		displayName = "Tanks";
	};	
	class PB_ISR_Trucks
	{
		displayName = "Trucks";
	};
	class PB_ISR_TUR
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