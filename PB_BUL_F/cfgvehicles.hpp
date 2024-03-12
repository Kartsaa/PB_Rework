///INHERI///
class rhs_2b14_82mm_msv;
class RHS_AGS30_TriPod_MSV;
class rhs_Kornet_9M133_2_msv;
class rhs_Metis_9k115_2_msv;
class rhs_t72ba_tv;
class rhs_bmp1p_msv;
class rhs_btr60_msv;
class rhsusf_m1151_m2_v1_usarmy_wd;
class rhsgref_BRDM2_ATGM_msv;
class rhsgref_BRDM2_msv;
class RHS_UAZ_MSV_01;
class RHS_UAZ_OPEN_MSV_01;
class RHS_BM21_MSV_01;
class rhsusf_M1117_O;
class rhs_su25sm_vvs;
class rhs_mig29s_vvs;
class rhsgref_cdf_Mi24D;
class rhsgref_cdf_reg_Mi8amT;
class PB_BUL_M1117_A: rhsusf_M1117_O
{
	class Turrets;
};
class PB_BUL_M1117_B: PB_BUL_M1117_A
{
	class Turrets: Turrets
	{
		class MainTurret;
		class MainTurret_Out;
		class MainTurret2_Out;
	};
};
class PB_BUL_72_A: rhs_t72ba_tv
{
	class Turrets;
};
class PB_BUL_72_B: PB_BUL_72_A
{
	class Turrets: Turrets
	{
		class MainTurret;
	};
};
class PB_BUL_72_C: PB_BUL_72_B
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets;
		};
	};
};
class PB_BUL_72_D: PB_BUL_72_C
{
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics;
				class CommanderMG;
			};
		};
	};
};
class rhs_2s1_tv;
class PB_BUL_2S1_A: rhs_2s1_tv
{
     class Turrets;
};
class PB_BUL_2S1_B: PB_BUL_2S1_A
{
    class Turrets: Turrets
    {
        class MainTurret;
    };
};
    class PB_BUL_2S1_C: PB_BUL_2S1_B
{
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            class Turrets;
        };
    };
};
class PB_BUL_2S1_D: PB_BUL_2S1_C
{
    class Turrets: Turrets
    {
        class MainTurret: MainTurret
        {
            class Turrets: Turrets
			{
                class CommanderOptics;
                class LoaderOptics;
            };
        };
    };	
};
class RHS_ZU23_MSV;
class PB_BUL_ZU23_A: RHS_ZU23_MSV
{
    class Turrets;
};
class PB_BUL_ZU23_B: PB_BUL_ZU23_A
    {
    class Turrets:Turrets
    {
        class MainTurret;
		class CargoTurret_01;
    };
};
class RHS_CH_47F_10;
///ARTILLERY///
class PB_BUL_2S1 : PB_BUL_2S1_D 
{
    	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_2S1.jpg";
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "PB_BUL_FACTION";
		editorCategory = "PB_BUL_TOP";
		editorSubcategory = "PB_BUL_ART";
		crew = "PB_BUL_SOL_C";
		vehicleclass = "PB_BUL_ART";
		rhs_decalParameters[] = {};
        class Turrets : Turrets {
            class MainTurret : MainTurret {;
                class Turrets: Turrets {
                    class CommanderOptics: CommanderOptics { GunnerType = "PB_BUL_SOL_C"; };
                    class LoaderOptics: LoaderOptics { GunnerType = "PB_BUL_SOL_C"; };
                };			
			};
        };
};
class PB_BUL_M82: rhs_2b14_82mm_msv
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_M82.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_ART";
	vehicleclass = "PB_BUL_ART";
	crew = "PB_BUL_SOL_R";
	displayname = "M82 Mortar";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_BUL_BM21: RHS_BM21_MSV_01
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_BM21.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_ART";
	vehicleclass = "PB_BUL_ART";
	crew = "PB_BUL_SOL_R";
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///TANKS///
class PB_BUL_T72M: PB_BUL_72_D
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_T72M.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_Tanks";
	vehicleclass = "PB_BUL_Tanks";
	crew = "PB_BUL_SOL_C";
	displayname = "T-72M";
	rhs_decalParameters[] = {};	
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			class Turrets: Turrets
			{
				class CommanderOptics: CommanderOptics
				{
					GunnerType = "PB_BUL_SOL_C";
				};
				class CommanderMG: CommanderMG
				{
				};
			};
		};
	};
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///APCS///
class PB_BUL_BTR60: rhs_btr60_msv
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_BTR60.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_APCs";
	vehicleclass = "PB_BUL_APCs";
	crew = "PB_BUL_SOL_C";
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_BUL_BMP1P: rhs_bmp1p_msv
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_BMP1P.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_APCs";
	vehicleclass = "PB_BUL_APCs";
	crew = "PB_BUL_SOL_C";
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_BUL_BRDM2ATGM: rhsgref_BRDM2_ATGM_msv
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_BRDM2ATGM.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_APCs";
	vehicleclass = "PB_BUL_APCs";
	crew = "PB_BUL_SOL_C";
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_BUL_BRDM2MG: rhsgref_BRDM2_msv
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_BRDM2MG.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_APCs";
	vehicleclass = "PB_BUL_APCs";
	crew = "PB_BUL_SOL_C";
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///MRAPS///
class PB_BUL_M1117: PB_BUL_M1117_B
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_M1117.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_MRAP";
	vehicleclass = "PB_BUL_MRAP";
	crew = "PB_BUL_SOL_R";
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gunnertype = "PB_BUL_SOL_R";
		};
		class MainTurret_Out: MainTurret_Out
		{
		};
		class MainTurret2_Out: MainTurret2_Out
		{
		};
	};
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///CARS///
class PB_BUL_M1114: rhsusf_m1151_m2_v1_usarmy_wd
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_M1114.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_Cars";
	vehicleclass = "PB_BUL_Cars";
	displayname = "M1114 (M2)";
	crew = "PB_BUL_SOL_R";
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
	HiddenSelectionsTextures[] = 
	{
		"rhsusf\addons\rhsusf_m11xx\data\rhssaf_M1151_Ext_o_CO.paa",
		"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Tire_wd_CO.paa",
		"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Int_wd_CO.paa",
		"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_Acc_wd_CO.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_w_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
		"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1152M1165_wd_CO.paa",
		"rhsusf\addons\rhsusf_m11xx\data\rhsusf_M1151_GPK_wd_CO.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
	};
};
class PB_BUL_UAZ_C: RHS_UAZ_MSV_01
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_UAZ_C.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_Cars";
	vehicleclass = "PB_BUL_Cars";
	crew = "PB_BUL_SOL_R";
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_BUL_UAZ_O: RHS_UAZ_OPEN_MSV_01
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_UAZ_O.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_Cars";
	vehicleclass = "PB_BUL_Cars";
	crew = "PB_BUL_SOL_R";
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///HELICOPTERS///
class PB_BUL_MI17: rhsgref_cdf_Mi24D
{
	scope = 2;
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_MI17.jpg";
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_HELI";
	vehicleclass = "PB_BUL_HELI";
	crew = "PB_BUL_SOL_HP";
	displayname = "Mil Mi-17";
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_BUL_MI24: rhsgref_cdf_reg_Mi8amT
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_MI24.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_HELI";
	vehicleclass = "PB_BUL_HELI";
	crew = "PB_BUL_SOL_HP";
	displayname = "Mil Mi-24";
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///PLANES///
class PB_BUL_SU25: rhs_su25sm_vvs
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_SU25.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_Planes";
	vehicleclass = "PB_BUL_Planes";
	crew = "PB_BUL_SOL_JP";
	hiddenselectionstextures[] = 
	{
		"\PB_BUL_F\data\bul_su25_body1_co.paa",
		"\PB_BUL_F\data\bul_su25_body2_co.paa",
		"a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa",
		"a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa",
		""
	};
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_BUL_MIG29: rhs_mig29s_vvs
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_MIG29.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_Planes";
	vehicleclass = "PB_BUL_Planes";
	crew = "PB_BUL_SOL_JP";
	rhs_decalParameters[] = {};	
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
///TURRETS///
class PB_BUL_AGS30: RHS_AGS30_TriPod_MSV
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_AGS30.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_TUR";
	vehicleclass = "PB_BUL_TUR";
	crew = "PB_BUL_SOL_R";
	displayname = "AGS-30";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_BUL_Konkurs: rhs_Kornet_9M133_2_msv
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_KONKURS.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_TUR";
	vehicleclass = "PB_BUL_TUR";
	crew = "PB_BUL_SOL_R";
	displayname = "9M113 Konkurs";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_BUL_Metis: rhs_Metis_9k115_2_msv
{
	editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_METIS.jpg";
	scope = 2;
	scopeCurator = 2;
	side = "1";
	faction = "PB_BUL_Faction";
	editorCategory = "PB_BUL_Top";
	editorSubcategory = "PB_BUL_TUR";
	vehicleclass = "PB_BUL_TUR";
	crew = "PB_BUL_SOL_R";
	displayname = "9K115 Metis";
	class TransportWeapons {};
	class TransportMagazines {};
	class TransportItems {};
};
class PB_BUL_ZU23 : PB_BUL_ZU23_B 
	{
		editorpreview = "PB_EP\ui\Bulgaria\PB_BUL_ZU23.jpg";
		scope = 2;
		side = 1;
		author = "Kartsa";
		faction = "PB_BUL_FACTION";
		editorCategory = "PB_BUL_TOP";
		editorSubcategory = "PB_BUL_TUR";
		crew = "PB_BUL_SOL_R";
		vehicleclass = "PB_BUL_TUR";
        class Turrets : Turrets 
        {
            class MainTurret: MainTurret
			{
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType = "PB_BUL_SOL_R";
			};
        };
    };