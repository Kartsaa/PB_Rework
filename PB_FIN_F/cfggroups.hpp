class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_FIN_Faction
		{
			name = "Finnish Defence Forces";
			class PB_FIN_INF_Groups
			{
				name = "Infantry";
			///SECTIONS///
				class PB_FIN_Section
				{
					faction = "PB_FIN_Faction";
					name = "Jaeger Group";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FIN_Top";
					editorSubcategory = "PB_FIN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MK";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_FIN_SOL_EOD";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FIN_SOL_LAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MG";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_FIN_SOL_LAT";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MG";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MED";
						rank = "PRIVATE";
						position[] = {25,-20,0};
					};
				};
				class PB_FIN_HAT_Section
				{
					faction = "PB_FIN_Faction";
					name = "Jaeger Group (NLAW)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FIN_Top";
					editorSubcategory = "PB_FIN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MK";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_FIN_SOL_EOD";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FIN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MG";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_FIN_SOL_LAT";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MG";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MED";
						rank = "PRIVATE";
						position[] = {25,-20,0};
					};
				};
				class PB_FIN_AA_Section
				{
					faction = "PB_FIN_Faction";
					name = "Jaeger Group (AA)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FIN_Top";
					editorSubcategory = "PB_FIN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MK";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_FIN_SOL_EOD";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FIN_SOL_AA";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MG";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_FIN_SOL_LAT";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MG";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MED";
						rank = "PRIVATE";
						position[] = {25,-20,0};
					};
				};
			///FIRETEAMS///
				class PB_FIN_FT
				{
					faction = "PB_FIN_Faction";
					name = "Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FIN_Top";
					editorSubcategory = "PB_FIN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_FIN_SOL_LAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FIN_SOL_LAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_FIN_MG_FT
				{
					faction = "PB_FIN_Faction";
					name = "Fireteam (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FIN_Top";
					editorSubcategory = "PB_FIN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FIN_SOL_LAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_FIN_AA_FT
				{
					faction = "PB_FIN_Faction";
					name = "Fireteam (AA)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FIN_Top";
					editorSubcategory = "PB_FIN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_FIN_SOL_R";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FIN_SOL_AA";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_FIN_HAT_FT
				{
					faction = "PB_FIN_Faction";
					name = "Fireteam (NLAW)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FIN_Top";
					editorSubcategory = "PB_FIN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_FIN_SOL_R";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FIN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			///TEAMS///
				class PB_FIN_T
				{
					faction = "PB_FIN_Faction";
					name = "Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FIN_Top";
					editorSubcategory = "PB_FIN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FIN_SOL_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_FIN_MG_T
				{
					faction = "PB_FIN_Faction";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FIN_Top";
					editorSubcategory = "PB_FIN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_FIN_AT_T
				{
					faction = "PB_FIN_Faction";
					name = "Team (HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FIN_Top";
					editorSubcategory = "PB_FIN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FIN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_FIN_AA_T
				{
					faction = "PB_FIN_Faction";
					name = "Team (AA)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FIN_Top";
					editorSubcategory = "PB_FIN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FIN_SOL_AA";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_FIN_SNI_T
				{
					faction = "PB_FIN_Faction";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FIN_Top";
					editorSubcategory = "PB_FIN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class PB_FIN_Tank_Groups
			{
				name = "Tanks";
				class PB_FIN_LEO_PLT
				{
					name = "Leopard Platoon";
					faction = "PB_FIN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_FIN_Top";
					editorSubcategory = "PB_FIN_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FIN_LEO";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FIN_LEO";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_FIN_LEO";
						rank = "SERGEANT";
						position[] = {-20.1,-30,3};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FIN_LEO";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class PB_FIN_LEO_SEC
				{
					name = "LEOPARD Section";
					faction = "PB_FIN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_FIN_Top";
					editorSubcategory = "PB_FIN_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FIN_LEO";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FIN_LEO";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
			class PB_FIN_Mech_Groups
			{
				name = "Mechanized Infantry";
				class PB_FIN_BMP2_HAT
				{
					name = "Mechanized Squad (NLAW)";
					faction = "PB_FIN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_FIN_Top";
					editorSubcategory = "PB_FIN_Cars";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FIN_BMP2";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MG";
						rank = "PRIVATE";
						position[] = {-15,-20,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_FIN_SOL_R";
						rank = "PRIVATE";
						position[] = {15,-20,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_FIN_SOL_R";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_FIN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_FIN_BMP2_G
				{
					name = "Mechanized Squad";
					faction = "PB_FIN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_FIN_Top";
					editorSubcategory = "PB_FIN_Cars";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FIN_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FIN_BMP2";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_FIN_SOL_MG";
						rank = "PRIVATE";
						position[] = {-15,-20,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_FIN_SOL_LAT";
						rank = "PRIVATE";
						position[] = {15,-20,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_FIN_SOL_R";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_FIN_SOL_LAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};