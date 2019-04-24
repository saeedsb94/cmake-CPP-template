#include <iostream>
#include <string>
#include "filesLib.hpp"
#include "sortingLib.hpp"

int main()
{
	/*	Main Programm	*/
	{
		std::string inputPath;
		std::string outputPath;

		while (true) {

			std::cout << "Please, enter the full path to input file:\n";

			std::getline(std::cin, inputPath);
			const char* inputFileName = inputPath.c_str();

			std::cout << "Please, enter the full path to output file:\n";

			std::getline(std::cin, outputPath);
			const char* outputFileName = outputPath.c_str();

			SortFile(inputFileName, outputFileName);

			std::cout << "Enter '0' to exit or anything else to continue\n";

			std::string tmp;
			std::getline(std::cin, tmp);

			if (tmp == "0")
				break;
		}
	}



	return 0;
}