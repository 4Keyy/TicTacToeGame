// * This file is used to connect, title and transfer functions between all project files

// This line indicates that this file was connected strictly once.
#pragma once

// Also for this file you need to add libraries
#include <iostream> // Standard library for working with C ++ console
#include <string> // Library for working with string variables

// Connecting the required namespace.
using namespace std;

// We create a class for storing functions used when working with the main menu.
class MainMenu {
private:
	// Storing player names.
	string FirstPlayerName;
	string SecondPlayerName;
	// Boolean variable for storing information about which of the players will be the cross.
	// If the variable is true then the first player moves the cross.
	bool xPlayerFirst;
public:
	void SayHello(); // Displaying the main menu.
	void GameRules(); // Derivation of the rules of the game.
	void AboutProject(); // Displaying information about the project.
	void GetNames(); // Getting player names.
	void SetPlayers(); // By the method of obtaining a random number, we assign one of the players "Cross".
};

// A class for storing algorithms and other things that are executed during the game.
class Game {
private:
	// Play field - two-dimensional array.
	// Create variables with rowsand columns.
	static const int RAW = 3;
	static const int COL = 3;
	// Creating the array itselfand explicitly starting data.
	char cell[RAW][COL] {
		{'-', '-', '-'},
		{'-', '-', '-'},
		{'-', '-', '-'}
	};
public:
	void CellPrint(); // Playing field output.
	void EnteringAnswerOption(int BoxEntering); // Algorithm for entering data entered by the user into an array.
};

// Класс для хранения данных и функций связанных с раюотой с файлами.
class FileWork {
private:
	string FileName; // Скрепление имен игроков и приставка game
	char DiskNameChar[128]; // Имя системного диска в массиве
	string DiskName; // Переведённое в строку имя системного диска
	string Directory = "://TicTacToe/"; // Дирректория создания файла без диска так как его находим его в функции
	string Extension = ".txt"; // формат файла
	string File; // поллное имя файла и его директория
public:
	void CreateFileInDirectiory();// Для создания файла в случае его отсутствия или иной необходимости.
	void SearchFile(); // Поиск заранее созданного файла.
	void WritingData(); // Запись необходимой информации в файл.
	string FindDiskName(); // Поиск имени диска 
	void FileNameCreate(string FirstPlayerName, string SecondPlayerName); // Генегпция имени файла.
};

// Остальные функции для упрощения кода
class OtherFunctions {
public:
	string CharToString(char arr[], string str);// Перевод символьного массива в строку.
	int Confirmation(string VoteResult);
};