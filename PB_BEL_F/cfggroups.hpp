class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_BEL_Faction
		{
			name = "Belgian Armed Forces";
			class PB_BEL_INF_Groups
			{
				name = "Infantry";
			///SECTIONS///
				class PB_BEL_Section
				{
					faction = "PB_BEL_Faction";
					name = "Infantry Section";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BEL_Top";
					editorSubcategory = "PB_BEL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BEL_SOL_RAT";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BEL_SOL_SL";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_BEL_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BEL_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_BEL_SOL_SL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_BEL_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_BEL_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_BEL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_BEL_SOL_MED";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "PB_BEL_SOL_R";
						rank = "PRIVATE";
						position[] = {25,-20,0};
					};
				};
			///FIRETEAMS///
				class PB_BEL_FT
				{
					faction = "PB_BEL_Faction";
					name = "Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BEL_Top";
					editorSubcategory = "PB_BEL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BEL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BEL_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_BEL_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BEL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_BEL_MG_FT
				{
					faction = "PB_BEL_Faction";
					name = "Fireteam (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BEL_Top";
					editorSubcategory = "PB_BEL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BEL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BEL_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_BEL_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BEL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			///TEAMS///
				class PB_BEL_T
				{
					faction = "PB_BEL_Faction";
					name = "Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BEL_Top";
					editorSubcategory = "PB_BEL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BEL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BEL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_BEL_MG_T
				{
					faction = "PB_BEL_Faction";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BEL_Top";
					editorSubcategory = "PB_BEL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BEL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BEL_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_BEL_SNI_T
				{
					faction = "PB_BEL_Faction";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_BEL_Top";
					editorSubcategory = "PB_BEL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BEL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BEL_SOL_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class PB_BEL_Mech_Groups
			{
				name = "Mechanized Infantry";
				class PB_BEL_PIR_SEC
				{
					name = "Mechanized Infantry (Piranha IIIC)";
					faction = "PB_BEL_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_BEL_Top";
					editorSubcategory = "PB_BEL_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BEL_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_BEL_SOL_RAT";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_BEL_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BEL_PIRANHA_APC";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_BEL_SOL_MG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_BEL_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_BEL_SOL_SL";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_BEL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_BEL_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
			class PB_BEL_Rec_Groups
			{
				name = "Recon Groups";
				class PB_BEL_LATV_G
				{
					name = "Recon Group (Oshkosh L-ATV)";
					faction = "PB_BEL_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_BEL_Top";
					editorSubcategory = "PB_BEL_MRAP";
					icon = "\A3\ui_f\data\map\markers\nato\b_recon.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_BEL_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_BEL_OSHKOSH_M240_LATV";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_BEL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_BEL_SOL_GRE";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};