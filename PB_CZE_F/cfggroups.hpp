class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_CZE_Faction
		{
			name = "Army of the Czech Republic";
			class PB_CZE_INF_Groups
			{
				name = "Infantry";
			///SECTIONS///
				class PB_CZE_Section
				{
					faction = "PB_CZE_Faction";
					name = "Infantry Section";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CZE_Top";
					editorSubcategory = "PB_CZE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CZE_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CZE_SOL_R";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_CZE_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CZE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_CZE_SOL_GRE";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_CZE_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_CZE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_CZE_SOL_MED";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_CZE_SOL_R";
						rank = "PRIVATE";
						position[] = {25,-20,0};
					};
				};
				class PB_CZE_AT_Section
				{
					faction = "PB_CZE_Faction";
					name = "Infantry Squad (2x AT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CZE_Top";
					editorSubcategory = "PB_CZE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CZE_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CZE_SOL_R";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_CZE_SOL_HAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CZE_SOL_R";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_CZE_SOL_GRE";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_CZE_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_CZE_SOL_HAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_CZE_SOL_R";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
			///FIRETEAMS///
				class PB_CZE_FT
				{
					faction = "PB_CZE_Faction";
					name = "Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CZE_Top";
					editorSubcategory = "PB_CZE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CZE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CZE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_CZE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CZE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_CZE_MG_FT
				{
					faction = "PB_CZE_Faction";
					name = "Fireteam (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CZE_Top";
					editorSubcategory = "PB_CZE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CZE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CZE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_CZE_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CZE_SOL_R";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			///TEAMS///
				class PB_CZE_T
				{
					faction = "PB_CZE_Faction";
					name = "Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CZE_Top";
					editorSubcategory = "PB_CZE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CZE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CZE_SOL_R";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_CZE_MG_T
				{
					faction = "PB_CZE_Faction";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CZE_Top";
					editorSubcategory = "PB_CZE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CZE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CZE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_CZE_AT_T
				{
					faction = "PB_CZE_Faction";
					name = "Team (AT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CZE_Top";
					editorSubcategory = "PB_CZE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CZE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CZE_SOL_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_CZE_SNI_T
				{
					faction = "PB_CZE_Faction";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CZE_Top";
					editorSubcategory = "PB_CZE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CZE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CZE_SOL_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class PB_CZE_Tank_Groups
			{
				name = "Tanks";
				class PB_CZE_T72M_PLT
				{
					name = "T-72M4CZ Platoon";
					faction = "PB_CZE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_CZE_Top";
					editorSubcategory = "PB_CZE_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CZE_T72M";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CZE_T72M";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_CZE_T72M";
						rank = "SERGEANT";
						position[] = {-20.1,-30,3};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CZE_T72M";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class PB_CZE_T72M_SEC
				{
					name = "T-72M4CZ Section";
					faction = "PB_CZE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_CZE_Top";
					editorSubcategory = "PB_CZE_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CZE_T72M";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CZE_T72M";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
			class PB_CZE_Mech_Groups
			{
				name = "Mechanized Infantry";
				class PB_CZE_PANDUR_S
				{
					name = "Mechanized Squad (Pandur II)";
					faction = "PB_CZE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_CZE_Top";
					editorSubcategory = "PB_CZE_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CZE_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CZE_SOL_ENG";
						rank = "SERGEANT";
						position[] = {5,5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CZE_PANDUR";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_CZE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {15,-20,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_CZE_SOL_MG";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_CZE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_CZE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_CZE_BVP1_S
				{
					name = "Mechanized Squad (BVP-1)";
					faction = "PB_CZE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_CZE_Top";
					editorSubcategory = "PB_CZE_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CZE_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CZE_SOL_ENG";
						rank = "SERGEANT";
						position[] = {5,5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CZE_BVP1";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_CZE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {15,-20,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_CZE_SOL_MG";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_CZE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_CZE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_CZE_BVP2_S
				{
					name = "Mechanized Squad (BVP-2)";
					faction = "PB_CZE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_CZE_Top";
					editorSubcategory = "PB_CZE_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CZE_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CZE_SOL_ENG";
						rank = "SERGEANT";
						position[] = {5,5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CZE_BVP2";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_CZE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {15,-20,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_CZE_SOL_MG";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_CZE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_CZE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
			class PB_CZE_Mot_Groups
			{
				name = "Motorized Infantry";
				class PB_CZE_FEN_HMG_S
				{
					name = "Motorized Squad (HMG)";
					faction = "PB_CZE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_CZE_Top";
					editorSubcategory = "PB_CZE_Cars";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CZE_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CZE_FENNEK_HMG";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_CZE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_CZE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_CZE_FEN_GMG_S
				{
					name = "Motorized Squad (GMG)";
					faction = "PB_CZE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_CZE_Top";
					editorSubcategory = "PB_CZE_Cars";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CZE_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CZE_FENNEK_GMG";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_CZE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_CZE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};