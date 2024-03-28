class CfgWeapons
{
    class rhs_weap_hk416d145;
    class rhs_weap_hk416d145_m320;
	class rhs_weap_minimi_para_railed;
	class rhs_weap_SCARH_FDE_LB;
	class UK3CB_BAF_L115A3;
    class PB_FRA_RIF_HK416: rhs_weap_hk416d145
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
	class PB_FRA_RIF_HK416_GL: rhs_weap_hk416d145_m320
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
	class PB_FRA_MG_MINIMI: rhs_weap_minimi_para_railed
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
	class PB_FRA_MK_SCARH: rhs_weap_SCARH_FDE_LB
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_M8541_d";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
  	 	};
	};
	class PB_FRA_SNI_KSP: UK3CB_BAF_L115A3
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