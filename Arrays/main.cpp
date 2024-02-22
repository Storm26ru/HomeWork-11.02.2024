#include<iostream>
using namespace std;

int sum_char; // сумма элементов в массиве типа char
int sum_char2;// сумма элементов в двумерном массиве типа char
double avg_char;// среднее-арифметическое элементов в массиве типа char
double avg_char2;//средее-арифметическое элементов в двумерном массиве типа char


template <typename t1, typename t2> void Rand(t1 Array[], t2 SIZE, t2 randmax=100); //заполняем массив произвольными числами
template <typename t1, typename t2> void Rand(t1 Array[][2], t2 SIZE1, t2 SIZE2, t2 randmax=100); //заполняем двумерный массив произвольными числами
template <typename t1, typename t2> void Print(t1 Array[], t2 SIZE); //вывод массива в консоль
template <typename t1, typename t2> void Print(t1 Array[][2], t2 SIZE1, t2 SIZE2); //вывод двумерного массива в консоль
template <typename t1, typename t2> t1 Sum(t1 Array[], t2 SIZE);//вычисление суммы элементов массива
template <typename t1, typename t2> t1 Sum(t1 Array[][2], t2 SIZE1, t2 SIZE2);//вычисление суммы элементов двумерного массива
template <typename t1, typename t2> void Sort(t1 Array[], t2 SIZE);//сортировка массива в порядке возрастания
template <typename t1, typename t2> void Sort(t1 Array[][2], t2 SIZE1, t2 SIZE2);//сортировка двумерного массива в порядке возрастания
template <typename t1, typename t2> double Avg(t1 Array[], t2 SIZE);//вычисление средее-арифметическое элементов массива
template <typename t1, typename t2> double Avg(t1 Array[][2], t2 SIZE1, t2 SIZE2);//вычисление средее-арифметическое элементов двумерного массива
template <typename t1, typename t2> t1 minValueIn(t1 Array[], t2 SIZE);//определение минимального значения в массиве
template <typename t1, typename t2> t1 minValueIn(t1 Array[][2], t2 SIZE1, t2 SIZE2);//определение минимального значения в двумерном массиве
template <typename t1, typename t2> t1 maxValueIn(t1 Array[], t2 SIZE);//определение максимального значения в массиве
template <typename t1, typename t2> t1 maxValueIn(t1 Array[][2], t2 SIZE1, t2 SIZE2);//определение максимального значения в двумерном массиве
template <typename t1, typename t2> void ShiftLeft(t1 Array[], t2 SIZE, t2 shift);//циклический сдвиг массива в лево
template <typename t1, typename t2> void ShiftLeft(t1 Array[][2], t2 SIZE1, t2 SIZE2, t2 shift);//циклический сдвиг двумерного массива в лево
template <typename t1, typename t2> void ShiftRight(t1 Array[], t2 SIZE, t2 shift);//циклический сдвиг массива в право
template <typename t1, typename t2> void ShiftRight(t1 Array[][2], t2 SIZE1, t2 SIZE2, t2 shift);//циклический сдвиг двумерного массива в право
template<typename t1, typename t2> void Call(t1 Array[], t2 SIZE);//вывод данных по массиву
template<typename t1, typename t2> void Call(t1 Array[][2], t2 SIZE1,t2 SIZE2);//вывод данных по двумерному массиву 

void main()
{
	setlocale(LC_ALL, "");
	const int SIZE = 5;// количество элементов одномерного массива
	const int SIZE1 = 2;//количество строк массива
	const int SIZE2 = 2;//количество столбцов массива
	char Array_char[SIZE];
	char Array2_char[SIZE1][SIZE2];
	int Array_in[SIZE];
	int Array2_in[SIZE1][SIZE2];
	double Array_double[SIZE];
	double Array2_double[SIZE1][SIZE2];
	Call(Array_char, SIZE);
	
}

template<typename t1, typename t2> void Call(t1 Array[], t2 SIZE)//вывод данных по массиву
{
	cout << "\nМассив с типом данных " << typeid(t1).name() << endl;
	Rand(Array, SIZE);
	Print(Array, SIZE);
	if (sizeof(t1) == sizeof(char))
	{
		Sum(Array, SIZE);
		cout << "\nСумма элементов массива " << sum_char << endl;
		Avg(Array, SIZE);
		cout << "\nСреднее-арифметическое элементов массива " << avg_char << endl;
	}
	else {
		cout << "\nСумма элементов массива " << Sum(Array, SIZE) << endl;
		cout << "\nСреднее-арифметическое элементов массива " << Avg(Array,SIZE) << endl;
	}
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
	cout << "\nЦиклический сдвиг массива в лево." << " Введите число на которое сдвинуть массив "; cin>> shift;
	ShiftLeft(Array, SIZE, shift);
	Print(Array, SIZE);
	cout << "\nЦиклический сдвиг массива в право." <<" Введите число на которое сдвинуть массив "; cin>> shift;
	ShiftRight(Array, SIZE, shift);
	Print(Array, SIZE);


}
template <typename t1, typename t2> void Rand(t1 Array[], t2 SIZE, t2 randmax)
{
	if(sizeof(t1)==sizeof(double))for (int i = 0; i < SIZE; i++) Array[i] = double(rand() % randmax)/10;
	else for(int i = 0; i < SIZE; i++) Array[i] = rand() % randmax;
}

template <typename t1, typename t2> void Rand(t1 Array[][2], t2 SIZE1, t2 SIZE2, t2 randmax)
{
	if (sizeof(t1) == sizeof(double))for (int i = 0; i < SIZE1; i++) for (int j = 0; j < SIZE2; j++) Array[i][j] = double(rand() % randmax)/10;
	else for (int i = 0; i < SIZE1; i++) for (int j = 0; j < SIZE2; j++) Array[i][j] = rand() % randmax;
}

template <typename t1, typename t2> void Print(t1 Array[], t2 SIZE)
{
	if (sizeof(t1) == sizeof(char))
	{
		for (int i = 0; i < SIZE; i++) cout <<Array[i]<<" - "<< int(Array[i]) << "\t";
	    cout << endl;
	}
	else {

	for (int i = 0; i < SIZE; i++) cout << Array[i] << "\t";
	cout << endl;
	}
}

template <typename t1, typename t2> void Print(t1 Array[][2], t2 SIZE1, t2 SIZE2)
{
	if (sizeof(t1) == sizeof(char))
	{
		for (int i = 0; i < SIZE1; i++)
		{
			cout << i + 1 << " - ";
			for (int j = 0; j < SIZE2; j++) cout << Array[i][j] << " - " << int(Array[i][j]) <<"\t";
			cout << endl;
		}
	}
	else {

		for (int i = 0; i < SIZE1; i++)
		{
			cout << i + 1 << " - ";
			for (int j = 0; j < SIZE2; j++) cout << Array[i][j] << "\t";
			cout << endl;
		}
	}
	
}

template <typename t1, typename t2> t1 Sum(t1 Array[], t2 SIZE)
{
	if (sizeof(t1) == sizeof(char))
	{
		sum_char = 0;
	    for (int i = 0; i < SIZE; i++) sum_char += Array[i];
	}
	else
	{
	t1 sum = 0;
	for (int i = 0; i < SIZE; i++) sum += Array[i];
	return sum;
	}
}

template <typename t1, typename t2> t1 Sum(t1 Array[][2], t2 SIZE1, t2 SIZE2)
{
	if (sizeof(t1) == sizeof(char))
	{
	    sum_char2 = 0;
	    for (int i = 0; i < SIZE1; i++) for (int j = 0; j < SIZE2; j++)sum_char2 += Array[i][j];
	}
	else
	{
		t1 sum = 0;
		for (int i = 0; i < SIZE1; i++) for (int j = 0; j < SIZE2; j++)sum += Array[i][j];
		return sum;
	}
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

template <typename t1, typename t2> void Sort(t1 Array[][2], t2 SIZE1, t2 SIZE2)//сортировка двумерного массива в порядке возрастания
{
	for (int index = 0, i = 0; i < SIZE1 * SIZE2; i++)
	{
		t1 min = Array[i / SIZE2][i % SIZE2]; index = i;
		for (int j = i; j < SIZE1 * SIZE2; j++) if (Array[j / SIZE2][j % SIZE2] < min) { min = Array[j / SIZE2][j % SIZE2]; index = j; }
		Array[index / SIZE2][index % SIZE2] = Array[i / SIZE2][i % SIZE2];
		Array[i / SIZE2][i % SIZE2] = min;
	}
}

template <typename t1, typename t2> double Avg(t1 Array[], t2 SIZE)
{
	if (sizeof(t1) == sizeof(char))
	{
		for (int i = 0; i < SIZE; i++) sum_char += Array[i];
		avg_char = double(sum_char) / SIZE;
	}
	else
	{
		double sum = 0;
	for (int i = 0; i < SIZE; i++) sum += Array[i];
	return sum / SIZE;
	}
}

template <typename t1, typename t2> double Avg(t1 Array[][2], t2 SIZE1, t2 SIZE2)
{
	if (sizeof(t1) == sizeof(char))
	{
		for (int i = 0; i < SIZE1; i++)
		{
			for (int j = 0; j < SIZE2; j++)sum_char2 += Array[i][j];
		}
		avg_char2 = double(sum_char2) / (SIZE1 * SIZE2);
	}
	else
	{
		double sum;
		for (int i = 0; i < SIZE1; i++)
		{
			for (int j = 0; j < SIZE2; j++)sum += Array[i][j];
		}
		return sum / (SIZE1 * SIZE2);
	}

}

template <typename t1, typename t2> t1 minValueIn(t1 Array[], t2 SIZE)//определение минимального значения в массиве
{
	t1 min = Array[0];
	for (int i = 0; i < SIZE; i++) if (Array[i] < min) min = Array[i];
	return min;
}

template <typename t1, typename t2> t1 minValueIn(t1 Array[][2], t2 SIZE1, t2 SIZE2)//определение минимального значения в двумерном массиве
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

template <typename t1, typename t2> t1 maxValueIn(t1 Array[][2], t2 SIZE1, t2 SIZE2)//определение максимального значения в двумерном массиве
{
	t1 max = Array[0][0];
	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE2; j++) if (Array[i][j] > max) max = Array[i][j];
	}
	return max;
}

template <typename t1, typename t2> void ShiftLeft(t1 Array[], t2 SIZE, t2 shift)//циклический сдвиг массива в лево
{
	for (int i = 0; i < shift; i++) {
		t1 temp = Array[0];
		for (int i = 0; i < SIZE - 1; i++) Array[i] = Array[i + 1];
		Array[SIZE - 1] = temp;
	}
}

template <typename t1, typename t2> void ShiftLeft(t1 Array[][2], t2 SIZE1, t2 SIZE2, t2 shift)//циклический сдвиг двумерного массива в лево
{
	for (int i = 0; i < shift; i++) {
		t1 temp = Array[0][0];
		for (int i = 0; i < SIZE1 * SIZE2 - 1; i++) Array[i / SIZE2][i % SIZE2] = Array[(i + 1) / SIZE2][(i + 1) % SIZE2];
		Array[SIZE1 - 1][SIZE2 - 1] = temp;
	}
}

template <typename t1, typename t2> void ShiftRight(t1 Array[], t2 SIZE, t2 shift)//циклический сдвиг массива в право
{
	for (int i = 0; i < shift; i++) {
		t1 temp = Array[SIZE - 1];
		for (int i = SIZE - 2; i >= 0; i--) Array[i + 1] = Array[i];
		Array[0] = temp;
	}
}

template <typename t1, typename t2> void ShiftRight(t1 Array[][2], t2 SIZE1, t2 SIZE2, t2 shift)//циклический сдвиг двумерного массива в право
{
	for (int i = 0; i < shift; i++) {
		t1 temp = Array[SIZE1 - 1][SIZE2 - 1];
		for (int i = SIZE1 * SIZE2 - 2; i >= 0; i--) Array[(i + 1) / SIZE2][(i + 1) % SIZE2] = Array[i / SIZE2][i % SIZE2];
		Array[0][0] = temp;
	}
}