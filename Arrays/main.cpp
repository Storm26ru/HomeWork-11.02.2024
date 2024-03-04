#include "Functions.h"
#include "Functions.cpp"


void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;// количество элементов одномерного массива
	const int SIZE1 = 3;//количество строк массива
	const int SIZE2 = 4;//количество столбцов массива
	char Array_char[SIZE];
	char Array2_char[SIZE1][SIZE2];
	int Array_in[SIZE];
	int Array2_in[SIZE1][SIZE2];
	double Array_double[SIZE];
	double Array2_double[SIZE1][SIZE2];
	Call(Array_char, SIZE);
	Call(Array2_char, SIZE1,SIZE2);
	Call(Array_in, SIZE);
	Call(Array2_in, SIZE1,SIZE2);
	Call(Array_double, SIZE);
	Call(Array2_double, SIZE1,SIZE2);
}

