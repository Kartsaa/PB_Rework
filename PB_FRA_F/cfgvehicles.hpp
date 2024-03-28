///INHERI///
class RHS_M252_D;
class RHS_C130J;
class RHS_C130J_Cargo;
///ARTILLERY///
///AA///
///TANKS///
///APCS///
///CARS///
///MRAP///
///HELICOPTERS///
///TURRETS///
	class PB_FRA_MORTAR: RHS_M252_D
	{
		editorpreview = "PB_EP\ui\France\PB_FRA_MORTAR.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_FRA_FACTION";
		editorCategory = "PB_FRA_TOP";
		editorSubcategory = "PB_FRA_TUR";
		vehicleclass = "PB_FRA_TUR";
		crew = "PB_FRA_SOL_R";
		displayname = "Mo 81 LLR F1";
	};
///PLANES///
	class PB_FRA_C130J: RHS_C130J
	{
		editorpreview = "PB_EP\ui\France\PB_FRA_C130j.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_FRA_FACTION";
		editorCategory = "PB_FRA_TOP";
		editorSubcategory = "PB_FRA_Planes";
		vehicleclass = "PB_FRA_Planes";
		crew = "PB_FRA_SOL_HP";
	};
	class PB_FRA_C130J_Cargo: RHS_C130J_Cargo
	{
		editorpreview = "PB_EP\ui\France\PB_FRA_C130j_cargo.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_FRA_FACTION";
		editorCategory = "PB_FRA_TOP";
		editorSubcategory = "PB_FRA_Planes";
		vehicleclass = "PB_FRA_Planes";
		crew = "PB_FRA_SOL_HP";
	};