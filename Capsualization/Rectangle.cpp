#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point &ul, const Point &lr) {
	if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY())
	{
		cout << "The Coordination is wrong!" << endl;
		return false;
	}

	upleft = ul;
	lowright = lr;
	return true;
}

void Rectangle::ShowRecInfo() const {
		cout << "�»�� : " << '[' << upleft.GetX() << ",";
		cout << upleft.GetY() << ']' << endl;
		cout << "���ϴ� : " << '[' << lowright.GetX() << ",";
		cout << lowright.GetY() << ']' << endl;
}