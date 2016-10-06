#include "robot_parts.h"
//random

void Arm::armSet(double new_power)
{
	power_con = new_power;
}

void Arm::mysetter(string newname, string type, string description, int part_num, double weight, double cost)
{
	name = newname;
}

void Torso::mysetter(string newname, string type, string description, int part_num, double weight, double cost)
{

	name = newname;
}
void Head::mysetter(string newname, string type, string description, int part_num, double weight, double cost)
{

	name = newname;
}
void Locomoter::mysetter(string newname, string type, string description, int part_num, double weight, double cost)
{

	name = newname;
}
void Battery::mysetter(string newname, string type, string description, int part_num, double weight, double cost)
{

	name = newname;
}