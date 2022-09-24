#include "Goods.h"
#include <iostream>
using namespace std;


void Goods::SetFirst(double value)
{
	first = value;
}

void Goods::SetSecond(int value)
{
	second = value;
}

bool Goods::Init(double x, int y)
{
	if (x > 0 && y > 0) {
		first = x;
		second = y;
		return true;
	}

	return false;

}
//}void Goods::SetFirst(double value)
//{
//	if (value>0)
//	{
//		first = value;
//	}
//	else
//	{
//		cout << "incorect input" << endl;
//		first = -1;
//	}
//}
//
//void Goods::SetSecond(int value)
//{
//	if (value > 0)
//	{
//		second = value;
//	}
//	else
//	{
//		cout << "incorect input" << endl;
//		second = -1;
//	}
//}
//
//bool Goods::Init(double x, int y)
//{
//	return (first=x)>0&&(second=y)>0;
//}

void Goods::Display() const
{
	if (first < 0 || second < 0)cout << "Incorect data" << endl;
	else cout << "first = " << first << " second = " << second << endl;
}

void Goods::Read()
{
	double x;
	int y;
	do
	{
		cout << "Input value:" << endl;
		cout << " first = "; cin >> x;
		cout << " second = "; cin >> y;
	} while (!Init(x, y));

}

double Goods::cost()
{
	if (first < 0 || second < 0) {
		cout << "Incorect data" << endl;
		return -1;
	}
	return first * second;
}