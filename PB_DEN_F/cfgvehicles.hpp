///INHERI///
class RHS_M252_D;
class I_MBT_03_cannon_F;
///ARTILLERY///
///AA///
///TANKS///
	class PB_DEN_LEO: I_MBT_03_cannon_F
	{
		editorpreview = "PB_EP\ui\Denmark\PB_DEN_LEO.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_DEN_Faction";
		editorCategory = "PB_DEN_Top";
		editorSubcategory = "PB_DEN_Tanks";
		vehicleclass = "PB_DEN_Tanks";
		crew = "PB_DEN_SOL_C";
		displayname = "leopard 2sg";
		class EventHandlers : EventHandlers
		{
			postInit = "if (local (_this select 0)) then { [(_this select 0), """", [], false] call BIS_fnc_initVehicle; };";
		};
		textureList[]=
		{
			"PB_LEO_DEN",1
		};
		class TextureSources
		{
				class PB_LEO_DEN
				{
					displayName="Danish Splinter";
					author="Kartsa";
					textures[]=
					{
						"PB_DEN_F\data\DANISH_LEO_01_CO.paa",
						"PB_DEN_F\data\DANISH_LEO_02_CO.paa",
						"PB_FIN_F\data\OLV_mbt_03_rcws_co.paa",
						"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
					};
					factions[]=
					{
						"PB_DEN_Faction"
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
///HELICOPTERS///
///TURRETS///
	class PB_DEN_MORTAR: RHS_M252_D
	{
		editorpreview = "PB_EP\ui\Denmark\PB_DEN_MORTAR.jpg";
		scope = 2;
		scopeCurator = 2;
		side = "1";
		faction = "PB_DEN_FACTION";
		editorCategory = "PB_DEN_TOP";
		editorSubcategory = "PB_DEN_TUR";
		vehicleclass = "PB_DEN_TUR";
		crew = "PB_DEN_SOL_R";
	};
///PLANES///