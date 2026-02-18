#include <iostream>
#include <string>
using namespace std;

class Character
{
private:
      
    string name;
    int health, damage;
    
    
//Member Functions 
//Takes a string and assigns it to the name data member. Initialize health to 50, and attack to 5.
public:
	//Constructor: 
	Character(string n)
    {
        name=n;
        health = 50;
        damage = 5;
    }

//Decrements the health of the current character by c's attack points.
	void updateHealth(Character c)
	{
	    health -=c.getDamage();
	    if (health < 0 ) health = 0; 
	}
	
//Increments damage points by 10.
	void updateDamage()
    {
     damage += 10;
    }
//returns the health of a character
	int getHealth()
	{
	    return health;
	}
//returns the damage of a character	
	int getDamage()
	{
	    return damage; 
	}
//returns the name of a character
	string getName()
	{
	   return name; 
	}
//Prints name and health of a character
    void print()
    {
        cout << "Name: " << name << " Health: " << health << endl; 
    }
	
};