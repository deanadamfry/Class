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
class Character
{
public:
	string m_Name = "Stranger";
	float m_HP = 0;
	float m_SPD = 10;
	bool m_IsAlive = true;

	// Default Constructor
	Character() { cout << "\n Character spawned"; }
	
	// Parameters Constructor
	Character(string nameSent, float hpSent)
	{
		m_Name = nameSent;
		m_HP = hpSent;
		cout << "\n Parameters Character Constructor";
		cout << "\n A new Character named " << m_Name << " has spawned.";
		cout << "\n HP: " << m_HP;
		cout << "\n";
	}

	void checkIsAlive() { if (m_HP < 1) m_IsAlive = false; }
	void displayStats();
};

void Character::displayStats()
{
	if (m_IsAlive == true)
	{
		cout << "\n Character " << m_Name << " HP: " << m_HP;
		cout << "\n Status: Alive";
		cout << "\n";
	}
	else
	{
		cout << "\n Character " << m_Name << " HP: " << m_HP;
		cout << "\n Status: Dead";
		cout << "\n";
	}
}

// Derived Class (child)
class PC : public Character
{
public:
	string m_PotionCarrying = "Health Potion";
	int m_MP = 100; // Mana Points

	// Default PC Constructor
	PC() { cout << "\n Default PC spawned"; }

	// Parameters PC Constructor
	PC(string nameSent, float hpSent, string potionSent, int mpSent)
	{
		m_Name = nameSent;
		m_HP = hpSent;
		m_PotionCarrying = potionSent;
		m_MP = mpSent;
		cout << "\n PC created";
		cout << "\n Name: " << m_Name;
		cout << "\n HP: " << m_HP;
		cout << "\n MP: " << m_MP;
		cout << "\n Inventory: " << m_PotionCarrying;
		cout << "\n";
	}
};

// Derived Class (child)
class NPC : public Character
{
public:
	string m_Faction = "Neutral";
	string m_Message = "We are innocent bystanders.";

	// Default NPC Constructor
	NPC() { cout << "\n Default NPC spawned"; }
	
	// Parameter NPC Constructor
	NPC(string factionSent, string messageSent)
	{
		m_Faction = factionSent;
		m_Message = messageSent;
		cout << "\n NPC created";
		cout << "\n Faction: " << m_Faction;
		cout << "\n Message: " << m_Message;
		cout << "\n";
	}
};

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
	while (playerChoice < 1 || playerChoice > 5)
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

		// Character Objects
		Character player1, player2;

		// Set HP values
		player1.m_HP = 100;
		player2.m_HP = 0;

		// Inside Method
		player1.checkIsAlive();
		player2.checkIsAlive();

		// Outside Method
		player1.displayStats();
		player2.displayStats();
	}
	break;
	case 2:
	{
		// Clear Screen
		system("cls");

		// Character Objects
		Character player1("Steve", 100)
		,         player2("Dave", 0)
		,         player3("John", 75)
		,         player4("Bob", 25);
	}
	break;
	case 3:
	{
		// Clear Screen
		system("cls");

		// NPC Object
		NPC npc1("Horde", "For The Horde!");

		// PC Object
		PC player1("Dean", 100, "Mana Potion", 100);
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