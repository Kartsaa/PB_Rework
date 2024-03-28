class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_FRA_Faction
		{
			name = "French Armed Forces";
			class PB_FRA_INF_Groups
			{
				name = "Infantry";
			///SECTIONS///
				class PB_FRA_Section
				{
					faction = "PB_FRA_Faction";
					name = "Infantry Combat Group";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FRA_Top";
					editorSubcategory = "PB_FRA_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FRA_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MK";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_FRA_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FRA_SOL_LAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_FRA_SOL_LAT";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_FRA_SOL_GRE";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MG";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MED";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
				};
				class PB_FRA_AT_Section
				{
					faction = "PB_FRA_Faction";
					name = "Infantry Combat Group (2x HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FRA_Top";
					editorSubcategory = "PB_FRA_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FRA_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MK";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_FRA_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FRA_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_FRA_SOL_HAT";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_FRA_SOL_GRE";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MG";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MED";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
				};
				class PB_FRA_MG_Section
				{
					faction = "PB_FRA_Faction";
					name = "Infantry Combat Group (2x MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FRA_Top";
					editorSubcategory = "PB_FRA_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FRA_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_FRA_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FRA_SOL_LAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_FRA_SOL_LAT";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_FRA_SOL_GRE";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MG";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MED";
						rank = "CORPORAL";
						position[] = {-15,-15,0};
					};
				};
			///FIRETEAMS///
				class PB_FRA_FT
				{
					faction = "PB_FRA_Faction";
					name = "Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FRA_Top";
					editorSubcategory = "PB_FRA_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FRA_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_FRA_SOL_LAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MK";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_FRA_MG_FT
				{
					faction = "PB_FRA_Faction";
					name = "Fireteam (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FRA_Top";
					editorSubcategory = "PB_FRA_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FRA_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FRA_SOL_LAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_FRA_HAT_FT
				{
					faction = "PB_FRA_Faction";
					name = "Fireteam (HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FRA_Top";
					editorSubcategory = "PB_FRA_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FRA_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FRA_SOL_GRE";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_FRA_SOL_HAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FRA_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_FRA_SNI_FT
				{
					faction = "PB_FRA_Faction";
					name = "Fireteam (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FRA_Top";
					editorSubcategory = "PB_FRA_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FRA_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MK";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MK";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			///TEAMS///
				class PB_FRA_T
				{
					faction = "PB_FRA_Faction";
					name = "Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FRA_Top";
					editorSubcategory = "PB_FRA_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FRA_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FRA_SOL_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_FRA_MG_T
				{
					faction = "PB_FRA_Faction";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FRA_Top";
					editorSubcategory = "PB_FRA_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FRA_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FRA_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_FRA_AT_T
				{
					faction = "PB_FRA_Faction";
					name = "Team (HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FRA_Top";
					editorSubcategory = "PB_FRA_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FRA_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FRA_SOL_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_FRA_SNI_T
				{
					faction = "PB_FRA_Faction";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_FRA_Top";
					editorSubcategory = "PB_FRA_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_FRA_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_FRA_SOL_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
		};
	};
};