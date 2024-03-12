#include "Functions.h"



template <typename T> void fnc::Rand(T Array[], int SIZE, int randmax)//заполняем массив произвольными числами
{
	if (sizeof(T) == sizeof(double))for (int i = 0; i < SIZE; i++) Array[i] = double(rand() % randmax) / 10;
	else for (int i = 0; i < SIZE; i++) Array[i] = rand() % randmax;
}
template void fnc::Rand (int Array[], int SIZE, int randmax);
template void fnc::Rand (double Array[], int SIZE, int randmax);
template void fnc::Rand (char Array[], int SIZE, int randmax);

template <typename T> void fnc::Rand(T Array[ROWS][COLS], int ROWS, int COLS, int randmax)//заполняем двумерный массив произвольными числами
{
	if (sizeof(T) == sizeof(double))for (int i = 0; i < ROWS; i++) for (int j = 0; j < COLS; j++) Array[i][j] = double(rand() % randmax) / 10;
	else for (int i = 0; i < ROWS; i++) for (int j = 0; j < COLS; j++) Array[i][j] = rand() % randmax;
}
template void fnc::Rand (int Array[ROWS][COLS], int ROWS, int COLS, int randmax);
template void fnc::Rand (double Array[ROWS][COLS], int ROWS, int COLS, int randmax);
template void fnc::Rand (char Array[ROWS][COLS], int ROWS, int COLS, int randmax);

template <typename T> void fnc::Print(T Array[], int SIZE)//вывод массива в консоль
{
	cout << endl;
	if (sizeof(T) == sizeof(char))
	{
		for (int i = 0; i < SIZE; i++) cout << Array[i] << " - " << int(Array[i]) << "\t";
		cout << endl;
	}
	else {

		for (int i = 0; i < SIZE; i++) cout << Array[i] << "\t";
		cout << endl;
	}
}
template void fnc::Print (int Array[], int SIZE);
template void fnc::Print (double Array[], int SIZE);
template void fnc::Print (char Array[], int SIZE);

template <typename T> void fnc::Print(T Array[ROWS][COLS], int ROWS, int COLS)//вывод двумерного массива в консоль
{
	cout << endl;
	if (sizeof(T) == sizeof(char))
	{
		for (int i = 0; i < ROWS; i++)
		{
			cout << i + 1 << ": ";
			for (int j = 0; j <COLS; j++) cout << Array[i][j] << " - " << int(Array[i][j]) << "  ";
			cout << endl;
		}
	}
	else {

		for (int i = 0; i < ROWS; i++)
		{
			cout << i + 1 << ": ";
			for (int j = 0; j < COLS; j++) cout << Array[i][j] << "  ";
			cout << endl;
		}
	}

}
template void fnc::Print (int Array[ROWS][COLS], int ROWS, int COLS);
template void fnc::Print (double Array[ROWS][COLS], int ROWS, int COLS);
template void fnc::Print (char Array[ROWS][COLS], int ROWS, int COLS);

template <typename T> double fnc::Sum(T Array[], int SIZE)//вычисление суммы элементов массива
{

		double sum = 0;
		for (int i = 0; i < SIZE; i++) sum += Array[i];
		return sum;

}
template  double fnc::Sum (int Array[], int SIZE);
template  double fnc::Sum (double Array[], int SIZE);
template  double fnc::Sum (char Array[], int SIZE);

template <typename T> double fnc::Sum(T Array[ROWS][COLS], int ROWS, int COLS)//вычисление суммы элементов двумерного массива
{
		double sum = 0;
		for (int i = 0; i < ROWS; i++) for (int j = 0; j < COLS; j++)sum += Array[i][j];
		return sum;
}
template double fnc::Sum (int Array[ROWS][COLS], int ROWS, int COLS); 
template double fnc::Sum (double Array[ROWS][COLS], int ROWS, int COLS); 
template double fnc::Sum (char Array[ROWS][COLS], int ROWS, int COLS); 

template <typename T> void fnc::Sort(T Array[], int SIZE)//сортировка массива в порядке возрастания
{
	for (int index = 0, i = 0; i < SIZE; i++)
	{
		T min = Array[i]; index = i;
		for (int j = i; j < SIZE; j++) if (Array[j] < min) { min = Array[j]; index = j; }
		Array[index] = Array[i];
		Array[i] = min;
	}
}
template void fnc::Sort (int Array[], int SIZE);
template void fnc::Sort (double Array[], int SIZE);
template void fnc::Sort (char Array[], int SIZE);

template <typename T> void fnc::Sort(T Array[ROWS][COLS], int ROWS, int COLS)//сортировка двумерного массива в порядке возрастания
{
	for (int index = 0, i = 0; i < ROWS * COLS; i++)
	{
		T min = Array[i / COLS][i % COLS]; index = i;
		for (int j = i; j < ROWS * COLS; j++) if (Array[j / COLS][j % COLS] < min) { min = Array[j / COLS][j % COLS]; index = j; }
		Array[index / COLS][index % COLS] = Array[i / COLS][i % COLS];
		Array[i / COLS][i % COLS] = min;
	}
}
template void fnc::Sort (int Array[ROWS][COLS], int ROWS, int COLS);
template void fnc::Sort (double Array[ROWS][COLS], int ROWS, int COLS);
template void fnc::Sort (char Array[ROWS][COLS], int ROWS, int COLS);

template <typename T> double fnc::Avg(T Array[], int SIZE)//вычисление средее-арифметическое элементов массива
{
	
		double sum = 0;
		for (int i = 0; i < SIZE; i++) sum += Array[i];
		return sum / SIZE;
	
}
template  double fnc::Avg (int Array[], int SIZE);
template  double fnc::Avg (double Array[], int SIZE);
template  double fnc::Avg (char Array[], int SIZE);

template <typename T> double fnc::Avg(T Array[ROWS][COLS], int ROWS, int COLS)//вычисление средее-арифметическое элементов двумерного массива
{
	
		double sum = 0;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)sum += Array[i][j];
		}
		return sum / (ROWS * COLS);
	

}
template  double fnc::Avg (int Array[ROWS][COLS], int ROWS, int COLS);
template  double fnc::Avg (double Array[ROWS][COLS], int ROWS, int COLS);
template  double fnc::Avg (char Array[ROWS][COLS], int ROWS, int COLS);

template <typename T> T fnc::minValueIn(T Array[], int SIZE)//определение минимального значения в массиве
{
	T min = Array[0];
	for (int i = 0; i < SIZE; i++) if (Array[i] < min) min = Array[i];
	return min;
}
template  int fnc::minValueIn (int Array[], int SIZE);
template  double fnc::minValueIn (double Array[], int SIZE);
template  char fnc::minValueIn (char Array[], int SIZE);

template <typename T> T fnc::minValueIn(T Array[ROWS][COLS], int ROWS, int COLS)//определение минимального значения в двумерном массиве
{
	T min = Array[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) if (Array[i][j] < min) min = Array[i][j];
	}
	return min;
}
template  int fnc::minValueIn (int Array[ROWS][COLS], int ROWS, int COLS);
template double fnc::minValueIn (double Array[ROWS][COLS], int ROWS, int COLS);
template char fnc::minValueIn (char Array[ROWS][COLS], int ROWS, int COLS);

template <typename T> T fnc::maxValueIn(T Array[], int SIZE)//определение максимального значения в массиве
{
	T max = Array[0];
	for (int i = 0; i < SIZE; i++) if (Array[i] > max) max = Array[i];
	return max;
}
template int fnc::maxValueIn (int Array[], int SIZE);
template double fnc::maxValueIn (double Array[], int SIZE);
template char fnc::maxValueIn (char Array[], int SIZE);

template <typename T> T fnc::maxValueIn(T Array[ROWS][COLS], int ROWS, int COLS)//определение максимального значения в двумерном массиве
{
	T max = Array[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) if (Array[i][j] > max) max = Array[i][j];
	}
	return max;
}
template  int fnc::maxValueIn (int Array[ROWS][COLS], int ROWS, int COLS);
template  double fnc::maxValueIn (double Array[ROWS][COLS], int ROWS, int COLS);
template  char fnc::maxValueIn (char Array[ROWS][COLS], int ROWS, int COLS);

template <typename T> void fnc::ShiftLeft(T Array[], int SIZE, int shift)//циклический сдвиг массива влево
{
	for (int i = 0; i < shift; i++) {
		T temp = Array[0];
		for (int i = 0; i < SIZE - 1; i++) Array[i] = Array[i + 1];
		Array[SIZE - 1] = temp;
	}
}
template void fnc::ShiftLeft (int Array[], int SIZE, int shift);
template void fnc::ShiftLeft (double Array[], int SIZE, int shift);
template void fnc::ShiftLeft (char Array[], int SIZE, int shift);

template <typename T> void fnc::ShiftLeft(T Array[ROWS][COLS], int ROWS, int COLS, int shift)//циклический сдвиг двумерного массива влево
{
	for (int i = 0; i < shift; i++) {
		T temp = Array[0][0];
		for (int i = 0; i < ROWS * COLS - 1; i++) Array[i / COLS][i % COLS] = Array[(i + 1) / COLS][(i + 1) % COLS];
		Array[ROWS - 1][COLS - 1] = temp;
	}
}
template  void fnc::ShiftLeft (int Array[ROWS][COLS], int ROWS, int COLS, int shift);
template  void fnc::ShiftLeft (double Array[ROWS][COLS], int ROWS, int COLS, int shift);
template  void fnc::ShiftLeft (char Array[ROWS][COLS], int ROWS, int COLS, int shift);

template <typename T> void fnc::ShiftRight(T Array[], int SIZE, int shift)//циклический сдвиг массива вправо
{
	for (int i = 0; i < shift; i++) {
		T temp = Array[SIZE - 1];
		for (int i = SIZE - 2; i >= 0; i--) Array[i + 1] = Array[i];
		Array[0] = temp;
	}
}
template void fnc::ShiftRight (int Array[], int SIZE, int shift);
template void fnc::ShiftRight (double Array[], int SIZE, int shift);
template void fnc::ShiftRight (char Array[], int SIZE, int shift);

template <typename T> void fnc::ShiftRight(T Array[ROWS][COLS], int ROWS, int COLS, int shift)//циклический сдвиг двумерного массива вправо
{
	for (int i = 0; i < shift; i++) {
		T temp = Array[ROWS - 1][COLS - 1];
		for (int i = ROWS * COLS - 2; i >= 0; i--) Array[(i + 1) / COLS][(i + 1) % COLS] = Array[i / COLS][i % COLS];
		Array[0][0] = temp;
	}
}
template void fnc::ShiftRight (int Array[ROWS][COLS], int ROWS, int COLS, int shift);
template void fnc::ShiftRight (double Array[ROWS][COLS], int ROWS, int COLS, int shift);
template void fnc::ShiftRight (char Array[ROWS][COLS], int ROWS, int COLS, int shift);

template<typename T> void fnc::Call(T Array[], int SIZE)//вывод данных по массиву
{
	cout << "\nМассив с типом данных " << typeid(T).name() << endl;
	Rand(Array, SIZE);
	Print(Array, SIZE);
	cout << "\nСумма элементов массива " << Sum(Array, SIZE) << endl;
	cout << "\nСреднее-арифметическое элементов массива " << Avg(Array, SIZE) << endl;
	cout << "\nСортировка массива в порядке возрастания: " << endl;
	Sort(Array, SIZE);
	Print(Array, SIZE);
	if (sizeof(T) == sizeof(char))
	{
		cout << "\nМинимальное значение в массиве " << int(minValueIn(Array, SIZE)) << endl;
		cout << "\nМаксимальное значение в массиве " << int(maxValueIn(Array, SIZE)) << endl;
	}
	else
	{
		cout << "\nМинимальное значение в массиве " << minValueIn(Array, SIZE) << endl;
		cout << "\nМаксимальное значение в массиве " << maxValueIn(Array, SIZE) << endl;
	}
	int shift;
	cout << "\nЦиклический сдвиг массива влево." << " Введите число на которое сдвинуть массив "; cin >> shift;
	ShiftLeft(Array, SIZE, shift);
	Print(Array, SIZE);
	cout << "\nЦиклический сдвиг массива вправо." << " Введите число на которое сдвинуть массив "; cin >> shift;
	ShiftRight(Array, SIZE, shift);
	Print(Array, SIZE);
	cout << "\t\t\t___________________________" << endl;

}
template void fnc::Call (int Array[], int SIZE);
template void fnc::Call (double Array[], int SIZE);
template void fnc::Call (char Array[], int SIZE);

template<typename T> void fnc::Call(T Array[ROWS][COLS], int ROWS, int COLS)//вывод данных по двумерному массиву
{
	cout << "\nДвумерный массив с типом данных " << typeid(T).name() << endl;
	Rand(Array, ROWS, COLS);
	Print(Array, ROWS, COLS);
	cout << "\nСумма элементов массива " << Sum(Array, ROWS, COLS) << endl;
	cout << "\nСреднее-арифметическое элементов массива " << Avg(Array, ROWS, COLS) << endl;
	cout << "\nСортировка массива в порядке возрастания: " << endl;
	Sort(Array, ROWS, COLS);
	Print(Array, ROWS, COLS);
	if (sizeof(T) == sizeof(char))
	{
		cout << "\nМинимальное значение в массиве " << int(minValueIn(Array, ROWS, COLS)) << endl;
		cout << "\nМаксимальное значение в массиве " << int(maxValueIn(Array, ROWS, COLS)) << endl;
	}
	else
	{
		cout << "\nМинимальное значение в массиве " << minValueIn(Array, ROWS, COLS) << endl;
		cout << "\nМаксимальное значение в массиве " << maxValueIn(Array, ROWS, COLS) << endl;
	}
	int shift;
	cout << "\nЦиклический сдвиг массива влево." << " Введите число на которое сдвинуть массив "; cin >> shift;
	ShiftLeft(Array, ROWS, COLS, shift);
	Print(Array, ROWS, COLS);
	cout << "\nЦиклический сдвиг массива вправо." << " Введите число на которое сдвинуть массив "; cin >> shift;
	ShiftRight(Array, ROWS, COLS, shift);
	Print(Array, ROWS, COLS);
	cout << "\t\t\t___________________________" << endl;
}
template void fnc::Call (int Array[ROWS][COLS], int ROWS, int COLS);
template void fnc::Call (double Array[ROWS][COLS], int ROWS, int COLS);
template void fnc::Call (char Array[ROWS][COLS], int ROWS, int COLS);