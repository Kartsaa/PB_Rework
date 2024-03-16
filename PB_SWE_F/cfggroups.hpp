class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_SWE_Faction
		{
			name = "Swedish Defence Forces";
			class PB_SWE_INF_Groups
			{
				name = "Infantry";
			///SECTIONS///
				class PB_SWE_Section
				{
					faction = "PB_SWE_Faction";
					name = "Rifle Group";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_SWE_Top";
					editorSubcategory = "PB_SWE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_SWE_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MK";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_SWE_SOL_HAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_SWE_SOL_LAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MG";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_SWE_SOL_LAT";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MED";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class PB_SWE_AT_Section
				{
					faction = "PB_SWE_Faction";
					name = "Rifle Group (2x AT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_SWE_Top";
					editorSubcategory = "PB_SWE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_SWE_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MK";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_SWE_SOL_HAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_SWE_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MG";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_SWE_SOL_R";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MED";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
				class PB_SWE_MG_Section
				{
					faction = "PB_SWE_Faction";
					name = "Rifle Group (2x MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_SWE_Top";
					editorSubcategory = "PB_SWE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_SWE_SOL_SL";
						rank = "Corporal";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MK";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_SWE_SOL_LAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MG";
						rank = "CORPORAL";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_SWE_SOL_LAT";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MED";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
				};
			///FIRETEAMS///
				class PB_SWE_FT
				{
					faction = "PB_SWE_Faction";
					name = "Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_SWE_Top";
					editorSubcategory = "PB_SWE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_SWE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_SWE_SOL_LAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_SWE_SOL_R";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_SWE_MG_FT
				{
					faction = "PB_SWE_Faction";
					name = "Fireteam (2x GPMG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_SWE_Top";
					editorSubcategory = "PB_SWE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_SWE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MG";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_SWE_SOL_LAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_SWE_HAT_FT
				{
					faction = "PB_SWE_Faction";
					name = "Fireteam (HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_SWE_Top";
					editorSubcategory = "PB_SWE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_SWE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_SWE_SOL_HAT";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_SWE_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_SWE_SNI_FT
				{
					faction = "PB_SWE_Faction";
					name = "Fireteam (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_SWE_Top";
					editorSubcategory = "PB_SWE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_SWE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MK";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_SWE_SOL_SNI";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			///TEAMS///
				class PB_SWE_T
				{
					faction = "PB_SWE_Faction";
					name = "Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_SWE_Top";
					editorSubcategory = "PB_SWE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_SWE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_SWE_SOL_LAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_SWE_MG_T
				{
					faction = "PB_SWE_Faction";
					name = "Team (MG)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_SWE_Top";
					editorSubcategory = "PB_SWE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_SWE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_SWE_AT_T
				{
					faction = "PB_SWE_Faction";
					name = "Team (HAT)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_SWE_Top";
					editorSubcategory = "PB_SWE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_SWE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_SWE_SOL_HAT";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class PB_SWE_SNI_T
				{
					faction = "PB_SWE_Faction";
					name = "Team (Sniper)";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "PB_SWE_Top";
					editorSubcategory = "PB_SWE_Infantry";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_SWE_SOL_SL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_SWE_SOL_SNI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
			class PB_SWE_Tank_Groups
			{
				name = "Tanks";
				class PB_SWE_LEO_PLT
				{
					name = "Stridsvagn 122 Platoon";
					faction = "PB_SWE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_SWE_Top";
					editorSubcategory = "PB_SWE_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_SWE_LEO";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_SWE_LEO";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 1;
						vehicle = "PB_SWE_LEO";
						rank = "SERGEANT";
						position[] = {-20.1,-30,3};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_SWE_LEO";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class PB_SWE_LEO_SEC
				{
					name = "Stridsvagn 122 Section";
					faction = "PB_SWE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_SWE_Top";
					editorSubcategory = "PB_SWE_Tanks";
					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_SWE_LEO";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "PB_SWE_LEO";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};
			class PB_SWE_Mot_Groups
			{
				name = "Motorized Infantry";
				class PB_SWE_TGP_GL
				{
					name = "Motorized Squad (TGB 16 GL)";
					faction = "PB_SWE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_SWE_Top";
					editorSubcategory = "PB_SWE_Cars";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_SWE_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_SWE_TGB16_GL";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MG";
						rank = "PRIVATE";
						position[] = {-15,-20,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_SWE_SOL_LAT";
						rank = "PRIVATE";
						position[] = {15,-20,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_SWE_SOL_R";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_SWE_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class PB_SWE_TGP_MG
				{
					name = "Motorized Squad (TGB 16 MG)";
					faction = "PB_SWE_Faction";
					side = 1;
					scope = 2;
					scopecurator = 2;
					editorCategory = "PB_SWE_Top";
					editorSubcategory = "PB_SWE_Cars";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					class Unit0
					{
						side = 1;
						vehicle = "PB_SWE_SOL_SL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "PB_SWE_TGB16_MG";
						rank = "CORPORAL";
						position[] = {10,10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "PB_SWE_SOL_MG";
						rank = "PRIVATE";
						position[] = {-15,-20,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "PB_SWE_SOL_LAT";
						rank = "PRIVATE";
						position[] = {15,-20,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "PB_SWE_SOL_R";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "PB_SWE_SOL_HAT";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};
		};
	};
};