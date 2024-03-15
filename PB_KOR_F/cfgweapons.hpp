class CfgWeapons
{
    class PB_K2;
	class PB_K2GL;
	class rhs_weap_XM2010;
	class UK3CB_BAF_L115A3;
    class PB_KOR_RIF_K2: PB_K2
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "PB_K2CS";
			};
		};
    };
	class PB_KOR_RIF_K2_GL: PB_K2GL
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "PB_K2CS";
			};
		};
    };
	class PB_KOR_SNI_K14: rhs_weap_XM2010
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
				item = "rhsusf_acc_harris_bipod";
			};
		};
    };
};