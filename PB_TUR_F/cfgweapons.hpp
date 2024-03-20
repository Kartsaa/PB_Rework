class CfgWeapons
{
    class PB_MPT55;
	class PB_MPT76;
	class UK3CB_BAF_L115A3;
	class rhs_weap_maaws;
	class PB_MPT55SGL;
    class PB_TUR_RIF_MPT55: PB_MPT55
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_compm4";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_grip2";
			};
		};
    };
    class PB_TUR_MG_MPT55: PB_MPT55
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_compm4";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "bipod_01_F_blk";
			};
		};
    };
    class PB_TUR_MK_MPT76: PB_MPT76
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_su230";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_grip1";
			};
		};
    };
    class PB_TUR_RIF_MPT55_GL: PB_MPT55SGL
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
};