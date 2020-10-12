// Lab_02.cpp
// <Колмикова Катерина>
// лаборатрна робота №2
// лінійні програми
// варіант 12
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a;
	//double z1;
	double z2;

	cout << "a = "; cin >> a;

	//z1 = (sin(4.0 * a) / (1 + cos(4.0 * a)) * (cos(2.0 * a)) / (1.0 + cos(2.0 * a)));
	z2 = (1.0 / (tan(((3.0 / 2.0) * 4 * atan(1.0)) - a)));

	cout << endl;
	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}