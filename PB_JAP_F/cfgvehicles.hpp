///INHERI///
class RHS_M252_WD;
class B_T_AFV_Wheeled_01_cannon_F;
class RHS_AH64D_wd;
class RHS_MELB_H6M;
class RHS_CH_47F_10;
class RHS_UH60M2;
///ARTILLERY///
class PB_JAP_L16 : RHS_M252_WD 
{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_L16.jpg";
	scope = 2;
	side = 1;
	author = "Kartsa";
	faction = "PB_JAP_FACTION";
	editorCategory = "PB_JAP_TOP";
	editorSubcategory = "PB_JAP_ART";
	crew = "PB_JAP_SOL_R";
	vehicleclass = "PB_JAP_ART";
	displayname = "L16 Mortar";
	rhs_decalParameters[] = {};
};
///TANKS///
///APCS///
class PB_JAP_TYPE16: B_T_AFV_Wheeled_01_cannon_F
{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_TYPE16.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_JAP_Faction";
	editorCategory = "PB_JAP_Top";
	editorSubcategory = "PB_JAP_APCs";
	vehicleclass = "PB_JAP_APCs";
	crew = "PB_JAP_SOL_C";
	displayname = "Type 16";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///MRAPS///
///CARS///ERS///
class PB_JAP_AH64E: RHS_AH64D_wd
{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_AH64E.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	forceingarage = 0;
	faction = "PB_JAP_Faction";
	editorCategory = "PB_JAP_Top";
	editorSubcategory = "PB_JAP_HELI";
	vehicleclass = "PB_JAP_HELI";
	crew = "PB_JAP_SOL_HP";
	displayname = "AH-64E";
	hiddenSelections[] = {"camo1","camo2","camo3","Pilot_MFD_L","Pilot_MFD_R","Gunner_MFD_L","Gunner_MFD_R"};
	hiddenSelectionsTextures[] = 
	{
		"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_body_co.paa",
		"\rhsusf\addons\rhsusf_a2port_air\ah64\data\ah64d_details_co.paa",
		"",
		"#(argb,8,8,3)color(0,0,0,1.0,co)",
		"#(argb,8,8,3)color(0,0,0,1.0,co)",
		"#(argb,8,8,3)color(0,0,0,1.0,co)",
		"#(argb,8,8,3)color(0,0,0,1.0,co)"
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_JAP_OH6D: RHS_MELB_H6M
{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_OH6D.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	forceingarage = 0;
	faction = "PB_JAP_Faction";
	editorCategory = "PB_JAP_Top";
	editorSubcategory = "PB_JAP_HELI";
	vehicleclass = "PB_JAP_HELI";
	crew = "PB_JAP_SOL_HP";
	displayname = "OH-6D";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_JAP_Chinook: RHS_CH_47F_10
{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_CHINOOK.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_JAP_Faction";
	editorCategory = "PB_JAP_Top";
	editorSubcategory = "PB_JAP_HELI";
	vehicleclass = "PB_JAP_HELI";
	crew = "PB_JAP_SOL_HP";
	displayname = "Chinook";
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
class PB_JAP_UH60M: RHS_UH60M2
{
		editorpreview = "PB_EP\ui\Japan\PB_JAP_UH60M.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_JAP_Faction";
	editorCategory = "PB_JAP_Top";
	editorSubcategory = "PB_JAP_HELI";
	vehicleclass = "PB_JAP_HELI";
	crew = "PB_JAP_SOL_HP";
};
///AA///
///PLANES////