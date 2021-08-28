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
		�out << ("����� ���������� � ���� \"��������-������\"!") << endl;
		cout << endl << ("1. ������ ����.") << endl << ("2. ������� ����.") << endl << ("3. ���������� � �������.") << endl;
		cout << endl << ("��� �����: ");
		unsigned char VoteResult;
		cin >> VoteResult;
		if (VoteResult == '1') {
			system("cls");
			// ! ������ ����.
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
			cout << ("��� ������ �������� ������! ���������� ��� ���!\n") << endl;
			SayHello();
		}
	}
	void GameRules() {
		cout << ("������� ����...") << endl;
		cout << ("1. ������� ��������� �������� ������� ���� � ���� (������� �� �����).") << endl;
		cout << ("2. ������ ����� ����� � ����� \"�������\"") << endl;
		cout << ("3. ������ ����� �� ������� � ���� �������� 3�3 ������.") << endl << endl;
		cout << ("�������� ����!") << endl;
		system("pause");
		system("cls");
		SayHello();
	}
	void ProjectInfo() {

	}
};