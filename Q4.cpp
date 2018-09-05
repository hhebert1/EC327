#include <iostream>
using namespace std;


int main()
{
	//declare variables being used
	char input;
	int offset;
	char newchar;

	cout << "Enter character: ";
	cin >> input;
	cout << "Offset (enter 0 to convert case): ";
	cin >> offset;

	//error checks to make sure offset is postive number, keeps asking until valid input given
	if (offset < 0)
	{
		cout << "Offset value not valid. Choose a number larger than 0: ";
		cin >> offset;
	}

	
	if (offset == 0)
	{
		if (input >= char(65) && input <= char(90)) //changes uppercase values to lowercase values when offset=0
		{
			newchar = tolower(input);
		}
		else if (input >= char(97) && input <= char(122)) //changes lowercase values to uppercase values when offset=0
		{
			newchar = toupper(input);
		}
		else //if not a letter, returns the same character given
		{
			newchar = input;
		}
	}

	//adds the character value of the offset to the given character to create a new character
	if (offset > 0)
	{
		newchar = input + char(offset);
	}
	
	//find value of this addition as an integer
	int x = input + offset;

	//if the ascii value of x is an invalid character, print an error and exit the program
	//error for ascii value for <delete> and for numbers greater than 254, as this is where valid characters in extended ascii table ends
	if (x == 127 || x>254)
	{
		cout << "Error. Out of range." << endl;
		return 0;
	}

	//otherwise, print the new character
	cout << "New character: " << newchar << endl;

}
