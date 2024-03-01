class CfgWeapons
{
///INHERITANCE///
    class UK3CB_BAF_L85A3;
    class UK3CB_BAF_L129A1;
    class UK3CB_BAF_L85A3_UGL;
    class UK3CB_BAF_L7A2;
    class UK3CB_BAF_L115A3_BL;
    class rhs_weap_maaws;
///WEAPONS////
    class PB_RIF_F_L85A3: UK3CB_BAF_L85A3
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RKSL_optic_LDS";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "UK3CB_BAF_LLM_IR_Tan";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "UK3CB_underbarrel_acc_grippod";
			};
		};
	};
    class PB_RIF_F_L85GL: UK3CB_BAF_L85A3_UGL
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RKSL_optic_LDS";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "UK3CB_BAF_LLM_IR_Tan";
			};
		};
	};
    class PB_SNI_F_L129A1: UK3CB_BAF_L129A1
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "UK3CB_BAF_TA648";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "UK3CB_underbarrel_acc_fgrip_bipod";
			};
		};
	};
    class PB_SNI_F_L115A3: UK3CB_BAF_L115A3_BL
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RKSL_optic_PMII_525";
			};
            class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "UK3CB_underbarrel_acc_bipod";
			};
		};
    };
    class PB_AT_M3: rhs_weap_maaws
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_optic_maaws";
			};
		};
    };
};