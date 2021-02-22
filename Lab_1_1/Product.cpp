#include "Product.h"
#include <iostream>

using namespace std;

void Product::SetFirst(int value)
{
	if (value > 0)
		first = value;
	else
		first = 0;
}

void Product::SetSecond(double value)
{
	if (value > 0)
		second = value;
	else
		second = 0;
}

bool Product::Init(int k, double m)
{
	if (k > 0 && m > 0)
	{
		SetFirst(k);
		SetSecond(m);
		return true;
	}
	else
		return false;
}

void Product::Read()
{
	int k;
	double m;
	do
	{
		cout << "first  =  "; cin >> k;
		cout << "second =  "; cin >> m;
	} while (!Init(k, m));
}

void Product::Display()
{
	cout << "first  = " << first << endl;
	cout << "second = " << second << endl;
}

double Product::Power()
{
	 return first * second * 10;
}


