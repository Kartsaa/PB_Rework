class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_LAT_Faction
		{
			name = "Latvian National Armed Forces";
			class PB_LAT_INF_Groups
			{
				name = "Infantry";
			///SECTIONS///
				class PB_LAT_Section
				{
					faction = "PB_LAT_Faction";
					name = "Infantry Section";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_LAT_Top";
					editorSubcategory = "PB_LAT_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_LAT_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_LAT_SOL_RAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_LAT_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_LAT_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_LAT_SOL_SL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_LAT_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_LAT_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_LAT_SOL_MED";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class PB_LAT_HAT_Section
				{
					faction = "PB_LAT_Faction";
					name = "Infantry Section (2x HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_LAT_Top";
					editorSubcategory = "PB_LAT_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_LAT_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_LAT_SOL_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_LAT_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_LAT_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_LAT_SOL_HAT";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_LAT_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_LAT_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_LAT_SOL_MED";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class PB_LAT_AA_Section
				{
					faction = "PB_LAT_Faction";
					name = "Infantry Section (AA)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_LAT_Top";
					editorSubcategory = "PB_LAT_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_LAT_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_LAT_SOL_SL";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_LAT_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_LAT_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_LAT_SOL_AA";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_LAT_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_LAT_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_LAT_SOL_MED";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
			///FIRETEAMS///
				class PB_LAT_FT
				{
					faction = "PB_LAT_Faction";
					name = "Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_LAT_Top";
					editorSubcategory = "PB_LAT_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_LAT_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_LAT_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_LAT_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_LAT_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_LAT_MG_FT
				{
					faction = "PB_LAT_Faction";
					name = "Fireteam (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_LAT_Top";
					editorSubcategory = "PB_LAT_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_LAT_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_LAT_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_LAT_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_LAT_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_LAT_AT_FT
				{
					faction = "PB_LAT_Faction";
					name = "Fireteam (2x AT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_LAT_Top";
					editorSubcategory = "PB_LAT_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_LAT_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_LAT_SOL_AT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_LAT_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_LAT_SOL_AT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			///TEAMS///
				class PB_LAT_T
				{
					faction = "PB_LAT_Faction";
					name = "Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_LAT_Top";
					editorSubcategory = "PB_LAT_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_LAT_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_LAT_SOL_RAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_LAT_AT_T
				{
					faction = "PB_LAT_Faction";
					name = "Team (AT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_LAT_Top";
					editorSubcategory = "PB_LAT_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_LAT_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_LAT_SOL_AT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_LAT_MG_T
				{
					faction = "PB_LAT_Faction";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_LAT_Top";
					editorSubcategory = "PB_LAT_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_LAT_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_LAT_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_LAT_SNI_T
				{
					faction = "PB_LAT_Faction";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_LAT_Top";
					editorSubcategory = "PB_LAT_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_LAT_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_LAT_SOL_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class PB_LAT_Mech_Groups
			{
				name = "Mechanized Infantry";
				class PB_LAT_K808_SEC
				{
					name = "Mechanized Infantry (K808)";
					faction = "PB_LAT_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_LAT_Top";
					editorSubcategory = "PB_LAT_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_LAT_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_LAT_SOL_RAT";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_LAT_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_LAT_K808";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_LAT_SOL_MG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_LAT_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_LAT_SOL_SL";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_LAT_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_LAT_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
			class PB_LAT_Rec_Groups
			{
				name = "Recon Groups";
				class PB_LAT_LATV_G
				{
					name = "Recon Group (Oshkosh L-ATV)";
					faction = "PB_LAT_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_LAT_Top";
					editorSubcategory = "PB_LAT_MRAP";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_LAT_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_LAT_OSHKOSH_M240_LATV";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_LAT_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_LAT_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};