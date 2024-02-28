class CfgGroups
{
	class WEST
	{
		name = "BLUFOR";
		side = 1;
		class PB_UK_Faction
		{
			name = "Estonian Army";
			class Estonian_Groups
			{
				name = "Infantry";
				class Estonian_Squad
				{
					faction = "Estonian_Faction";
					name = "Squad";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "Estonian_Top";
					editorSubcategory = "Estonian_Infantry";
					class Unit0
					{
						side = 1;
						vehicle = "Estonian_teamlead";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Estonian_riflemanat";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Estonian_medic";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Estonian_autorifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "Estonian_grenadier";
						rank = "SERGEANT";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "Estonian_at";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "Estonian_marksman";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "Estonian_ammobearer";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class Estonian_Fireteam
				{
					faction = "Estonian_Faction";
					name = "Fireteam";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "Estonian_Top";
					editorSubcategory = "Estonian_Infantry";
					class Unit0
					{
						side = 1;
						vehicle = "Estonian_teamlead";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Estonian_autorifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Estonian_medic";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Estonian_ammobearer";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class Estonian_GPMGteam
				{
					faction = "Estonian_Faction";
					name = "GPMG Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "Estonian_Top";
					editorSubcategory = "Estonian_Infantry";
					class Unit0
					{
						side = 1;
						vehicle = "Estonian_machinegunner";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Estonian_ammobearer";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class Estonian_ATteam
				{
					faction = "Estonian_Faction";
					name = "AT Team";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "Estonian_Top";
					editorSubcategory = "Estonian_Infantry";
					class Unit0
					{
						side = 1;
						vehicle = "Estonian_teamlead";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Estonian_rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "Estonian_medic";
						rank = "CORPORAL";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "Estonian_at";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class Estonian_Sentry
				{
					faction = "Estonian_Faction";
					name = "Sentry";
					side = 1;
					scope = 2;
					scopeCurator = 2;
					editorCategory = "Estonian_Top";
					editorSubcategory = "Estonian_Infantry";
					class Unit0
					{
						side = 1;
						vehicle = "Estonian_grenadier";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "Estonian_rifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
			};
		};
	};
};