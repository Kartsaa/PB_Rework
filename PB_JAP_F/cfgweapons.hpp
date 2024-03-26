class CfgWeapons
{
    class PB_Type20;
	class rhs_weap_m24sws;
    class PB_JAP_RIF_T20: PB_Type20
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRCO";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_Grip1";
			};
		};
    };
	class PB_JAP_SNI_M24: rhs_weap_m24sws
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_LEUPOLDMK4";
			};
		};
    };
};