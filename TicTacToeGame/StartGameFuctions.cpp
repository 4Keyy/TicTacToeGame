// * Connect all the necessary libraries
#include <iostream> // Standard library for working with C ++ console
#include <string> // Library for working with string variables
#include <stdio.h> // Standard library for working with the C console
#include <Windows.h> // Library for working with Windows OC files
#include <time.h> // Library for working with time
#include "ConnectingFunctions.h" // Connecting a header file with game functions

// Connecting the required namespace
using namespace std;

MainMenu menu;

// Displaying the main menu.
void MainMenu::SayHello() {
	cout << ("Добро пожадовать в игру \"Крестики-Нолики\"!") << endl;
	cout << endl << ("1. Начать игру.") << endl << ("2. Правила игры.") << endl << ("3. Информация о проекте.") << endl;
	cout << endl << ("Ваш ответ: ");
	unsigned char VoteResult;
	cin >> VoteResult;
	if (VoteResult == '1') {
		system("cls");
		menu.GetNames();
		menu.SetPlayers();
	} else if (VoteResult == '2') {
		system("cls");
		menu.GameRules();
	} else if (VoteResult == '3') {
		system("cls");
		menu.AboutProject();
	} else {
		cout << ("Нет такого варианта ответа! Попробайте еще раз!\n") << endl;
		menu.SayHello();
	}
}

// Derivation of the rules of the game.
void MainMenu::GameRules() {
	cout << ("Правила игры...") << endl;
	cout << ("1. Игрокам случайным способом выдаётся роль в игре (крестик ил нолик).") << endl;
	cout << ("2. Первым ходит игрок с ролью \"Крестик\"") << endl;
	cout << ("3. Игроки ходит по очереди в поле размером 3х3 клеток.") << endl << endl;
	cout << ("ПРИЯТНОЙ ИГРЫ!") << endl;
	system("pause");
	system("cls");
	menu.SayHello();
}

// Displaying information about the project.
void MainMenu::AboutProject() {
	cout << ("Информация о проексте --- ") << endl;
	cout << ("Written by - 4Keyy. Repository on GitHub - https://github.com/4Keyy/TicTacToeGame") << endl;
	cout << ("Help in writing a project - https://github.com/LinaFletcher") << endl;
	cout << ("The code is written in the Visual Studio program, therefore it has third-party files for the program to work correctly in Visual Studio") << endl;
	cout << ("The project was written with practically minimal knowledge of the language, and was created for its practiceand study.") << endl;
	menu.SayHello();
}

// Getting player names.
void MainMenu::GetNames() {
	cout << ("Введмте имя первого игрока: "); cin >> MainMenu::FirstPlayerName;
	cout << endl << ("Введите имя второго игрока: "); cin >> MainMenu::SecondPlayerName;
	cout << endl << ("Имена сохранены! Приятной игры!") << endl;
	system("pause"); system("cls");
}

// By the method of obtaining a random number, we assign one of the players "Cross".
void MainMenu::SetPlayers() {
	short int randNum = rand() % 50;
	string VoteResult;
	if (randNum < 50) {
		cout << ("Крестиком является - ") << menu.FirstPlayerName << endl;
		menu.xPlayerFirst = true;
	} else if (randNum > 50) {
		cout << ("крестиком является - ") << menu.SecondPlayerName << endl;
		menu.xPlayerFirst = false;
	} else {
		menu.SetPlayers();
	}
	cout << ("Если вы готовы начать игру введите \"1\": "); cin >> VoteResult;
	if (VoteResult == "1") {
		system("cls");
		Game obj; obj.CellPrint();
	}
}