#include "robot_parts.h"

void Arm::armSet(double new_power)
{
	power_con = new_power;
}

void Arm::mysetter(string name, string type, string description, int part_num, double weight, double cost)
{

}

void Torso::mysetter(string newname, string type, string description, int part_num, double weight, double cost)
{

	name = newname;
}
