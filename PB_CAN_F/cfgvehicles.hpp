///INHERI///
class I_MBT_03_cannon_F;
class RHS_TOW_TriPod_WD;
class RHS_M119_WD;
class RHS_UH60M_d;
class rhsusf_CGRCAT1A2_M2_usmc_d;
class rhsusf_M1237_M2_usarmy_d;
class rhsusf_mrzr4_d;
class B_Radar_System_01_F;
class RHS_M252_WD;
class RHS_C130J;
class RHS_C130J_Cargo;
class RHS_CH_47F_10;
///ARTILLERY///
class PB_CAN_M777: RHS_M119_WD
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CAN_Faction";
	editorCategory = "PB_CAN_Top";
	editorSubcategory = "PB_CAN_ART";
	vehicleclass = "PB_CAN_ART";
	crew = "PB_CAN_SOL_R";
	displayname = "M777 Howitzer";
    editorpreview = "PB_EP\ui\Canada\PB_CAN_M777.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_CAN_L16: RHS_M119_WD
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CAN_Faction";
	editorCategory = "PB_CAN_Top";
	editorSubcategory = "PB_CAN_ART";
	vehicleclass = "PB_CAN_ART";
	crew = "PB_CAN_SOL_R";
	displayname = "L16 Mortar";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///TANKS///
class PB_CAN_LEO: I_MBT_03_cannon_F
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CAN_Faction";
	editorCategory = "PB_CAN_Top";
	editorSubcategory = "PB_CAN_Tanks";
	vehicleclass = "PB_CAN_Tanks";
	crew = "PB_CAN_SOL_C";
	displayname = "Leopard 2SG";
    editorpreview = "PB_EP\ui\Canada\PB_CAN_LEO.jpg";
	class EventHandlers : EventHandlers
	{
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};
	textureList[]=
	{
		"PB_OLIVE_LEO",	1
	};
		class TextureSources
		{
			class PB_OLIVE_LEO
			{
				displayName="Olive";
				author="CapryCorn";
				textures[]=
				{
					"PB_CAN_F\data\OLV_mbt_03_ext01_co.paa",
					"PB_CAN_F\data\OLV_mbt_03_ext02_co.paa",
					"PB_CAN_F\data\OLV_mbt_03_rcws_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
				};
				factions[]=
				{
					"PB_CAN_Faction"
				};
			};
		};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///APCS///
///CARS///
class PB_CAN_MRZR: rhsusf_mrzr4_d
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CAN_Faction";
	editorCategory = "PB_CAN_Top";
	editorSubcategory = "PB_CAN_CARS";
	vehicleclass = "PB_CAN_CARS";
	displayname = "MRZR";
	crew = "PB_CAN_SOL_R";
    editorpreview = "PB_EP\ui\Canada\PB_CAN_MRZR.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///MRAPS///
class PB_CAN_COUGAR_4X4: rhsusf_CGRCAT1A2_M2_usmc_d
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CAN_Faction";
	editorCategory = "PB_CAN_Top";
	editorSubcategory = "PB_CAN_MRAP";
	vehicleclass = "PB_CAN_MRAP";
	crew = "PB_CAN_SOL_R";
	displayname = "Cougar 4x4 H (M2)";
	hiddenSelections[] = {"camo","camo1","camo2","pintle"};
    editorpreview = "PB_EP\ui\Canada\PB_CAN_COUGAR_4X4.jpg";
	HiddenSelectionsTextures[] = 
	{
		"rhsusf\addons\rhsusf_cougar\data\CGR_Body_CO.paa",
		"",
		"rhsusf\addons\rhsusf_rg33l\data\MCTAGS_CO.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa"
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_CAN_COUGAR_6x6: rhsusf_M1237_M2_usarmy_d
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CAN_Faction";
	editorCategory = "PB_CAN_Top";
	editorSubcategory = "PB_CAN_MRAP";
	vehicleclass = "PB_CAN_MRAP";
	crew = "PB_CAN_SOL_R";
	displayname = "Cougar 6x6 (M2)";
    editorpreview = "PB_EP\ui\Canada\PB_CAN_COUGAR_6X6.jpg";
	hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","camo5","pintle","camo7","camo8","camo9"};
	HiddenSelectionsTextures[] = {
		"rhsusf\addons\rhsusf_RG33L\data\RG33_Body_CO.paa",
		"rhsusf\addons\rhsusf_RG33L\data\RG33_Chassis_CO.paa",
		"rhsusf\addons\rhsusf_RG33L\data\RG33_Accessory2_CO.paa",
		"rhsusf\addons\rhsusf_RG33L\data\RG33_Armor_CO.paa",
		"rhsusf\addons\rhsusf_RG33L\data\RG33_TurretD_CO.paa",
		"rhsusf\addons\rhsusf_RG33L\data\RG33_Wheels_CO.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa",
		"rhsusf\addons\rhsusf_RG33L\data\MCTAGS_CO.paa",
		"rhsusf\addons\rhsusf_rg33l\Data\rhsusf_camonet_des_co.paa",
		""
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///HELICOPTERS///
class PB_CAN_Chinook: RHS_CH_47F_10
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CAN_Faction";
	editorCategory = "PB_CAN_Top";
	editorSubcategory = "PB_CAN_HELI";
	vehicleclass = "PB_CAN_HELI";
	crew = "PB_CAN_SOL_HP";
	displayname = "Chinook";
    editorpreview = "PB_EP\ui\British\PB_UK_Chinook.jpg";
	hiddenSelections[] = {"camo1","camo2","camo3","camo4"};
	hiddenSelectionsTextures[] = 
	{
		"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_1_co.paa",
		"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_2_co.paa",
		"",
		"rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///TURRETS///
class PB_CAN_TOW: RHS_TOW_TriPod_WD
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CAN_Faction";
	editorCategory = "PB_CAN_Top";
	editorSubcategory = "PB_CAN_TUR";
	vehicleclass = "PB_CAN_TUR";
	crew = "PB_CAN_SOL_R";
    editorpreview = "PB_EP\ui\Canada\PB_CAN_TOW.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_CAN_RADAR: B_Radar_System_01_F
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CAN_Faction";
	editorCategory = "PB_CAN_Top";
	editorSubcategory = "PB_CAN_TUR";
	vehicleclass = "PB_CAN_TUR";
	displayname = "AN/MPQ-504";
    editorpreview = "PB_EP\ui\Canada\PB_CAN_RADAR.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///PLANES///
class PB_CAN_C130: RHS_C130J
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CAN_Faction";
	editorCategory = "PB_CAN_Top";
	editorSubcategory = "PB_CAN_Planes";
	vehicleclass = "PB_CAN_Planes";
	crew = "PB_CAN_SOL_HP";
    editorpreview = "PB_EP\ui\Canada\PB_CAN_C130.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
}
;
class PB_CAN_C130C: RHS_C130J_Cargo
{
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_CAN_Faction";
	editorCategory = "PB_CAN_Top";
	editorSubcategory = "PB_CAN_Planes";
	vehicleclass = "PB_CAN_Planes";
	crew = "PB_CAN_SOL_HP";
    editorpreview = "PB_EP\ui\Canada\PB_CAN_C130C.jpg";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};