#pragma once
#include<iostream>
using namespace std;

const int ROWS = 3;//���������� ����� �������
const int COLS = 4;//���������� �������� �������

namespace fnc
{
	template <typename T> void Rand(T Array[], int SIZE, int randmax = 100); //��������� ������ ������������� �������
	template <typename T> void Rand(T Array[ROWS][COLS], int ROWS, int COLS, int randmax = 100); //��������� ��������� ������ ������������� �������
	template <typename T> void Print(T Array[], int SIZE); //����� ������� � �������
	template <typename T> void Print(T Array[ROWS][COLS], int ROWS, int COLS); //����� ���������� ������� � �������
	template <typename T> double Sum(T Array[], int SIZE);//���������� ����� ��������� �������
	template <typename T> double Sum(T Array[ROWS][COLS], int ROWS, int COLS);//���������� ����� ��������� ���������� �������
	template <typename T> void Sort(T Array[], int SIZE);//���������� ������� � ������� �����������
	template <typename T> void Sort(T Array[ROWS][COLS], int ROWS, int COLS);//���������� ���������� ������� � ������� �����������
	template <typename T> double Avg(T Array[], int SIZE);//���������� ������-�������������� ��������� �������
	template <typename T> double Avg(T Array[ROWS][COLS], int ROWS, int COLS);//���������� ������-�������������� ��������� ���������� �������
	template <typename T> T minValueIn(T Array[], int SIZE);//����������� ������������ �������� � �������
	template <typename T> T minValueIn(T Array[ROWS][COLS], int ROWS, int COLS);//����������� ������������ �������� � ��������� �������
	template <typename T> T maxValueIn(T Array[], int SIZE);//����������� ������������� �������� � �������
	template <typename T> T maxValueIn(T Array[ROWS][COLS], int ROWS, int COLS);//����������� ������������� �������� � ��������� �������
	template <typename T> void ShiftLeft(T Array[], int SIZE, int shift);//����������� ����� ������� �����
	template <typename T> void ShiftLeft(T Array[ROWS][COLS], int ROWS, int COLS, int shift);//����������� ����� ���������� ������� �����
	template <typename T> void ShiftRight(T Array[], int SIZE, int shift);//����������� ����� ������� ������
	template <typename T> void ShiftRight(T Array[ROWS][COLS], int ROWS, int COLS, int shift);//����������� ����� ���������� ������� ������
	template<typename T> void Call(T Array[], int SIZE);//����� ������ �� �������
	template<typename T> void Call(T Array[ROWS][COLS], int ROWS, int COLS);//����� ������ �� ���������� �������  
}
