#include "Cell.h"
#include <vector>
#include <map>

#define SIZE 8

typedef std::pair<int, int> point;
typedef std::map<point, Cell> metrix;

class Board
{
private:
    int height, width, mines, flags = 0;
    Cell **cells;
    std::map<point, Cell> cells2;
    bool lose = false;

    void printHorizontalLine();
    bool createBoard();
    bool inBoard(int row, int col);
    void genereteNumbers(int row, int col);
    std::vector<Cell *> getAllNeighbors(int row, int col);
    void openCell(int row, int col);
    void openNeighbors(int row, int col);

public:
    Board(int height = SIZE, int width = SIZE, int mines = 10);
    ~Board();
    //Getters
    int getMines();
    int getWidth();
    int getHeight();
    bool hasLost();

    //game
    void PrintBoard(bool showAll = false);
    bool click(int row, int col, char commend);
    bool inputValidation(char commend, int row, int col);
};