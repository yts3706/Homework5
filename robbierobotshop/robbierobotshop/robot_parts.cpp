#include "robot_parts.h"
//random

void Arm::armSet(double new_power)
{
	power_con = new_power;
}

void Arm::myset(string newname, string type, string description, int part_num, double weight, double cost)
{
	name = newname;
}

void Torso::myset(string newname, string type, string description, int part_num, double weight, double cost)
{

	name = newname;
}
void Head::myset(string newname, string type, string description, int part_num, double weight, double cost)
{

	name = newname;
}
void Locomoter::myset(string newname, string type, string description, int part_num, double weight, double cost)
{

	name = newname;
}
void Battery::myset(string newname, string type, string description, int part_num, double weight, double cost)
{

	name = newname;
}