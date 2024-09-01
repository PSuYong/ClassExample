#include "point.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;

int main() {
	Point pos1;

	if(!pos1.InitMembers(-3, 5))
		cout<<"Initializaion Failed!"<<endl;

	if (!pos1.InitMembers(3, 5))
		cout << "1st Initializaion Failed!" << endl;
	Point pos2;
	if (!pos2.InitMembers(5, 9))
		cout << "Initializaion Failed!" << endl;
	Rectangle rec1;

	if (!rec1.InitMembers(pos1, pos2))
		cout << "Initializaion Failed!" << endl;
	if (!rec1.InitMembers(pos2, pos1))
		cout << "Initializaion Failed!" << endl;

	rec1.ShowRecInfo();

	return 0;
}