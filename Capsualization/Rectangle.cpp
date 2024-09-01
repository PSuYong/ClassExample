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
		cout << "좌상단 : " << '[' << upleft.GetX() << ",";
		cout << upleft.GetY() << ']' << endl;
		cout << "우하단 : " << '[' << lowright.GetX() << ",";
		cout << lowright.GetY() << ']' << endl;
}