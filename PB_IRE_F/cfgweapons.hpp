class CfgWeapons
{
    class PB_EF88;
	class rhs_weap_m249_pip;
	class UK3CB_BAF_L115A3;
	class rhs_weap_maaws;
	class PB_EF88_GL;
    class PB_IRE_RIF_AUGA3: PB_EF88
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ACOG_USMC";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_kac_grip";
			};
		};
    };
	class PB_IRE_RIF_AUGA3_GL: PB_EF88_GL
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ACOG_USMC";
			};
		};
    };
	class PB_IRE_SNI_AWP: UK3CB_BAF_L115A3
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
	class PB_IRE_AT_CG: rhs_weap_maaws
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