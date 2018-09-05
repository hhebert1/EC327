#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	//Declare user input variables
	double x1;
	double x2;
	double y1;
	double y2;
	double area1;
	double area2;

	cout << "Enter the information for the first square" << endl;

	cout << "x-coordinate: ";
	cin >> x1;

	cout << "y-coordinate: ";
	cin >> y1;

	cout << "area: ";
	cin >> area1;

	//Error check for negative area input
	while (area1 < 0)
	{
		cout << "Error. Enter a positive area: ";
		cin >> area1;
	}

	cout << "Enter the information for the second square" << endl;

	cout << "x-coordinate: ";
	cin >> x2;

	cout << "y-coordinate: ";
	cin >> y2;

	cout << "area: ";
	cin >> area2;

	//Error check for negative area input
	while (area2 < 0)
	{
		cout << "Error. Enter a positive area: ";
		cin >> area2;
	}


	double A1x = x1 - (sqrt(area1) / 2); //coordinates of top left corner of 1st square
	double A1y = y1 + (sqrt(area1) / 2);
	double B1x = x1 + (sqrt(area1) / 2); //coordinates of bottom right corner of 1st square
	double B1y = y1 - (sqrt(area1) / 2);

	double A2x = x2 - (sqrt(area2) / 2); //coordinates of top left corner of 2nd square
	double A2y = y2 + (sqrt(area2) / 2);
	double B2x = x2 + (sqrt(area2) / 2); //coordinates of bottom right corner of 2nd square
	double B2y = y2 - (sqrt(area2) / 2);

	if (A1x > B2x || A1y < B2y || B1x < A2x || A2y < B1y) //Square 1 completely right,left, up, or down of square 2
	{
		cout << "THE SQUARES DO NOT INTERSECT" << endl;
	}
	
	else
	{
		cout << "THE SQUARES INTERSECT" << endl; //if not one of set conditions, the squares must intersect
	}


}
