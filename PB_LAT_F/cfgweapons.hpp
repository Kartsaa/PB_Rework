class CfgWeapons
{
    class PB_G36;
	class PB_G36_GL;
	class rhs_weap_minimi_para_railed;
	class UK3CB_BAF_L115A3;
    class PB_LAT_RIF_G36: PB_G36
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
	class PB_LAT_RIF_G36_GL: PB_G36_GL
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
	class PB_LAT_SNI_AW: UK3CB_BAF_L115A3
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
    class PB_LAT_MG_MINIMI: rhs_weap_minimi_para_railed
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
};