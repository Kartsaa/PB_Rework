///INHERITANCE///
class PB_KITBAG_M05;
class PB_Radiobag_M05;
class PB_Medbag_M05;
///BAGS///
class PB_FIN_RIF_BP: PB_KITBAG_M05
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_PB_RK_Mag
		{
			name = "B_RK_Mag";
			count = "5";
		};
	};
};
class PB_FIN_RADIO_BAG: PB_Radiobag_M05
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
class PB_FIN_MED_BAG: PB_Medbag_M05
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
class PB_FIN_MG_BAG: PB_KITBAG_M05
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_rhs_100Rnd_762x54mmR_green
		{
			name = "rhs_100Rnd_762x54mmR_green";
			count = "3";
		};
	};
};
class PB_FIN_AA_BP: PB_KITBAG_M05
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_Titan_AA
		{
			name = "Titan_AA";
			count = "2";
		};
	};
};
class PB_FIN_ENG_BP: PB_KITBAG_M05
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
class PB_FIN_EOD_BP: PB_KITBAG_M05
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