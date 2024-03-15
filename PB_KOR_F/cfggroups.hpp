class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_KOR_Faction
		{
			name = "Republic of Korea Armed Forces";
			class PB_KOR_INF_Groups
			{
				name = "Infantry";
			///SECTIONS///
				class PB_KOR_Section
				{
					faction = "PB_KOR_Faction";
					name = "Infantry Section";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_KOR_Top";
					editorSubcategory = "PB_KOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_KOR_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_KOR_SOL_RAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_KOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_KOR_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_KOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_KOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_KOR_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_KOR_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_KOR_SOL_MED";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class PB_KOR_HAT_Section
				{
					faction = "PB_KOR_Faction";
					name = "Infantry Section (2x HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_KOR_Top";
					editorSubcategory = "PB_KOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_KOR_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_KOR_SOL_AT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_KOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_KOR_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_KOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_KOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_KOR_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_KOR_SOL_AT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_KOR_SOL_MED";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
			///FIRETEAMS///
				class PB_KOR_FT
				{
					faction = "PB_KOR_Faction";
					name = "Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_KOR_Top";
					editorSubcategory = "PB_KOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_KOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_KOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_KOR_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_KOR_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_KOR_MG_FT
				{
					faction = "PB_KOR_Faction";
					name = "Fireteam (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_KOR_Top";
					editorSubcategory = "PB_KOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_KOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_KOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_KOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_KOR_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_KOR_AT_FT
				{
					faction = "PB_KOR_Faction";
					name = "Fireteam (2x AT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_KOR_Top";
					editorSubcategory = "PB_KOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_KOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_KOR_SOL_AT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_KOR_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_KOR_SOL_AT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			///TEAMS///
				class PB_KOR_T
				{
					faction = "PB_KOR_Faction";
					name = "Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_KOR_Top";
					editorSubcategory = "PB_KOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_KOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_KOR_SOL_RAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_KOR_AT_T
				{
					faction = "PB_KOR_Faction";
					name = "Team (AT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_KOR_Top";
					editorSubcategory = "PB_KOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_KOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_KOR_SOL_AT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_KOR_MG_T
				{
					faction = "PB_KOR_Faction";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_KOR_Top";
					editorSubcategory = "PB_KOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_KOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_KOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_KOR_SNI_T
				{
					faction = "PB_KOR_Faction";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_KOR_Top";
					editorSubcategory = "PB_KOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_KOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_KOR_SOL_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class PB_KOR_Mech_Groups
			{
				name = "Mechanized Infantry";
				class PB_KOR_K808_SEC
				{
					name = "Mechanized Infantry (K808)";
					faction = "PB_KOR_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_KOR_Top";
					editorSubcategory = "PB_KOR_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_KOR_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_KOR_SOL_RAT";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_KOR_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_KOR_K808";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_KOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_KOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_KOR_SOL_SL";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_KOR_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_KOR_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
			class PB_KOR_Rec_Groups
			{
				name = "Recon Groups";
				class PB_KOR_LATV_G
				{
					name = "Recon Group (Oshkosh L-ATV)";
					faction = "PB_KOR_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_KOR_Top";
					editorSubcategory = "PB_KOR_MRAP";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_KOR_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_KOR_OSHKOSH_M240_LATV";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_KOR_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_KOR_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};