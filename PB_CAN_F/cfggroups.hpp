class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_CAN_Faction
		{
			name = "Canadian Armed Forces";
			class PB_CAN_INF_Groups
			{
				name = "Infantry";
			///SECTIONS///
				class PB_CAN_Section
				{
					faction = "PB_CAN_Faction";
					name = "Rifle Section";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CAN_Top";
					editorSubcategory = "PB_CAN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CAN_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CAN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_CAN_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CAN_SOL_SL";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_CAN_SOL_MG";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_CAN_SOL_GRE";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_CAN_SOL_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_CAN_SOL_R";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class PB_CAN_AT_Section
				{
					faction = "PB_CAN_Faction";
					name = "Infantry Section (2x HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CAN_Top";
					editorSubcategory = "PB_CAN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CAN_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CAN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_CAN_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CAN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_CAN_SOL_SL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_CAN_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_CAN_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_CAN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
			///FIRETEAMS///
				class PB_CAN_FT
				{
					faction = "PB_CAN_Faction";
					name = "Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CAN_Top";
					editorSubcategory = "PB_CAN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CAN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CAN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_CAN_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CAN_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_CAN_MG_FT
				{
					faction = "PB_CAN_Faction";
					name = "Fireteam (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CAN_Top";
					editorSubcategory = "PB_CAN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CAN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CAN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_CAN_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CAN_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_CAN_HAT_FT
				{
					faction = "PB_CAN_Faction";
					name = "Fireteam (HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CAN_Top";
					editorSubcategory = "PB_CAN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CAN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CAN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_CAN_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CAN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			///TEAMS///
				class PB_CAN_T
				{
					faction = "PB_CAN_Faction";
					name = "Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CAN_Top";
					editorSubcategory = "PB_CAN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CAN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CAN_SOL_RAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_CAN_MG_T
				{
					faction = "PB_CAN_Faction";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CAN_Top";
					editorSubcategory = "PB_CAN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CAN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CAN_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_CAN_HAT_T
				{
					faction = "PB_CAN_Faction";
					name = "Team (HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CAN_Top";
					editorSubcategory = "PB_CAN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CAN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CAN_SOL_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_CAN_SNI_T
				{
					faction = "PB_CAN_Faction";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_CAN_Top";
					editorSubcategory = "PB_CAN_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CAN_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CAN_SOL_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class PB_CAN_Tank_Groups
			{
				name = "Tanks";
				class PB_CAN_LEO_PLT
				{
					name = "Leopard Platoon";
					faction = "PB_CAN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_CAN_Top";
					editorSubcategory = "PB_CAN_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CAN_LEO";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CAN_LEO";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_CAN_LEO";
						rank = "SERGEANT";
						position[] = {-20.1,-30,3};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CAN_LEO";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class PB_CAN_LEO_SEC
				{
					name = "LEOPARD Section";
					faction = "PB_CAN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_CAN_Top";
					editorSubcategory = "PB_CAN_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CAN_LEO";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_CAN_LEO";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
			class PB_CAN_Rec_Groups
			{
				name = "Recon Groups";
				class PB_CAN_MRZR_PAT
				{
					name = "Recon Group (MRZR)";
					faction = "PB_CAN_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_CAN_Top";
					editorSubcategory = "PB_CAN_Cars";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_CAN_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_CAN_MRZR";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_CAN_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_CAN_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};