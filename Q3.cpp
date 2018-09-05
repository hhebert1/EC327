#include <iostream>
#include <math.h> //include this library for rounding funtions
#include <array> //include this library for use of arrays

using namespace std;

int main()
{
	int N1; //1st number
	int N2; // 2nd number
	int R1; //remainder 1
	int R2; //remainder 2
	int count = 1; //counter for changing place of ternary digits
	int hamdist = 0;// Hamming Distance

	//User inputs 2 numbers
	cout << "Enter two numbers between 0-100: ";
	cin >> N1;//stores first number in N1
	cout << "";
	cin >> N2;//stores 2nd number in N2

	//Error checks to make sure numbers are between 0 and 100.
	//If not, the program exits
	if (N1 < 0 || N2 < 0 || N1>100 || N2>100)
	{
		cout << "Invalid numbers!" << endl;
		return 0;
	}
	
	//Stores initial inputs for printing later
	int N1initial = N1;
	int N2initial = N2;

	array<int, 5> array1;//creates array of length 5 (highest length for nums 1-100) to store ternary value for N1
	array<int, 5> array2;//same thing for N2


		for (int i = 0; i<5; i++) //iterates through loop 5 times
		{
			R1 = N1 % 3; //divides N1 and stores remainder
			R2 = N2 % 3; //divides N2 and stores remainder

			array1[i] = R1; //stores remainder of N1 in the first element of the array
			array2[i] = R2; // same thing for N2

			if (array1[i] != array2[i])// if the corresponding elements arn't equal, increase hamming distance
			{
				hamdist++;
			}

			N1 = floor(N1 / 3); //stores new value for N1 as the integer portion of N1/3
			N2 = floor(N2 / 3); //same thing for N2
		
		}

		//prints Hamming distance
		cout << "Hamming distance between " << N1initial << " and " << N2initial << " when numbers are in ternary format is: " << hamdist << endl;
		return 0;
	
}
