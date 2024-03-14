////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Mon Dec 11 19:06:02 2023 : 'file' last modified on Mon Nov 09 00:31:48 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class PB_C_Weapons
	{
		version = "1.1.3";
		units[] = {};
		weapons[] = 
		{
			"PB_EF88","PB_EF88_GL","PB_C7","PB_C8","PB_C9","PB_C7M203","PB_G36_GL","PB_G36","PB_PZF3","PB_RK62M2","PB_RK62","PB_PKM","PB_PKP",
			"PB_Famas_G2", "PB_Famas_G2_Grip", "PB_Famas_G2_M203", "PB_Famas_F1", "PB_Famas_F1_RIS", "PB_Famas_F1_M203","PB_ARM1","PB_ARM5",
			"PB_RAHE","PB_RAHEGL","PB_RAHES","PB_RAHEL","PB_Negev","PB_SCARL","PB_SCARL_GL","PB_SCARL_GRIP", "PB_ARM1_GL","PB_LMG556","PB_BUL_SOL_MG",
			"PB_MINIMI_762", "PB_FIN_TRG22","PB_MSBS_Grot"
		};
		requiredVersion = "1.1.3";
		requiredAddons[] = {"PB_Main","PB_M_Weapons","PB_T_Weapons", "PB_A_Weapons", "rhsusf_c_weapons"};
	};
};

#include "cfgweapons.hpp"
#include "cfgmagazines.hpp"
#include "cfgmagazinewells.hpp"
#include "cfgammo.hpp"