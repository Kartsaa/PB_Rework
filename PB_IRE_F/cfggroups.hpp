class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_IRE_Faction
		{
			name = "Irish Defence Forces";
			class PB_IRE_INF_Groups
			{
				name = "Infantry";
			///SECTIONS///
				class PB_IRE_Section
				{
					faction = "PB_IRE_Faction";
					name = "Infantry Section";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_IRE_Top";
					editorSubcategory = "PB_IRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_IRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_IRE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_IRE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_IRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_IRE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_IRE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class PB_IRE_AT_Section
				{
					faction = "PB_IRE_Faction";
					name = "Infantry Section (2x HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_IRE_Top";
					editorSubcategory = "PB_IRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_IRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_IRE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_IRE_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_IRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_IRE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_IRE_SOL_HAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class PB_IRE_JAV_Section
				{
					faction = "PB_IRE_Faction";
					name = "Infantry Section (Javelin)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_IRE_Top";
					editorSubcategory = "PB_IRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_IRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_IRE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_IRE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_IRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_IRE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_IRE_SOL_JAV";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
			///FIRETEAMS///
				class PB_IRE_FT
				{
					faction = "PB_IRE_Faction";
					name = "Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_IRE_Top";
					editorSubcategory = "PB_IRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_IRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_IRE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_IRE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_IRE_MG_FT
				{
					faction = "PB_IRE_Faction";
					name = "Fireteam (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_IRE_Top";
					editorSubcategory = "PB_IRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_IRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_IRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_IRE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_IRE_HAT_FT
				{
					faction = "PB_IRE_Faction";
					name = "Fireteam (HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_IRE_Top";
					editorSubcategory = "PB_IRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_IRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_IRE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_IRE_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			///TEAMS///
				class PB_IRE_T
				{
					faction = "PB_IRE_Faction";
					name = "Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_IRE_Top";
					editorSubcategory = "PB_IRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_IRE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_IRE_MG_T
				{
					faction = "PB_IRE_Faction";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_IRE_Top";
					editorSubcategory = "PB_IRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_IRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_IRE_HAT_T
				{
					faction = "PB_IRE_Faction";
					name = "Team (HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_IRE_Top";
					editorSubcategory = "PB_IRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_IRE_SOL_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_IRE_JAV_T
				{
					faction = "PB_IRE_Faction";
					name = "Team (Javelin)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_IRE_Top";
					editorSubcategory = "PB_IRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_IRE_SOL_JAV";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_IRE_SNI_T
				{
					faction = "PB_IRE_Faction";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_IRE_Top";
					editorSubcategory = "PB_IRE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class PB_IRE_Mech_Groups
			{
				name = "Mechanized Infantry";
				class PB_IRE_PIRANHA_SEC
				{
					name = "Mechanized Infantry Section";
					faction = "PB_IRE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_IRE_Top";
					editorSubcategory = "PB_IRE_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_IRE_SOL_RAT";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_IRE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_IRE_PIRANHA";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_IRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_IRE_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_IRE_SOL_SL";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_IRE_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_IRE_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};