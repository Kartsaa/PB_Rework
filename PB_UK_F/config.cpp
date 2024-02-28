class CfgPatches
{
	class PB_UK_F
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"rhsgref_infantry","rhsusf_infantry","rhsusf_infantry2","rhsusf_infantry3","PB_British_Kit","PB_Main"};
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
	class PB_British_Infantry
	{
		displayName = "Infantry";
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
	class PB_British_Infantry
	{
		displayName = "Infantry";
	};
};
#include "cfggroups.hpp"
#include "cfgweapons.hpp"
class CfgVehicles
{
	class B_Soldier_base_F;
	class B_Soldier_base_G: B_Soldier_base_F
	{
		class EventHandlers;
	};
	class PB_UK_SOL_B: B_Soldier_base_G
	{	
		author="Kartsa";
		expansion=1;
		identityTypes[]={"Head_Enoch","Head_Euro","NoGlasses","LanguageENGB_F"};
		faceType="Man_A3";
		side=1;
		faction="PB_UK_Faction";
		genericNames="NatoMen";
		vehicleClass="Men";
		editorSubcategory="PB_British_Infantry";
		nakedUniform = "U_BasicBody";
		portrait="";
		picture="";
		icon="iconMan";
		accuracy=3.9000001;
		camouflage=1.1;
		minFireTime=10;
		scope=0;
		scopeCurator=0;
		linkedItems[]=
		{
			"PB_MTP_Modular_Lite",
			"PB_MTP_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
		respawnLinkedItems[]=
		{
			"PB_MTP_Modular_Lite",
			"PB_MTP_H",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS"
		};
	};
	class PB_UK_SOL_R: PB_UK_SOL_B
	{
		vehicleClass = "PB_British_Infantry";
		editorCategory = "PB_British_Top";
		editorSubcategory = "PB_British_Infantry";
		scope = 2;
		scopeCurator = 2;
		author = "Kartsa";
		headgearProbability=100;
		allowedHeadgear[]=
		{
			"PB_MTP_H",
			"PB_MTP_H_C",
			"PB_MTP_SF_H",
		};
		headgearList[] = 
		{
			"PB_MTP_H",1,
			"PB_MTP_H_C",1,
			"PB_MTP_SF_H",0.2
		};
		class EventHandlers: EventHandlers
		{
			init="if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
		};
		displayName = "Rifleman";
		role = "Rifleman";
		uniformClass = "PB_MTP_ACU";
		backpack = "PB_UK_RIF_BAG";
		weapons[] = {"RIFLE_NAME","Throw","Put"};
		respawnWeapons[] = {"RIFLE_NAME","Throw","Put"};
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","MAG_NAME","MAG_NAME","MAG_NAME","MAG_NAME","MAG_NAME","MAG_NAME"};
		respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShell","MAG_NAME","MAG_NAME","MAG_NAME","MAG_NAME","MAG_NAME","MAG_NAME"};
	};
///BACKPACKS///
	class PB_Kitbag_MTP;
	class PB_UK_RIF_BAG: PB_Kitbag_MTP
	{
		scope = 1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 1;
			};
			class _xx_MAG_NAME
			{
				name = "MAG_NAME";
				count = "3";
			};
		};
	};
};