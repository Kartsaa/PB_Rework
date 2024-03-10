
class CfgMagazines
{
	
	class CA_Magazine;
	class CA_LauncherMagazine;
	class FakeMagazine;
	class 30Rnd_556x45_Stanag;
	class 30Rnd_762x39_Mag_F;
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
	class PB_DM12_HEAT_F: CA_LauncherMagazine
	{
		author = "Aegis Team";
		scope = 2; 
		scopeArsenal = 2;
		ammo = PB_R_DM12_HEAT;
		modelSpecialIsProxy=1;
		displayName = "DM12 HEAT Grenade";
		displayNameShort = "HEAT";
		descriptionShort = "Type: High Explosive Anti Tank<br />Caliber: 110mm";
		model = "\PB_M_Weapons\Pzf3\DM12_HEAT.p3d";
		modelSpecial = "\PB_M_Weapons\Pzf3\DM12_HEAT_proxy.p3d";
		picture = "\PB_Main\UI\PzF3\picture_DM12_HEAT_CA.paa";
		initSpeed = 220;
		mass = 90;
	};
	class PB_DM22_HEAT_F: PB_DM12_HEAT_F
	{
		author = "Aegis Team";
		scope = 2; 
		scopeArsenal = 2;
		modelSpecialIsProxy=1;
		ammo = PB_R_DM22_HEAT;
		displayName = "DM22 HEAT Grenade";
		displayNameShort = "HEAT";
		descriptionShort = "Type: High Explosive Anti Tank<br />Caliber: 110mm";
		model = "\PB_M_Weapons\Pzf3\DM22_HEAT.p3d";
		modelSpecial = "\PB_M_Weapons\Pzf3\DM22_HEAT_proxy.p3d";
		picture = "\PB_Main\UI\PzF3\picture_DM22_HEAT_CA.paa";
		mass = 100;
	};
	class PB_DM32_HEAT_MP_F: PB_DM12_HEAT_F
	{
		author = "Aegis Team";
		scope = 2; 
		scopeArsenal = 2;
		ammo = PB_R_DM32_HEAT_MP;
		modelSpecialIsProxy=1;
		displayName = "DM32 HEAT-MP Grenade";
		displayNameShort = "HEAT-MP";
		descriptionShort = "Type: High Explosive Anti Tank - Multi Purpose<br />Caliber: 110mm";
		model = "\PB_M_Weapons\Pzf3\DM32_HEAT_MP.p3d";
		modelSpecial = "\PB_M_Weapons\Pzf3\DM32_HEAT_MP_proxy.p3d";
		picture = "\PB_Main\UI\PzF3\picture_DM32_HEAT_MP_CA.paa";
		mass = 100;
	};
	class PB_RK_Mag: 30Rnd_762x39_Mag_F
	{
        author = "Kartsa";
        ammo = "PB_RK_762x39_Ball";
        descriptionshort = 7.62x39mm;
        displayname = 7.62x39mm 30 Round RK Magazine;
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"PB_T_Weapons\data\RK62M2\stock_co.paa"};
        modelSpecial = PB_M_Weapons\RK62_Mag\KARRK62_mag;
        modelSpecialIsProxy = 1;
		picture = "\PB_Main\ui\RK62\RK62MAG_UI_CA.paa";
        lastroundstracer = 3;
        count = 30;
        scope = 2;
        initspeed = 800;
        displaynameshort = 7.62x39mm;
	};
};