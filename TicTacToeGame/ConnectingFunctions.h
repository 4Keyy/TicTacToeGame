// * This file is used to connect, title and transfer functions between all project files

// This line indicates that this file was connected strictly once.
#pragma once

// Also for this file you need to add libraries
#include <iostream> // Standard library for working with C ++ console
#include <string> // Library for working with string variables

// I will store the functions in classes, and call them through the created objects in the main functions, create a class
class SayHello
{
public:
	void Hello();
	void AboutTheGame();
	void GameRules();
};

class GetNamePlayers
{
	// Variavles for storing the player names
	string m_SecondPlayerName;
	string m_FirstPlayerName;

public:
	void GetName()
	{
		cout << ("Введите имя 1 игрока: "); cin >> m_FirstPlayerName;
		cout << ("Введите имя 2 игрока: "); cin >> m_SecondPlayerName;
	}
	void SaveNames(string FirstPlayerName, string SecondPlayerName)
	{
		// ! Прописать функцию создающую файл с именами игроков 
	}
};