class CfgMovesBasic {
	class DefaultDie;

	class ManActions {
        PB_HLC_GestureReloadM249 = "PB_HLC_GestureReloadM249";
		PB_HLC_GestureReloadAUG = "PB_HLC_GestureReloadAUG";
		PB_HLC_GestureReloadAUGa3 = "PB_HLC_GestureReloadAUGa3";
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
		};

		class RifleProneActions : RifleBaseStandActions 
		{
            PB_HLC_GestureReloadM249[] = { "PB_HLC_GestureReloadM249_Prone", "Gesture" };
			PB_HLC_GestureReloadAUG[] = { "PB_HLC_GestureReloadAUG_Prone", "Gesture" };
			PB_HLC_GestureReloadAUGa3[] = { "PB_HLC_GestureReloadAUGa3_prone", "Gesture" };
		};

		class RifleAdjustRProneActions : RifleAdjustProneBaseActions {
            PB_HLC_GestureReloadM249[] = { "PB_HLC_GestureReloadM249_Context", "Gesture" };
			PB_HLC_GestureReloadAUG[] = { "PB_HLC_GestureReloadAUG_context", "Gesture" };
			PB_HLC_GestureReloadAUGPara[] = { "PB_HLC_GestureReloadAUGPara_context", "Gesture" };
		};

		class RifleAdjustLProneActions : RifleAdjustProneBaseActions {
            PB_HLC_GestureReloadM249[] = { "PB_HLC_GestureReloadM249_Context", "Gesture" };
			PB_HLC_GestureReloadAUG[] = { "PB_HLC_GestureReloadAUG_context", "Gesture" };
			PB_HLC_GestureReloadAUGPara[] = { "PB_HLC_GestureReloadAUGPara_context", "Gesture" };
		};

		class RifleAdjustFProneActions : RifleAdjustProneBaseActions {
            PB_HLC_GestureReloadM249[] = { "PB_HLC_GestureReloadM249_Context", "Gesture" };
			PB_HLC_GestureReloadAUG[] = { "PB_HLC_GestureReloadAUG", "Gesture" };
			PB_HLC_GestureReloadAUGPara[] = { "PB_HLC_GestureReloadAUGPara", "Gesture" };
		};
	};
};

class CfgGesturesMale {
	class Default;
	class GestureReloadBase;

	class States {
		//class Default;
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
	};
};