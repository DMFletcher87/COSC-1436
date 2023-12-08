//TicTacToe header file

#include <string>
using namespace std;

enum status {WIN, DRAW, CONTINUE};

class ticTacToe

{
    public:
    void player();
    void displayBoard() const;
    bool isValidMove(int x, int y) const;
    bool getXOMove(char moveSymbol);
    status gameStatus();
    void reStart();
    ticTacToe();
    private:
    char board [3][3];
    int noOfMoves;

};
