#include"functions.h"

double POWER(double base, int exponent)
{
	double c = 1;
	for (int i = 0; i < exponent; i++) c *= base;
	return c;
}