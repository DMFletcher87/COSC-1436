
#include <iostream>
#include <iomanip>
#include "TicTacToe.h"

using namespace std;

void ticTacToe::player()
{
  bool done = false;
  char player = 'X';

  displayBoard();

  while(!done)
  {
    done = getXOMove(player);

    if (player == 'X')
      player = 'O';
    else
      player = 'X';
  }
}


void ticTacToe::displayBoard() const
{
  cout <<"   1    2    3" << endl << endl;
  for (int row = 0; row < 3; row++)
  {
    cout << row + 1;

      for (int col = 0; col < 3; col++)
      {
        cout << setw(3) << board[row][col];

        if (col!= 2)
        cout << " |";
      }
      cout <<endl;

      if (row !=2)
      {
        cout << "____|____|____" << endl
             << "    |    |    " << endl;
      }
  }
  cout << endl;
}

bool ticTacToe::isValidMove(int row, int col) const
{
  if (0 <= row && row <= 2 && 0 <= col && col<=2 && board[row][col] == ' ')
  return true;
  else 
  return false;
}

bool ticTacToe::getXOMove(char playerSymbol)
{
  int row, col;
  do
  {
    cout << "player " << playerSymbol << " enter move: ";
    cin >> row >> col;
    cout << endl;
  }
  while (!isValidMove(row -1, col - 1));
  row--;
  col--;
  noOfMoves ++;

  board[row][col] = playerSymbol;
  displayBoard();

  status gStatus = gameStatus();

  if (gStatus == WIN)
  {
    cout << "Player " << playerSymbol << " Wins!" << endl;
    return true;
  }
  else if (gStatus == DRAW)
  {
    cout << "This game is a draw!" << endl;
    return true;
  }
  else return false;


}

status ticTacToe::gameStatus()
{
  for(int row = 0; row <3; row++)
  if (board[row][0] != ' '&& (board[row][0] == board[row][1]) &&
     (board[row][1] == board[row][2]))
     return WIN;

  for(int col = 0; col <3; col++)
  if (board[0][col] != ' '&& (board[0][col] == board[1][col]) &&
     (board[1][col] == board[2][col]))
     return WIN;

  if (board[0][0] != ' '&& (board[0][0] == board[1][1]) &&
     (board[1][1] == board[2][2]))
     return WIN;

  if (board[0][2] != ' '&& (board[0][2] == board[1][1]) &&
     (board[1][1] == board[2][0]))
     return WIN;

  if (noOfMoves < 9)
    return CONTINUE;
  return DRAW;

}

void ticTacToe::reStart()
{
  for (int row = 0; row < 3; row ++)
    for (int col = 0; col < 3; col++)
      board[row][col] = ' ';

  noOfMoves = 0;
}

ticTacToe::ticTacToe()
{
  for (int row = 0; row < 3; row ++)
    for (int col = 0; col < 3; col++)
      board[row][col] = ' ';

  noOfMoves = 0;

}










