#pragma once
#include<iostream>
using namespace std;

//int sum_char; // ����� ��������� � ������� ���� char
//int sum_char2;// ����� ��������� � ��������� ������� ���� char
//double avg_char;// �������-�������������� ��������� � ������� ���� char
//double avg_char2;//������-�������������� ��������� � ��������� ������� ���� char

template <typename t1, typename t2> void Rand(t1 Array[], t2 SIZE, t2 randmax = 100); //��������� ������ ������������� �������
template <typename t1, typename t2> void Rand(t1 Array[][4], t2 SIZE1, t2 SIZE2, t2 randmax = 100); //��������� ��������� ������ ������������� �������
template <typename t1, typename t2> void Print(t1 Array[], t2 SIZE); //����� ������� � �������
template <typename t1, typename t2> void Print(t1 Array[][4], t2 SIZE1, t2 SIZE2); //����� ���������� ������� � �������
//template <typename t1, typename t2> t1 Sum(t1 Array[], t2 SIZE);//���������� ����� ��������� �������
//template <typename t1, typename t2> t1 Sum(t1 Array[][4], t2 SIZE1, t2 SIZE2);//���������� ����� ��������� ���������� �������
template <typename t1, typename t2> void Sort(t1 Array[], t2 SIZE);//���������� ������� � ������� �����������
template <typename t1, typename t2> void Sort(t1 Array[][4], t2 SIZE1, t2 SIZE2);//���������� ���������� ������� � ������� �����������
//template <typename t1, typename t2> double Avg(t1 Array[], t2 SIZE);//���������� ������-�������������� ��������� �������
//template <typename t1, typename t2> double Avg(t1 Array[][4], t2 SIZE1, t2 SIZE2);//���������� ������-�������������� ��������� ���������� �������
template <typename t1, typename t2> t1 minValueIn(t1 Array[], t2 SIZE);//����������� ������������ �������� � �������
template <typename t1, typename t2> t1 minValueIn(t1 Array[][4], t2 SIZE1, t2 SIZE2);//����������� ������������ �������� � ��������� �������
template <typename t1, typename t2> t1 maxValueIn(t1 Array[], t2 SIZE);//����������� ������������� �������� � �������
template <typename t1, typename t2> t1 maxValueIn(t1 Array[][4], t2 SIZE1, t2 SIZE2);//����������� ������������� �������� � ��������� �������
template <typename t1, typename t2> void ShiftLeft(t1 Array[], t2 SIZE, t2 shift);//����������� ����� ������� �����
template <typename t1, typename t2> void ShiftLeft(t1 Array[][4], t2 SIZE1, t2 SIZE2, t2 shift);//����������� ����� ���������� ������� �����
template <typename t1, typename t2> void ShiftRight(t1 Array[], t2 SIZE, t2 shift);//����������� ����� ������� ������
template <typename t1, typename t2> void ShiftRight(t1 Array[][4], t2 SIZE1, t2 SIZE2, t2 shift);//����������� ����� ���������� ������� ������
template<typename t1, typename t2> void Call(t1 Array[], t2 SIZE);//����� ������ �� �������
template<typename t1, typename t2> void Call(t1 Array[][4], t2 SIZE1, t2 SIZE2);//����� ������ �� ���������� ������� 
