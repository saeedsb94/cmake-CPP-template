#pragma once


//CreatDataFile -> generates a sequence of random numbers of integers and save it to a file
void CreatDataFile(const char* fileName); 

//ReadDataFile -> reads a file with a sequence of  integers
int* ReadDataFile(const char* fileName);

//WriteDataFile -> writes a sequence of integers to a text file in a formatted shape 
void WriteDataFile(const char* fileName, int* arr);