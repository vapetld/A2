#include "AreaDamageTower.h"
#include "DirectDamageTower.h"

#include <iostream>

using namespace std;

// ******************************************Constructors*******************************************
AreaDamageTower::AreaDamageTower()// Default constructor
{
};
AreaDamageTower::AreaDamageTower()string towerName, string towerType, int level, int buyingCost, int refundValue, int range, int power, int rateOfFire)// Constructor
{
};
AreaDamageTower::~AreaDamageTower()// Destructor
{
};
// *************************************************************************************************

// *******************************************Methods***********************************************

void AreaDamageTower::detectsRangeEnemy() const
{ 
	cout << "Enemy detected!" << endl;	
};

void AreaDamageTower::selectEnemy() const
{ 
	cout << "Target locked, preparing to shoot." << endl;	
};

void AreaDamageTower::shoot() const
{ 
	cout << "Fire!" << endl;	
};

void AreaDamageTower::showEnemyDamage() const
{ 
	cout << "Enemy's life:" << endl;	
};

void DirectDamageTower::startGame()
{
	// The Observable object notifies all its registered observers  
	Notify();
};

// *************************************************************************************************
