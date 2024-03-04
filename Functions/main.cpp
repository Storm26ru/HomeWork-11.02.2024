#include "functions.h"

void main()
{
	setlocale(LC_ALL, "");
	double base;
	int exponent;
	cout << "Введите число и показатель степени: "; cin >> base >> exponent;
	cout << POWER(base, exponent);

}

