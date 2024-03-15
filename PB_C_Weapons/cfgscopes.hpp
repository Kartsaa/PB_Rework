    class PB_K2CQS: ItemCore
	{
		author="withered_maple";
		scope=2;
		displayName="CQS - K2";
		picture="\BRM_K2\ui\BRM_K2CQSui.paa";
		model="BRM_K2\models\BRM_K2CQS.p3d";
		descriptionShort="Close Quarter Sight - made during the 90s for the ROKA";
		weaponInfoType="RscWeaponZeroing";
		hiddenSelections[]=
		{
		    "camo"
		};
		hiddenSelectionsTextures[]=
		{
			"brm_k2\data\brm_k2cqs_co.paa"
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=6;
			modelOptics="\A3\Weapons_F\empty";
			optics=1;
			class OpticsModes
			{
				class Tube
				{
					opticsID=1;
					useModelOptics=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					distanceZoomMin=200;
					distanceZoomMax=200;
					cameraDir="";
					visionMode[]={};
					opticsPPEffects[]=
					{
						"Default"
					};
				};
			};
		};
		inertia=0;
	};
    class PB_K2CS: ItemCore
	{
		author="withered_maple";
		scope=2;
		displayName="CS - K2";
		picture="\BRM_K2\ui\BRM_K2CSui.paa";
		model="BRM_K2\models\BRM_K2CS.p3d";
		descriptionShort="Combat Scope - made during the 90s for the ROKA";
		hiddenSelections[]=
		{
		    "camo"
		};
		hiddenSelectionsTextures[]=
		{
			"brm_k2\data\brm_k2cs_co.paa"
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=16;
			opticType=2;
			weaponInfoType="RscWeaponRangeZeroingFOV";
			optics=1;
			modelOptics="\A3\Weapons_F\acc\reticle_sniper_F";
			class OpticsModes
			{
				class Snip
				{
					opticsID=1;
					opticsDisplayName="WFOV";
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.125;
					opticsZoomMax=0.125;
					opticsZoomInit=0.125;
					discreteDistance[]={300};
					discreteDistanceInitIndex=0;
					distanceZoomMin=300;
					distanceZoomMax=300;
					discreteInitIndex=0;
					memoryPointCamera="opticView";
					modelOptics[]=
					{
						"\A3\Weapons_F\acc\reticle_lrps_F"
					};
					visionMode[]=
					{
						"Normal"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					cameraDir="";
				};
				class Iron: Snip
				{
					opticsID=2;
					useModelOptics=0;
					opticsPPEffects[]=
					{
						"",
						""
					};
					opticsFlare=0;
					opticsDisablePeripherialVision=0;
					opticsZoomMin=0.25;
					opticsZoomMax=1.25;
					opticsZoomInit=0.75;
					memoryPointCamera="eye";
					visionMode[]={};
					discretefov[]={};
					distanceZoomMin=200;
					distanceZoomMax=200;
					discreteDistance[]={200};
					discreteDistanceInitIndex=0;
				};
			};
		};
		inertia=0.1;
	};
	class PB_K2ANPVS4: ItemCore
	{
		author="withered_maple";
		scope=2;
		displayName="AN/PVS4 - K2";
		picture="\BRM_K2\ui\BRM_K2ANPVS4ui.paa";
		model="BRM_K2\models\BRM_K2ANPVS4.p3d";
		descriptionShort="US made night vision scope. modified for the ROKA.";
		hiddenSelections[]=
		{
		    "camo",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"brm_k2\data\brm_k2cs_co.paa",
			"brm_k2\data\anpvs4_co.paa"
		};
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass=10;
			optics=1;
			modelOptics="\A3\Weapons_f\acc\reticle_nvs_F";
			class OpticsModes
			{
				class NVS
				{
					opticsID=1;
					useModelOptics=1;
					opticsPPEffects[]=
					{
						"OpticsCHAbera1",
						"OpticsBlur1"
					};
					opticsZoomMin=0.050000001;
					opticsZoomMax=0.050000001;
					opticsZoomInit=0.050000001;
					memoryPointCamera="opticView";
					visionMode[]=
					{
						"NVG"
					};
					opticsFlare=1;
					opticsDisablePeripherialVision=1;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir="";
				};
			};
		};
		inertia=0.4;
	};