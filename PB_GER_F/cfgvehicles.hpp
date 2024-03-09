///INHERI///
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
class I_MBT_03_cannon_F;
class MRAP_03_base_F;
class MRAP_03_hmg_base_F;
class MRAP_03_gmg_base_F;
class rhs_uh1h_base;
class rhs_uh1h_hidf_gunship;
class rhs_uh1h_hidf_unarmed;
///ARTILLERY///
///TANKS///
class PB_GER_LEO: I_MBT_03_cannon_F
{
    editorpreview = "PB_EP\ui\Germany\PB_GER_LEO.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_GER_Faction";
	editorCategory = "PB_GER_Top";
	editorSubcategory = "PB_GER_Tanks";
	vehicleclass = "PB_GER_Tanks";
	crew = "PB_GER_SOL_C";
	displayname = "Leopard 2SG";
	class EventHandlers : EventHandlers
	{
		postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
	};
	textureList[]=
	{
		"PB_FLK_LEO",	1
	};
		class TextureSources
		{
			class PB_FLK_LEO
			{
				displayName="Flecktarn";
				author="CapryCorn";
				textures[]=
				{
					"PB_GER_F\data\FLK_mbt_03_ext01_co.paa",
					"PB_GER_F\data\FLK_mbt_03_ext02_co.paa",
					"PB_GER_F\data\FLK_mbt_03_rcws_co.paa",
					"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
				};
				factions[]=
				{
					"PB_GER_Faction"
				};
			};
		};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///APCS///
class PB_GER_FENNEK: MRAP_03_base_F
{
    editorpreview = "PB_EP\ui\Germany\PB_GER_FENNEK.jpg";
	author = "CapryCorn";
	scope = 2;
	scopeCurator = 2;
	forceInGarage = 1;
	side = 1;
	faction = "PB_GER_Faction";
	vehicleClass = "PB_GER_Cars";
	editorCategory = "PB_GER_TOP";
	editorSubcategory = "PB_GER_Cars";
	displayName = "Fennek";
	crew = "PB_GER_SOL_R";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"PB_GER_F\data\FLK_mrap_03_base_co.paa","PB_GER_F\data\FLK_mrap_03_trrt_co.paa"};
	class TransportMagazines
	{
	};
	class TransportItems
	{
	};
	class TransportWeapons
	{
	};
};
class PB_GER_FENNEK_HMG: MRAP_03_hmg_base_F
{
    editorpreview = "PB_EP\ui\Germany\PB_GER_FENNEK_HMG.jpg";
	author = "CapryCorn";
	scope = 2;
	scopeCurator = 2;
	forceInGarage = 1;
	side = 1;
	faction = "PB_GER_Faction";
	vehicleClass = "PB_GER_Cars";
	editorCategory = "PB_GER_TOP";
	editorSubcategory = "PB_GER_Cars";
	displayName = "Fennek (HMG)";
	crew = "PB_GER_SOL_R";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"PB_GER_F\data\FLK_mrap_03_base_co.paa","PB_GER_F\data\FLK_mrap_03_trrt_co.paa"};
	class TransportMagazines
	{
	};
	class TransportItems
	{
	};
	class TransportWeapons
	{
	};
};
class PB_GER_FENNEK_GMG: MRAP_03_gmg_base_F
{
    editorpreview = "PB_EP\ui\Germany\PB_GER_FENNEK_GMG.jpg";
	author = "CapryCorn";
	scope = 2;
	scopeCurator = 2;
	forceInGarage = 1;
	side = 1;
	faction = "PB_GER_Faction";
	vehicleClass = "PB_GER_Cars";
	editorCategory = "PB_GER_TOP";
	editorSubcategory = "PB_GER_Cars";
	displayName = "Fennek (GMG)";
	crew = "PB_GER_SOL_R";
	hiddenSelections[] = {"camo1","camo2"};
	hiddenSelectionsTextures[] = {"PB_GER_F\data\FLK_mrap_03_base_co.paa","PB_GER_F\data\FLK_mrap_03_trrt_co.paa"};
	class TransportMagazines
	{
	};
	class TransportItems
	{
	};
	class TransportWeapons
	{
	};
};
///CARS///
class PB_GER_MRZR: rhsusf_mrzr4_d
{
    editorpreview = "PB_EP\ui\Germany\PB_GER_MRZR.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_GER_Faction";
	editorCategory = "PB_GER_Top";
	editorSubcategory = "PB_GER_Cars";
	vehicleclass = "PB_GER_Cars";
	crew = "PB_GER_SOL_R";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///MRAPS///
///HELICOPTERS///
	class PB_Huey_FLK_Base_F: rhs_uh1h_base
	{
		class TextureSources
		{
			class Heeresflieger
			{
				displayName = "Heeresflieger";
				author = "CapryCorn";
				textures[] = {"PB_GER_F\data\uh1h_BW_co.paa","PB_GER_F\data\uh1h_hidf_BW_in_co.paa","PB_GER_F\data\mlod_BW_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
			};
		};
	};
	class PB_Huey_FLK: PB_Huey_FLK_Base_F
	{
    	editorpreview = "PB_EP\ui\Germany\PB_Huey_FLK.jpg";
		author = "CapryCorn";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "PB_GER_Faction";
		vehicleClass = "PB_GER_HELI";
		editorCategory = "PB_GER_Top";
		editorSubcategory = "PB_GER_HELI";
		displayName = "UH-1H (Heer)";
		crew = "PB_GER_SOL_HP";
		hiddenSelections[] = {"Camo1","Camo2","Camo_mlod","decals"};
		hiddenSelectionsTextures[] = {"PB_GER_F\data\uh1h_BW_co.paa","PB_GER_F\data\uh1h_hidf_BW_in_co.paa","PB_GER_F\data\mlod_BW_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportWeapons{};
	};
	class PB_Huey_gunship_FLK: rhs_uh1h_hidf_gunship
	{
    	editorpreview = "PB_EP\ui\Germany\PB_Huey_gunship_FLK.jpg";
		author = "CapryCorn";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "PB_GER_Faction";
		vehicleClass = "PB_GER_HELI";
		editorCategory = "PB_GER_Top";
		editorSubcategory = "PB_GER_HELI";
		displayName = "UH-1H Gunship (Heer)";
		crew = "PB_GER_SOL_HP";
		hiddenSelections[] = {"Camo1","Camo2","Camo_mlod","decals"};
		hiddenSelectionsTextures[] = {"PB_GER_F\data\uh1h_BW_co.paa","PB_GER_F\data\uh1h_hidf_BW_in_co.paa","PB_GER_F\data\mlod_BW_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportWeapons{};
	};
	class PB_Huey_unarmed_FLK: rhs_uh1h_hidf_unarmed
	{
    	editorpreview = "PB_EP\ui\Germany\PB_Huey_unarmed_FLK.jpg";
		author = "CapryCorn";
		scope = 2;
		scopeCurator = 2;
		forceInGarage = 1;
		side = 1;
		faction = "PB_GER_Faction";
		vehicleClass = "PB_GER_HELI";
		editorCategory = "PB_GER_Top";
		editorSubcategory = "PB_GER_HELI";
		displayName = "UH-1H Unarmed (Heer)";
		crew = "PB_GER_SOL_HP";
		hiddenSelections[] = {"Camo1","Camo2","Camo_mlod","decals"};
		hiddenSelectionsTextures[] = {"PB_GER_F\data\uh1h_BW_co.paa","PB_GER_F\data\uh1h_hidf_BW_in_co.paa","PB_GER_F\data\mlod_BW_co.paa","rhsgref\addons\rhsgref_air\uh1h\data\decals\blank_ca.paa"};
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
		class TransportBackpacks
		{
		};
		class TransportWeapons{};
	};
///TURRETS///
///PLANES///