class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_DEN_Faction
		{
			name = "Danish Armed Forces";
			class PB_DEN_INF_Groups
			{
				name = "Infantry";
			///SECTIONS///
				class PB_DEN_Section
				{
					faction = "PB_DEN_Faction";
					name = "Rifle Squad";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_DEN_Top";
					editorSubcategory = "PB_DEN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_DEN_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_DEN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_DEN_SOL_LAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_DEN_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_DEN_SOL_MG";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_DEN_SOL_LAT";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_DEN_SOL_MED";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class PB_DEN_AT_Section
				{
					faction = "PB_DEN_Faction";
					name = "Rifle Group (2x AT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_DEN_Top";
					editorSubcategory = "PB_DEN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_DEN_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_DEN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_DEN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_DEN_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_DEN_SOL_MG";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_DEN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_DEN_SOL_MED";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
			///FIRETEAMS///
				class PB_DEN_FT
				{
					faction = "PB_DEN_Faction";
					name = "Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_DEN_Top";
					editorSubcategory = "PB_DEN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_DEN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_DEN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_DEN_SOL_LAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_DEN_SOL_MED";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_DEN_MG_FT
				{
					faction = "PB_DEN_Faction";
					name = "Fireteam (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_DEN_Top";
					editorSubcategory = "PB_DEN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_DEN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_DEN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_DEN_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_DEN_SOL_LAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_DEN_HAT_FT
				{
					faction = "PB_DEN_Faction";
					name = "Fireteam (HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_DEN_Top";
					editorSubcategory = "PB_DEN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_DEN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_DEN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_DEN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_DEN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_DEN_SNI_FT
				{
					faction = "PB_DEN_Faction";
					name = "Fireteam (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_DEN_Top";
					editorSubcategory = "PB_DEN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_DEN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_DEN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_DEN_SOL_MK";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_DEN_SOL_MK";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			///TEAMS///
				class PB_DEN_T
				{
					faction = "PB_DEN_Faction";
					name = "Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_DEN_Top";
					editorSubcategory = "PB_DEN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_DEN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_DEN_SOL_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_DEN_MG_T
				{
					faction = "PB_DEN_Faction";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_DEN_Top";
					editorSubcategory = "PB_DEN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_DEN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_DEN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_DEN_AT_T
				{
					faction = "PB_DEN_Faction";
					name = "Team (HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_DEN_Top";
					editorSubcategory = "PB_DEN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_DEN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_DEN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_DEN_SNI_T
				{
					faction = "PB_DEN_Faction";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_DEN_Top";
					editorSubcategory = "PB_DEN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_DEN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_DEN_SOL_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class PB_DEN_Tank_Groups
			{
				name = "Tanks";
				class PB_DEN_LEO_PLT
				{
					name = "Leopard 2SG Platoon";
					faction = "PB_DEN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_DEN_Top";
					editorSubcategory = "PB_DEN_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_DEN_LEO";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_DEN_LEO";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
		};
	};
};