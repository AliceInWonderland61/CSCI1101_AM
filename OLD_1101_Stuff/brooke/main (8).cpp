//#include "character.h"
#include "levels.h" // this will include character twice

int main()
{
    int MAX_SCORE = 0, GAME_SCORE = 0;
    string oname;
    cin >> oname;
    char cont;
    Character Player("player"), Oracle(oname);
    do{
        GAME_SCORE = 0;
        level1(Player, Oracle, GAME_SCORE);
        level2(Player, Oracle, GAME_SCORE);
        level3(Player, Oracle, GAME_SCORE);

        winner(Player, Oracle);
        
        if(GAME_SCORE > MAX_SCORE)
            MAX_SCORE = GAME_SCORE;

        cout << "Do you wish to play again? ";
        cin >> cont;
        cont = tolower(cont);
    }while(cont == 'y');
    
    return 0;
}