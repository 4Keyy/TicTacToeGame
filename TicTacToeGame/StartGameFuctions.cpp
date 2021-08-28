// * Connect all the necessary libraries
#include <iostream> // Standard library for working with C ++ console
#include <string> // Library for working with string variables
#include <stdio.h> // Standard library for working with the C console
#include <Windows.h> // Library for working with Windows OC files
#include <time.h> // Library for working with time
#include "ConnectingFunctions.h" // Connecting a header file with game functions

// Connecting the required namespace
using namespace std;

void MainMenu::SayHello() {
	сout << ("Добро пожадовать в игру \"Крестики-Нолики\"!") << endl;
	cout << endl << ("1. Начать игру.") << endl << ("2. Правила игры.") << endl << ("3. Информация о проекте.") << endl;
	cout << endl << ("Ваш ответ: ");
	unsigned char VoteResult;
	cin >> VoteResult;
	if (VoteResult == '1') {
		// ! Начало игры.
	} else if (VoteResult == '2') {
		GameRules();
	} else if (VoteResult == '3') {
		ProjectInfo();
	}
};

void MainMenu::GameRules() {
	// прописать правила игры обычным форматированным выводом.
}

void MainMenu::ProjectInfo() {
	// прописать информацию о проекте 
	// репозиторий на github 
	// дата начала написания проекта 
	// кто пишет проект
}