Resources file:

This file will be for cfg resources.

Basic weapon config for factions:
    class NEW_WEAP_NAME: WEAPON_NAME_YOU_ARE_INHERITING_FROM
	{
		scope = 1;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "flashlight/laser";
			};
            class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzlebrake/suppressor";
			};
            class LinkedItemsUnder
			{
				slot = "UnderbarrelSlot";
				item = "bipod/grip";
			};
		};
	};

Infantry roles (Affect AI Voicelines):
    CombatLifeSaver
    Crewman
    Grenadier
    MachineGunner
    Marksman
    MissileSpecialist
    Rifleman
    Sapper
    SpecialOperative
    Unarmed


Role icons:
    AT: iconManAT
    Basic Rifleman: iconMan
    Engineer: iconManEngineer
    EOD: iconManExplosive
    Headless Client: iconVirtual
    Medic: iconManMedic
    MG: iconManMG
    Officer: iconManOfficer
    Squad/Teamlead: iconManLeader
    VR Rifleman: iconManVirtual


Role additions:
    Engineer: engineer=1;
	Medics:	attendant=1;
    Mine defuser: canDeactivateMines=1;
	Mine detection: detectSkill=38;

Name script;
Alright, open the list of names in vscode and hit Ctrl+H (search&replace), select the Use Regular Expressions (Alt+R), search for ^(.+)$ and replace with        $1 = "\u$1";