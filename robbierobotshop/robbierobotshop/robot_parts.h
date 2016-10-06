#ifndef ROBOT_PARTS_H
#define ROBOT_PARTS_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Robot
{
public:
	string name, type, description;
	int part_Num;
	double weight, cost;

	virtual void mysetter(string name, string type, string description, int part_num, double weight, double cost) = 0;
};

class Locomoter : public Robot
{
public:
	int max_speed;
	int power_consumed;
	virtual void mysetter(string name, string type, string description, int part_num, double weight, double cost);
};

class Arm : public Robot
{
public:
	void armSet(double new_power);
	double power_con;
	virtual void mysetter(string name, string type, string description, int part_num, double weight, double cost);

};

class Battery : public Robot
{
public:
	double energy, max_pow;
	virtual void mysetter(string name, string type, string description, int part_num, double weight, double cost);
};

class Head : public Robot
{
public:
	//headFunc();
	virtual void mysetter(string name, string type, string description, int part_num, double weight, double cost);
};
class Torso : public Robot
{
public:
	virtual void mysetter(string name, string type, string description, int part_num, double weight, double cost);
	int batter_comp;

};
#endif