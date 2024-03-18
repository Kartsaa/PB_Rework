class CfgPatches
{
	class PB_Vehicle_T
	{
		units[] = 
		{
			"PB_MATV","PB_MATV_HMG","PB_MATV_GMG","PB_Merkava_Mk4_TUSK","PB_Merkava_Mk4","PB_Namer","PB_Nemmera","PB_Pandur_II","PB_Badger_IFV",
			"PB_Dagor_Desert","PB_Dagor_Armed_Desert","PB_Dagor_AT_Desert","PB_Dagor_Olive","PB_Dagor_Armed_Olive","PB_Dagor_AT_Olive",
			"PB_Typhoon_covered_MSV", "PB_Typhoon_covered_VDV", "PB_Typhoon_covered_VMF", "PB_Typhoon_covered_VV",
			"PB_Typhoon_open_MSV", "PB_Typhoon_open_VDV", "PB_Typhoon_open_VMF", "PB_Typhoon_open_VV",
			"PB_Typhoon_ammo_MSV", "PB_Typhoon_ammo_VDV", "PB_Typhoon_ammo_VMF", "PB_Typhoon_ammo_VV",
			"PB_Typhoon_device_MSV", "PB_Typhoon_device_VDV", "PB_Typhoon_device_VMF", "PB_Typhoon_device_VV",
			"PB_Typhoon_fuel_MSV", "PB_Typhoon_fuel_VDV", "PB_Typhoon_fuel_VMF", "PB_Typhoon_fuel_VV",
			"PB_Typhoon_repair_MSV", "PB_Typhoon_repair_VDV", "PB_Typhoon_repair_VMF", "PB_Typhoon_repair_VV",
			"PB_Typhoon_medical_MSV", "PB_Typhoon_medical_VDV", "PB_Typhoon_medical_VMF", "PB_Typhoon_medical_VV",
			"PB_Warrior_IFV","PB_YAK130",
		};
		weapons[] = {};
		requiredAddons[] = {"PB_Main"};
	};
};
class EventHandlers;
class CfgVehicles
{
	#include "cfgVehicles.hpp"
	#include "cfgTyphoon.hpp"
};