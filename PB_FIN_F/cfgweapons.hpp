class CfgWeapons
{
    class PB_RK62M2;
	class rhs_weap_m24sws;
	class PB_FIN_TRG22: rhs_weap_m24sws
	{
		scope = 2;
		displayname = "TRG-22";
		magazines[] = {"rhs_5Rnd_338lapua_t5000"};
		magazineWell[] = {"CBA_338LM_T5000"};
	};
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