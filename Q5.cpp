#include <iostream>
#include <ctime> //include for code (srant)time(0))
using namespace std;

int main()
{
	srand(time(0));

	int choice; //declare user choice

	//prompt user for choice
	cout << "Choose Rock (0), Paper(1), or Scissors (2): ";
	cin >> choice;

	//error checks user input
	while (choice < 0 || choice >2)
	{
		cout << "Invalid choice. Please choose Rock (0), Paper(1), or Scissors (2): ";
		cin >> choice;
	}

	//store random computer choice (a number 0-2)
	int compchoice = rand() % 2;


	//prints computer's choice based on random number generator
	if (compchoice == 0)
	{
		cout << "Computer chooses: Rock" << endl;
	}
	else if (compchoice == 1)
	{
		cout << "Computer chooses: Paper" << endl;
	}
	else if (compchoice == 2)
		cout << "Computer chooses: Scissors" << endl;

	//User and comp. choose same thing
	if (choice == compchoice)
	{
		cout << "You tie!" << endl;
	}

	//User chooses Rock
	if (choice == 0)
	{
		if (compchoice == 1)//comp chooses paper
		{
			cout << "You loose!" << endl;
		}
		else if (compchoice == 2)//comp chooses scissors
		{
			cout << "You win!" << endl;
		}
	}

	//User chooses Paper
	else if (choice == 1)
	{
		if (compchoice == 0)//comp chooses rock
		{
			cout << "You win!" << endl;
		}
		else if (compchoice == 2)//comp chooses scissors
		{
			cout << "You loose!" << endl;
		}
	}

	//User chooses scissors
	else if (choice == 2)
	{
		if (compchoice == 0)//comp chooses rock
		{
			cout << "You loose!" << endl;
		}
		else if (compchoice == 1)//comp chooses paper
		{
			cout << "You win!" << endl;
		}
	}
}

