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

FileWork file;

void FileWork::CreateFileInDirectiory() {
	ifstream file(file.File);
}

void FileWork::SearchFile() {
	
}

void FileWork::WritingData() {
	ifstream open(file.File);
}

string FileWork::FindDiskName() {
	strcpy(file.DiskNameChar, getenv("SystemDrive"));
	OtherFunctions obj; obj.CharToString(file.DiskNameChar, file.DiskName);
	return file.DiskName;
}

void FileWork::FileNameCreate(string FirstPlayerName, string SecondPlayerName) {

	file.FileName = FirstPlayerName + SecondPlayerName + "Game";
	file.File = file.FindDiskName() + file.Directory + "/" + file.FileName + file.Extension;
}