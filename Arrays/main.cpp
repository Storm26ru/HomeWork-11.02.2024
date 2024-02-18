#include<iostream>
using namespace std;


template <typename t1,typename t2> void Rand(t1 Array[], t2 SIZE, t2 randmax); //��������� ������ ������������� �������
template <typename t1,typename t2> void Rand(t1 Array[][2], t2 SIZE1,t2 SIZE2, t2 randmax); //��������� ��������� ������ ������������� �������
template <typename t1,typename t2> void Print(t1 Array[], t2 SIZE); //����� ������� � �������
template <typename t1,typename t2> void Print(t1 Array[][2], t2 SIZE1,t2 SIZE2); //����� ���������� ������� � �������
template <typename t1, typename t2> t1 Sum(t1 Array[], t2 SIZE,t1 sum =0);//���������� ����� ��������� �������
template <typename t1, typename t2> t1 Sum(t1 Array[][2], t2 SIZE1,t2 SIZE2,t1 sum =0);//���������� ����� ��������� ���������� �������
int Sum(char Array[], int SIZE1,int sum =0);//���������� ����� ��������� ������� � ����� ������ char
template <typename t1, typename t2> double Avg(t1 Array[], t2 SIZE,double sum =0);//���������� ������-�������������� ��������� �������
template <typename t1, typename t2> double Avg(t1 Array[][2], t2 SIZE1,t2 SIZE2, double sum =0);//���������� ������-�������������� ��������� �������
template <typename t1, typename t2> t1 minValueIn(t1 Array[], t2 SIZE,t1 min =0);//����������� ������������ �������� � �������
template <typename t1, typename t2> t1 minValueIn(t1 Array[][2], t2 SIZE1,t2 SIZE2,t1 min =0);//����������� ������������ �������� � ��������� �������
template <typename t1, typename t2> t1 maxValueIn(t1 Array[], t2 SIZE,t1 max =0);//����������� ������������� �������� � �������
template <typename t1, typename t2> t1 maxValueIn(t1 Array[][2], t2 SIZE1,t2 SIZE2,t1 max =0);//����������� ������������� �������� � ��������� �������
template <typename t1, typename t2> void ShiftLeft(t1 Array[], t2 SIZE,t2 shift);//����������� ����� ������� � ����
template <typename t1, typename t2> void ShiftLeft(t1 Array[][2], t2 SIZE1, t2 SIZE2,t2 shift);//����������� ����� ���������� ������� � ����
template <typename t1, typename t2> void ShiftRight(t1 Array[], t2 SIZE,t2 shift);//����������� ����� ������� � �����
template <typename t1, typename t2> void ShiftRight(t1 Array[][2], t2 SIZE1, t2 SIZE2,t2 shift);//����������� ����� ���������� ������� � �����



void main()
{
	//setlocale(LC_ALL, "");
	const int SIZE = 5;// ���������� ��������� ����������� �������
	const int SIZE1 = 2;//���������� ����� �������
	const int SIZE2 = 2;//���������� �������� �������
	double Array[SIZE1][SIZE2]= { 2.1,3.5,6.2,7.4 };
	//int Array[SIZE];
	//Rand(Array, SIZE, 100);
	Print(Array, SIZE1,SIZE2);
	ShiftLeft(Array, SIZE1,SIZE2, 3);
	Print(Array, SIZE1,SIZE2);
	//cout<<maxValueIn(Array, SIZE1,SIZE2);

}

template <typename t1, typename t2> void Rand(t1 Array[], t2 SIZE, t2 randmax)
{
	for (int i = 0; i < SIZE; i++) Array[i] = rand() % randmax;
}

template <typename t1, typename t2> void Rand(t1 Array[][2], t2 SIZE1,t2 SIZE2, t2 randmax)
{
	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE2; j++) Array[i][j] = rand() % randmax;
	}
}

template <typename t1, typename t2> void Print(t1 Array[], t2 SIZE)
{
	for (int i = 0; i < SIZE; i++) cout << Array[i] << "\t";
	cout << endl;
}

template <typename t1, typename t2> void Print(t1 Array[][2], t2 SIZE1, t2 SIZE2)
{
	for (int i = 0; i < SIZE1; i++)
	{
		cout << i+1 << " - ";
		for (int j = 0; j < SIZE2; j++) cout << Array[i][j] << "  ";
		cout << endl;
	}
}

int Sum(char Array[], int SIZE,int sum)
{
	for (int i = 0; i < SIZE; i++) sum += Array[i];
	return sum;
}

template <typename t1, typename t2> t1 Sum(t1 Array[], t2 SIZE,t1 sum)
{
	for (int i = 0; i < SIZE; i++) sum += Array[i];
	return sum;
}

template <typename t1, typename t2> t1 Sum(t1 Array[][2], t2 SIZE1, t2 SIZE2, t1 sum)
{
	for (int i = 0; i < SIZE1; i++)
	{
		for(int j =0; j<SIZE2;j++)sum += Array[i][j];
	}
	return sum;
}

template <typename t1, typename t2> double Avg(t1 Array[], t2 SIZE, double sum)
{
	for (int i = 0; i < SIZE; i++) sum += Array[i];
	return sum/SIZE;
}

template <typename t1, typename t2> double Avg(t1 Array[][2], t2 SIZE1,t2 SIZE2, double sum)
{
	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE2; j++)sum += Array[i][j];
	}
	return sum/(SIZE1*SIZE2);
}

template <typename t1, typename t2> t1 minValueIn(t1 Array[], t2 SIZE, t1 min)//����������� ������������ �������� � �������
{
	min = Array[0];
	for (int i = 0; i < SIZE;i++) if (Array[i] < min) min = Array[i];
	return min;
}

template <typename t1, typename t2> t1 minValueIn(t1 Array[][2], t2 SIZE1, t2 SIZE2, t1 min)//����������� ������������ �������� � ��������� �������
{
	min = Array[0][0];
	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j<SIZE2; j++) if (Array[i][j] < min) min = Array[i][j];
	}
	return min;
}

template <typename t1, typename t2> t1 maxValueIn(t1 Array[], t2 SIZE, t1 max )//����������� ������������� �������� � �������
{
	max = Array[0];
	for (int i = 0; i < SIZE; i++) if (Array[i] > max) max = Array[i];
	return max;
}

template <typename t1, typename t2> t1 maxValueIn(t1 Array[][2], t2 SIZE1, t2 SIZE2, t1 max )//����������� ������������� �������� � ��������� �������
{
	max = Array[0][0];
	for (int i = 0; i < SIZE1; i++)
	{
		for (int j = 0; j < SIZE2; j++) if (Array[i][j] > max) max = Array[i][j];
	}
	return max;
}

template <typename t1, typename t2> void ShiftLeft(t1 Array[], t2 SIZE, t2 shift)//����������� ����� ������� � ����
{
	for (int i = 0; i < shift; i++) {
		t1 temp = Array[0];
		for (int i = 0; i < SIZE-1; i++) Array[i] = Array[i + 1];
		Array[SIZE - 1] = temp;
	}
}

template <typename t1, typename t2> void ShiftLeft(t1 Array[][2], t2 SIZE1, t2 SIZE2, t2 shift)//����������� ����� ���������� ������� � ����
{
	for (int i = 0; i < shift; i++) {
		t1 temp = Array[0][0];
		for (int i = 0; i < SIZE1*SIZE2- 1; i++) Array[i/SIZE2][i%SIZE2] = Array[(i + 1)/SIZE2][(i+1)%SIZE2];
		Array[SIZE1 - 1][SIZE2-1] = temp;
	}
}

template <typename t1, typename t2> void ShiftRight(t1 Array[], t2 SIZE, t2 shift)//����������� ����� ������� � �����
{
	for (int i = 0; i < shift; i++) {
		t1 temp = Array[SIZE - 1];
		for (int i = SIZE - 2; i >= 0; i--) Array[i + 1] = Array[i];
		Array[0] = temp;
	}
}

template <typename t1, typename t2> void ShiftRight(t1 Array[][2], t2 SIZE1, t2 SIZE2, t2 shift)//����������� ����� ���������� ������� � �����
{
	for (int i = 0; i < shift; i++) {
		t1 temp = Array[SIZE1 - 1][SIZE2-1];
		for (int i = SIZE1 * SIZE2 - 2; i >= 0; i--) Array[(i + 1) / SIZE2][(i + 1) % SIZE2] = Array[i / SIZE2][i % SIZE2];
		Array[0][0] = temp;
	}
}