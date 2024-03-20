class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_UN_Faction
		{
			name = "UN Peackeepers";
			class PB_UN_INF_Groups
			{
				name = "Peacekeepers";
			////INF SECTIONS////
				class PB_UN_Section
				{
					faction = "PB_UN_Faction";
					name = "UN Peacekeeper Squad";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_UN_Top";
					editorSubcategory = "PB_UN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_UN_SOL_OFF";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_UN_SOL_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_UN_SOL_MED";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_UN_SOL_MG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_UN_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_UN_SOL_RAT";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_UN_SOL_OFF";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_UN_SOL_GRE";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
			///FIRETEAMS///
				class PB_UN_C_FT
				{
					faction = "PB_UN_Faction";
					name = "Charlie Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_UN_Top";
					editorSubcategory = "PB_UN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_UN_SOL_OFF";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_UN_SOL_R";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_UN_SOL_SNI";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_UN_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_UN_D_FT
				{
					faction = "PB_UN_Faction";
					name = "Delta Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_UN_Top";
					editorSubcategory = "PB_UN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_UN_SOL_OFF";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_UN_SOL_R";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_UN_SOL_SNI";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_UN_SOL_MG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_UN_NLAW_FT
				{
					faction = "PB_UN_Faction";
					name = "Fireteam (NLAW)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_UN_Top";
					editorSubcategory = "PB_UN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_UN_SOL_OFF";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_UN_SOL_R";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_UN_SOL_R_NLAW";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_UN_SOL_MG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_UN_JAV_FT
				{
					faction = "PB_UN_Faction";
					name = "Fireteam (Javelin)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_UN_Top";
					editorSubcategory = "PB_UN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_UN_SOL_OFF";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_UN_SOL_R";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_UN_SOL_JAV";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_UN_SOL_MG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_UN_GPMG_FT
				{
					faction = "PB_UN_Faction";
					name = "Fireteam (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_UN_Top";
					editorSubcategory = "PB_UN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_UN_SOL_OFF";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_UN_SOL_R";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_UN_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_UN_SOL_MG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			///TEAMS///
				class PB_UN_T
				{
					faction = "PB_UN_Faction";
					name = "Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_UN_Top";
					editorSubcategory = "PB_UN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_UN_SOL_OFF";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_UN_SOL_R";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_UN_T_JAV
				{
					faction = "PB_UN_Faction";
					name = "Team (Javelin)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_UN_Top";
					editorSubcategory = "PB_UN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_UN_SOL_OFF";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_UN_SOL_JAV";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_UN_T_NLAW
				{
					faction = "PB_UN_Faction";
					name = "Team (NLAW)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_UN_Top";
					editorSubcategory = "PB_UN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_UN_SOL_OFF";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_UN_SOL_R_NLAW";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_UN_T_SNI
				{
					faction = "PB_UN_Faction";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_UN_Top";
					editorSubcategory = "PB_UN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_UN_SOL_SNI";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_UN_SOL_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_UN_T_MG
				{
					faction = "PB_UN_Faction";
					name = "Team (GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_UN_Top";
					editorSubcategory = "PB_UN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_UN_SOL_OFF";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_UN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
		////MECH INFANTRY////
			class PB_UN_Mech_Groups
			{
				name = "Mechanized Infantry";
				class PB_UN_M113_Inf
				{
					name = "Mechanized Infantry (M113)";
					faction = "PB_UN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_UN_Top";
					editorSubcategory = "PB_UN_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_UN_SOL_OFF";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_UN_SOL_R";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_UN_SOL_RAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_UN_M113A3";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_UN_SOL_R";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_UN_SOL_ENG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_UN_SOL_MED";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_UN_SOL_R";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_UN_SOL_EOD";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_UN_M113_M2_Inf
				{
					name = "Mechanized Infantry (M113 M2)";
					faction = "PB_UN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_UN_Top";
					editorSubcategory = "PB_UN_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_UN_SOL_OFF";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_UN_SOL_R";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_UN_SOL_RAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_UN_M113A3_M2";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_UN_SOL_R";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_UN_SOL_ENG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_UN_SOL_MED";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_UN_SOL_R";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_UN_SOL_EOD";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		////MRAPS////
			class PB_UN_Mot_Groups
			{
				name = "Motorized Infantry";
				class PB_UN_M1043_G
				{
					name = "Motorized Infantry";
					faction = "PB_UN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_UN_Top";
					editorSubcategory = "PB_UN_MRAP";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_UN_SOL_OFF";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_UN_SOL_R";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_UN_M113A3_M2";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
				};
			};
		};
	};
};