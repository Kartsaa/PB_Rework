///INHERI///
class I_MBT_03_GERnon_F;
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
///ARTILLERY///
///TANKS///
class PB_GER_LEO: I_MBT_03_cannon_F
{
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
///CARS///
class PB_GER_MRZR: rhsusf_mrzr4_d
{
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
///TURRETS///
///PLANES///