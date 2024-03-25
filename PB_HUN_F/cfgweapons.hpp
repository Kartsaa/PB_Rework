class CfgWeapons
{
    class PB_QIN_CZ_BREN2_556_14;
    class PB_QIN_CZ_BREN2_556_14_GL;
	class rhs_weap_m24sws_wd;
    class PB_HUN_RIF_BREN: PB_QIN_CZ_BREN2_556_14
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
				item = "rhsusf_acc_kac_grip";
			};
  	 	};
	};
	class PB_HUN_RIF_BREN_GL: PB_QIN_CZ_BREN2_556_14_GL
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
	class PB_HUN_SNI_M24: rhs_weap_m24sws_wd
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_nxs_3515x50_md";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
  	 	};
	};
};