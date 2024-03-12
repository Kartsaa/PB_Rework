class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_BUL_Faction
		{
			name = "Bulgarian Armed Forces";
			class PB_BUL_INF_Groups
			{
				name = "Infantry";
			///SECTIONS///
				class PB_BUL_Section
				{
					faction = "PB_BUL_Faction";
					name = "Infantry Section";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_BUL_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BUL_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_BUL_SOL_LAR";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_BUL_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_BUL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class PB_BUL_RPG_Section
				{
					faction = "PB_BUL_Faction";
					name = "Infantry Section (RPG-7)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_BUL_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BUL_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_BUL_SOL_LAR";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_BUL_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_BUL_SOL_HAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class PB_BUL_AA_Section
				{
					faction = "PB_BUL_Faction";
					name = "Infantry Section (AA)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_AA";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_BUL_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BUL_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_BUL_SOL_LAR";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_BUL_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_BUL_SOL_R";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
			///FIRETEAMS///
				class PB_BUL_FT
				{
					faction = "PB_BUL_Faction";
					name = "Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_LAR";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_BUL_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BUL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_BUL_MG_FT
				{
					faction = "PB_BUL_Faction";
					name = "Fireteam (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_BUL_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BUL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_BUL_RPG_FT
				{
					faction = "PB_BUL_Faction";
					name = "Fireteam (RPG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_BUL_SOL_R";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BUL_SOL_LAR";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_BUL_MET_FT
				{
					faction = "PB_BUL_Faction";
					name = "Fireteam (Metis)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_MET";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_BUL_SOL_R";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BUL_SOL_LAR";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_BUL_AA_FT
				{
					faction = "PB_BUL_Faction";
					name = "Fireteam (AA)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_AA";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_BUL_SOL_R";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BUL_SOL_LAR";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			///TEAMS///
				class PB_BUL_T
				{
					faction = "PB_BUL_Faction";
					name = "Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_BUL_AA_T
				{
					faction = "PB_BUL_Faction";
					name = "Team (AA)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_AA";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_BUL_RPG_T
				{
					faction = "PB_BUL_Faction";
					name = "Team (RPG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_BUL_MET_T
				{
					faction = "PB_BUL_Faction";
					name = "Team (METIS)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_MET";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_BUL_MG_T
				{
					faction = "PB_BUL_Faction";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_BUL_SNI_T
				{
					faction = "PB_BUL_Faction";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			
			class PB_BUL_Tank_Groups
			{
				name = "Tanks";
				class PB_BUL_T72_PLT
				{
					name = "T-72M Platoon";
					faction = "PB_BUL_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_T72M";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_T72M";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_BUL_T72M";
						rank = "SERGEANT";
						position[] = {-20.1,-30,3};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BUL_T72M";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class PB_BUL_T72M_SEC
				{
					name = "T-72M Section";
					faction = "PB_BUL_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_T72M";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_T72M";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
			class PB_BUL_Mech_Groups
			{
				name = "Mechanized Infantry";
				class PB_BUL_BMP1_SEC
				{
					name = "Mechanized Infantry (BMP-1P)";
					faction = "PB_BUL_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_RAT";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_BUL_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BUL_BMP1P";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_BUL_SOL_MG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_BUL_SOL_ENG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_BUL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_BUL_SOL_LAR";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
			class PB_BUL_Mot_Groups
			{
				name = "Motorized Infantry";
				class PB_BUL_BTR60_SEC
				{
					name = "Motorized Infantry (BTR-60)";
					faction = "PB_BUL_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_RAT";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_BUL_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BUL_BTR60";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_BUL_SOL_MG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_BUL_SOL_ENG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_BUL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_BUL_SOL_LAR";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_BUL_BRDM2_SEC
				{
					name = "Motorized Infantry (BRDM2)";
					faction = "PB_BUL_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_BUL_Top";
					editorSubcategory = "PB_BUL_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BUL_SOL_RAT";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_BUL_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BUL_BRDM2MG";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_BUL_SOL_MG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_BUL_SOL_ENG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_BUL_SOL_SL";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_BUL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_BUL_SOL_LAR";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};