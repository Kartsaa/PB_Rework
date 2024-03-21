///INHERITANCE///
class PB_ASSAULT_GREEN;
class PB_RADIOBAG_GREEN;
class PB_CARRYALL_GREEN;
class PB_ASSAULT_MED_GREEN;
///BAGS///
class PB_ISR_RIF_BP: PB_ASSAULT_GREEN
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
		{
			name = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
			count = "5";
		};
	};
};
class PB_ISR_RADIO_BAG: PB_RADIOBAG_GREEN
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
class PB_ISR_MED_BAG: PB_ASSAULT_MED_GREEN
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
class PB_ISR_MG_BAG: PB_CARRYALL_GREEN
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
class PB_ISR_AT_BP: PB_ASSAULT_GREEN
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_Titan_AT
		{
			name = "Titan_AT";
			count = "1";
		};
		class _xx_Titan_AP
		{
			name = "Titan_AP";
			count = "1";
		};
	};
};
class PB_ISR_ENG_BP: PB_ASSAULT_GREEN
{
	scope = 1;
	class TransportItems
	{
		class _xx_Toolkit
		{
				name = "Toolkit";
				count = 1;
		};
		class _xx_rhs_mag_30Rnd_556x45_M855A1_Stanag
		{
			name = "rhs_mag_30Rnd_556x45_M855A1_Stanag";
			count = "3";
		};
	};
};
class PB_ISR_EOD_BP: PB_ASSAULT_GREEN
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
class PB_ISR_GRE_BP: PB_ASSAULT_GREEN
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