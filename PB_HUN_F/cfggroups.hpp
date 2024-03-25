class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_HUN_Faction
		{
			name = "Hungarian Defence Forces";
			class PB_HUN_INF_Groups
			{
				name = "Infantry";
			///SECTIONS///
				class PB_HUN_Section
				{
					faction = "PB_HUN_Faction";
					name = "Rifle Squad";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_HUN_Top";
					editorSubcategory = "PB_HUN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_HUN_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_HUN_SOL_R";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_HUN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_HUN_SOL_R";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_HUN_SOL_MG";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_HUN_SOL_GRE";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_HUN_SOL_MED";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class PB_HUN_AT_Section
				{
					faction = "PB_HUN_Faction";
					name = "Rifle Group (2x AT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_HUN_Top";
					editorSubcategory = "PB_HUN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_HUN_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_HUN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_HUN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_HUN_SOL_R";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_HUN_SOL_MG";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_HUN_SOL_GRE";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_HUN_SOL_MED";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class PB_HUN_MG_Section
				{
					faction = "PB_HUN_Faction";
					name = "Rifle Group (2x MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_HUN_Top";
					editorSubcategory = "PB_HUN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_HUN_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_HUN_SOL_R";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_HUN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_HUN_SOL_MG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_HUN_SOL_MG";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_HUN_SOL_GRE";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_HUN_SOL_MED";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
			///FIRETEAMS///
				class PB_HUN_FT
				{
					faction = "PB_HUN_Faction";
					name = "Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_HUN_Top";
					editorSubcategory = "PB_HUN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_HUN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_HUN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_HUN_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_HUN_SOL_R";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_HUN_MG_FT
				{
					faction = "PB_HUN_Faction";
					name = "Fireteam (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_HUN_Top";
					editorSubcategory = "PB_HUN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_HUN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_HUN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_HUN_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_HUN_SOL_R";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_HUN_HAT_FT
				{
					faction = "PB_HUN_Faction";
					name = "Fireteam (HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_HUN_Top";
					editorSubcategory = "PB_HUN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_HUN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_HUN_SOL_R";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_HUN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_HUN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			///TEAMS///
				class PB_HUN_T
				{
					faction = "PB_HUN_Faction";
					name = "Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_HUN_Top";
					editorSubcategory = "PB_HUN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_HUN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_HUN_SOL_R";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_HUN_MG_T
				{
					faction = "PB_HUN_Faction";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_HUN_Top";
					editorSubcategory = "PB_HUN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_HUN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_HUN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_HUN_AT_T
				{
					faction = "PB_HUN_Faction";
					name = "Team (HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_HUN_Top";
					editorSubcategory = "PB_HUN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_HUN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_HUN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_HUN_SNI_T
				{
					faction = "PB_HUN_Faction";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_HUN_Top";
					editorSubcategory = "PB_HUN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_HUN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_HUN_SOL_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class PB_HUN_Tank_Groups
			{
				name = "Tanks";
				class PB_HUN_LEO_PLT
				{
					name = "Leopard Platoon";
					faction = "PB_HUN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_HUN_Top";
					editorSubcategory = "PB_HUN_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_HUN_LEO";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_HUN_LEO";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_HUN_LEO";
						rank = "SERGEANT";
						position[] = {-20.1,-30,3};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_HUN_LEO";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class PB_HUN_LEO_SEC
				{
					name = "Leopard Section";
					faction = "PB_HUN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_HUN_Top";
					editorSubcategory = "PB_HUN_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_HUN_LEO";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_HUN_LEO";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
				class PB_HUN_T72_PLT
				{
					name = "T-72M1 Platoon";
					faction = "PB_HUN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_HUN_Top";
					editorSubcategory = "PB_HUN_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_HUN_T72";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_HUN_T72";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_HUN_T72";
						rank = "SERGEANT";
						position[] = {-20.1,-30,3};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_HUN_T72";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class PB_HUN_T72_SEC
				{
					name = "T-72M1 Section";
					faction = "PB_HUN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_HUN_Top";
					editorSubcategory = "PB_HUN_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_HUN_T72";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_HUN_T72";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
			class PB_HUN_Mot_Groups
			{
				name = "Motorized Infantry";
				class PB_HUN_BTR80_SQ
				{
					name = "Motorized Squad (BTR-80)";
					faction = "PB_HUN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_HUN_Top";
					editorSubcategory = "PB_HUN_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_HUN_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_HUN_BTR80";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_HUN_SOL_MG";
						rank = "PRIVATE";
						position[] = {-15,-20,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_HUN_SOL_ENG";
						rank = "PRIVATE";
						position[] = {15,-20,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_HUN_SOL_R";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_HUN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_HUN_BTR80A_SQ
				{
					name = "Motorized Squad (BTR-80A)";
					faction = "PB_HUN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_HUN_Top";
					editorSubcategory = "PB_HUN_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_HUN_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_HUN_BTR80A";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_HUN_SOL_MG";
						rank = "PRIVATE";
						position[] = {-15,-20,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_HUN_SOL_ENG";
						rank = "PRIVATE";
						position[] = {15,-20,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_HUN_SOL_R";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_HUN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};