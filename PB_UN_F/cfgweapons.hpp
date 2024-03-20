class CfgWeapons
{
   class rhs_weap_m24sws;
   class PB_UN_SNI_M24: rhs_weap_m24sws
   {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_LEUPOLDMK4";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_harris_swivel";
			};
  	 	};
   };
};