	class PB_Kitbag_MTP;
    class PB_CARRYALL_MTP;
    class PB_MedBag_MTP;
	class PB_Radiobag_MTP;
	class PB_UK_RIF_BAG: PB_Kitbag_MTP
	{
		scope = 1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
			class _xx_UK3CB_BAF_556_30Rnd_T
			{
				name = "UK3CB_BAF_556_30Rnd_T";
				count = "5";
			};
		};
	};
    class PB_UK_AT_BAG: PB_Kitbag_MTP
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
				count = 2;
			};
		};
	};
    class PB_UK_RADIO_BAG: PB_Radiobag_MTP
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
    class PB_UK_GRE_BAG: PB_Kitbag_MTP
	{
		scope = 1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
			class _xx_UK3CB_BAF_1Rnd_HE_Grenade_Shell
			{
				name = "UK3CB_BAF_1Rnd_HE_Grenade_Shell";
				count = "8";
			};
            class _xx_UK3CB_BAF_1Rnd_Smoke_Grenade_Shell
			{
				name = "UK3CB_BAF_1Rnd_Smoke_Grenade_Shell";
				count = "2";
			};
		};
	};
    class PB_UK_MG_BAG: PB_Kitbag_MTP
	{
		scope = 1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
		};
	};
    class PB_UK_SNI_BAG: PB_Kitbag_MTP
	{
		scope = 1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
            class _xx_UK3CB_BAF_338_5Rnd_Tracer
            {
                name = "UK3CB_BAF_338_5Rnd_Tracer";
				count = 5;
            };
		};
	};
    class PB_UK_MED_BAG: PB_MedBag_MTP
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
	class PB_UK_ENG_BAG: PB_Kitbag_MTP
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
	};
	class PB_UK_EOD_BAG: PB_Kitbag_MTP
	{
		scope = 1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
			class _xx_MineDetector
			{
				name = "MineDetector";
				count = 1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				name = "DemoCharge_Remote_Mag";
				count = 1;
			};
		};
	};