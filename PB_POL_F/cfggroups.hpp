class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_POL_Faction
		{
			name = "Armed Forces of the Republic of Poland";
			class PB_POL_INF_Groups
			{
				name = "Infantry";
			///SECTIONS///
				class PB_POL_Section
				{
					faction = "PB_POL_Faction";
					name = "Infantry Section";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_POL_Top";
					editorSubcategory = "PB_POL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_POL_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_POL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_POL_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_POL_SOL_R";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_POL_SOL_SL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_POL_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_POL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_POL_SOL_MED";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class PB_POL_RPG_Section
				{
					faction = "PB_POL_Faction";
					name = "Infantry Section (RPG-7)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_POL_Top";
					editorSubcategory = "PB_POL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_POL_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_POL_SOL_RPG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_POL_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_POL_SOL_RPG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_POL_SOL_SL";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_POL_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_POL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_POL_SOL_MED";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
			///FIRETEAMS///
				class PB_POL_FT
				{
					faction = "PB_POL_Faction";
					name = "Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_POL_Top";
					editorSubcategory = "PB_POL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_POL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_POL_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_POL_SOL_R";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_POL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_POL_RPG_FT
				{
					faction = "PB_POL_Faction";
					name = "Fireteam (2x RPG-7)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_POL_Top";
					editorSubcategory = "PB_POL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_POL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_POL_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_POL_SOL_RPG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_POL_SOL_RPG";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_POL_MG_FT
				{
					faction = "PB_POL_Faction";
					name = "Fireteam (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_POL_Top";
					editorSubcategory = "PB_POL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_POL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_POL_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_POL_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_POL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			///TEAMS///
				class PB_POL_T
				{
					faction = "PB_POL_Faction";
					name = "Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_POL_Top";
					editorSubcategory = "PB_POL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_POL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_POL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_POL_MG_T
				{
					faction = "PB_POL_Faction";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_POL_Top";
					editorSubcategory = "PB_POL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_POL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_POL_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_POL_RPG_T
				{
					faction = "PB_POL_Faction";
					name = "Team (RPG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_POL_Top";
					editorSubcategory = "PB_POL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_POL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_POL_SOL_RPG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_POL_SNI_T
				{
					faction = "PB_POL_Faction";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_POL_Top";
					editorSubcategory = "PB_POL_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_POL_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_POL_SOL_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class PB_POL_Tanks_Groups
			{
				name = "Tanks";
				class PB_POL_M1FEP_PLT
				{
					name = "M1A1FEP Platoon";
					faction = "PB_POL_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_POL_Top";
					editorSubcategory = "PB_POL_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_POL_M1FEP";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_POL_M1FEP";
						rank = "SERGEANT";
						position[] = {10,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_POL_M1FEP";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_POL_M1FEP";
						rank = "CORPORAL";
						position[] = {20,10,0};
					};
				};
				class PB_POL_M1SEPV2_PLT
				{
					name = "M1A1SEPv2 Platoon";
					faction = "PB_POL_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_POL_Top";
					editorSubcategory = "PB_POL_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_POL_M1SEPV2";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_POL_M1SEPV2";
						rank = "SERGEANT";
						position[] = {10,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_POL_M1SEPV2";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_POL_M1SEPV2";
						rank = "CORPORAL";
						position[] = {20,10,0};
					};
				};
				class PB_POL_M1FEP_SEC
				{
					name = "M1A1FEP Section";
					faction = "PB_POL_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_POL_Top";
					editorSubcategory = "PB_POL_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_POL_M1FEP";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_POL_M1FEP";
						rank = "SERGEANT";
						position[] = {10,-5,0};
					};
				};
				class PB_POL_M1SEPV2_SEC
				{
					name = "M1A1SEPv2 Section";
					faction = "PB_POL_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_POL_Top";
					editorSubcategory = "PB_POL_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_POL_M1SEPV2";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_POL_M1SEPV2";
						rank = "SERGEANT";
						position[] = {10,-5,0};
					};
				};
			};
			
			class PB_POL_Mech_Groups
			{
				name = "Mechanized Infantry";
				class PB_POL_BWP1D_SEC
				{
					name = "Mechanized Infantry (BWP-1D)";
					faction = "PB_POL_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_POL_Top";
					editorSubcategory = "PB_POL_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_POL_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_POL_SOL_RAT";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_POL_SOL_ENG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_POL_BWP1D";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_POL_SOL_MG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_POL_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_POL_SOL_SL";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_POL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_POL_SOL_MED";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_POL_BWP1K_SEC
				{
					name = "Mechanized Infantry (BWP-1K)";
					faction = "PB_POL_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_POL_Top";
					editorSubcategory = "PB_POL_APCs";
					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_POL_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_POL_SOL_RAT";
						rank = "SERGEANT";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_POL_SOL_ENG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_POL_BWP1K";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_POL_SOL_MG";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_POL_SOL_MG";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_POL_SOL_SL";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_POL_SOL_RAT";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_POL_SOL_MED";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};