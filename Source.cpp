//Kyungchan Im
//CST - 210
//Professor Lydia
//01/13/2020
//This is topic 1 assignment called Lucky 7
//Here's 7 programs that meets the instruction

#include <iostream>
using namespace std;

int main() {
	
	//1.
	//Write a program that reads in 5 integeres and prints the largest and the smallest of the group
	int a, b, c, d, e;
	cout << "Type your five integers to distinguish the minimum and the maximum value: ";
	cin >> a >> b >> c >> d >> e;
	
	//Testing
	cout << "The integers are: " << a << " " << b << " " << c << " " << d << " " << e << endl;

	//Cocktail logic(?)
	int largestVal, smallestVal;
	
	//Find the largest value among those 5 integers
	if (a > b)
		largestVal = a;
	else largestVal = b;

	if (c > largestVal)
		largestVal = c;
	if (d > largestVal)
		largestVal = d;
	if (e > largestVal)
		largestVal = e;

	//Test the value by using print statement
	cout << "The largest value is: " << largestVal << endl;

	//Find the smallest value among those 5 integers
	if (a < b)
		smallestVal = a;
	else smallestVal = b;

	if (c < smallestVal)
		smallestVal = c;
	if (d < smallestVal)
		smallestVal = d;
	if (e < smallestVal)
		smallestVal = e;

	//Test the value by using print statement
	cout << "The smallest value is: " << smallestVal << endl;




	//2.
	//Write a program that calculatesand prints the sum of the first 50 positive integers that are multiples of 7.
	
	
	
	
	
	
	return 0;
}