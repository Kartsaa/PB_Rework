class CfgWeapons
{
    class PB_MSBS_Grot;
	class rhs_weap_svdp_npz;
    class PB_POL_RIF_GROT: PB_MSBS_Grot
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_eotech_Xps3";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_rvg_blk";
			};
		};
    };
	class PB_POL_RIF_GROT_SL: PB_MSBS_Grot
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
				item = "rhsusf_acc_rvg_blk";
			};
		};
    };
	class PB_POL_SNI_SWD: rhs_weap_svdp_npz
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_KHS_blk";
			};
		};
    };
};