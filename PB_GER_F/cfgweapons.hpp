class CfgWeapons
{
    class PB_G36;
	class PB_G36_GL;
	class PB_MG5;
	class UK3CB_BAF_L115A3_DE;
    class PB_GER_RIF_G36: PB_G36
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_su230_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "UK3CB_BAF_LLM_IR_Tan";
			};
  	 	};
	};
	class PB_GER_RIF_G36GL: PB_G36_GL
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_su230_c";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "UK3CB_BAF_LLM_IR_Tan";
			};
  	 	};
	};
	class PB_GER_MG_MG5: PB_MG5
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_su230_c";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
  	 	};
	};
	class PB_GER_SNI_AWM: UK3CB_BAF_L115A3_DE
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_premier_low";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
  	 	};
	};
};