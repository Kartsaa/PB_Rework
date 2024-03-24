class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_NOR_Faction
		{
			name = "Norwegian Armed Forces";
			class PB_NOR_INF_Groups
			{
				name = "Infantry";
			///SECTIONS///
				class PB_NOR_Section
				{
					faction = "PB_NOR_Faction";
					name = "Home Guard Rifle Squad";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_NOR_Top";
					editorSubcategory = "PB_NOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_NOR_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_NOR_SOL_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_NOR_SOL_LAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_NOR_SOL_R";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MK";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MED";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_NOR_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class PB_NOR_AT_Section
				{
					faction = "PB_NOR_Faction";
					name = "Rifle Squad (HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_NOR_Top";
					editorSubcategory = "PB_NOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_NOR_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_NOR_SOL_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_NOR_SOL_HAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_NOR_SOL_R";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MK";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MED";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_NOR_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class PB_NOR_MG_Section
				{
					faction = "PB_NOR_Faction";
					name = "Home Guard Rifle Squad (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_NOR_Top";
					editorSubcategory = "PB_NOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_NOR_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_NOR_SOL_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_NOR_SOL_LAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MK";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MED";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_NOR_SOL_GRE";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
			///FIRETEAMS///
				class PB_NOR_FT
				{
					faction = "PB_NOR_Faction";
					name = "Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_NOR_Top";
					editorSubcategory = "PB_NOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_NOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_NOR_SOL_LAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_NOR_SOL_R";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_NOR_MG_FT
				{
					faction = "PB_NOR_Faction";
					name = "Fireteam (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_NOR_Top";
					editorSubcategory = "PB_NOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_NOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_NOR_SOL_LAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_NOR_HAT_FT
				{
					faction = "PB_NOR_Faction";
					name = "Fireteam (HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_NOR_Top";
					editorSubcategory = "PB_NOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_NOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_NOR_SOL_HAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_NOR_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_NOR_SNI_FT
				{
					faction = "PB_NOR_Faction";
					name = "Fireteam (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_NOR_Top";
					editorSubcategory = "PB_NOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_NOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MK";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MK";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			///TEAMS///
				class PB_NOR_T
				{
					faction = "PB_NOR_Faction";
					name = "Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_NOR_Top";
					editorSubcategory = "PB_NOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_NOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_NOR_SOL_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_NOR_MG_T
				{
					faction = "PB_NOR_Faction";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_NOR_Top";
					editorSubcategory = "PB_NOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_NOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_NOR_AT_T
				{
					faction = "PB_NOR_Faction";
					name = "Team (HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_NOR_Top";
					editorSubcategory = "PB_NOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_NOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_NOR_SOL_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_NOR_SNI_T
				{
					faction = "PB_NOR_Faction";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_NOR_Top";
					editorSubcategory = "PB_NOR_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_NOR_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MK";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class PB_NOR_Tank_Groups
			{
				name = "Tanks";
				class PB_NOR_LEO_PLT
				{
					name = "Leopard Platoon";
					faction = "PB_NOR_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_NOR_Top";
					editorSubcategory = "PB_NOR_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_NOR_LEO";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_NOR_LEO";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_NOR_LEO";
						rank = "SERGEANT";
						position[] = {-20.1,-30,3};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_NOR_LEO";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class PB_NOR_LEO_SEC
				{
					name = "Leopard Section";
					faction = "PB_NOR_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_NOR_Top";
					editorSubcategory = "PB_NOR_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_NOR_LEO";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_NOR_LEO";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
			class PB_NOR_Mech_Groups
			{
				name = "Mechanized Infantry";
				class PB_NOR_M113_SEC
				{
					name = "Motorized Infantry Squad (M113)";
					faction = "PB_NOR_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_NOR_Top";
					editorSubcategory = "PB_NOR_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_NOR_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_NOR_M113A3_M2";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {-15,-20,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_NOR_SOL_LAT";
						rank = "PRIVATE";
						position[] = {15,-20,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_NOR_SOL_R";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_NOR_SOL_LAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_NOR_M113_AT_SEC
				{
					name = "Mechanized AT Squad (M113)";
					faction = "PB_NOR_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_NOR_Top";
					editorSubcategory = "PB_NOR_Cars";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_NOR_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_NOR_M113A3_M2";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_NOR_SOL_MG";
						rank = "PRIVATE";
						position[] = {-15,-20,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_NOR_SOL_HAT";
						rank = "PRIVATE";
						position[] = {15,-20,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_NOR_SOL_HAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_NOR_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};