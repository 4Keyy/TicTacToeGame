// * This file is used to connect, title and transfer functions between all project files

// This line indicates that this file was connected strictly once.
#pragma once

// Also for this file you need to add libraries
#include <iostream> // Standard library for working with C ++ console
#include <string> // Library for working with string variables

// I will store the functions in classes, and call them through the created objects in the main functions, create a class
class MainMenu {
	string FirstPlayerName;
	string SecondPlayerName;
public:
	void SayHello();
	void GameRules();
	void ProjectInfo();
};

class Game {

};