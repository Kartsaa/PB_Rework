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
		weapons[] = {"PB_EF88"};
		requiredVersion = "1.1.3";
		requiredAddons[] = {"PB_Main","PB_M_Weapons","PB_T_Weapons", "PB_A_Weapons", "rhsusf_c_weapons"};
	};
};

#include "cfgweapons.hpp"
#include "cfgmagazines.hpp"
#include "cfgmagazinewells.hpp"