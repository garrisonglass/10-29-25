// 10-29-25.cpp : 
#include <iostream>
#include<fstream>

int main()
{
	std::ifstream inputFile;
	inputFile.open("Stores.txt");

	if (!inputFile)
	{
		std::cout << "Error will Robinson, ERROR!";
		return -1;
	}
	int sales;

	for (int i = 1; i < 6; i++)
	{
		inputFile >> sales;
		int askterNum = sales / 100;
		std::cout << "For store " << i << " :";
		for (int j = 0; j < askterNum; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;

	}

	inputFile.close();


	return 0;
}