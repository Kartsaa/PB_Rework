	///This whole shit is its own cfg cause i dont have the mental capacity to go through this shit
	
	class O_Truck_03_covered_F;
	class O_Truck_03_transport_F;
	class O_Truck_03_ammo_F;
	class O_Truck_03_device_F;
	class O_Truck_03_fuel_F;
	class O_Truck_03_repair_F;
	class O_Truck_03_medical_F;
	class PB_Typhoon_covered_Base: O_Truck_03_covered_F
	{
		author="CapryCorn";
		forceInGarage=1;
		vehicleClass = "rhs_vehclass_truck";
		editorSubcategory="rhs_EdSubcat_truck";
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_7N10_AK";
				count="10";
			};
			class _xx_HandGrenade_East
			{
				magazine="rhs_mag_rgd5";
				count="10";
			};
			class _xx_signal_rounds
			{
				magazine="rhs_mag_nspn_red";
				count="10";
			};
			class _xx_SmokeShellRed
			{
				magazine="rhs_mag_rdg2_white";
				count="4";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
		};
		class EventHandlers;
		textureList[]=
		{
			"Blu",
			1
		};
		class TextureSources
		{
			class Blu_CSAT
			{
				displayName="CSAT (Hex)";
				author="BI";
				textures[]=
				{
					"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa", "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa", "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa", "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cover_CO.paa"
				};
			};
			class Blu_CSAT_Green
			{
				displayName="CSAT (Green Hex)";
				author="BI";
				textures[]=
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cover_ghex_CO.paa"
				};
			};
			class Blu_Grey
			{
				displayName="Grey";
				author="Holm (Geeko)";
				textures[]=
				{
					"PB_Vehicle_T\data\GREY_Truck_03_ext01_CO.paa",
					"PB_Vehicle_T\data\GREY_Truck_03_ext02_CO.paa",
					"PB_Vehicle_T\data\GREY_Truck_03_cargo_CO.paa",
					"PB_Vehicle_T\data\GREY_Truck_03_cover_CO.paa"
				};
			};
		};
	};
	class PB_Typhoon_covered_MSV: PB_Typhoon_covered_Base
	{
		_generalMacro="Typhoon_covered_MSV";
		scope=2;
		side=0;
		faction = "rhs_faction_msv";
		displayName="KamAZ-63968";
		crew="rhs_msv_driver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"PB_Vehicle_T\data\GREY_Truck_03_ext01_CO.paa",
			"PB_Vehicle_T\data\GREY_Truck_03_ext02_CO.paa",
			"PB_Vehicle_T\data\GREY_Truck_03_cargo_CO.paa",
			"PB_Vehicle_T\data\GREY_Truck_03_cover_CO.paa"
		};
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
	};
	class PB_Typhoon_covered_VDV: PB_Typhoon_covered_MSV
	{
		faction = "rhs_faction_vdv";
		crew="rhs_vdv_driver";
		typicalCargo[]=
		{
			"rhs_vdv_driver"
		};
	};
	class PB_Typhoon_covered_VMF: PB_Typhoon_covered_MSV
	{
		faction = "rhs_faction_vmf";
		crew="rhs_vmf_flora_driver";
		typicalCargo[]=
		{
			"rhs_vmf_flora_driver"
		};
	};
	class PB_Typhoon_covered_VV: PB_Typhoon_covered_MSV
	{
		faction = "rhs_faction_vv";
		crew="rhs_msv_driver";
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
	};
	
//============================== Open ===============================
	class PB_Typhoon_open_Base: O_Truck_03_transport_F
	{
		author="CapryCorn";
		forceInGarage=1;
		vehicleClass = "rhs_vehclass_truck";
		editorSubcategory="rhs_EdSubcat_truck";
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_7N10_AK";
				count="10";
			};
			class _xx_HandGrenade_East
			{
				magazine="rhs_mag_rgd5";
				count="10";
			};
			class _xx_signal_rounds
			{
				magazine="rhs_mag_nspn_red";
				count="10";
			};
			class _xx_SmokeShellRed
			{
				magazine="rhs_mag_rdg2_white";
				count="4";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
		};
		class EventHandlers;
		textureList[]=
		{
			"Blu",
			1
		};
		class TextureSources
		{
			class Blu_CSAT
			{
				displayName="CSAT (Hex)";
				author="BI";
				textures[]=
				{
					"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa", "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa", "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa"
				};
			};
			class Blu_CSAT_Green
			{
				displayName="CSAT (Green Hex)";
				author="BI";
				textures[]=
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"
				};
			};
			class Blu_Grey
			{
				displayName="Grey";
				author="Holm (Geeko)";
				textures[]=
				{
					"PB_Vehicle_T\data\GREY_Truck_03_ext01_CO.paa",
					"PB_Vehicle_T\data\GREY_Truck_03_ext02_CO.paa",
					"PB_Vehicle_T\data\GREY_Truck_03_cargo_CO.paa"
				};
			};
		};
	};
	class PB_Typhoon_open_MSV: PB_Typhoon_open_Base
	{
		_generalMacro="Typhoon_open_MSV";
		scope=2;
		side=0;
		faction = "rhs_faction_msv";
		displayName="KamAZ-63968 (Open)";
		crew="rhs_msv_driver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"PB_Vehicle_T\data\GREY_Truck_03_ext01_CO.paa",
			"PB_Vehicle_T\data\GREY_Truck_03_ext02_CO.paa",
			"PB_Vehicle_T\data\GREY_Truck_03_cargo_CO.paa"
		};
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
	};
	class PB_Typhoon_open_VDV: PB_Typhoon_open_MSV
	{
		faction = "rhs_faction_vdv";
		crew="rhs_vdv_driver";
		typicalCargo[]=
		{
			"rhs_vdv_driver"
		};
	};
	class PB_Typhoon_open_VMF: PB_Typhoon_open_MSV
	{
		faction = "rhs_faction_vmf";
		crew="rhs_vmf_flora_driver";
		typicalCargo[]=
		{
			"rhs_vmf_flora_driver"
		};
	};
	class PB_Typhoon_open_VV: PB_Typhoon_open_MSV
	{
		faction = "rhs_faction_vv";
		crew="rhs_msv_driver";
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
	};
//============================== Ammo ===============================	
	class PB_Typhoon_ammo_Base: O_Truck_03_ammo_F
	{
		author="CapryCorn";
		forceInGarage=1;
		vehicleClass = "rhs_vehclass_truck";
		editorSubcategory="rhs_EdSubcat_truck";
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_7N10_AK";
				count="10";
			};
			class _xx_HandGrenade_East
			{
				magazine="rhs_mag_rgd5";
				count="10";
			};
			class _xx_signal_rounds
			{
				magazine="rhs_mag_nspn_red";
				count="10";
			};
			class _xx_SmokeShellRed
			{
				magazine="rhs_mag_rdg2_white";
				count="4";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
		};
		class EventHandlers;
		textureList[]=
		{
			"Blu",
			1
		};
		class TextureSources
		{
			class Blu_CSAT
			{
				displayName="CSAT (Hex)";
				author="BI";
				textures[]=
				{
					"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa","\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
				};
			};
			class Blu_CSAT_Green
			{
				displayName="CSAT (Green Hex)";
				author="BI";
				textures[]=
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa","\A3\Structures_F\Data\Metal\Containers\Containers_colors_05_co.paa"
				};
			};
			class Blu_Grey
			{
				displayName="Grey";
				author="Holm (Geeko)";
				textures[]=
				{
					"PB_Vehicle_T\data\GREY_Truck_03_ext01_CO.paa",
					"PB_Vehicle_T\data\GREY_Truck_03_ext02_CO.paa",
					"PB_Vehicle_T\data\GREY_Truck_03_cargo_CO.paa",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
				};
			};
		};
	};
	class PB_Typhoon_ammo_MSV: PB_Typhoon_ammo_Base
	{
		_generalMacro="Typhoon_ammo_MSV";
		scope=2;
		side=0;
		faction = "rhs_faction_msv";
		displayName="KamAZ-63968 (Ammo)";
		crew="rhs_msv_driver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"PB_Vehicle_T\data\GREY_Truck_03_ext01_CO.paa",
			"PB_Vehicle_T\data\GREY_Truck_03_ext02_CO.paa",
			"PB_Vehicle_T\data\GREY_Truck_03_cargo_CO.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
	};
	class PB_Typhoon_ammo_VDV: PB_Typhoon_ammo_MSV
	{
		faction = "rhs_faction_vdv";
		crew="rhs_vdv_driver";
		typicalCargo[]=
		{
			"rhs_vdv_driver"
		};
	};
	class PB_Typhoon_ammo_VMF: PB_Typhoon_ammo_MSV
	{
		faction = "rhs_faction_vmf";
		crew="rhs_vmf_flora_driver";
		typicalCargo[]=
		{
			"rhs_vmf_flora_driver"
		};
	};
	class PB_Typhoon_ammo_VV: PB_Typhoon_ammo_MSV
	{
		faction = "rhs_faction_vv";
		crew="rhs_msv_driver";
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
	};
//============================== Device ===============================		
	class PB_Typhoon_device_Base: O_Truck_03_device_F
	{
		author="CapryCorn";
		forceInGarage=1;
		vehicleClass = "rhs_vehclass_truck";
		editorSubcategory="rhs_EdSubcat_truck";
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_7N10_AK";
				count="10";
			};
			class _xx_HandGrenade_East
			{
				magazine="rhs_mag_rgd5";
				count="10";
			};
			class _xx_signal_rounds
			{
				magazine="rhs_mag_nspn_red";
				count="10";
			};
			class _xx_SmokeShellRed
			{
				magazine="rhs_mag_rdg2_white";
				count="4";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
		};
		class EventHandlers;
		textureList[]=
		{
			"Blu",
			1
		};
		class TextureSources
		{
			class Blu_CSAT
			{
				displayName="CSAT (Hex)";
				author="BI";
				textures[]=
				{
					"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa","\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa","\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
			};
			class Blu_CSAT_Green
			{
				displayName="CSAT (Green Hex)";
				author="BI";
				textures[]=
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa","\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa","\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
				};
			};
			class Blu_Grey
			{
				displayName="Grey";
				author="Holm (Geeko)";
				textures[]=
				{
					"PB_Vehicle_T\data\GREY_Truck_03_ext01_CO.paa",
					"PB_Vehicle_T\data\GREY_Truck_03_ext02_CO.paa",
					"PB_Vehicle_T\data\GREY_Truck_03_cargo_CO.paa",
					"PB_Vehicle_T\data\GREY_Truck_03_cover_CO.paa"
				};
			};
		};
	};
	class PB_Typhoon_device_MSV: PB_Typhoon_device_Base
	{
		_generalMacro="Typhoon_device_MSV";
		scope=2;
		side=0;
		faction = "rhs_faction_msv";
		displayName="KamAZ-63968 (Device)";
		crew="rhs_msv_driver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"PB_Vehicle_T\data\GREY_Truck_03_ext01_CO.paa",
			"PB_Vehicle_T\data\GREY_Truck_03_ext02_CO.paa",
			"PB_Vehicle_T\data\GREY_Truck_03_cargo_CO.paa",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa","\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
		};
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
	};
	class PB_Typhoon_device_VDV: PB_Typhoon_device_MSV
	{
		faction = "rhs_faction_vdv";
		crew="rhs_vdv_driver";
		typicalCargo[]=
		{
			"rhs_vdv_driver"
		};
	};
	class PB_Typhoon_device_VMF: PB_Typhoon_device_MSV
	{
		faction = "rhs_faction_vmf";
		crew="rhs_vmf_flora_driver";
		typicalCargo[]=
		{
			"rhs_vmf_flora_driver"
		};
	};
	class PB_Typhoon_device_VV: PB_Typhoon_device_MSV
	{
		faction = "rhs_faction_vv";
		crew="rhs_msv_driver";
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
	};
//============================== Fuel ===============================		
	class PB_Typhoon_fuel_Base: O_Truck_03_fuel_F
	{
		author="CapryCorn";
		forceInGarage=1;
		vehicleClass = "rhs_vehclass_truck";
		editorSubcategory="rhs_EdSubcat_truck";
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_7N10_AK";
				count="10";
			};
			class _xx_HandGrenade_East
			{
				magazine="rhs_mag_rgd5";
				count="10";
			};
			class _xx_signal_rounds
			{
				magazine="rhs_mag_nspn_red";
				count="10";
			};
			class _xx_SmokeShellRed
			{
				magazine="rhs_mag_rdg2_white";
				count="4";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
		};
		class EventHandlers;
		textureList[]=
		{
			"Blu",
			1
		};
		class TextureSources
		{
			class Blu_CSAT
			{
				displayName="CSAT (Hex)";
				author="BI";
				textures[]=
				{
					"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_fuel_CO.paa"
				};
			};
			class Blu_CSAT_Green
			{
				displayName="CSAT (Green Hex)";
				author="BI";
				textures[]=
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_fuel_ghex_CO.paa"
				};
			};
			class Blu_Grey
			{
				displayName="Grey";
				author="Holm (Geeko)";
				textures[]=
				{
					"PB_Vehicle_T\data\GREY_Truck_03_ext01_CO.paa",
					"PB_Vehicle_T\data\GREY_Truck_03_ext02_CO.paa", "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_fuel_ghex_CO.paa"
				};
			};
		};
	};
	class PB_Typhoon_fuel_MSV: PB_Typhoon_fuel_Base
	{
		_generalMacro="Typhoon_fuel_MSV";
		scope=2;
		side=0;
		faction = "rhs_faction_msv";
		displayName="KamAZ-63968 (Fuel)";
		crew="rhs_msv_driver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"PB_Vehicle_T\data\GREY_Truck_03_ext01_CO.paa",
			"PB_Vehicle_T\data\GREY_Truck_03_ext02_CO.paa", "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_fuel_ghex_CO.paa"
		};
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
	};
	class PB_Typhoon_fuel_VDV: PB_Typhoon_fuel_MSV
	{
		faction = "rhs_faction_vdv";
		crew="rhs_vdv_driver";
		typicalCargo[]=
		{
			"rhs_vdv_driver"
		};
	};
	class PB_Typhoon_fuel_VMF: PB_Typhoon_fuel_MSV
	{
		faction = "rhs_faction_vmf";
		crew="rhs_vmf_flora_driver";
		typicalCargo[]=
		{
			"rhs_vmf_flora_driver"
		};
	};
	class PB_Typhoon_fuel_VV: PB_Typhoon_fuel_MSV
	{
		faction = "rhs_faction_vv";
		crew="rhs_msv_driver";
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
	};
//============================== Repair ===============================		
	class PB_Typhoon_repair_Base: O_Truck_03_repair_F
	{
		author="CapryCorn";
		forceInGarage=1;
		vehicleClass = "rhs_vehclass_truck";
		editorSubcategory="rhs_EdSubcat_truck";
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_7N10_AK";
				count="10";
			};
			class _xx_HandGrenade_East
			{
				magazine="rhs_mag_rgd5";
				count="10";
			};
			class _xx_signal_rounds
			{
				magazine="rhs_mag_nspn_red";
				count="10";
			};
			class _xx_SmokeShellRed
			{
				magazine="rhs_mag_rdg2_white";
				count="4";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
		};
		class EventHandlers;
		textureList[]=
		{
			"Blu",
			1
		};
		class TextureSources
		{
			class Blu_CSAT
			{
				displayName="CSAT (Hex)";
				author="BI";
				textures[]=
				{
					"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_CO.paa"
				};
			};
			class Blu_CSAT_Green
			{
				displayName="CSAT (Green Hex)";
				author="BI";
				textures[]=
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ammo_ghex_CO.paa"
				};
			};
			class Blu_Grey
			{
				displayName="Grey";
				author="Holm (Geeko)";
				textures[]=
				{
					"PB_Vehicle_T\data\GREY_Truck_03_ext01_CO.paa",
					"PB_Vehicle_T\data\GREY_Truck_03_ext02_CO.paa", "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ammo_ghex_CO.paa"
				};
			};
		};
	};
	class PB_Typhoon_repair_MSV: PB_Typhoon_repair_Base
	{
		_generalMacro="Typhoon_repair_MSV";
		scope=2;
		side=0;
		faction = "rhs_faction_msv";
		displayName="KamAZ-63968 (Repair)";
		crew="rhs_msv_driver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"PB_Vehicle_T\data\GREY_Truck_03_ext01_CO.paa",
			"PB_Vehicle_T\data\GREY_Truck_03_ext02_CO.paa", "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ammo_ghex_CO.paa"
		};
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
	};
	class PB_Typhoon_repair_VDV: PB_Typhoon_repair_MSV
	{
		faction = "rhs_faction_vdv";
		crew="rhs_vdv_driver";
		typicalCargo[]=
		{
			"rhs_vdv_driver"
		};
	};
	class PB_Typhoon_repair_VMF: PB_Typhoon_repair_MSV
	{
		faction = "rhs_faction_vmf";
		crew="rhs_vmf_flora_driver";
		typicalCargo[]=
		{
			"rhs_vmf_flora_driver"
		};
	};
	class PB_Typhoon_repair_VV: PB_Typhoon_repair_MSV
	{
		faction = "rhs_faction_vv";
		crew="rhs_msv_driver";
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
	};
//============================== Medical ===============================		
	class PB_Typhoon_medical_Base: O_Truck_03_medical_F
	{
		author="CapryCorn";
		forceInGarage=1;
		vehicleClass = "rhs_vehclass_truck";
		editorSubcategory="rhs_EdSubcat_truck";
		icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_medevac_CA.paa";
		class TransportMagazines
		{
			class _xx_30Rnd_545x39_AK
			{
				magazine="rhs_30Rnd_545x39_7N10_AK";
				count="10";
			};
			class _xx_HandGrenade_East
			{
				magazine="rhs_mag_rgd5";
				count="10";
			};
			class _xx_signal_rounds
			{
				magazine="rhs_mag_nspn_red";
				count="10";
			};
			class _xx_SmokeShellRed
			{
				magazine="rhs_mag_rdg2_white";
				count="4";
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=8;
			};
			class _xx_Toolkit
			{
				name="Toolkit";
				count=1;
			};
		};
		class EventHandlers;
		textureList[]=
		{
			"Blu",
			1
		};
		class TextureSources
		{
			class Blu_CSAT
			{
				displayName="CSAT (Hex)";
				author="BI";
				textures[]=
				{
					"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa","\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cover_CO.paa"
				};
			};
			class Blu_CSAT_Green
			{
				displayName="CSAT (Green Hex)";
				author="BI";
				textures[]=
				{
					"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cover_ghex_CO.paa"
				};
			};
			class Blu_Grey
			{
				displayName="Grey";
				author="Holm (Geeko)";
				textures[]=
				{
					"PB_Vehicle_T\data\GREY_Truck_03_ext01_CO.paa",
					"PB_Vehicle_T\data\GREY_Truck_03_ext02_CO.paa",
					"PB_Vehicle_T\data\GREY_Truck_03_cargo_CO.paa",
					"PB_Vehicle_T\data\GREY_Truck_03_cover_CO.paa"
				};
			};
		};
	};
	class PB_Typhoon_medical_MSV: PB_Typhoon_medical_Base
	{
		_generalMacro="Typhoon_medical_MSV";
		scope=2;
		side=0;
		faction = "rhs_faction_msv";
		displayName="KamAZ-63968 (Medical)";
		crew="rhs_msv_driver";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"PB_Vehicle_T\data\GREY_Truck_03_ext01_CO.paa",
			"PB_Vehicle_T\data\GREY_Truck_03_ext02_CO.paa",
			"PB_Vehicle_T\data\GREY_Truck_03_cargo_CO.paa",
			"PB_Vehicle_T\data\GREY_Truck_03_cover_CO.paa"
		};
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
	};
	class PB_Typhoon_medical_VDV: PB_Typhoon_medical_MSV
	{
		faction = "rhs_faction_vdv";
		crew="rhs_vdv_driver";
		typicalCargo[]=
		{
			"rhs_vdv_driver"
		};
	};
	class PB_Typhoon_medical_VMF: PB_Typhoon_medical_MSV
	{
		faction = "rhs_faction_vmf";
		crew="rhs_vmf_flora_driver";
		typicalCargo[]=
		{
			"rhs_vmf_flora_driver"
		};
	};
	class PB_Typhoon_medical_VV: PB_Typhoon_medical_MSV
	{
		faction = "rhs_faction_vv";
		crew="rhs_msv_driver";
		typicalCargo[]=
		{
			"rhs_msv_driver"
		};
	};