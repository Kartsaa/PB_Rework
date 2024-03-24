class CfgMovesBasic {
	class DefaultDie;

	class ManActions {
        PB_HLC_GestureReloadM249 = "PB_HLC_GestureReloadM249";
		PB_HLC_GestureReloadAUG = "PB_HLC_GestureReloadAUG";
		PB_HLC_GestureReloadAUGa3 = "PB_HLC_GestureReloadAUGa3";
		PB_HLC_GestureReloadAK = "PB_HLC_GestureReloadAK";
		PB_GestureReloadFAMAS = "";
		PB_GestureReloadFAMASUGL = "";
        PB_HLC_GestureReloadPSG1 = "PB_HLC_GestureReloadPSG1";
		PB_NIA_GestureReload416 = "PB_NIA_GestureReload416";
	};
	class Actions {
		class RifleBaseStandActions;
		class RifleAdjustProneBaseActions;

		class NoActions : ManActions 
		{
            PB_HLC_GestureReloadM249[] = { "PB_HLC_GestureReloadM249", "Gesture" };
			PB_HLC_GestureReloadAUG[] = { "PB_HLC_GestureReloadAUG","Gesture" };
			PB_HLC_GestureReloadAUGPara[] = { "PB_HLC_GestureReloadAUGPara", "Gesture" };
			PB_HLC_GestureReloadAUGa3[] = { "PB_HLC_GestureReloadAUGa3", "Gesture" };
			PB_HLC_GestureReloadAK[] = { "PB_HLC_GestureReloadAK", "Gesture" };
			PB_GestureReloadFAMAS[] = {"GestureReloadFAMAS", "Gesture" };
			PB_GestureReloadFAMASUGL[] ={ "GestureReloadFAMASUGL", "Gesture" };
            PB_PB_HLC_GestureReloadPSG1[] = { "PB_HLC_GestureReloadPSG1", "Gesture" };
			PB_NIA_GestureReload416[] = { "PB_NIA_GestureReload416", "Gesture" };
		};

		class RifleProneActions : RifleBaseStandActions 
		{
            PB_HLC_GestureReloadM249[] = { "PB_HLC_GestureReloadM249_Prone", "Gesture" };
			PB_HLC_GestureReloadAUG[] = { "PB_HLC_GestureReloadAUG_Prone", "Gesture" };
			PB_HLC_GestureReloadAUGa3[] = { "PB_HLC_GestureReloadAUGa3_prone", "Gesture" };
			PB_HLC_GestureReloadAK[] = { "PB_HLC_GestureReloadAK_Prone","Gesture" };
			PB_GestureReloadFAMAS[] = {	"PB_GestureReloadFAMASProne","Gesture" };
			PB_GestureReloadFAMASUGL[] = { "PB_GestureReloadFAMASUGLProne", "Gesture" };
            PB_HLC_GestureReloadPSG1[] = { "PB_HLC_GestureReloadPSG1_Prone", "Gesture" };
			PB_NIA_GestureReload416[] = { "PB_NIA_GestureReload416_Prone", "Gesture" };
		};

		class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
            PB_HLC_GestureReloadM249[] = { "PB_HLC_GestureReloadM249_Context", "Gesture" };
			PB_HLC_GestureReloadAUG[] = { "PB_HLC_GestureReloadAUG_context", "Gesture" };
			PB_HLC_GestureReloadAUGPara[] = { "PB_HLC_GestureReloadAUGPara_context", "Gesture" };
			PB_HLC_GestureReloadAK[] = { "PB_HLC_GestureReloadAK_Context","Gesture" };
			PB_GestureReloadFAMAS[] = { "PB_GestureReloadFAMASContext", "Gesture" };
			PB_GestureReloadFAMASUGL[] = { "PB_GestureReloadFAMASUGLContext", "Gesture" };
            PB_HLC_GestureReloadPSG1[] = { "PB_HLC_GestureReloadPSG1_Context", "Gesture" };
			PB_NIA_GestureReload416[] = { "PB_NIA_GestureReload416_Context", "Gesture" };
		};

		class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
            PB_HLC_GestureReloadM249[] = { "PB_HLC_GestureReloadM249_Context", "Gesture" };
			PB_HLC_GestureReloadAUG[] = { "PB_HLC_GestureReloadAUG_context", "Gesture" };
			PB_HLC_GestureReloadAUGPara[] = { "PB_HLC_GestureReloadAUGPara_context", "Gesture" };
			PB_HLC_GestureReloadAK[] = { "PB_HLC_GestureReloadAK_Context","Gesture" };
			PB_GestureReloadFAMAS[] = {" PB_GestureReloadFAMASContext", "Gesture" };
			PB_GestureReloadFAMASUGL[] = { "PB_GestureReloadFAMASUGLContext", "Gesture" };
            PB_HLC_GestureReloadPSG1[] = { "PB_HLC_GestureReloadPSG1_Context", "Gesture" };
			PB_NIA_GestureReload416[] = { "PB_NIA_GestureReload416_Context", "Gesture" };
		};

		class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
            PB_HLC_GestureReloadM249[] = { "PB_HLC_GestureReloadM249_Context", "Gesture" };
			PB_HLC_GestureReloadAUG[] = { "PB_HLC_GestureReloadAUG", "Gesture" };
			PB_HLC_GestureReloadAUGPara[] = { "PB_HLC_GestureReloadAUGPara", "Gesture" };
			PB_HLC_GestureReloadAK[] = { "PB_HLC_GestureReloadAK","Gesture" };
			PB_GestureReloadFAMAS[] = { "PB_GestureReloadFAMASContext", "Gesture" };
			PB_GestureReloadFAMASUGL[] = { "PB_GestureReloadFAMASUGLContext", "Gesture" };
            PB_HLC_GestureReloadPSG1[] = { "PB_HLC_GestureReloadPSG1", "Gesture" };
			PB_NIA_GestureReload416[] = { "PB_NIA_GestureReload416", "Gesture" };
		};
	};
};

class CfgGesturesMale {
	class Default;
	class GestureReloadBase;

	class States {
		//class Default;
		class PB_HLC_GestureReloadAK : Default {
			file = "\PB_A_Weapons\RK62M2\reload_ak_onehanded.rtm";
			looped = 0;
			speed = 0.23076923076923076923076923076923;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.200000;
			headBobMode = 2;
			leftHandIKBeg = false;
			leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 1 };
			rightHandIKEnd = true;
		};
		class PB_HLC_GestureReloadAK_prone : Default {
			file = "\PB_A_Weapons\RK62M2\reload_ak_prone.rtm";
			looped = 0;
			speed = -4.8;
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.2;
			headBobMode = 2;
			leftHandIKBeg = false;
			leftHandIKCurve[] = { 0, 1, 0.075, 0, 0.85, 0, 0.93, 1 };
			leftHandIKEnd = true;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 1 };
			rightHandIKEnd = true;
		};
		class PB_HLC_GestureReloadAK_Context : PB_HLC_GestureReloadAK {
			mask = "NIA_handsWeapon_context_Toadie";
		};
		class PB_HLC_GestureReloadAUG :Default {
			file = "PB_A_Weapons\EF88\reload\reload_auga3_stand.rtm";
			speed = 0.18181818181818181818181818181818;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.22;
			headBobMode = 2;
			rightHandIKCurve[] = { 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1, 0.0363636363636, 0, 0.83636363636363636363636363636364, 0, 0.87272727272727272727272727272727, 1 };
		};
		class PB_HLC_GestureReloadAUG_prone : Default {
			file = "PB_A_Weapons\EF88\reload\reload_auga3_prone.rtm";
			speed = 0.18181818181818181818181818181818;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.22;
			headBobMode = 2;
			rightHandIKCurve[] = { 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1, 0.0363636363636, 0, 0.83636363636363636363636363636364, 0, 0.87272727272727272727272727272727, 1 };
		};
		class PB_HLC_GestureReloadAUGa3 : Default {
			file = "PB_A_Weapons\EF88\reload\reload_auga3_stand.rtm";
			speed = 0.22727272727272727272727272727273;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.22;
			headBobMode = 2;
			rightHandIKCurve[] = { 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1, 0.0363636363636, 0, 0.83636363636363636363636363636364, 0, 0.87272727272727272727272727272727, 1 };
		};
		class PB_HLC_GestureReloadAUGa3_prone : Default {
			file = "PB_A_Weapons\EF88\reload\reload_auga3_prone.rtm";
			speed = 0.22727272727272727272727272727273;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKCurve[] = { 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1, 0.0363636363636, 0, 0.83636363636363636363636363636364, 0, 0.87272727272727272727272727272727, 1 };
		};
		class PB_HLC_GestureReloadAUGa3_Context : PB_HLC_GestureReloadAUGa3 {
			mask = "NIA_handsWeapon_context_Toadie";
		};
        class PB_HLC_GestureReloadM249 : Default {
            file = "PB_A_Weapons\C9\m249_reload_stand.rtm";
            speed = 0.09868421052631578947368421052632;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.3;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.016, 0, 0.288, 0, 0.3076, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.09868, 1, 0.1118421, 0, 0.92105, 0, 0.947368, 1 };
        };
        class PB_HLC_GestureReloadM249_Crouch : Default {
            file = "PB_A_Weapons\C9\m249_reload_crouch.rtm";
            speed = 0.09868421052631578947368421052632;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.45;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1,1,1};
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.00986, 0, 0.92105, 0, 0.947368, 1 };
        };
        class PB_HLC_GestureReloadM249_Prone : Default {
            file = "PB_A_Weapons\C9\m249_reload_prone.rtm";
            speed = 0.09868421052631578947368421052632;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.016, 0, 0.288, 0, 0.3076, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0.09868, 1, 0.1118421, 0, 0.92105, 0, 0.947368, 1 };
        };
        class PB_HLC_GestureReloadM249_Context : PB_HLC_GestureReloadM249 {
            mask = "handsWeapon_context";
        };
		class PB_GestureReloadFAMAS: GestureReloadBase
		{
			file = "\PB_A_Weapons\Famas\GestureReloadFAMAS.rtm";
			speed = -(128/30);
            mask = handsWeapon;
            headBobStrength = 0.25;
            headBobMode = 2;
			weaponIK = true;
			leftHandIKCurve[] =
			{
				0,true,
				(9/128),false,
				(115/128),false,
				1,true
			};
		};
		class PB_GestureReloadFAMASProne: PB_GestureReloadFAMAS
		{
			file = "\PB_A_Weapons\Famas\GestureReloadFAMASProne.rtm";
			/*leftHandIKCurve[] =
			{
				0,true,
				(5/101),false,
				(87/101),false,
				1,true
			};*/
		};
		class PB_GestureReloadFAMASContext: PB_GestureReloadFAMAS
		{
			mask = handsWeapon_context;
		};
		class PB_GestureReloadFAMASContextAnimDrive: PB_GestureReloadFAMAS
		{
			mask = handsWeapon_contextAnimDrive;
		};
		class PB_GestureReloadFAMASUGL: GestureReloadBase
		{
			file = "\PB_A_Weapons\Famas\GestureReloadFAMASUGL.rtm";
			speed = -(86/30);
            mask = handsWeapon;
            headBobStrength = 0.25;
            headBobMode = 2;
			weaponIK = true;
			leftHandIKCurve[] =
			{
				0,true,
				(7/86),false,
				(73/86),false,
				(75/86),true
			};
		};
		class PB_GestureReloadFAMASUGLProne: PB_GestureReloadFAMASUGL
		{
			file = "\PB_A_Weapons\Famas\GestureReloadFAMASUGLProne.rtm";
			/*leftHandIKCurve[] =
			{
				0,true,
				(5/101),false,
				(87/101),false,
				1,true
			};*/
		};
		class PB_GestureReloadFAMASUGLContext: PB_GestureReloadFAMASUGL
		{
			mask = handsWeapon_context;
		};
		class PB_GestureReloadFAMASUGLContextAnimDrive: PB_GestureReloadFAMASUGL
		{
			mask = handsWeapon_contextAnimDrive;
		};
        class PB_HLC_GestureReloadPSG1 : Default {
            file = "PB_A_Weapons\g3\rel\reload_psg1_stand.rtm";
            speed = -6;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.25;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.1722222, 1, 0.188888889, 0, 0.222222222, 0, 0.2388888889, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.033, 0, 0.86, 0, 0.9, 1 };
        };
        class PB_HLC_GestureReloadPSG1_Prone : Default {
            file = "PB_A_Weapons\g3\rel\reload_psg1_prone.rtm";
            speed = -6;
            looped = false;
            mask = "handsWeapon";
            headBobStrength = 0.2;
            headBobMode = 2;
            rightHandIKCurve[] = { 0, 1, 0.1722222, 1, 0.188888889, 0, 0.222222222, 0, 0.2388888889, 1 };
            leftHandIKBeg = true;
            leftHandIKEnd = true;
            leftHandIKCurve[] = { 0, 1, 0.033, 0, 0.86, 0, 0.9, 1 };
        };
        class PB_HLC_GestureReloadPSG1_Context : PB_HLC_GestureReloadPSG1 {
            mask = "handsWeapon_context";
        };
		class PB_NIA_GestureReload416 : Default {
			file = "PB_A_Weapons\417\reload_ar15_downrange.rtm";
			speed = -(100/30);
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			canPullTrigger = 0;
			rightHandIKCurve[] = { 0, 1, 1, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1, (6/100), 0, (90/100), 0, (96/100), 1 };
		};
		class PB_NIA_GestureReload416_Prone : Default {
			file = "PB_A_Weapons\417\reload_ar15_prone_new.rtm";
			looped = 0;
			speed = -(100/30);
			mask = "handsWeapon";
			// mask="empty";
			headBobStrength = 0.05;
			headBobMode = 2;
			canPullTrigger = 0;
			rightHandIKCurve[] = { 0, 1, 1, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1, (6/100), 0, (90/100), 0, (96/100), 1 };
			rightHandIKEnd = true;
		};
		class PB_NIA_GestureReload416_Context : PB_NIA_GestureReload416 {
			mask = "handsWeapon_context";
		};
	};
};