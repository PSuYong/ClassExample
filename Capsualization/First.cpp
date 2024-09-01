#include<iostream>
using namespace std;

class Point {
public:
	int x;
	int y;
};

class Rectangle {
public:
	Point upleft;
	Point downright;

public:
	void showInfo() {
		cout << "좌상단 : " << '[' << upleft.x << ",";
		cout << upleft.y << ']' << endl;
		cout << "우하단 : " << '[' << downright.x << ",";
		cout << downright.y << ']' << endl;
	}
};

int main() {

	Point point1 = { 1, 5 };
	Point point2 = { 5, 2 };
	Rectangle rec = { point1,point2 };
	rec.showInfo();
	return 0;
}
