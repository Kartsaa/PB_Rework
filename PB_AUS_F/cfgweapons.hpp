class CfgWeapons
{
    class PB_EF88;
	class rhs_weap_m249_pip;
	class UK3CB_BAF_L115A3;
	class rhs_weap_maaws;
	class PB_EF88_GL;
    class PB_AUS_RIF_EF88: PB_EF88
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_su230";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "UK3CB_BAF_LLM_Flashlight_Black";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_grip1";
			};
		};
    };
	class PB_AUS_RIF_EF88GL: PB_EF88_GL
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_su230";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "UK3CB_BAF_LLM_Flashlight_Black";
			};
		};
    };
	class PB_AUS_MG_F89: rhs_weap_m249_pip
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_su230";
			};
		};
    };
	class PB_AUS_SNI_SR98: UK3CB_BAF_L115A3
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
	class PB_AUS_AT_CG: rhs_weap_maaws
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