// * This file is used to connect, title and transfer functions between all project files

// This line indicates that this file was connected strictly once.
#pragma once

// Also for this file you need to add libraries
#include <iostream> // Standard library for working with C ++ console

// I will store the functions in classes, and call them through the created objects in the main functions, create a class
// In this class i will keep functions for start the game, all functions use abstraction so there won't be a private line
class StartGameFunctions
{
public:
	// In this functions we ask users them names and assign them their shapes.
	void Acquaintance();

	// This function will rip the field to players using a global variable initialized in MainSource
	void FieldCreation();

	// Function that deduces the rules of playing tic-tac-toe
	void DameRules();

	// The beginning of the game, the players' moves and the entry of certain symbols into the cells
	void StartGame();
};