#include<iostream>
#include"CodeBreaker.h"

RandomClass::RandomClass()
{
	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);
	printf("%d\n", num4);
}

InputClass::InputClass()
{
	std::cout << "“ü—Í‚µ‚Ä‚­‚¾‚³‚¢" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cin >> numbers[i];
		int number = numbers[i];
	}
}

CompClass::CompClass(int num1, int num2, int num3, int num4, int number)
{
	if (num1 && num2 && num3 && num4 == number)
	{
		std::cout << "ƒqƒbƒg" << std::endl;
	}
}