#include "DirectDamageTower.h"
#include "AreaDamageTower.h"
#include "SlowingTower.h"

#include <iostream>
#include <string>

using namespace std;

/*
	Implement a group of C++ classes that allow the creation of towers following the tower defense game rules.
	Different types of towers are created, whose difference is mainly in their behavior, for example in the effect
	that their bullets have: direct damage, area of effect damage, slowing, etc. A tower can also have different levels,
	organized sequentially and with gradually increased capacities, that allow it to eventually destroy critters more
	effectively. A tower can be bought for an initial cost, and be further upgraded to subsequent levels for a certain
	cost for each level. At any time, it can be sold for a certain amount depending on its level. When operating, a
	tower first detects potential targets within its range, then selects one target and shoots at it, which then inflicts
	damage and/or applies special effects on the target critter.
*/

/*Required: buying cost, refund value, range, power, rate of fire
Examples of methods: attackEnemy, chosenEnemyForAttack, shootWeapon, removeBullet, damageEnemy, targetKilled, lostSightOfEnemy*/

int main(void) 
{
	//Create a DirectDamageTower to be observed
	DirectDamageTower *directDamageTower = new DirectDamageTower;
	//Create a ObsDirectDamageTower that is connected to the DirectDamageTower
	ObsDirectDamageTower *obsDirectDamageTower = new ObsDirectDamageTower(directDamageTower);
	
	//Create a AreadamageTower to be observed
	AreadamageTower *areaDamageTower = new AreaDamageTower;
	//Create a ObsAreaDamageTower that is connected to the AreaDamageTower
	ObsAreaDamageTower *obsAreaDamageTower = new ObsAreaDamageTower(areaDamageTower);
	
	//Create a SlowingTower to be observed
	SlowingTower *slowingTower = new SlowingTower;
	//Create a ObsSlowingTower that is connected to the SlowingTower
	ObsSlowingTower *obsSlowingTower = new ObsSlowingTower(slowingTower);
	
	// Tower creation
	DirectDamageTower shotgun("Shotgun tower", "Direct Damage", 1, 20, 15, 1, 6, 4); 
	DirectDamageTower riffle("Riffle tower", "Direct Damage", 2, 30, 23, 2, 4, 8); 
	DirectDamageTower machineGun("Machine gun Tower", "Direct Damage", 3, 40, 30, 3, 4, 10);
	AreaDamageTower grenade("Grenade tower", "Area Damage", 1, 20, 15, 3, 6, 10); 
	AreaDamageTower rain("Rain tower", "Area Damage", 2, 30, 23, 4, 4, 12); 
	AreaDamageTower hurricane("Hurricane tower", "Area Damage", 3, 40, 30, 5, 4, 14); 
	SlowingTower sticky("Sticky tower", "Slowing", 1, 20, 15, 2); 
	SlowingTower fishingNet("Fishing net tower", "Slowing", 2, 30, 23, 3); 
	SlowingTower counterCockwise("Counter Clockwise tower", "Slowing", 3, 40, 30, 4); 
	
	int playerLevel = 1;
	int buyTowerLvl1;
	int buyTowerLvl2;
	int buyTowerLvl3;
	bool buyAnotherTower;
	
	//playerLevel = player.getPlayerLevel;
	
	cout << "You are now level" << endl << playerLevel;  //playerLevel to be defined
	
	do
	{
		buyAnotherTower = false;
		
		cout << "If you want to buy a tower you are at the good place." << endl ;
		
		switch (playerLevel)
		{
			case 1:
				cout << "You can choose between 3 towers that are reachable from your level." << endl ;
				cout << "Here they are:" << endl ;
				cout << "#1" << endl << shotgun.displayStats() << endl ;
				cout << "#2" << endl << grenade.displayStats() << endl ;
				cout << "#3" << endl << sticky.displayStats() << endl ;
				
				cout << "Which tower do you want to buy? " << endl;
				cout << "Enter only the number of the tower." << endl;
				cin >> buyTowerLvl1;
		
				switch (buyTowerLvl1)
				{
					case 1:
						cout << "You chose the Shotgun Tower." << endl ;
						break;
					case 2:
						cout << "You chose the Grenade Tower." << endl ;
						break;
					case 3:
						cout << "You chose the Sticky Tower." << endl ;
						break;
					default:
						cout << "An error occurred, program ending." << endl ;
						break;
				}
				
				break;
				
			case 2:
				cout << "You can choose between 6 towers that are reachable from your level." << endl ;
				cout << "Here they are:" << endl ;
				cout << "Level 1 towers:" << endl ;
				cout << "#1" << endl << shotgun.displayStats() << endl ;
				cout << "#2" << endl << grenade.displayStats() << endl ;
				cout << "#3" << endl << sticky.displayStats() << endl ;
				cout << "Level 2 towers:" << endl ;
				cout << "#4" << endl << riffle.displayStats() << endl ;
				cout << "#5" << endl << rain.displayStats() << endl ;
				cout << "#6" << endl << fishingNet.displayStats() << endl ;
				
				cout << "Which tower do you want to buy?" << endl;
				cout << "Enter only the number of the tower." << endl;
				cin >> buyTowerLvl2;
		
				switch (buyTowerLvl2)
				{
					case 1:
						cout << "You chose the Shotgun Tower." << endl ;
						break;
					case 2:
						cout << "You chose the Grenade Tower." << endl ;
						break;
					case 3:
						cout << "You chose the Sticky Tower." << endl ;
						break;
					case 4:
						cout << "You chose the Riffle Tower." << endl ;
						break;	
					case 5:
						cout << "You chose the Rain Tower." << endl ;
						break;	
					case 6:
						cout << "You chose the Fishing Net Tower." << endl ;
						break;		
					default:
						cout << "An error occurred, program ending." << endl ;
						break;
				}
				
				break;
				
			case 3:
				cout << "You can choose between 9 towers that are reachable from your level." << endl ;
				cout << "Here they are:" << endl ;
				cout << "#1" << endl << shotgun.displayStats() << endl ;
				cout << "#2" << endl << grenade.displayStats() << endl ;
				cout << "#3" << endl << sticky.displayStats() << endl ;
				cout << "Level 2 towers:" << endl ;
				cout << "#4" << endl << riffle.displayStats() << endl ;
				cout << "#5" << endl << rain.displayStats() << endl ;
				cout << "#6" << endl << fishingNet.displayStats() << endl ;
				cout << "Level 3 towers:" << endl ;
				cout << "#7" << endl << machineGun.displayStats() << endl ;
				cout << "#8" << endl << hurricane.displayStats() << endl ;
				cout << "#9" << endl << counterClockwise.displayStats() << endl ;
				
				cout << "Which tower do you want to buy?" << endl;
				cout << "Enter only the number of the tower." << endl;
				cin >> buyTowerLvl3;
				
				switch (buyTowerLvl3)
				{
					case 1:
						cout << "You chose the Shotgun Tower." << endl ;
						break;
					case 2:
						cout << "You chose the Grenade Tower." << endl ;
						break;
					case 3:
						cout << "You chose the Sticky Tower." << endl ;
						break;
					case 4:
						cout << "You chose the Riffle Tower." << endl ;
						break;	
					case 5:
						cout << "You chose the Rain Tower." << endl ;
						break;	
					case 6:
						cout << "You chose the Fishing Net Tower." << endl ;
						break;	
					case 7:
						cout << "You chose the Machine Gun Tower." << endl ;
						break;	
					case 8:
						cout << "You chose the Hurricane Tower." << endl ;
						break;	
					case 9:
						cout << "You chose the Counter Clockwise Tower." << endl ;
						break;
					default:
						cout << "An error occurred, program ending." << endl ;
						break;
				}
				
				break;
				
			default:
				cout << "An error occurred, program ending." << endl ;
				break;
		}
		
		cout << "Do you want to buy another tower?" << endl ;	
		cout << "Enter 1 for yes and 0 for no." << endl ;
		cin >> buyAnotherTower;	
	}
	while(buyAnotherTower == true);
	
	cout << "Hope you enjoyed your shopping, you can now access the game!" << endl ;
	
	return 0;
}
