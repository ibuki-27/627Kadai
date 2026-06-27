#pragma once
#include<iostream>
#include<stdlib.h>


class RandomClass
{
public:
	RandomClass();

public:

	int num1 = rand() % 10;
	int num2 = rand() % 10;
	int num3 = rand() % 10;
	int num4 = rand() % 10;	

};

class InputClass
{
public:
	InputClass();

public:
	int numbers[4];
};

class CompClass
{
public:
	CompClass(int num1, int num2, int num3, int num4, int number);

public:

};