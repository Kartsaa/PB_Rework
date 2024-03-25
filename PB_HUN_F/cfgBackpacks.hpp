///INHERITANCE///
class PB_COMBAT_2015M;
class PB_COMBAT_MED_2015M;
class PB_KITBAG_2015M;
class PB_Radiobag_2015M;
///BAGS///
class PB_HUN_RIF_BP: PB_COMBAT_2015M
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red
		{
			name = "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red";
			count = "5";
		};
	};
};
class PB_HUN_RADIO_BAG: PB_Radiobag_2015M
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
class PB_HUN_MED_BAG: PB_COMBAT_MED_2015M
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
class PB_HUN_MG_BAG: PB_KITBAG_2015M
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_rhsusf_100Rnd_762x51_m62_tracer
		{
			name = "rhsusf_100Rnd_762x51_m62_tracer";
			count = "3";
		};
	};
};
class PB_HUN_AT_BAG: PB_KITBAG_2015M
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
		class _xx_MRAWS_HE_F
		{
			name = "MRAWS_HE_F";
			count = "1";
		};
	};
};
class PB_HUN_ENG_BP: PB_KITBAG_2015M
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
class PB_HUN_EOD_BP: PB_KITBAG_2015M
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