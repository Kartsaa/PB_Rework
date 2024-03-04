class CfgPatches
{
	class PB_3CB_British_V
	{
		units[] = 
		{
			"PB_UK_Coyote_GMG_D", "PB_UK_Coyote_LMG_D", "PB_UK_Coyote_LMG", "PB_UK_Coyote_GMG", "PB_UK_Coyote_LMG_D_P","PB_UK_Coyote_LMG_P",
			"PB_UK_Coyote_GMG_D_P", "PB_UK_Coyote_GMG_P", "PB_UK_Jackal_GMG_D", "PB_UK_Jackal_HMG_D", "PB_UK_Jackal_HMG", "PB_UK_Jackal_GMG",
			"PB_UK_LRWMIK_HMG_D", "PB_UK_LRWMIK_HMG", "PB_UK_BD_RWSHMG", "PB_UK_BD_RWSHMG_D", "PB_UK_BD_GPMG", "PB_UK_BD_GPMG_D",
			"PB_UK_BOAT_HMG", "PB_UK_BOAT_GPMG", "PB_UK_MAN6x6", "PB_UK_MAN6x6_D", "PB_UK_MAN4x4", "PB_UK_MAN4x4_D", "PB_UK_MQ9",
			"PB_UK_AH1", "PB_UK_Merlin_HC3_GPMG", "PB_UK_Merlin_HC3", "PB_UK_Merlin_HC3_C", 


		};
		weapons[] = {};
		requiredAddons[] = {"UK3CB_BAF_Vehicles","PB_British_Kit","PB_Main","PB_UK_F"};
	};
};
#include "cfggroups.hpp"
class EventHandlers;
class CfgVehicles
{
	#include "cfgVehicles.hpp"
};