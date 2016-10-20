#include "controller.h"
#include "robot_parts.h"
#include "robot_models.h"
using namespace std;

vector<robotModel> modelPart;
vector<Robot*> store;

void  modelfunc()
{
	robotModel models;

	cout << "Enter model name: ";
	cin >> models.name;

	cout << "Enter model number: ";
	cin >> models.model_num;

	cout << "Enter Model price: ";
	cin >> models.price;

	cout << "Choose parts: " << endl;
	for (int i = 0; i < store.size(); i++)
	{
		cout << "Part " << i << ":" << endl;
		cout << store[i]->name << "\n";
		cout << store[i]->description << "\n";
		cout << store[i]->part_Num << "\n";
		cout << store[i]->type << "\n";
		cout << store[i]->weight << "\n";
		cout << store[i]->cost << "\n";
	}
	cout << "Enter part number: ";
	int partN;
	cin >> partN;

	models.parts.push_back( store[partN] );
	modelPart.push_back(models);

}

void create()
{
	cout << "\nRobot Parts - 1\nRobot Model - 2\nRobot Order - 3\nReturn to Main Menu - 4\n";
	int a;

	cin >> a;
	if (a == 2)
	{
		
		void modelFunc();
		cout << "List      1\nCatalog      2\nSelect an option: ";
		int g;
		cin >> g;

		if (g == 1)
		{
			cout << "List of all the Models: \n";
			for (int i = 0; i < modelPart.size(); i++)
			{
				cout << "Model " << i << ": \n";
				cout << modelPart[i].name;
				cout << modelPart[i].model_num;
				cout << modelPart[i].price;
			}
			cout << "Choose Model: ";
			int modelC;
			cin >> modelC;

			cout << "Choose quantity: ";
			int modelQ;
			cin >> modelQ;

			int totalP = modelQ * modelPart[modelC].price;

			cout << "Here are the details of your selected model: \n";
			cout << modelPart[modelC].name;
			cout << modelPart[modelC].model_num;
			cout << "Total price of " << modelQ << "Models: " << totalP << endl;

		}
		if (g == 2)
		{
			cout << "Catalog of all the Models\n";
			for (int i = 0; i < modelPart.size(); i++)
			{
				cout << "Model " << i << ": \n";
				cout << modelPart[i].name;
				cout << modelPart[i].model_num;
				cout << modelPart[i].price;
			}
			cout << "Choose Model: ";
			int modelChoice;
			cin >> modelChoice;

			cout << "Your choice is " << modelPart[modelChoice].name << endl;
			cout << "Here are its parts: " << endl;
			for (int i = 0; i < modelPart[modelChoice].parts.size(); i++)
			{
				cout << modelPart[modelChoice].parts[i] << endl;
			}
		}
	}
	if (a == 4)
	{
		return;
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

			cout << "Battery consumption: ";
			cin >> myTorso->battery_comp;

			for (int i = 0; i < store.size(); i++)
			{
				if (store[i]->type == "Head" || store[i]->type == "head")
				{
					cout << store[i]->part_Num << " " << store[i]->name << "\n";
				}
				else {
					cout << "No Heads found." << "\n";
					return;
				}
			}
			cout << "Choose one of the following head options. Enter preference number: ";
			int x;
			cin >> x;
			for (int i = 0; i < store.size(); i++)
			{
				if (x == i)
				{
					cout << "You chose: " << store[i]->name << "\n";
				}
			}

			myTorso->Head1.name = store[x]->name;
			myTorso->Head1.part_Num = store[x]->part_Num;
			myTorso->Head1.description = store[x]->description;
			myTorso->Head1.weight = store[x]->weight;
			myTorso->Head1.cost = store[x]->cost;
			myTorso->Head1.type = store[x]->type;
			
			for (int i = 0; i < store.size(); i++)
			{
				if (store[i]->type == "Locomotor" || store[i]->type == "locomotor")
				{
					cout << store[i]->part_Num << " " << store[i]->name << "\n";
				}
				else {
					cout << "No locomotor found." << "\n";
				}
			}
			cout << "Choose one of the following locomotor options. Enter preference number: ";
			int y;
			cin >> y;
			for (int i = 0; i < store.size(); i++)
			{
				if (y == i)
				{
					cout << "You chose: " << store[i]->name << "\n";
				}
			}

			myTorso->myLoco.name = store[y]->name;
			myTorso->myLoco.part_Num = store[y]->part_Num;
			myTorso->myLoco.description = store[y]->description;
			myTorso->myLoco.weight = store[y]->weight;
			myTorso->myLoco.cost = store[y]->cost;
			myTorso->myLoco.type = store[y]->type;

			cout << "\n";

			cout << "Enter number of arms needed: ";
			int z;
			cin >> z;

			for (int i = 0; i < z; i++)
			{
				for (int j = 0; j < store.size(); j++)
				{
					if (store[j]->type == "Arm" || store[j]->type == "arm")
					{
						cout << store[j]->part_Num << " " << store[j]->name << "\n";
					}
					else {
						cout << "No arm found." << "\n";
						return;
					}
				}
				cout << "Choose an arm: " << "\n";
				int a;
				cin >> a;
				for (int k = 0; k < store.size(); k++)
				{
					if (a == i)
					{
						cout << "You chose: " << store[i]->name << "\n";
					}
				}

				myTorso->myArm[i].name = store[a]->name;
				myTorso->myArm[i].type = store[a]->type;
				myTorso->myArm[i].description = store[a]->description;
				myTorso->myArm[i].part_Num = store[a]->part_Num;
				myTorso->myArm[i].weight = store[a]->weight;
				myTorso->myArm[i].cost = store[a]->cost;

			}

			for (int i = 0; i < z; i++)
			{
				for (int j = 0; j < store.size(); j++)
				{
					if (store[j]->type == "Battery" || store[j]->type == "battery")
					{
						cout << store[j]->part_Num << " " << store[j]->name << "\n";
					}
					else {
						cout << "No battery found." << "\n";
						return;
					}
				}
				cout << "Choose a battery: " << "\n";
				int b;
				cin >> b;
				for (int k = 0; k < store.size(); k++)
				{
					if (b == i)
					{
						cout << "You chose: " << store[i]->name << "\n";
					}
				}

				myTorso->myBattery[i].name = store[b]->name;
				myTorso->myBattery[i].type = store[b]->type;
				myTorso->myBattery[i].description = store[b]->description;
				myTorso->myBattery[i].part_Num = store[b]->part_Num;
				myTorso->myBattery[i].weight = store[b]->weight;
				myTorso->myBattery[i].cost = store[b]->cost;

			}

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