#include "controller.h"
#include "robot_parts.h"

using namespace std;

vector<Robot*> store;

void create()
{
	cout << "\nRobot Parts - 1\nRobot Model - 2\nRobot Order - 3\nReturn to Main Menu\n";
	int a;

	cin >> a;
	if (a == 4)
	{
		controller();
	}
	if (a == 1)
	{
		cout << "\n\nChoose a part type (number only):\nTorso - 1\nHead - 2\nArm - 3\nLocomoter - 4\nBattery - 5: ";
		int choice;
		cin >> choice;
		cout << "\n";
		if (choice == 1)
		{
			Torso* myTorso = new Torso;


			cout << "Name of the component: ";
			cin.clear();
			cin.ignore();
			getline(cin, myTorso->name);


			cout << "Part Number: ";
			cin >> myTorso->part_Num;

			cout << "Weight: ";
			cin >> myTorso->weight;

			cout << "Cost: ";
			cin >> myTorso->cost;

			cout << "Brief Description: ";
			
			cin.ignore();
			getline(cin, myTorso->description);

			cout << "\n";

			store.push_back(myTorso);
		}
		else if (choice == 2)
		{
			Head* myHead = new Head;


			cout << "Name of the component: ";
			cin.clear();
			cin.ignore();
			getline(cin, myHead->name);


			cout << "Part Number: ";
			cin >> myHead->part_Num;

			cout << "Weight: ";
			cin >> myHead->weight;

			cout << "Cost: ";
			cin >> myHead->cost;

			cout << "Brief Description: ";

			cin.ignore();
			getline(cin, myHead->description);

			cout << "\n";

			store.push_back(myHead);
		}
		else if (choice == 3)
		{
			Arm* myArm = new Arm;


			cout << "Name of the component: ";
			cin.clear();
			cin.ignore();
			getline(cin, myArm->name);


			cout << "Part Number: ";
			cin >> myArm->part_Num;

			cout << "Weight: ";
			cin >> myArm->weight;

			cout << "Cost: ";
			cin >> myArm->cost;

			cout << "Brief Description: ";

			cin.ignore();
			getline(cin, myArm->description);

			cout << "\n";

			store.push_back(myArm);
		}
		
		else if (choice == 4)
		{
			Locomoter* myLoco = new Locomoter;

			cout << "Name of the component: ";
			cin.clear();
			cin.ignore();
			getline(cin, myLoco->name);


			cout << "Part Number: ";
			cin >> myLoco->part_Num;

			cout << "Weight: ";
			cin >> myLoco->weight;

			cout << "Cost: ";
			cin >> myLoco->cost;

			cout << "Brief Description: ";

			cin.ignore();
			getline(cin, myLoco->description);

			cout << "\n";

			store.push_back(myLoco);
		}
		else if (choice == 5)
		{
			Battery* myBat = new Battery;

			cout << "Name of the component: ";
			cin.clear();
			cin.ignore();
			getline(cin, myBat->name);


			cout << "Part Number: ";
			cin >> myBat->part_Num;

			cout << "Weight: ";
			cin >> myBat->weight;

			cout << "Cost: ";
			cin >> myBat->cost;

			cout << "Brief Description: ";

			cin.ignore();
			getline(cin, myBat->description);

			cout << "\n";

			store.push_back(myBat);
		}
	}
}

/*void printVector()
{
	cout << "The names are: ";
	for (unsigned int i = 0; i < store.size(); i++)
	{
		cout << store[i]->name << " ";
	}
	cout << "\n";
}*/

void controller()
{
	int input;
	cout << "Welcome to Robbie Robot Shop!" << endl;
	cout << "Create - 1 \nReport - 2\nExit - 3: ";
	cin >> input;
	cout << "\n";

	if (input == 1)
	{
		create();
	}
/*	else if (input == 2)
	{
		printVector();
	}*/
	else if (input == 3)
	{
		exit(1);
	}
}