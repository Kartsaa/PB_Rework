class CfgWeapons
{
    class PB_C7;
	class PB_C8;
	class PB_C7M203;
	class PB_C9;
	class rhs_weap_XM2010;
	class rhs_weap_maaws;
	class PB_C14: rhs_weap_XM2010
	{
		scope = 2;
		displayname = "C14";
		magazines[] = {"rhs_5Rnd_338lapua_t5000"};
		magazineWell[] = {"CBA_338LM_T5000"};
	};
    class PB_CAN_RIF_C7: PB_C7
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ELCAN";
			};
  	 	};
	};
	class PB_CAN_RIF_C7M203: PB_C7M203
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ELCAN";
			};
  	 	};
	};
    class PB_CAN_RIF_C8: PB_C8
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ELCAN";
			};
  	 	};
	};
	class PB_CAN_MG_C9: PB_C9
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ELCAN";
			};
  	 	};
	};
	class PB_CAN_AT_CG: rhs_weap_maaws
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhs_optic_maaws";
			};
		};
    };
	class PB_SNI_C14: PB_C14
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ELCAN";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
  	 	};
	};
};