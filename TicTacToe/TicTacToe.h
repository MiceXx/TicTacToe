#ifndef TIC_TAC_TOE
#define TIC_TAC_TOE

class TicTacToeGame
{
public:
	TicTacToeGame();
	void playGame();

private:

	int getXCoord();
	int getYCoord();
	bool placeMarker(int x, int y, char currentPlayer);
	bool checkForVictory(char currentPlayer);
	void clearBoard();
	void printBoard();
	char board[3][3];
};

#endif