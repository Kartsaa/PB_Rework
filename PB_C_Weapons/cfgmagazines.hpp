
class CfgMagazines
{
	
	class CA_Magazine;
	class CA_LauncherMagazine;
	class FakeMagazine;
	class 30Rnd_556x45_Stanag;
	class PB_M855A1_AUG: 30Rnd_556x45_Stanag
	{
        author = "Kartsa";
        ammo = "rhs_ammo_556x45_M855A1_Ball";
        descriptionshort = "5.56x45 M855A1";
        displayname = "5.56x45mm M855A1 30-Round AUG Magazine";
        modelSpecial = PB_T_Weapons\data\EF88\mag\30rnd_556NATO_AUG;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "PB_T_Weapons\data\EF88\mag\308_co.paa", "PB_T_Weapons\data\EF88\mag\308_co.paa" };
		picture = "\PB_Main\UI\EF88\m_aug_m_ca.paa";
        lastroundstracer = 0;
        count = 30;
        scope = 2;
        initspeed = 800;
        displaynameshort = "5.56x45 M855A1";
	};
    class PB_M856A1_AUG: 30Rnd_556x45_Stanag
	{
        author = "Kartsa";
        ammo = "rhs_ammo_556x45_M855A1_Ball";
        descriptionshort = "5.56x45 M856A1";
        displayname = "5.56x45mm M856A1 Tracer 30-Round AUG Magazine";
        modelSpecial = PB_T_Weapons\data\EF88\mag\30rnd_556NATO_AUG;
        modelSpecialIsProxy = 1;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "PB_T_Weapons\data\EF88\mag\308_co.paa", "PB_T_Weapons\data\EF88\mag\308_co.paa" };
		picture = "\PB_Main\UI\EF88\m_aug_m_ca.paa";
        tracersevery = 1;
        count = 30;
        scope = 2;
        initspeed = 800;
        displaynameshort = "5.56x45 M856A1";
	};
    class PB_M855A1_G36: 30Rnd_556x45_Stanag
	{
        author = "Kartsa";
        ammo = "rhs_ammo_556x45_M855A1_Ball";
        descriptionshort = "5.56x45 M855A1";
        displayname = "5.56x45mm M855A1 30-Round G36 Magazine";
        modelSpecial = PB_M_Weapons\G36\magazine\PB_556_G36;
        modelSpecialIsProxy = 1;
		picture = "\PB_Main\UI\G36\m_g36_ca.paa";
        lastroundstracer = 0;
        count = 30;
        scope = 2;
        initspeed = 800;
        displaynameshort = "5.56x45 M855A1";
	};
    class PB_M856A1_G36: 30Rnd_556x45_Stanag
	{
        author = "Kartsa";
        ammo = "rhs_ammo_556x45_M855A1_Ball";
        descriptionshort = "5.56x45 M856A1";
        displayname = "5.56x45mm M856A1 Tracer 30-Round G36 Magazine";
        modelSpecial = PB_M_Weapons\G36\magazine\PB_556_G36;
        modelSpecialIsProxy = 1;
		picture = "\PB_Main\UI\G36\m_g36_ca.paa";
        tracersevery = 1;
        count = 30;
        scope = 2;
        initspeed = 800;
        displaynameshort = "5.56x45 M856A1";
	};
};