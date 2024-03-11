class CfgWeapons
{
    class PB_SCARL_GRIP;
	class PB_SCARL_GL;
	class rhs_weap_m249_pip_S;
	class UK3CB_BAF_L115A3;
    class PB_BEL_RIF_SCARL: PB_SCARL_GRIP
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_compm4";
			};
		};
    };
	class PB_BEL_RIF_SCARL_SL: PB_SCARL_GRIP
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ACOG_RMR";
			};
		};
    };
	class PB_BEL_RIF_SCARL_GL: PB_SCARL_GL
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_compm4";
			};
		};
    };
	class PB_BEL_MG_MINIMI: rhs_weap_m249_pip_S
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ACOG_RMR";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_kac_grip_saw_bipod";
			};
		};
    };
	class PB_BEL_SNI_AWM: UK3CB_BAF_L115A3
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
};