#include "Functions.h"



template <typename T> void fnc::Rand(T Array[], int SIZE, int randmax)//��������� ������ ������������� �������
{
	if (sizeof(T) == sizeof(double))for (int i = 0; i < SIZE; i++) Array[i] = double(rand() % randmax) / 10;
	else for (int i = 0; i < SIZE; i++) Array[i] = rand() % randmax;
}
template void fnc::Rand <int> (int Array[], int SIZE, int randmax);
template void fnc::Rand <double> (double Array[], int SIZE, int randmax);
template void fnc::Rand <char> (char Array[], int SIZE, int randmax);

template <typename T> void fnc::Rand(T Array[ROWS][COLS], int ROWS, int COLS, int randmax)//��������� ��������� ������ ������������� �������
{
	if (sizeof(T) == sizeof(double))for (int i = 0; i < ROWS; i++) for (int j = 0; j < COLS; j++) Array[i][j] = double(rand() % randmax) / 10;
	else for (int i = 0; i < ROWS; i++) for (int j = 0; j < COLS; j++) Array[i][j] = rand() % randmax;
}
template void fnc::Rand <int>(int Array[ROWS][COLS], int ROWS, int COLS, int randmax);
template void fnc::Rand <double>(double Array[ROWS][COLS], int ROWS, int COLS, int randmax);
template void fnc::Rand <char>(char Array[ROWS][COLS], int ROWS, int COLS, int randmax);

template <typename T> void fnc::Print(T Array[], int SIZE)//����� ������� � �������
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
template void fnc::Print<int>(int Array[], int SIZE);
template void fnc::Print<double>(double Array[], int SIZE);
template void fnc::Print<char>(char Array[], int SIZE);

template <typename T> void fnc::Print(T Array[ROWS][COLS], int ROWS, int COLS)//����� ���������� ������� � �������
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
template void fnc::Print<int>(int Array[ROWS][COLS], int ROWS, int COLS);
template void fnc::Print<double>(double Array[ROWS][COLS], int ROWS, int COLS);
template void fnc::Print<char>(char Array[ROWS][COLS], int ROWS, int COLS);

template <typename T> double fnc::Sum(T Array[], int SIZE)//���������� ����� ��������� �������
{

		double sum = 0;
		for (int i = 0; i < SIZE; i++) sum += Array[i];
		return sum;

}
template  double fnc::Sum <int>(int Array[], int SIZE);
template  double fnc::Sum <double>(double Array[], int SIZE);
template  double fnc::Sum <char>(char Array[], int SIZE);

template <typename T> double fnc::Sum(T Array[ROWS][COLS], int ROWS, int COLS)//���������� ����� ��������� ���������� �������
{
		double sum = 0;
		for (int i = 0; i < ROWS; i++) for (int j = 0; j < COLS; j++)sum += Array[i][j];
		return sum;
}
template double fnc::Sum <int>(int Array[ROWS][COLS], int ROWS, int COLS); 
template double fnc::Sum <double>(double Array[ROWS][COLS], int ROWS, int COLS); 
template double fnc::Sum <char>(char Array[ROWS][COLS], int ROWS, int COLS); 

template <typename T> void fnc::Sort(T Array[], int SIZE)//���������� ������� � ������� �����������
{
	for (int index = 0, i = 0; i < SIZE; i++)
	{
		T min = Array[i]; index = i;
		for (int j = i; j < SIZE; j++) if (Array[j] < min) { min = Array[j]; index = j; }
		Array[index] = Array[i];
		Array[i] = min;
	}
}
template void fnc::Sort <int>(int Array[], int SIZE);
template void fnc::Sort <double>(double Array[], int SIZE);
template void fnc::Sort <char>(char Array[], int SIZE);

template <typename T> void fnc::Sort(T Array[ROWS][COLS], int ROWS, int COLS)//���������� ���������� ������� � ������� �����������
{
	for (int index = 0, i = 0; i < ROWS * COLS; i++)
	{
		T min = Array[i / COLS][i % COLS]; index = i;
		for (int j = i; j < ROWS * COLS; j++) if (Array[j / COLS][j % COLS] < min) { min = Array[j / COLS][j % COLS]; index = j; }
		Array[index / COLS][index % COLS] = Array[i / COLS][i % COLS];
		Array[i / COLS][i % COLS] = min;
	}
}
template void fnc::Sort<int>(int Array[ROWS][COLS], int ROWS, int COLS);
template void fnc::Sort < double > (double Array[ROWS][COLS], int ROWS, int COLS);
template void fnc::Sort < char > (char Array[ROWS][COLS], int ROWS, int COLS);

template <typename T> double fnc::Avg(T Array[], int SIZE)//���������� ������-�������������� ��������� �������
{
	
		double sum = 0;
		for (int i = 0; i < SIZE; i++) sum += Array[i];
		return sum / SIZE;
	
}
template  double fnc::Avg<int>(int Array[], int SIZE);
template  double fnc::Avg<double>(double Array[], int SIZE);
template  double fnc::Avg<char>(char Array[], int SIZE);

template <typename T> double fnc::Avg(T Array[ROWS][COLS], int ROWS, int COLS)//���������� ������-�������������� ��������� ���������� �������
{
	
		double sum = 0;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)sum += Array[i][j];
		}
		return sum / (ROWS * COLS);
	

}
template  double fnc::Avg <int>(int Array[ROWS][COLS], int ROWS, int COLS);
template  double fnc::Avg <double>(double Array[ROWS][COLS], int ROWS, int COLS);
template  double fnc::Avg <char>(char Array[ROWS][COLS], int ROWS, int COLS);

template <typename T> T fnc::minValueIn(T Array[], int SIZE)//����������� ������������ �������� � �������
{
	T min = Array[0];
	for (int i = 0; i < SIZE; i++) if (Array[i] < min) min = Array[i];
	return min;
}
template  int fnc::minValueIn <int>(int Array[], int SIZE);
template  double fnc::minValueIn <double>(double Array[], int SIZE);
template  char fnc::minValueIn <char>(char Array[], int SIZE);

template <typename T> T fnc::minValueIn(T Array[ROWS][COLS], int ROWS, int COLS)//����������� ������������ �������� � ��������� �������
{
	T min = Array[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) if (Array[i][j] < min) min = Array[i][j];
	}
	return min;
}
template  int fnc::minValueIn<int>(int Array[ROWS][COLS], int ROWS, int COLS);
template double fnc::minValueIn<double>(double Array[ROWS][COLS], int ROWS, int COLS);
template char fnc::minValueIn<char>(char Array[ROWS][COLS], int ROWS, int COLS);

template <typename T> T fnc::maxValueIn(T Array[], int SIZE)//����������� ������������� �������� � �������
{
	T max = Array[0];
	for (int i = 0; i < SIZE; i++) if (Array[i] > max) max = Array[i];
	return max;
}
template int fnc::maxValueIn <int>(int Array[], int SIZE);
template double fnc::maxValueIn <double>(double Array[], int SIZE);
template char fnc::maxValueIn <char>(char Array[], int SIZE);

template <typename T> T fnc::maxValueIn(T Array[ROWS][COLS], int ROWS, int COLS)//����������� ������������� �������� � ��������� �������
{
	T max = Array[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++) if (Array[i][j] > max) max = Array[i][j];
	}
	return max;
}
template  int fnc::maxValueIn <int>(int Array[ROWS][COLS], int ROWS, int COLS);
template  double fnc::maxValueIn <double>(double Array[ROWS][COLS], int ROWS, int COLS);
template  char fnc::maxValueIn <char>(char Array[ROWS][COLS], int ROWS, int COLS);

template <typename T> void fnc::ShiftLeft(T Array[], int SIZE, int shift)//����������� ����� ������� �����
{
	for (int i = 0; i < shift; i++) {
		T temp = Array[0];
		for (int i = 0; i < SIZE - 1; i++) Array[i] = Array[i + 1];
		Array[SIZE - 1] = temp;
	}
}
template void fnc::ShiftLeft <int>(int Array[], int SIZE, int shift);
template void fnc::ShiftLeft <double>(double Array[], int SIZE, int shift);
template void fnc::ShiftLeft <char>(char Array[], int SIZE, int shift);

template <typename T> void fnc::ShiftLeft(T Array[ROWS][COLS], int ROWS, int COLS, int shift)//����������� ����� ���������� ������� �����
{
	for (int i = 0; i < shift; i++) {
		T temp = Array[0][0];
		for (int i = 0; i < ROWS * COLS - 1; i++) Array[i / COLS][i % COLS] = Array[(i + 1) / COLS][(i + 1) % COLS];
		Array[ROWS - 1][COLS - 1] = temp;
	}
}
template  void fnc::ShiftLeft<int>(int Array[ROWS][COLS], int ROWS, int COLS, int shift);
template  void fnc::ShiftLeft<double>(double Array[ROWS][COLS], int ROWS, int COLS, int shift);
template  void fnc::ShiftLeft<char>(char Array[ROWS][COLS], int ROWS, int COLS, int shift);

template <typename T> void fnc::ShiftRight(T Array[], int SIZE, int shift)//����������� ����� ������� ������
{
	for (int i = 0; i < shift; i++) {
		T temp = Array[SIZE - 1];
		for (int i = SIZE - 2; i >= 0; i--) Array[i + 1] = Array[i];
		Array[0] = temp;
	}
}
template void fnc::ShiftRight <int>(int Array[], int SIZE, int shift);
template void fnc::ShiftRight <double>(double Array[], int SIZE, int shift);
template void fnc::ShiftRight <char>(char Array[], int SIZE, int shift);

template <typename T> void fnc::ShiftRight(T Array[ROWS][COLS], int ROWS, int COLS, int shift)//����������� ����� ���������� ������� ������
{
	for (int i = 0; i < shift; i++) {
		T temp = Array[ROWS - 1][COLS - 1];
		for (int i = ROWS * COLS - 2; i >= 0; i--) Array[(i + 1) / COLS][(i + 1) % COLS] = Array[i / COLS][i % COLS];
		Array[0][0] = temp;
	}
}
template void fnc::ShiftRight <int>(int Array[ROWS][COLS], int ROWS, int COLS, int shift);
template void fnc::ShiftRight <double>(double Array[ROWS][COLS], int ROWS, int COLS, int shift);
template void fnc::ShiftRight <char>(char Array[ROWS][COLS], int ROWS, int COLS, int shift);

template<typename T> void fnc::Call(T Array[], int SIZE)//����� ������ �� �������
{
	cout << "\n������ � ����� ������ " << typeid(T).name() << endl;
	Rand(Array, SIZE);
	Print(Array, SIZE);
	cout << "\n����� ��������� ������� " << Sum(Array, SIZE) << endl;
	cout << "\n�������-�������������� ��������� ������� " << Avg(Array, SIZE) << endl;
	cout << "\n���������� ������� � ������� �����������: " << endl;
	Sort(Array, SIZE);
	Print(Array, SIZE);
	if (sizeof(T) == sizeof(char))
	{
		cout << "\n����������� �������� � ������� " << int(minValueIn(Array, SIZE)) << endl;
		cout << "\n������������ �������� � ������� " << int(maxValueIn(Array, SIZE)) << endl;
	}
	else
	{
		cout << "\n����������� �������� � ������� " << minValueIn(Array, SIZE) << endl;
		cout << "\n������������ �������� � ������� " << maxValueIn(Array, SIZE) << endl;
	}
	int shift;
	cout << "\n����������� ����� ������� �����." << " ������� ����� �� ������� �������� ������ "; cin >> shift;
	ShiftLeft(Array, SIZE, shift);
	Print(Array, SIZE);
	cout << "\n����������� ����� ������� ������." << " ������� ����� �� ������� �������� ������ "; cin >> shift;
	ShiftRight(Array, SIZE, shift);
	Print(Array, SIZE);
	cout << "\t\t\t___________________________" << endl;

}
template void fnc::Call <int>(int Array[], int SIZE);
template void fnc::Call <double>(double Array[], int SIZE);
template void fnc::Call <char>(char Array[], int SIZE);

template<typename T> void fnc::Call(T Array[ROWS][COLS], int ROWS, int COLS)//����� ������ �� ���������� �������
{
	cout << "\n��������� ������ � ����� ������ " << typeid(T).name() << endl;
	Rand(Array, ROWS, COLS);
	Print(Array, ROWS, COLS);
	cout << "\n����� ��������� ������� " << Sum(Array, ROWS, COLS) << endl;
	cout << "\n�������-�������������� ��������� ������� " << Avg(Array, ROWS, COLS) << endl;
	cout << "\n���������� ������� � ������� �����������: " << endl;
	Sort(Array, ROWS, COLS);
	Print(Array, ROWS, COLS);
	if (sizeof(T) == sizeof(char))
	{
		cout << "\n����������� �������� � ������� " << int(minValueIn(Array, ROWS, COLS)) << endl;
		cout << "\n������������ �������� � ������� " << int(maxValueIn(Array, ROWS, COLS)) << endl;
	}
	else
	{
		cout << "\n����������� �������� � ������� " << minValueIn(Array, ROWS, COLS) << endl;
		cout << "\n������������ �������� � ������� " << maxValueIn(Array, ROWS, COLS) << endl;
	}
	int shift;
	cout << "\n����������� ����� ������� �����." << " ������� ����� �� ������� �������� ������ "; cin >> shift;
	ShiftLeft(Array, ROWS, COLS, shift);
	Print(Array, ROWS, COLS);
	cout << "\n����������� ����� ������� ������." << " ������� ����� �� ������� �������� ������ "; cin >> shift;
	ShiftRight(Array, ROWS, COLS, shift);
	Print(Array, ROWS, COLS);
	cout << "\t\t\t___________________________" << endl;
}
template void fnc::Call <int>(int Array[ROWS][COLS], int ROWS, int COLS);
template void fnc::Call <double>(double Array[ROWS][COLS], int ROWS, int COLS);
template void fnc::Call <char>(char Array[ROWS][COLS], int ROWS, int COLS);