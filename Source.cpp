#include"header21.h"
#include<iostream>
using namespace std;
class Point
{
	int x;
	int y;
public:
	Point()
	{
		x = y = 0;
	}
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	Point& operator=(int a)
	{
		cout <<  endl;
		x = a;
		y = a;
		return *this;
	}
	// <<
	Point& operator+(int a)
	{
		Point rez(*this);
		rez.x += a;
		rez.y += a;
		return rez;
	}
	friend ostream& operator<<(ostream& os, Point& obj);
};
ostream& operator<<(ostream& os, Point& obj)
{
	os << obj.x << " " << obj.y << "\t";
	return os;
}
int main()
{
	/*MyArray<int> arrInt(5);
	arrInt.Random();
	arrInt.Print();*/

	MyArray<Point> Myobj(3);
	Myobj.Random();
	Myobj.Print();


	MyArray<Point> Myobj1(10);
	Myobj.Random();
	Myobj.Print(); //  <<

	MyArray<Point> rez = Myobj + 5;
	rez.Print();

	MyArray<Point> rez2 = 10 + Myobj1; 
	rez2.Print();


	if (rez > rez2)
	{
		cout << "rez>rez2\n";
	}
	else
		cout << "rez<rez2\n";
}