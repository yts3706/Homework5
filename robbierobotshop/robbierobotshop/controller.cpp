#include "controller.h"
#include "robot_parts.h"

using namespace std;

void create()
{
	cout << "\nRobot Parts - 1\nRobot Model - 2\nRobot Order - 3\nReturn to Main Menu\n";
	int a;

	string temp_name;
	cin >> a;
	if (a == 4)
	{
		controller();
	}
	if (a == 1)
	{
		cout << "Choose a part type (number only):\nTorso - 1\nHead - 2\nArm - 3\nLocomoter - 4\nBattery - 5: ";
		int choice;
		cin >> choice;
		if (choice == 1)
		{
			Torso myTorso;

			cout << "Name of the component: ";
			cin.clear();
			cin.ignore();
			getline(cin, myTorso.name);


			cout << "Part Number: ";
			cin >> myTorso.part_Num;

			cout << "Weight: ";
			cin >> myTorso.weight;

			cout << "Cost: ";
			cin >> myTorso.cost;

			cout << "Brief Description: ";

			cin.ignore();
			getline(cin, myTorso.description);

			cout << "\n";
		}
	}
}
void controller()
{
	int input;
	cout << "Welcome to Robbie Robot Shop!" << endl;
	cout << "Create - 1 \nReport - 2\nExit - 3: ";
	cin >> input;

	if (input == 1)
	{
		create();
	}
	else if (input == 3)
	{

	}
}