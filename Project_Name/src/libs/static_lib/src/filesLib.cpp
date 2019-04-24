#include <iostream>
#include <fstream>
#include<time.h> 
#include "filesLib.hpp"

//CreatDataFile -> generates a sequence of random numbers of integers and save it to a file
void CreatDataFile(const char* fileName) {

	/*	Generating the random sequence	*/
	srand(time(0));//Use current time as seed for random generator

	int size = rand() % 100;//Number of elements in the sequence <100
	int* arr = new int[size + 1];
	*arr = size;//assign the size of the sequence to the first element of the  array 

	for (int i = 1; i <= size; i++) {
		arr[i] = rand() % 2000 - 1000;//sequence values -1000 < x < 1000
	}

	/*	Saving it in a file	*/
	std::ofstream file;
	file.open(fileName);

	for (int i = 0; i <= size; i++) {
		file << arr[i] << "\n";
	}

	file.close();
}

//ReadDataFile -> reads a file with a sequence of  integers
int* ReadDataFile(const char* fileName) {

	std::ifstream file;
	file.open(fileName);

	int size;
	file >> size;	//	get the sequence size
	int* arr = new int[size + 1];
	*arr = size;	//	assign the size to the first element of the array

	for (int i = 1; i <= size; i++) {
		file >> arr[i];
	}

	file.close();

	return arr;
}

//WriteDataFile -> writes a sequence of integers to a text file in a formatted shape 
void WriteDataFile(const char* fileName, int* arr) {

	std::ofstream file;
	file.open(fileName);

	file << "The sequence contains " << *arr << " element(s):\n\n";

	for (int i = 1; i <= *arr; i++) {
		file << "#" << i << "\t----->\t" << arr[i] << "\n";
	}

	file.close();
}