///INHERITANCE///
class PB_Kitbag_AMCU;
class PB_Radiobag_AMCU;
class PB_MedBag_AMCU;
///BAGS///
class PB_AUS_RIF_BP: PB_Kitbag_AMCU
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_PB_M856A1_AUG
		{
			name = "PB_M856A1_AUG";
			count = "5";
		};
	};
};
class PB_AUS_RADIO_BAG: PB_Radiobag_AMCU
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
class PB_AUS_MED_BAG: PB_MedBag_AMCU
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
class PB_AUS_MG_BAG: PB_Kitbag_AMCU
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_rhsusf_200Rnd_556x45_M855_soft_pouch_coyote
		{
			name = "rhsusf_200Rnd_556x45_M855_soft_pouch_coyote";
			count = "3";
		};
	};
};
class PB_AUS_AT_BP: PB_Kitbag_AMCU
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_rhs_mag_maaws_HEAT
		{
			name = "rhs_mag_maaws_HEAT";
			count = "2";
		};
	};
};
class PB_AUS_ENG_BP: PB_Kitbag_AMCU
{
	scope = 1;
	class TransportItems
	{
		class _xx_Toolkit
		{
				name = "Toolkit";
				count = 1;
		};
		class _xx_PB_M856A1_AUG
		{
			name = "PB_M856A1_AUG";
			count = "3";
		};
	};
};
class PB_AUS_EOD_BP: PB_Kitbag_AMCU
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
class PB_AUS_GRE_BP: PB_Kitbag_AMCU
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