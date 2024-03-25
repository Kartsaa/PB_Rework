
class CfgMagazines
{
	
	class CA_Magazine;
	class CA_LauncherMagazine;
	class FakeMagazine;
	class 30Rnd_556x45_Stanag;
	class 30Rnd_762x39_Mag_F;
	class rhs_200rnd_556x45_M_SAW;
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
	class PB_M855_Famas: 30Rnd_556x45_Stanag
	{
        author = "Kartsa";
        ammo = "rhs_ammo_556x45_M855_Ball";
        descriptionshort = "5.56x45 M855";
        displayname = "5.56x45mm M855 25-Round Famas Magazine";
        modelSpecial = PB_M_Weapons\famas\PB_famas_25Rnd;
        modelSpecialIsProxy = 1;
        lastroundstracer = 0;
        count = 25;
        scope = 2;
        initspeed = 930;
        displaynameshort = "5.56x45 M855";
	};
    class PB_M855_Famas_Red: PB_M855_Famas
	{
        ammo = "rhs_ammo_556x45_M855_Ball_Red";
        descriptionshort = "5.56x45 M855 RT";
        displayname = "5.56x45mm M855 Red Tracer 25-Round Famas Magazine";
        tracersevery = 1;
        initspeed = 930;
	};
	class PB_M855_Famas_Yellow: PB_M855_Famas
	{
        ammo = "rhs_ammo_556x45_M855_Ball_Yellow";
        descriptionshort = "5.56x45 M855 YT";
        displayname = "5.56x45mm M855 Yellow Tracer 25-Round Famas Magazine";
        tracersevery = 1;
	};
	class PB_M855_Famas_Green: PB_M855_Famas
	{
        ammo = "rhs_ammo_556x45_M855_Ball_Green";
        descriptionshort = "5.56x45 M855 GT";
        displayname = "5.56x45mm M855 Green Tracer 25-Round Famas Magazine";
        tracersevery = 1;
	};
	class PB_M855_Famas_Orange: PB_M855_Famas
	{
        ammo = "rhs_ammo_556x45_M855_Ball_Green";
        descriptionshort = "5.56x45 M855 OT";
        displayname = "5.56x45mm M855 Orange Tracer 25-Round Famas Magazine";
        tracersevery = 1;
	};
	class PB_M855A1_Famas: 30Rnd_556x45_Stanag
	{
        author = "Kartsa";
        ammo = "rhs_ammo_556x45_M855A1_Ball";
        descriptionshort = "5.56x45 M855A1";
        displayname = "5.56x45mm M855A1 25-Round Famas Magazine";
        modelSpecial = PB_M_Weapons\famas\PB_famas_25Rnd;
        modelSpecialIsProxy = 1;
        lastroundstracer = 0;
        count = 25;
        scope = 2;
        initspeed = 930;
        displaynameshort = "5.56x45 M855A1";
	};
	class PB_M855A1_Famas_Red: 30Rnd_556x45_Stanag
	{
        ammo = "rhs_ammo_556x45_M855A1_Ball_Red";
        displayname = "5.56x45mm M855A1 Red Tracer 25-Round Famas Magazine";
        lastroundstracer = 1;
	};
	class PB_M855A1_Famas_Green: 30Rnd_556x45_Stanag
	{
        ammo = "rhs_ammo_556x45_M855A1_Ball_Green";
        displayname = "5.56x45mm M855A1 Green Tracer 25-Round Famas Magazine";
        lastroundstracer = 1;
	};
	class PB_M855A1_Famas_Yellow: 30Rnd_556x45_Stanag
	{
        ammo = "rhs_ammo_556x45_M855A1_Ball_Yellow";
        displayname = "5.56x45mm M855A1 Yellow Tracer 25-Round Famas Magazine";
        lastroundstracer = 1;
	};
	class PB_M855A1_Famas_Orange: 30Rnd_556x45_Stanag
	{
        ammo = "rhs_ammo_556x45_M855A1_Ball_Orange";
        displayname = "5.56x45mm M855A1 ORange Tracer 25-Round Famas Magazine";
        lastroundstracer = 1;
	};
	class PB_30Rnd_556x45_AK_M855A1: 30Rnd_556x45_Stanag
	{
		ammo = "rhs_ammo_556x45_M855A1_Ball";
        author = "Kartsa";
		picture = "\rhsgref\addons\rhsgref_weapons\icons\m_m21mag_icon_ca.paa";
		displayName = "5.56x45mm M855A1 30 Round AK Magazine";
		displayNameShort = "M855A1";
        initSpeed = 960;
		mass = 9.35;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		modelSpecial = "\rhsafrf\addons\rhs_weapons\mag_proxies\rhs_mag_545x39_6l23_30rnd.p3d";
		modelSpecialIsProxy = 1;
		model = "\rhsafrf\addons\rhs_weapons\magazines\rhs_ak_mag";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"PB_T_Weapons\data\ARM\ARM1_mag.paa"};
	};
    class PB_30Rnd_556x45_AK_M856A1: PB_30Rnd_556x45_AK_M855A1
	{
		author = "$Kartsa";
		ammo = "rhs_ammo_556x45_M855A1_Ball_Red";
		displayName = "5.56x45mm M856A1 (Tracer) 30 Round AK Magazine";
		displayNameShort = "M856A1";
		tracersEvery = 1;
	};
	class PB_30Rnd_556x45_AK_M855: PB_30Rnd_556x45_AK_M855A1
	{
		author = "$Kartsa";
		picture = "\rhsgref\addons\rhsgref_weapons\icons\m_m21mag_icon_ca.paa";
		ammo = "rhs_ammo_556x45_M855_Ball";
		displayName = "5.56x45mm M855 30 Round AK Magazine";
		displayNameShort = "M855";
        initSpeed = 948.8424;
	};
	class PB_30Rnd_556x45_AK_M855_TR: PB_30Rnd_556x45_AK_M855A1
	{
		author = "$Kartsa";
		picture = "\rhsgref\addons\rhsgref_weapons\icons\m_m21mag_icon_ca.paa";
		ammo = "rhs_ammo_556x45_M855_Ball_Red";
		displayName = "5.56x45mm M855 (Red Tracer) 30 Round AK Magazine";
		displayNameShort = "M855";
        initSpeed = 948.8424;
		tracersEvery = 1;
	};
	class PB_30Rnd_556x45_AK_M855_TG: PB_30Rnd_556x45_AK_M855A1
	{
		author = "$Kartsa";
		picture = "\rhsgref\addons\rhsgref_weapons\icons\m_m21mag_icon_ca.paa";
		ammo = "rhs_ammo_556x45_M855_Ball_Green";
		displayName = "5.56x45mm M855 (Green Tracer) 30 Round AK Magazine";
		displayNameShort = "M855";
        initSpeed = 948.8424;
	};
	class PB_200Rnd_762x51_M80: CA_Magazine
	{
		author = "Kartsa";
		picture = "\rhsusf\addons\rhsusf_inventoryicons\data\magazines\rhsusf_200Rnd_556x45_box_ca.paa";
		scope = 2;
		scopeArsenal = 2;
		ammo = "rhs_ammo_762x51_M80_Ball";
		displayname = "200rnd 7.62x51 M80";
		displaynameshort = "7.62x51 M80";
		initSpeed = 838;
		lastroundstracer = 5;
		tracersevery = 5;
		mass = 61.65;
		hiddenSelections[] = {};
		model = "\rhsusf\addons\rhsusf_weapons\magazines\rhs_m249_box_mag";
		modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
		modelSpecialIsProxy = 1;
	};
	class PB_200Rnd_762x51_M61: PB_200Rnd_762x51_M80
	{
		ammo = "rhs_ammo_762x51_M61_AP";
		displayname = "200rnd 7.62x51 M61 AP";
		displaynameshort = "7.62x51 M61";
		initSpeed = 838;
		lastroundstracer = 5;
		tracersevery = 5;
	};
	class PB_200Rnd_762x51_M62: PB_200Rnd_762x51_M80
	{
		ammo = "rhs_ammo_762x51_M62_tracer";
		displayname = "200rnd 7.62x51 M62 Tracer";
		displaynameshort = "7.62x51 M62";
		initSpeed = 838;
		lastroundstracer = 5;
		tracersevery = 5;
	};
	class PB_200Rnd_762x51_M80_EPR: PB_200Rnd_762x51_M80
	{
		ammo = "rhs_ammo_762x51_M80A1EPR_Ball";
		displayname = "200rnd 7.62x51 M80A1 EPR";
		displaynameshort = "7.62x51 M80A1";
		initSpeed = 838;
		lastroundstracer = 5;
		tracersevery = 5;
	};
};