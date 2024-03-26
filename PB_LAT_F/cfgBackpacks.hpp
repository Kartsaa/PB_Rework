///INHERITANCE///
class PB_COMBAT_LATPAT;
class PB_CARRYALL_LATPAT;
class PB_Radiobag_LATPAT;
class PB_COMBAT_MED_LATPAT;
///BAGS///
class PB_LAT_RIF_BP: PB_COMBAT_LATPAT
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_PB_M856A1_G36
		{
			name = "PB_M856A1_G36";
			count = "5";
		};
	};
};
class PB_LAT_AT_BP: PB_COMBAT_LATPAT
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_MRAWS_HEAT_F
		{
			name = "MRAWS_HEAT_F";
			count = "1";
		};
	};
};
class PB_LAT_AA_BP: PB_COMBAT_LATPAT
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_RHS_FIM92_MAG
		{
			name = "RHS_FIM92_MAG";
			count = "1";
		};
	};
};
class PB_LAT_RADIO_BAG: PB_Radiobag_LATPAT
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 2;
		};
         class _xx_UK3CB_BAF_SmokeShell
		{
			name = "UK3CB_BAF_SmokeShell";
			count = "3";
		};
		class _xx_UK3CB_BAF_SmokeShellGreen
		{
			name = "UK3CB_BAF_SmokeShellGreen";
			count = "3";
		};
         class _xx_UK3CB_BAF_SmokeShellRed
		{
			name = "UK3CB_BAF_SmokeShellRed";
			count = "3";
		};
            class _xx_UK3CB_BAF_SmokeShellBlue
		{
			name = "UK3CB_BAF_SmokeShellRed";
			count = "3";
		};
	};
};
class PB_LAT_MED_BAG: PB_COMBAT_MED_LATPAT
{
    scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 10;
		};
		class _xx_MediKit
		{
			name = "MediKit";
			count = "1";
		};
	};
};
class PB_LAT_MG_BAG: PB_CARRYALL_LATPAT
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_rhsusf_200rnd_556x45_M855_box
		{
			name = "rhsusf_200rnd_556x45_M855_box";
			count = "3";
		};
	};
};
class PB_LAT_ENG_BP: PB_COMBAT_LATPAT
{
	scope = 1;
	class TransportItems
	{
		class _xx_Toolkit
		{
				name = "Toolkit";
				count = 1;
		};
		class _xx_PB_M856A1_G36
		{
			name = "PB_M856A1_G36";
			count = "3";
		};
	};
};
class PB_LAT_EOD_BP: PB_COMBAT_LATPAT
{
	scope = 1;
	class TransportItems
	{
		class _xx_Toolkit
		{
				name = "Toolkit";
				count = 1;
		};
		class _xx_MineDetector
		{
			name = "MineDetector";
			count = "1";
		};
		class _xx_ClaymoreDirectionalMine_Remote_Mag
		{
			name = "ClaymoreDirectionalMine_Remote_Mag";
			count = "1";
		};
		class _xx_DemoCharge_Remote_Mag
		{
			name = "DemoCharge_Remote_Mag";
			count = "1";
		};
	};
};
class PB_LAT_GRE_BP: PB_COMBAT_LATPAT
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_rhs_mag_M441_HE
		{
			name = "rhs_mag_M441_HE";
			count = "10";
		};
		class _xx_rhs_mag_m714_white
		{
			name = "rhs_mag_m714_white";
			count = "2";
		};
	};
};