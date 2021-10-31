#include<iostream>
using namespace std;

int health = 0;


enum WeaponsList
{
	Sword = 1,
	Dagger,
	Mace,
	Twin_Swords,
	Samurai,
	Wizard_Staff,
	Fire_Potion,
	Ice_Blade,
	Small_Knife,
};



int Old_4()
{
	health = 13000;
	WeaponsList EquippedWeapon = WeaponsList::Samurai;


	cout << " my current health is " << health << endl;
	cout << " And the ID of my weapon of choice is " << EquippedWeapon << endl;

	return 0 ;
}