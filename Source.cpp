//Kyungchan Im
//CST - 210
//Professor Lydia
//01/13/2020
//This is topic 1 assignment called Lucky 7
//Here's 7 programs that meets the instruction

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
//#include <iomanip>
using namespace std;

int main() {

	//1.
	//Write a program that reads in 5 integeres and prints the largest and the smallest of the group
	cout << "--------------------------------" << endl;
	cout << "|         Program No.1         |" << endl;
	cout << "--------------------------------" << endl;
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
	//Write a program that calculates and prints the sum of the first 50 positive integers that are multiples of 7.
	cout << "\n--------------------------------" << endl;
	cout << "|         Program No.2         |" << endl;
	cout << "--------------------------------" << endl;
	int count = 0;
	int sumOfSevens = 0;
	for (int i = 1; i < 500; i++) {
		if (i % 7 == 0) {
			sumOfSevens = i + sumOfSevens;
			count += 1;
			cout << count << ": " << sumOfSevens << endl;
		}
		if (count == 50) {
			break;
		}
	}




	//3.
	//Write a program that calculates and prints the first 10 terms of the factorial sequence.
	cout << "\n--------------------------------" << endl;
	cout << "|         Program No.3         |" << endl;
	cout << "--------------------------------" << endl;
	int i, factorial = 1, number;
	cout << "Enter any Number to find the factorial sequence: ";
	cin >> number;
	for (i = 1; i <= number; i++) {
		factorial = factorial * i;
	}
	cout << "Factorial of " << number << " is: " << factorial << endl;




	//4.
	//Write a program that reads in a string and determines whether it is a palindrome.
	cout << "\n--------------------------------" << endl;
	cout << "|         Program No.4         |" << endl;
	cout << "--------------------------------" << endl;
	string userString = "";
	cout << "Type a word to check it is a palindrome: ";
	cin >> userString;
	int initialString = 0, finalString = userString.size() - 1;

	//Check spaces and lowercases. #include <cctype>
	while (initialString < finalString) {
		if (tolower(userString[initialString]) != tolower(userString[finalString])) {
			cout << "This is not a palindrome." << endl;
			break;
		}
		else if (tolower(userString[initialString]) == tolower(userString[finalString])) {
			initialString++;
			finalString--;
		}
		cout << "This is palindrome" << endl;
		break;
	}





	//5.
	//Write a program that reads in a positive integer and determines whether it is a prime number.
	cout << "\n--------------------------------" << endl;
	cout << "|         Program No.5         |" << endl;
	cout << "--------------------------------" << endl;
	int primeInt = 0;
	bool isPrime = true;
	cout << "Enter a positive integer: ";
	cin >> primeInt;
	for (int i = 2; i <= primeInt / 2; ++i)
	{
		if (primeInt % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	if (isPrime)
		cout << "This is a prime number" << endl;
	else
		cout << "This is not a prime number" << endl;



	//6.
	//Write a program that creates an array of integers using an initialization list and calculates and displays the average of the values.
	int arr[] = { 4,7,1,10,16,45,234,14,439,55 };

	//Find out how many values are in the list
	int numItems = sizeof(arr) / sizeof(int);

	int sum = 0;
	int numI = 0;
	while (numI < numItems) {
		sum = sum + arr[numI];
		numI++;
	}
	cout << "\n--------------------------------" << endl;
	cout << "|         Program No.6         |" << endl;
	cout << "--------------------------------" << endl;
	cout << "Initialization list = { ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "}" << endl;
	//Use casting to get floating points
	cout << "The average of the total sum is: " << sum / static_cast<double>(numItems) << endl;




	//7.
	//Write a program that gets a positive integer n from the user and creates an array of n. 
	//The program should read strings from a file, fill the array with the first n strings, and print the string with the most characters.
	//You may assume that number of strings in the file is greater than
	cout << "\n--------------------------------" << endl;
	cout << "|         Program No.7         |" << endl;
	cout << "--------------------------------" << endl;
	ifstream fin("input.in");


	//validate file input object
	if (!fin) {
		cerr << "File not found...";
		exit(2);
	}

	int numStrings;
	cout << "Enter the number of strings to read: ";
	cin >> numStrings;

	//Create an array at runtime
	string* strArr = new string[numStrings];

	string str;
	int l = 0;
	while (l < numStrings) {
		//read in a string
		//put it in the array
		fin >> strArr[l];
		//increment i
		l++;
	}

	//print the contents of the array
	//we have to use loop
	//1. Find the largest charater.
	//2. Print the largest character with that position.

	int largestString = 0;
	int numContainer = 0;
	cout << "The length of each string is: ";
	for (int i = 0; i < numStrings; i++)
	{
		cout << strArr[i].size() << " ";
		if (strArr[i].size() > largestString) {
			largestString = strArr[i].size();
		}

	}

	for (int i = 0; i < numStrings; i++)
	{
		if (strArr[i].size() == largestString) {
			cout << "\nThe largest character is: " << strArr[i] << endl;
		}
	}


	return 0;

}


