	class B_TacticalPack_Oli;
    class rhs_medic_bag;
	class PB_Radiobag_Green;
	class PB_UN_RIF_BAG: B_TacticalPack_Oli
	{
		scope = 1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 5;
			};
		};
	};
    class PB_UN_RADIO_BAG: PB_Radiobag_Green
	{
		scope = 1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 2;
			};
            class _xx_UN3CB_BAF_SmokeShell
			{
				name = "UN3CB_BAF_SmokeShell";
				count = "3";
			};
			class _xx_UN3CB_BAF_SmokeShellGreen
			{
				name = "UN3CB_BAF_SmokeShellGreen";
				count = "3";
			};
            class _xx_UN3CB_BAF_SmokeShellRed
			{
				name = "UN3CB_BAF_SmokeShellRed";
				count = "3";
			};
             class _xx_UN3CB_BAF_SmokeShellBlue
			{
				name = "UN3CB_BAF_SmokeShellRed";
				count = "3";
			};
		};
	};
    class PB_UN_MG_BAG: B_TacticalPack_Oli
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
    class PB_UN_MED_BAG: rhs_medic_bag
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
	class PB_UN_ENG_BAG: B_TacticalPack_Oli
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
	class PB_UN_EOD_BAG: B_TacticalPack_Oli
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
		};
	};