class CfgWeapons
{
    class PB_QIN_CZ_BREN2_556_14;
	class PB_FIN_TRG22;
	class PB_QIN_CZ_BREN2_556_14_GL;
    class PB_CZE_RIF_BREN2: PB_QIN_CZ_BREN2_556_14
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
	class PB_CZE_RIF_BREN2_GL: PB_QIN_CZ_BREN2_556_14_GL
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
	class PB_CZE_SNI_TRG: PB_FIN_TRG22
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
				item = "rhsusf_acc_harris_swivel";
			};
  	 	};
	};
};