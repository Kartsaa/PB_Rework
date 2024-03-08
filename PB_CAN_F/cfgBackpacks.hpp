///INHERITANCE///
class PB_CARRYALL_CADPATMT;
class PB_EAGLE_CADPATMT;
class PB_Radiobag_CADPATMT;
class PB_EAGLE_MED_CADPATMT;
///BAGS///
class PB_CAN_RIF_BP: PB_EAGLE_CADPATMT
{
	scope = 1;
	class TransportItems
	{
		class _xx_FirstAidKit
		{
				name = "FirstAidKit";
				count = 2;
		};
		class _xx_rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red
		{
			name = "rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red";
			count = "5";
		};
	};
};
class PB_CAN_RADIO_BAG: PB_Radiobag_CADPATMT
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
class PB_CAN_MED_BAG: PB_EAGLE_MED_CADPATMT
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
class PB_CAN_MG_BAG: PB_CARRYALL_CADPATMT
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
class PB_CAN_AT_BP: PB_CARRYALL_CADPATMT
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
class PB_CAN_ENG_BP: PB_EAGLE_CADPATMT
{
	scope = 1;
	class TransportItems
	{
		class _xx_Toolkit
		{
				name = "Toolkit";
				count = 1;
		};
		class _xx_rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red
		{
			name = "rhs_mag_30Rnd_556x45_m855_Stanag_Tracer_Red";
			count = "3";
		};
	};
};
class PB_CAN_EOD_BP: PB_EAGLE_CADPATMT
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
class PB_CAN_GRE_BP: PB_EAGLE_CADPATMT
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