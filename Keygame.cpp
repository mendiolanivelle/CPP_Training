// BasicCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void SayHello();
int AddNumber(int Num1, int Num2);

int main()
{
	int one = 1;
    std::cout << "Hello World!\n";
	std::cout << "The number is " << one << std::endl;
	SayHello();
	int inputnumber;
	std::cin >> inputnumber;
	std::cout << "the number you have input is " << inputnumber << std::endl;
	std::cout << "the Number you have input + 10 is "<<AddNumber(inputnumber,10)<<std::endl;
	if (AddNumber(inputnumber,10) == 20)
	{
		std::cout << "I love you" << std::endl;
	}
	else
	{
		std::cout << "i dont love you" << std::endl;
	}

	for (int i = 0; i < inputnumber; i++)
	{
		std::cout << "I love my job" << i << std::endl;
		
	}
	
}

void SayHello()
{
	std::cout << "Say hello babyy";
}

int AddNumber(int Num1, int Num2)
{
	return Num1 + Num2;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
