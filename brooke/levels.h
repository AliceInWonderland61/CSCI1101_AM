//.h is a header file
#include <iostream>
using namespace std;
#include "character.h"
void winner(Character Player, Character Oracle)//don't need pass-by-ref
{
 if (Player.getHealth() > Oracle.getHealth())
 {
     cout << "The WINNER is: " << Player.getName() <<endl;
     Player.print();
 }
 else
 {
     cout << "The Winner is: " << Oracle.getName() << endl;
     Oracle.print();
 }
}

void level1(Character& Player, Character &Oracle, int &GAME_SCORE)
{
    cout << "-_- -_- Level 1 -_- -_-" << endl;
    

    //challenge 1
    int ans1;
    cout << "1ST CHALLENGE!!!"<< endl;
    cout << "What is 25 + 137? "<< endl;
    cin >> ans1;
     if (ans1 == 162) 
    {
        //player wins
        cout << "Correct answer!!!" << endl;
        Oracle.updateHealth(Player);
        Player.updateDamage();
        GAME_SCORE += 10;
    }
    else{
        //player loses
        cout << "WRONG!!!"<< endl;
        cout << "CHALLENGE 1 FAILED" << endl;
        Player.updateHealth(Oracle);
        Oracle.updateDamage();
        GAME_SCORE -=5;
        
    }
    if (Player.getHealth() < 10)
    {
        cout << "Player health too low to move forward!!!!" << endl;
        return;
    }
    //challenge 2
    int num1, num2, num3 ;
    cout << "2ND CHALLENGE!!!!" << endl;
    cout << "Which 3 numbers have the same answer" << endl;
    cout << "wether they're added or muiliplied together?" << endl;
    
    cout << "First number: " << endl;
    cin >> num1;
    
    cout << "Second number: " << endl;
    cin >> num2;
    
    cout << "Third number: " << endl;
    cin >> num3;
    
     if ((num1 == 1 && num2 == 2 && num3 == 3) || (num1 == 1 && num2 == 3 && num3 == 2) || 
    (num1 == 2 && num2 == 1 && num3 == 3) || (num1 == 2 && num2 == 3 && num3 == 1) || 
    (num1 == 3 && num2 == 1 && num3 == 2) || (num1 == 3 && num2 == 2 && num3 == 1))

    {
    cout << "Correct! So smart!!" << endl;
    cout << "Challenge 2 Completed!!" << endl;
    Oracle.updateHealth(Player);
    Player.updateDamage();
    GAME_SCORE += 10;
    }
else
    {
    cout << "OH NOOO ); WRONG ANSWER" << endl;
    Player.updateHealth(Oracle);
    Oracle.updateDamage();
    GAME_SCORE -= 5;
    }
    //player health after 1st level
    cout << "-_-_- level 1 -_-_-" << endl;
    Player.print();
    cout << "Game Score: " << GAME_SCORE << endl;

void level2(Character Player, Character Oracle, int GAME_SCORE)
{
    //challenge 1
    //challenge 2
}
void level3(Character Player, Character Oracle, int GAME_SCORE)
{
    //challenge 1
    //challenge 2
}
