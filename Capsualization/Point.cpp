#include<iostream>
#include "point.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos) {
	if (xpos < 0 || ypos < 0)
	{
		cout << "This parameter is wrong!" << endl;
		return false;
	}
	x = xpos;
	y = ypos;
	return true;
}

int Point::GetX() const {
	return x;
}

int Point::GetY() const {
	return y;
}

bool Point::SetX(int xpos) {
	if (xpos < 0 || xpos>100) {
		cout << "The range of parameter is wrong!" << endl;
		return false;
	}
	x = xpos;
	return true;
}

bool Point::SetY(int ypos) {
	if (ypos < 0 || ypos>100) {
		cout << "The range of parameter is wrong!" << endl;
		return false;
	}
	y = ypos;
	return true;
}
