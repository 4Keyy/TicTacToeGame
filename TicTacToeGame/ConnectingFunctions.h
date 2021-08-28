// * This file is used to connect, title and transfer functions between all project files

// This line indicates that this file was connected strictly once.
#pragma once

// Also for this file you need to add libraries
#include <iostream> // Standard library for working with C ++ console
#include <string> // Library for working with string variables

using namespace std;

// I will store the functions in classes, and call them through the created objects in the main functions, create a class
class MainMenu {
public:
	void SayHello() {
		сout << ("Добро пожадовать в игру \"Крестики-Нолики\"!") << endl;
		cout << endl << ("1. Начать игру.") << endl << ("2. Правила игры.") << endl << ("3. Информация о проекте.") << endl;
		cout << endl << ("Ваш ответ: ");
		unsigned char VoteResult;
		cin >> VoteResult;
		if (VoteResult == '1') {
			system("cls");
			// ! Начало игры.
		}
		else if (VoteResult == '2') {
			system("cls");
			GameRules();
		}
		else if (VoteResult == '3') {
			system("cls");
			ProjectInfo();
		}
		else {
			cout << ("Нет такого варианта ответа! Попробайте еще раз!\n") << endl;
			SayHello();
		}
	}
	void GameRules() {
		cout << ("Правила игры...") << endl;
		cout << ("1. Игрокам случайным способом выдаётся роль в игре (крестик ил нолик).") << endl;
		cout << ("2. Первым ходит игрок с ролью \"Крестик\"") << endl;
		cout << ("3. Игроки ходит по очереди в поле размером 3х3 клеток.") << endl << endl;
		cout << ("ПРИЯТНОЙ ИГРЫ!") << endl;
		system("pause");
		system("cls");
		SayHello();
	}
	void ProjectInfo() {

	}
};