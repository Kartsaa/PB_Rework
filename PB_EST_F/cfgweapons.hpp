class CfgWeapons
{
    class PB_RAHE;
    class PB_RAHESGL;
	class PB_RAHEL;
	class PB_Negev;

    class PB_EST_RIF_RAHE: PB_RAHE
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_g33_T1";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "UK3CB_BAF_LLM_IR_Black";
			};
  	 	};
	};
	class PB_EST_RIF_RAHE_GL: PB_RAHESGL
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_g33_T1";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "UK3CB_BAF_LLM_IR_Black";
			};
  	 	};
	};
	class PB_EST_MG_NEGEV: PB_Negev
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_g33_xps3";
			};
  	 	};
	};
	class PB_EST_MK_RAHEL: PB_RAHEL
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_M8541";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
  	 	};
	};
};