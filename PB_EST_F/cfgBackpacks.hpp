///INHERITANCE///
class PB_Kitbag_ESTDCU;
class PB_Medbag_ESTDCU;
class PB_Radiobag_ESTDCU;
///BAGS///
class PB_EST_RIF_BP: PB_Kitbag_ESTDCU
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_rhs_mag_30Rnd_556x45_M855A1_PMAG
		{
			name = "rhs_mag_30Rnd_556x45_M855A1_PMAG";
			count = "5";
		};
	};
};
class PB_EST_RADIO_BAG: PB_Radiobag_ESTDCU
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
class PB_EST_MED_BAG: PB_Medbag_ESTDCU
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
class PB_EST_MG_BAG: PB_Kitbag_ESTDCU
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_150Rnd_762x54_Box_Tracer
		{
			name = "150Rnd_762x54_Box_Tracer";
			count = "3";
		};
	};
};
class PB_EST_AT_BAG: PB_Kitbag_ESTDCU
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
class PB_EST_ENG_BP: PB_Kitbag_ESTDCU
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
class PB_EST_EOD_BP: PB_Kitbag_ESTDCU
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
class PB_EST_GRE_BP: PB_Kitbag_ESTDCU
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