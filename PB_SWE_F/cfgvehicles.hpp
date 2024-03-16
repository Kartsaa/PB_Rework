///INHERI///
class RHS_M119_WD;
class I_MBT_03_cannon_F;
class rhsusf_CGRCAT1A2_M2_usmc_d;
class rhsusf_M1237_M2_usarmy_d;
class rhsusf_mrzr4_d;
class B_Radar_System_01_F;
class rhs_bmp2e_vdv;
class RHS_MK19_TriPod_WD;
class RHS_M252_D;
class RHS_TOW_TriPod_USMC_WD;
class rhs_D30_vmf;
class RHS_ZU23_base;
class PB_SWE_ITK_A: RHS_ZU23_base
    {
		scope = 0;
        class Turrets;
    };
   	class PB_SWE_ITK_B :PB_SWE_ITK_A
    {
		scope = 0;
        class Turrets:Turrets
        {
            class MainTurret;
        };
    };
class PB_SWE_ITK_C: PB_SWE_ITK_B
    {
		scope = 0;
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
            };
			class CargoTurret_01;
        };
    };
class rhs_KORD_high_MSV;
class B_APC_Tracked_01_AA_F;
class rhsusf_m1240a1_m2_usarmy_d;
class rhsusf_m1240a1_mk19_usarmy_d;
class I_Plane_Fighter_04_F;
class PB_SWE_ITPSV_BASE: B_APC_Tracked_01_AA_F {
		class turrets;
		scope = 0;
	};
class PB_SWE_ITPSV_BASE_01: PB_SWE_ITPSV_BASE {
		class Turrets: Turrets {
			class MainTurret;
			scope = 0;
		};
	};
///ARTILLERY///
///AA///
///TANKS///
	class PB_SWE_LEO: I_MBT_03_cannon_F
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_LEO.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_SWE_Faction";
		editorCategory = "PB_SWE_Top";
		editorSubcategory = "PB_SWE_Tanks";
		vehicleclass = "PB_SWE_Tanks";
		crew = "PB_SWE_SOL_C";
		displayname = "Stridsvagn 122";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[]=
		{
			"PB_LEO_SWE",1
		};
		class TextureSources
		{
				class PB_LEO_SWE
				{
					displayName="Swedish Splinter";
					author="Kartsa";
					textures[]=
					{
						"PB_SWE_F\data\SWE_leo_ext_01.paa",
						"PB_SWE_F\data\SWE_leo_ext_02.paa",
						"PB_FIN_F\data\OLV_mbt_03_rcws_co.paa",
						"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
					};
					factions[]=
					{
						"PB_SWE_Faction"
					};
				};
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};
///APCS///
///CARS///
///MRAP///
	class PB_SWE_TGB16_MG: rhsusf_m1240a1_m2_usarmy_d
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_TGB16_MG.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_SWE_FACTION";
		editorCategory = "PB_SWE_TOP";
		editorSubcategory = "PB_SWE_MRAP";
		vehicleclass = "PB_SWE_MRAP";
		crew = "PB_SWE_SOL_R";
		displayname = "Tgb 16 (MG)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","pintle","camo5","camo6","camo9","camo10","camoH24","BFT_screen"};
		texturelist[] = {
			"rhs_olive",1,
			"rhs_desert",0,
		};
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		class textureSources
		{
			class rhs_desert
			{
				displayName = "Desert";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa","rhsusf\addons\rhsusf_caiman\data\m153_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1_CO.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_CA.paa","rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_des_co.paa"};
				factions[] = {};
			};
			class rhs_olive
			{
				displayName = "Olive";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_o_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_o_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1_wd_CO.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa","rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"};
				factions[] = {};
			};
		};
	};
	class PB_SWE_TGB16_GL: rhsusf_m1240a1_mk19_usarmy_d
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_TGB16_GL.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_SWE_FACTION";
		editorCategory = "PB_SWE_TOP";
		editorSubcategory = "PB_SWE_MRAP";
		vehicleclass = "PB_SWE_MRAP";
		crew = "PB_SWE_SOL_R";
		displayname = "Tgb 16 (GL)";
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4","pintle","camo5","camo6","camo9","camo10","camoH24","BFT_screen"};
		texturelist[] = {
			"rhs_olive",1,
			"rhs_desert",0,
		};
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		class textureSources
		{
			class rhs_desert
			{
				displayName = "Desert";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretd_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_des_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa","rhsusf\addons\rhsusf_caiman\data\m153_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_d_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1_CO.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_CA.paa","rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_des_co.paa"};
				factions[] = {};
			};
			class rhs_olive
			{
				displayName = "Olive";
				author = "$STR_RHSUSF_AUTHOR_FULL";
				textures[] = {"rhsusf\addons\rhsusf_matv\data\rhsusf_matv_ext_o_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_wheel_co.paa","rhsusf\addons\rhsusf_rg33l\data\rg33_turretwd_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_decal_ca.paa","rhsusf\addons\rhsusf_rg33l\data\rhsusf_camonet_wdl_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa","rhsusf\addons\rhsusf_caiman\data\M153_WD_CO.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matv_sof_o_co.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1_wd_CO.paa","rhsusf\addons\rhsusf_matv\data\rhsusf_matvA1QNet_wd_CA.paa","rhsusf\addons\rhsusf_m1165\data\rhsusf_m11165a1_gmv_h246mount_wd_co.paa"};
				factions[] = {};
			};
		};
	};
///HELICOPTERS///
///TURRETS///
	class PB_SWE_MORTAR: RHS_M252_D
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_MORTAR.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_SWE_FACTION";
		editorCategory = "PB_SWE_TOP";
		editorSubcategory = "PB_SWE_TUR";
		vehicleclass = "PB_SWE_TUR";
		crew = "PB_SWE_SOL_R";
		displayname = "8 cm grk m/84";
	};
///PLANES///
	class PB_SWE_SAAB: I_Plane_Fighter_04_F
	{
		editorPreview = "PB_EP\UI\Sweden\PB_SWE_SAAB.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_SWE_Faction";
		editorCategory = "PB_SWE_Top";
		editorSubcategory = "PB_SWE_Planes";
		vehicleclass = "PB_SWE_Planes";
		crew = "PB_SWE_SOL_JP";
		displayname = "Saab 39";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[]=
		{
			"CamoGrey",1,
			"DigitalCamoGrey",0,
			"DigitalCamoGreen",0
		};
		class TransportWeapons {};
		class TransportMagazines {};
		class TransportItems {};
	};