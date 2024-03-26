///INHERITANCE///
class PB_Kitbag_Type2;
class PB_Radiobag_Type2;
class PB_MedBag_Type2;
///BAGS///
class PB_JAP_RIF_BP: PB_Kitbag_Type2
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 2;
		};
		class _xx_rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red
		{
			name = "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red";
			count = "5";
		};
	};
};
class PB_JAP_AT_BP: PB_Kitbag_Type2
{
	scope = 1;
	class TransportItems
	{
		class _xx_MRAWS_HEAT_F
		{
			name = "MRAWS_HEAT_F";
			count = "2";
		};
	};
};
class PB_JAP_AA_BP: PB_Kitbag_Type2
{
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_fim92_mag
		{
			name = "rhs_fim92_mag";
			count = "2";
		};
	};
};
class PB_JAP_RADIO_BAG: PB_Radiobag_Type2
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
class PB_JAP_MED_BAG: PB_MedBag_Type2
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
class PB_JAP_MG_BAG: PB_Kitbag_Type2
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_rhsusf_200rnd_556x45_M855_mixed_box
		{
			name = "rhsusf_200rnd_556x45_M855_mixed_box";
			count = "2";
		};
	};
};
class PB_JAP_ENG_BP: PB_Kitbag_Type2
{
	scope = 1;
	class TransportItems
	{
		class _xx_Toolkit
		{
				name = "Toolkit";
				count = 1;
		};
		class _xx_rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red
		{
			name = "rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red";
			count = "3";
		};
	};
};
class PB_JAP_EOD_BP: PB_Kitbag_Type2
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