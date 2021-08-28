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
	�out << ("����� ���������� � ���� \"��������-������\"!") << endl;
	cout << endl << ("1. ������ ����.") << endl << ("2. ������� ����.") << endl << ("3. ���������� � �������.") << endl;
	cout << endl << ("��� �����: ");
	unsigned char VoteResult;
	cin >> VoteResult;
	if (VoteResult == '1') {
		// ! ������ ����.
	} else if (VoteResult == '2') {
		GameRules();
	} else if (VoteResult == '3') {
		ProjectInfo();
	}
};

void MainMenu::GameRules() {
	// ��������� ������� ���� ������� ��������������� �������.
}

void MainMenu::ProjectInfo() {
	// ��������� ���������� � ������� 
	// ����������� �� github 
	// ���� ������ ��������� ������� 
	// ��� ����� ������
}