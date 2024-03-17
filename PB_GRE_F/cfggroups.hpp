class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_GRE_Faction
		{
			name = "Hellenic Armed Forces";
			class PB_GRE_INF_Groups
			{
				name = "Infantry";
			///SECTIONS///
				class PB_GRE_Section
				{
					faction = "PB_GRE_Faction";
					name = "Infantry Section";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_GRE_Top";
					editorSubcategory = "PB_GRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_GRE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_GRE_SOL_AT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_GRE_SOL_R";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_GRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_GRE_SOL_MK";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_GRE_SOL_MED";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
			///FIRETEAMS///
				class PB_GRE_FT
				{
					faction = "PB_GRE_Faction";
					name = "Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_GRE_Top";
					editorSubcategory = "PB_GRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_GRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_GRE_SOL_R";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_GRE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_GRE_MG_FT
				{
					faction = "PB_GRE_Faction";
					name = "Fireteam (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_GRE_Top";
					editorSubcategory = "PB_GRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_GRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_GRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_GRE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_GRE_AT_FT
				{
					faction = "PB_GRE_Faction";
					name = "Fireteam (2x AT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_GRE_Top";
					editorSubcategory = "PB_GRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_GRE_SOL_AT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_GRE_SOL_R";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_GRE_SOL_AT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			///TEAMS///
				class PB_GRE_T
				{
					faction = "PB_GRE_Faction";
					name = "Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_GRE_Top";
					editorSubcategory = "PB_GRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_GRE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_GRE_AT_T
				{
					faction = "PB_GRE_Faction";
					name = "Team (AT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_GRE_Top";
					editorSubcategory = "PB_GRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_GRE_SOL_AT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_GRE_MG_T
				{
					faction = "PB_GRE_Faction";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_GRE_Top";
					editorSubcategory = "PB_GRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_GRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_GRE_SNI_T
				{
					faction = "PB_GRE_Faction";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_GRE_Top";
					editorSubcategory = "PB_GRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_GRE_SOL_MK";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class PB_GRE_Tank_Groups
			{
				name = "Tanks";
				class PB_GRE_LEO_PLT
				{
					name = "Leopard Platoon";
					faction = "PB_GRE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_GRE_Top";
					editorSubcategory = "PB_GRE_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_GRE_LEO";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_GRE_LEO";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_GRE_LEO";
						rank = "SERGEANT";
						position[] = {-20.1,-30,3};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_GRE_LEO";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class PB_GRE_LEO_SEC
				{
					name = "Leopard Section";
					faction = "PB_GRE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_GRE_Top";
					editorSubcategory = "PB_GRE_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_GRE_LEO";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_GRE_LEO";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
			class PB_GRE_Mech_Groups
			{
				name = "Mechanized Infantry";
				class PB_GRE_MK19_SEC
				{
					name = "Mechanized Infantry (M11A3 MK19)";
					faction = "PB_GRE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_GRE_Top";
					editorSubcategory = "PB_GRE_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_GRE_SOL_RAT";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_GRE_SOL_R";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_GRE_M113A3_MK19";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_GRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_GRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_GRE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_GRE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_GRE_M2_SEC
				{
					name = "Mechanized Infantry (M11A3 M2)";
					faction = "PB_GRE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_GRE_Top";
					editorSubcategory = "PB_GRE_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_GRE_SOL_RAT";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_GRE_SOL_R";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_GRE_M113A3_M2";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_GRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_GRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_GRE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_GRE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
			class PB_GRE_Mot_Groups
			{
				name = "Motorized Infantry";
				class PB_GRE_M1025_MK19_SEC
				{
					name = "Motorized Infantry (M1025 Mk19)";
					faction = "PB_GRE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_GRE_Top";
					editorSubcategory = "PB_GRE_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_GRE_SOL_RAT";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_GRE_SOL_R";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_GRE_M1025_MK19";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_GRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_GRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_GRE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_GRE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_GRE_M1025_M2_SEC
				{
					name = "Motorized Infantry (M1025 M2)";
					faction = "PB_GRE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_GRE_Top";
					editorSubcategory = "PB_GRE_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_GRE_SOL_RAT";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_GRE_SOL_R";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_GRE_M1025_M2";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_GRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_GRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_GRE_SOL_SL";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_GRE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_GRE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};