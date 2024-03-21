class CfgWeapons
{
    class rhs_weap_m4_carryhandle;
	class rhs_weap_m4_carryhandle_m203;
	class PB_Negev;
	class rhs_weap_m24sws;
	class PB_EF88_GL;
    class PB_ISR_RIF_M4: rhs_weap_m4_carryhandle
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_eotech_552";
			};
		};
    };
    class PB_ISR_MK_M4: rhs_weap_m4_carryhandle
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ACOG2_USMC";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_grip1";
			};
		};
    };
	class PB_ISR_RIF_M4_GL: rhs_weap_m4_carryhandle_m203
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_eotech_552";
			};
		};
    };
	class PB_ISR_MG_MEGEV: PB_Negev
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_eotech_552";
			};
		};
    };
	class PB_ISR_SNI_M24: rhs_weap_m24sws
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_nxs_3515x50f1_h58_sun";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_swivel";
			};
		};
    };
};