#include <iostream>

#include "src/Game/Game.cpp"
#include "src/Scoreboard/ScoreboardEntry.cpp"
#include "src/Scoreboard/Scoreboard.cpp"

using namespace std;

int main()
{
    /*todo: 
    Ass mood - cB(r, c) -> if cell != empty then try again (spinner?)
    If clsNbrs+flags == value then flagNbrs.

    strategy -> code duplications
    factory -> getNewBoard 
    + files -> score board
    timer -> threads?
    last action -> color? 
    symble index + game instructions

    win if width*hight - openCells (int) == mines

    scoreboard per standart board (Begginers, Inter, Expert, Insane) 
    selectBoard OR customize board  
     */

    Game g = Game();
    g.Play();

    return 0;
}
