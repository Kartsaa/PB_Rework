class CfgWeapons
{
    class PB_GM10A4;
    class PB_GM10A4_M203;
	class rhs_weap_m249_pip_S;
	class arifle_SPAR_03_snd_F;
	class UK3CB_BAF_L115A3;
    class PB_DEN_RIF_GM10: PB_GM10A4
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_su230_c";
			};
			class LinktedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_SFMB556";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_grip2_tan";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
  	 	};
	};
	class PB_DEN_RIF_GM10_GL: PB_GM10A4_M203
    {
        scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_su230_c";
			};
			class LinktedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "rhsusf_acc_SFMB556";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "acc_pointer_IR";
			};
  	 	};
	};
	class PB_DEN_MG_MINIMI: rhs_weap_m249_pip_S
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
				item = "rhsusf_acc_grip3_tan";
			};
  	 	};
	};
	class PB_DEN_MK_C20: arifle_SPAR_03_snd_F
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "RKSL_optic_PMII_312_des";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
  	 	};
	};
	class PB_DEN_SNI_KSP: UK3CB_BAF_L115A3
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_nxs_3515x50_md";
			};
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
  	 	};
	};
};