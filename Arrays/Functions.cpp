#include "Functions.h"


template <typename t1, typename t2> void Rand(t1 Array[], t2 SIZE, t2 randmax)//заполняем массив произвольными числами
{
	if (sizeof(t1) == sizeof(double))for (int i = 0; i < SIZE; i++) Array[i] = double(rand() % randmax) / 10;
	else for (int i = 0; i < SIZE; i++) Array[i] = rand() % randmax;
}

template <typename t1, typename t2> void Rand(t1 Array[][4], t2 SIZE1, t2 SIZE2, t2 randmax)//заполняем двумерный массив произвольными числами
{
	if (sizeof(t1) == sizeof(double))for (int i = 0; i < SIZE1; i++) for (int j = 0; j < SIZE2; j++) Array[i][j] = double(rand() % randmax) / 10;
	else for (int i = 0; i < SIZE1; i++) for (int j = 0; j < SIZE2; j++) Array[i][j] = rand() % randmax;
}

template <typename t1, typename t2> void Print(t1 Array[], t2 SIZE)//вывод массива в консоль
{
	cout << endl;
	if (sizeof(t1) == sizeof(char))
	{
		for (int i = 0; i < SIZE; i++) cout << Array[i] << " - " << int(Array[i]) << "\t";
		cout << endl;
	}
	else {

		for (int i = 0; i < SIZE; i++) cout << Array[i] << "\t";
		cout << endl;
	}
}

template <typename t1, typename t2> void Print(t1 Array[][4], t2 SIZE1, t2 SIZE2)//вывод двумерного массива в консоль
{
	cout << endl;
	if (sizeof(t1) == sizeof(char))
	{
		for (int i = 0; i < SIZE1; i++)
		{
			cout << i + 1 << ": ";
			for (int j = 0; j < SIZE2; j++) cout << Array[i][j] << " - " << int(Array[i][j]) << "  ";
			cout << endl;
		}
	}
	else {

		for (int i = 0; i < SIZE1; i++)
		{
			cout << i + 1 << ": ";
			for (int j = 0; j < SIZE2; j++) cout << Array[i][j] << "  ";
			cout << endl;
		}
	}

}

template <typename t1, typename t2> double Sum(t1 Array[], t2 SIZE)//вычисление суммы элементов массива
{
//	if (sizeof(t1) == sizeof(char))
	//{
		// int sum_char = 0;
		//for (int i = 0; i < SIZE; i++) sum_char += Array[i];
	//}
	//else
	//{
		double sum = 0;
		for (int i = 0; i < SIZE; i++) sum += Array[i];
		return sum;
	//}
}

template <typename t1, typename t2> double Sum(t1 Array[][4], t2 SIZE1, t2 SIZE2)//вычисление суммы элементов двумерного массива
{
	//if (sizeof(t1) == sizeof(char))
	//{
	//	int sum_char2 = 0;
	//	for (int i = 0; i < SIZE1; i++) for (int j = 0; j < SIZE2; j++)sum_char2 += Array[i][j];
	//}
	//else
	//{
		double sum = 0;
		for (int i = 0; i < SIZE1; i++) for (int j = 0; j < SIZE2; j++)sum += Array[i][j];
		return sum;
	//}
}

template <typename t1, typename t2> void Sort(t1 Array[], t2 SIZE)//сортировка массива в порядке возрастания
{
	for (int index = 0, i = 0; i < SIZE; i++)
	{
		t1 min = Array[i]; index = i;
		for (int j = i; j < SIZE; j++) if (Array[j] < min) { min = Array[j]; index = j; }
		Array[index] = Array[i];
		Array[i] = min;
	}
}

template <typename t1, typename t2> void Sort(t1 Array[][4], t2 SIZE1, t2 SIZE2)//сортировка двумерного массива в порядке возрастания
{
	for (int index = 0, i = 0; i < SIZE1 * SIZE2; i++)
	{
		t1 min = Array[i / SIZE2][i % SIZE2]; index = i;
		for (int j = i; j < SIZE1 * SIZE2; j++) if (Array[j / SIZE2][j % SIZE2] < min) { min = Array[j / SIZE2][j % SIZE2]; index = j; }
		Array[index / SIZE2][index % SIZE2] = Array[i / SIZE2][i % SIZE2];
		Array[i / SIZE2][i % SIZE2] = min;
	}
}

template <typename t1, typename t2> double Avg(t1 Array[], t2 SIZE)//вычисление средее-арифметическое элементов массива
{
	//if (sizeof(t1) == sizeof(char))
//	{
	//	for (int i = 0; i < SIZE; i++) sum_char += Array[i];
	//	double avg_char = double(sum_char) / SIZE;
	//}
//	else
	//{
		double sum = 0;
		for (int i = 0; i < SIZE; i++) sum += Array[i];
		return sum / SIZE;
	//}
}

template <typename t1, typename t2> double Avg(t1 Array[][4], t2 SIZE1, t2 SIZE2)//вычисление средее-арифметическое элементов двумерного массива
{
	//if (sizeof(t1) == sizeof(char))
	//{
	//	for (int i = 0; i < SIZE1; i++)
	//	{
	//		for (int j = 0; j < SIZE2; j++)sum_char2 += Array[i][j];
	//	}
	//	double avg_char2 = double(sum_char2) / (SIZE1 * SIZE2);
	//}
	//else
	//{
		double sum = 0;
		for (int i = 0; i < SIZE1; i++)
		{
			for (int j = 0; j < SIZE2; j++)sum += Array[i][j];
		}
		return sum / (SIZE1 * SIZE2);
	//}

}

template <typename t1, typename t2> t1 minValueIn(t1 Array[], t2 SIZE)//определение минимального значения в массиве
{
	t1 min = Array[0];
	for (int i = 0; i < SIZE; i++) if (Array[i] < min) min = Array[i];
	return min;
}

template <typename t1, typename t2> t1 minValueIn(t1 Array[][4], t2 SIZE1, t2 SIZE2)//определение минимального значения в двумерном массиве
{
	t1 min = Array[0][0];
	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE2; j++) if (Array[i][j] < min) min = Array[i][j];
	}
	return min;
}

template <typename t1, typename t2> t1 maxValueIn(t1 Array[], t2 SIZE)//определение максимального значения в массиве
{
	t1 max = Array[0];
	for (int i = 0; i < SIZE; i++) if (Array[i] > max) max = Array[i];
	return max;
}

template <typename t1, typename t2> t1 maxValueIn(t1 Array[][4], t2 SIZE1, t2 SIZE2)//определение максимального значения в двумерном массиве
{
	t1 max = Array[0][0];
	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE2; j++) if (Array[i][j] > max) max = Array[i][j];
	}
	return max;
}

template <typename t1, typename t2> void ShiftLeft(t1 Array[], t2 SIZE, t2 shift)//циклический сдвиг массива влево
{
	for (int i = 0; i < shift; i++) {
		t1 temp = Array[0];
		for (int i = 0; i < SIZE - 1; i++) Array[i] = Array[i + 1];
		Array[SIZE - 1] = temp;
	}
}

template <typename t1, typename t2> void ShiftLeft(t1 Array[][4], t2 SIZE1, t2 SIZE2, t2 shift)//циклический сдвиг двумерного массива влево
{
	for (int i = 0; i < shift; i++) {
		t1 temp = Array[0][0];
		for (int i = 0; i < SIZE1 * SIZE2 - 1; i++) Array[i / SIZE2][i % SIZE2] = Array[(i + 1) / SIZE2][(i + 1) % SIZE2];
		Array[SIZE1 - 1][SIZE2 - 1] = temp;
	}
}

template <typename t1, typename t2> void ShiftRight(t1 Array[], t2 SIZE, t2 shift)//циклический сдвиг массива вправо
{
	for (int i = 0; i < shift; i++) {
		t1 temp = Array[SIZE - 1];
		for (int i = SIZE - 2; i >= 0; i--) Array[i + 1] = Array[i];
		Array[0] = temp;
	}
}

template <typename t1, typename t2> void ShiftRight(t1 Array[][4], t2 SIZE1, t2 SIZE2, t2 shift)//циклический сдвиг двумерного массива вправо
{
	for (int i = 0; i < shift; i++) {
		t1 temp = Array[SIZE1 - 1][SIZE2 - 1];
		for (int i = SIZE1 * SIZE2 - 2; i >= 0; i--) Array[(i + 1) / SIZE2][(i + 1) % SIZE2] = Array[i / SIZE2][i % SIZE2];
		Array[0][0] = temp;
	}
}

template<typename t1, typename t2> void Call(t1 Array[], t2 SIZE)//вывод данных по массиву
{
	cout << "\nМассив с типом данных " << typeid(t1).name() << endl;
	Rand(Array, SIZE);
	Print(Array, SIZE);
	//if (sizeof(t1) == sizeof(char))
	//{
		//Sum(Array, SIZE);
		//cout << "\nСумма элементов массива " << sum_char << endl;
		//Avg(Array, SIZE);
		//cout << "\nСреднее-арифметическое элементов массива " << avg_char << endl;
//	}
	//else {
		cout << "\nСумма элементов массива " << Sum(Array, SIZE) << endl;
		cout << "\nСреднее-арифметическое элементов массива " << Avg(Array, SIZE) << endl;
	//}
	cout << "\nСортировка массива в порядке возрастания: " << endl;
	Sort(Array, SIZE);
	Print(Array, SIZE);
	if (sizeof(t1) == sizeof(char))
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

template<typename t1, typename t2> void Call(t1 Array[][4], t2 SIZE1, t2 SIZE2)//вывод данных по двумерному массиву
{
	cout << "\nДвумерный массив с типом данных " << typeid(t1).name() << endl;
	Rand(Array, SIZE1, SIZE2);
	Print(Array, SIZE1, SIZE2);
	//if (sizeof(t1) == sizeof(char))
	//{
	//	Sum(Array, SIZE1, SIZE2);
	//	//cout << "\nСумма элементов массива " << sum_char2 << endl;
	//	Avg(Array, SIZE1, SIZE2);
	//	//cout << "\nСреднее-арифметическое элементов массива " << avg_char2 << endl;
//	}
	//else {
		cout << "\nСумма элементов массива " << Sum(Array, SIZE1, SIZE2) << endl;
		cout << "\nСреднее-арифметическое элементов массива " << Avg(Array, SIZE1, SIZE2) << endl;
	//}
	cout << "\nСортировка массива в порядке возрастания: " << endl;
	Sort(Array, SIZE1, SIZE2);
	Print(Array, SIZE1, SIZE2);
	if (sizeof(t1) == sizeof(char))
	{
		cout << "\nМинимальное значение в массиве " << int(minValueIn(Array, SIZE1, SIZE2)) << endl;
		cout << "\nМаксимальное значение в массиве " << int(maxValueIn(Array, SIZE1, SIZE2)) << endl;
	}
	else
	{
		cout << "\nМинимальное значение в массиве " << minValueIn(Array, SIZE1, SIZE2) << endl;
		cout << "\nМаксимальное значение в массиве " << maxValueIn(Array, SIZE1, SIZE2) << endl;
	}
	int shift;
	cout << "\nЦиклический сдвиг массива влево." << " Введите число на которое сдвинуть массив "; cin >> shift;
	ShiftLeft(Array, SIZE1, SIZE2, shift);
	Print(Array, SIZE1, SIZE2);
	cout << "\nЦиклический сдвиг массива вправо." << " Введите число на которое сдвинуть массив "; cin >> shift;
	ShiftRight(Array, SIZE1, SIZE2, shift);
	Print(Array, SIZE1, SIZE2);
	cout << "\t\t\t___________________________" << endl;
}