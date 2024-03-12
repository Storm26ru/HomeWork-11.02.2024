#include "Functions.h"
using namespace fnc;

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;// количество элементов одномерного массива
	char Array_char[SIZE];
	char Array2_char[ROWS][COLS];
	int Array_in[SIZE];
	int Array2_in[ROWS][COLS];
	double Array_double[SIZE];
	double Array2_double[ROWS][COLS];
	Call(Array_char, SIZE);
	Call(Array2_char, ROWS, COLS);
	Call(Array_in, SIZE);
	Call(Array2_in, ROWS, COLS);
	Call(Array_double, SIZE);
	Call(Array2_double, ROWS, COLS);
}