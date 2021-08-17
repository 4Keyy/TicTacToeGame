// * Connect all the necessary libraries
#include <iostream> // Standard library for working with C ++ console
#include <string> // Library for working with string variables
#include <stdio.h> // Standard library for working with the C console
#include <Windows.h> // Library for working with Windows OC files
#include <time.h> // Library for working with time
#include "ConnectingFunctions.h" // Connecting a header file with game functions
#include <regex> // To use regular expressions

// Connecting the required namespace
using namespace std;

void SayHello::Hello()
{
	cout << ("Добро пожаловать в игру \"Крестики-нолики\"!") << endl;
	cout << ("Что вы хотите сделать..?") << endl;
	cout << ("1. Начать игру.") << endl << ("2. Ознакомиться с правилами игры.") << endl << ("Посмотреть информацию о проекте.") << endl;
	char vote; cin >> vote;
	if (vote == '1') {
		// ! Функция начала игры
	} else if (vote == '2') {
		SayHello::GameRules();
	} else if (vote == '3') {
		SayHello::AboutTheGame();
	} else {
		cout << ("Нет такого варианта ответа!\nПопробуй еще рaз!\n");
		int main();
	}
}
void SayHello::GameRules()
{
	
}