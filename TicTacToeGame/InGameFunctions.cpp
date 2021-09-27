// * Connect all the necessary libraries.
#include <iostream> // Standard library for working with C ++ console.
#include <string> // Library for working with string variables.
#include <stdio.h> // Standard library for working with the C console.
#include <Windows.h> // Library for working with Windows OC files.
#include <time.h> // Library for working with time.
#include "ConnectingFunctions.h" // Connecting a header file with game functions.

// Connecting the required namespace.
using namespace std;

Game game;

// Playing field output.
void Game::CellPrint() {
	for (int i = 0; i < game.RAW; i++){
		for (int j = 0; j < game.COL; j++){
			cout << game.cell[i][j] << (" ");
		}
		cout << endl;
	}
}

// Algorithm for entering data entered by the user into an array.
void Game::EnteringAnswerOption(int BoxEntering) {
	// 1 ячейка = 0 0		2 ячейка = 0 1	3 ячейка = 0 2 
	// 5 ячейка = 1 0		5 ячейка = 1 1	6 ячейка = 1 2 
	// 7 ячейка = 2 0		8 ячейка = 2 1	9 ячейка = 2 2 

	// 1 = [0][0] 2 = [0][1] 3 = [0][2]
	// 4 = [1][0] 5 = [1][1] 6 = [1][2]
	// 7 = [2][0] 8 = [2][1] 9 = [2][2]

	// Вопрос, как написать такой алгоритм бещ говно-кода?)
	// То есть без кучи ифов и тд.
}