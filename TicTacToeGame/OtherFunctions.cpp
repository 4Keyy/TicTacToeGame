// * Connect all the necessary libraries.
#include <iostream> // Standard library for working with C ++ console.
#include <string> // Library for working with string variables.
#include <stdio.h> // Standard library for working with the C console.
#include <Windows.h> // Library for working with Windows OC files.
#include <time.h> // Library for working with time.
#include <fstream>
#include "ConnectingFunctions.h" // Connecting a header file with game functions.

// Connecting the required namespace.
using namespace std;

string OtherFunctions::CharToString(char arr[], string str) {
	str = string(arr);
	return str;
}

// A function to confirm a question.
int OtherFunctions::Confirmation(string VoteResult) {
	string ResultsArray[]{ "Yes", "yEs", "yeS", "YES", "da", "Da", "dA", "DA" };
	for (int i = 0; i < sizeof(ResultsArray) / sizeof(ResultsArray[0]); i++) {
		if (VoteResult == ResultsArray[i]) {
			break;
			return 1;
		}
	}
}