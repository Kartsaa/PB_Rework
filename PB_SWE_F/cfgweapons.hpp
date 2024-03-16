class CfgWeapons
{
    class rhs_weap_hk416d10;
    class rhs_weap_hk416d10_m320;
	class rhs_weap_fnmag;
	class arifle_SPAR_03_blk_F;
	class UK3CB_BAF_L115A3;
    class PB_SWE_RIF_AK24: rhs_weap_hk416d10
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_compm4";
			};
			class LinktedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_SF3P556";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_kac_grip";
			};
  	 	};
	};
	class PB_SWE_RIF_AK24_GL: rhs_weap_hk416d10_m320
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_compm4";
			};
			class LinktedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_SF3P556";
			};
  	 	};
	};
	class PB_SWE_MG_KSP: rhs_weap_fnmag
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
	class PB_SWE_MK_AK417: arifle_SPAR_03_blk_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_g33_T1";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
  	 	};
	};
	class PB_SWE_SNI_KSP: UK3CB_BAF_L115A3
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