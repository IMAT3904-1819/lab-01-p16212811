// Lab1.cpp : Defines the entry point for the console application.
//


#include <random>
#include <cstdlib>
#include <string>

#include "stdafx.h"
#include "iostream"
#include "ctime"

using namespace std;

int main()
{
	//rand() - Doesn't seed the generator meaning that it will repeat the same numbers again
	//srand() - seeds the generator
	srand(time(NULL));	

	//--Main Loop

	//--Initialise variables

	//Stores the numbers, guesses that the user has and the number that the user has inputted
	int guesses = 8;
	int guess;
	int number = rand() % 1001;

	while (guesses > 0) {
		
		// Start of the program
		cout << "Please enter a number between 1 to 100\n";
		cin >> guess;
		cin.ignore();
		
		//Statement to check if the number is either too high or too low
		if (guess > number)
		{
			cout << "Go lower\n";
		} 
		else if (guess < number)
		{
			cout << "Go higher\n";
		}
		else 
		{
			break;
		}

		guesses--;
	}
	
	//Checks for the amount of guesses

	if (guesses == 0)
	{
		cout << "You've ran out of tries! Sorry! =(\n";
		system("pause");
	}
	else 
	{
		cout << "You've guessed right!!!\n";
		system("pause");
	}

    return 0;
}

