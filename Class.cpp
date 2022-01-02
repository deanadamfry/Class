// =======================================================
// Class - Week 9
// Dean Fry, November 2021
// =======================================================

// Libraries
#include <iostream>
using namespace std;

// =======================================================
// Function Declaration
void mainMenu();
void startScreen();
void exitScreen();

// =======================================================
// Classes


// =======================================================
// Global Variables
bool gameOver = false;
// =======================================================

int main()
{
	startScreen();

	// Main Game Loop
	while (!gameOver)
	{
		mainMenu();
	}

	exitScreen();

	return 0;
}

// =======================================================
// Functions

void mainMenu()
{
	int playerChoice = 0;

	cout << "\n\n ====== Main Menu ====== \n\n";
	cout << " Please Select a Program to run: \n";
	cout << " 1: Class Methods \n";
	cout << " 2: Class Constructors \n";
	cout << " 3: Class Inheritance \n";
	cout << " 4: Extra Work \n";
	cout << " 5: Exit Program \n";
	cout << "\n  : ";

	cin >> playerChoice; // User Input

	// Input Validation
	while (playerChoice < 1 || playerChoice > 4)
	{
		if (cin.fail()) // Non-Number entered
		{
			cin.clear();
			char c;
			cin >> c;
		}

		cout << "\n Error: Invalid Character";
		cout << "\n  : ";
		cin >> playerChoice;
	}

	switch (playerChoice)
	{
	case 1:
	{
		// Clear Screen
		system("cls");
	}
	break;
	case 2:
	{
		// Clear Screen
		system("cls");
	}
	break;
	case 3:
	{
		// Clear Screen
		system("cls");
	}
	break;
	case 4:
	{
		// Clear Screen
		system("cls");

		cout << "\n Option Unavailable";
	}
	break;
	case 5:
	{
		gameOver = true;
	}
	break;
	default:
		break;
	}
}

void startScreen()
{
	cout << "========================================= \n";
	cout << "====== Class - Week 9 \n";
	cout << "====== Dean Fry, November 2021 \n";
	cout << "========================================= \n";
	cout << "\n ====== Welcome Player 1 ======\n";
}

void exitScreen()
{
	cout << "========================================= \n";
	cout << "========= Thank you for playing ========= \n";
	cout << "================ Goodbye ================ \n";
	cout << "========================================= \n\n\n";
}

// =======================================================