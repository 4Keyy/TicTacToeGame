// * The simplest tic-tac-toe game.
/// * Written by - 4Keyy. Repository on GitHub - https://github.com/4Keyy/TicTacToeGame
/// * Help in writing a project - https://github.com/LinaFletcher
/// * The code is written in the Visual Studio program, therefore it has third-party files for the program to work correctly in Visual Studio
// ---------------------------------------------------------------------------------------- //
// My first project, which was written by myselfand fully commented out.
// The project was written with practically minimal knowledge of the language, and was created for its practiceand study. As the project is written, the skill of writing the code will change.
// Tasks to the project: not only a working program, but also the maximum absence of bad code.

// * Connect all the necessary libraries
#include <iostream> // Standard library for working with C ++ console
#include <string> // Library for working with string variables
#include <stdio.h> // Standard library for working with the C console
#include <Windows.h> // Library for working with Windows OC files
#include <time.h> // Library for working with time
#include "ConnectingFunctions.h" // Connecting a header file with game functions

// Connecting the required namespace
using namespace std;

// Прописать после функйии кто когда ходит. 
// Прописать Сохранение имен и побед в файл
// Прописать алгоритм по анализу введённой клетки игроком в массиве


// * Main function
void main() {
	srand(time(NULL));
	setlocale(0, "");

	MainMenu obj;
	obj.SayHello();

	// Write this to make the main function work nicely.
	system("pause>>void");
	system("cls");
}