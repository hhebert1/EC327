#include <iostream>
#include <iomanip> //include this library to use setprecision function
using namespace std;

int main()
{
	//declare all variables
	double cost1; 
	double tax;
	double tip;
	int tiplevel;
	int posttax;
	double cost2;
	double totaltip;
	double costtotal;

	cout << "Enter the original bill amount: ";
	cin >> cost1;

	cout << "Enter the tax rate %: ";
	cin >> tax;
	tax = tax / 100; //convert percentage value given to a decimal for calculatations 

	cout << "Enter tip level (1=15%, 2=20%, 3=25%): ";
	cin >> tiplevel;

	//error check so user only inputs one of the three choices. Keep asking until they choose valid answer
	while (tiplevel >3 || tiplevel <=0)
	{
		cout << "Invalid Input. Please Try again " << endl;
		cout << "Enter tip level (1=15%, 2=20%, 3=25%): ";
		cin >> tiplevel;
	}

	//set percentage values based on choice
	if (tiplevel == 1)
	{
		tip = 0.15;
	}
	else if (tiplevel == 2)
	{
		tip = 0.2;
	}
	else if (tiplevel == 3)
	{
		tip = .25;
	}

	cout << "Tip on post-tax amount? (1=yes, 2=no): ";
	cin >> posttax;

	//assign cost2 as the cost after tax
	cost2 = cost1 + (cost1*tax);

	//error check so user only inputs one of the two choices. Keep asking until they choose valid answer
	while (posttax > 2 || posttax <= 0)
	{
		cout << "Invalid Input. Please Try again " << endl;
		cout << "Tip on post-tax amount? (1=yes, 2=no): ";
		cin >> posttax;
	}

	//set tip value based on choice
	if (posttax == 1)
	{
		totaltip = cost2 * tip;
	}
	else if (posttax == 2)
	{
		totaltip = cost1 *tip;
	}

	//calculate the total cost based on choices
	costtotal = cost2 + totaltip;
	
	//print calculated values using only 2 decimal places
	cout << fixed << setprecision(2) << "The total bill pre-tip is : $" << cost2 << endl;
	cout << fixed << setprecision(2) << "The total tip is: $" << totaltip << endl;
	cout << fixed << setprecision(2) << "The total bill post-tip is: $" << costtotal << endl;

}
