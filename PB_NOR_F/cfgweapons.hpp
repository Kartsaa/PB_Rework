class CfgWeapons
{
    class rhs_weap_hk416d145;
    class rhs_weap_hk416d145_m320;
	class rhs_weap_minimi_para_railed;
	class PB_HK417;
	class UK3CB_BAF_L115A3;
    class PB_NOR_RIF_HK416: rhs_weap_hk416d145
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_compm4";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "UK3CB_BAF_LLM_IR_Black";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_kac_grip";
			};
  	 	};
	};
	class PB_NOR_RIF_HK416_GL: rhs_weap_hk416d145_m320
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_compm4";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "UK3CB_BAF_LLM_IR_Black";
			};
  	 	};
	};
	class PB_NOR_MG_MINIMI: rhs_weap_minimi_para_railed
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
	class PB_NOR_MK_HK417: PB_HK417
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_M5841_low";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
  	 	};
	};
};