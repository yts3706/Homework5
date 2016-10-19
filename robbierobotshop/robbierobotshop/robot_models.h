#pragma once
#ifndef ROBOT_MODELS_H
#define ROBOT_MODELS_H
#include <string>
#include <iostream>
#include <vector>
#include "robot_parts.h"

using namespace std;

class robotModel
{
public:
	string name;
	int model_num;
	double price;
	vector<Robot*> parts;

	
};

#endif // !
