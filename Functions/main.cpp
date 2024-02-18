#include<iostream>
using namespace std;

double POWER(double base, int exponent);

void main()
{
	setlocale(LC_ALL, "");
	double base;
	int exponent;
	cout << "¬ведите число и показатель степени: "; cin >> base >> exponent;
	cout << POWER(base, exponent);

}

double POWER(double base, int exponent)
{
	double c =1;
	for (int i = 0; i < exponent; i++) c *= base;
	return c;
}