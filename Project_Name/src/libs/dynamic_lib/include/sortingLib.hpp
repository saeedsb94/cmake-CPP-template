#pragma once

/*	Sorting algorithm "Quick sort"	*/
__declspec(dllexport) void QuickSort(int* arr, int left, int right);

// check if the array is sorted
__declspec(dllexport) bool ArrayIsSorted(int* arr);

__declspec(dllexport) void SortFile(const char* inputFileName, const char* outputFileName);

__declspec(dllexport) bool TestFile(const char* inputfile_name);