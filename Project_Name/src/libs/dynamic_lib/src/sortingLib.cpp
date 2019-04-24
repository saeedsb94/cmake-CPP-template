#include "sortingLib.hpp"
#include "filesLib.hpp"

/*	Sorting algorithm "Quick sort"	*/
__declspec(dllexport) void QuickSort(int* arr, int left, int right) {

	int i = left;
	int j = right;
	int tmp;
	int pivot = arr[(left + right) / 2];

	/* partition */

	while (i <= j) {
		while (arr[i] < pivot)
			i++;

		while (arr[j] > pivot)
			j--;

		if (i <= j) {
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	};

	/* recursion */
	if (left < j)
		QuickSort(arr, left, j);

	if (i < right)
		QuickSort(arr, i, right);
}

// check if the array is sorted
__declspec(dllexport) bool ArrayIsSorted(int* arr) {

	for (int i = 2; i < *arr; i++)
		if (arr[i] < arr[i - 1])
			return false;

	return true;
}

__declspec(dllexport) void SortFile(const char* inputFileName, const char* outputFileName)
{
	int* data = ReadDataFile(inputFileName);	//	Get the array

	QuickSort(data, 1, *data);	//	sort the array

	WriteDataFile(outputFileName, data);	//	export the array

}

__declspec(dllexport) bool TestFile(const char* inputfile_name)
{
	int* data = ReadDataFile(inputfile_name);	//	Get the array

	QuickSort(data, 1, *data);	//	sort the array

	return ArrayIsSorted(data);
}