// CGT113-Lab03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Author: Nick Huber
//Date: 9/7/2022

#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to my program, please select an operation to perform:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A, float& B) {
	cout << "\nPlease enter the first value: ";
	cin >> A;
	cout << "Please enter the second value: ";
	cin >> B;
	// The rest of this function is an exercise to the reader
}

void addition(float A, float B) {
	int C = A + B;

	cout << "\n" << A << " + " << B << " = " << C << endl;
}

void subtraction(float A, float B) {
	int C = A - B;

	cout << "\n" << A << " - " << B << " = " << C << endl;
}

void multiplication(float A, float B) {
	int C = A * B;

	cout << "\n" << A << " * " << B << " = " << C << endl;
}

void division(float A, float B) {
	int C = A / B;

	cout << "\n" << A << " / " << B << " = " << C << endl;
}

int main() {
	int choice;
	float A;
	float B;
	printMenu(choice);
	getChoices(A, B);
	if (choice == 1) {
		addition(A, B);
	}
	if (choice == 2) {
		subtraction(A, B);
	}
	if (choice == 3) {
		multiplication(A, B);
	}
	if (choice == 4) {
		division(A, B);
	}
	return 0;
}
