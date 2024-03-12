class CfgWeapons
{
    class PB_RK62M2;
	class PB_FIN_TRG22;
    class PB_FIN_RIF_RK62M2: PB_RK62M2
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ACOG";
			};
  	 	};
	};
	class PB_FIN_SNI_TRG: PB_FIN_TRG22
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