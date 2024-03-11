#pragma once
#include<iostream>
using namespace std;

const int ROWS = 3;//количество строк массива
const int COLS = 4;//количество столбцов массива

namespace fnc
{
	template <typename T> void Rand(T Array[], int SIZE, int randmax = 100); //заполняем массив произвольными числами
	template <typename T> void Rand(T Array[ROWS][COLS], int ROWS, int COLS, int randmax = 100); //заполняем двумерный массив произвольными числами
	template <typename T> void Print(T Array[], int SIZE); //вывод массива в консоль
	template <typename T> void Print(T Array[ROWS][COLS], int ROWS, int COLS); //вывод двумерного массива в консоль
	template <typename T> double Sum(T Array[], int SIZE);//вычисление суммы элементов массива
	template <typename T> double Sum(T Array[ROWS][COLS], int ROWS, int COLS);//вычисление суммы элементов двумерного массива
	template <typename T> void Sort(T Array[], int SIZE);//сортировка массива в порядке возрастания
	template <typename T> void Sort(T Array[ROWS][COLS], int ROWS, int COLS);//сортировка двумерного массива в порядке возрастания
	template <typename T> double Avg(T Array[], int SIZE);//вычисление средее-арифметическое элементов массива
	template <typename T> double Avg(T Array[ROWS][COLS], int ROWS, int COLS);//вычисление средее-арифметическое элементов двумерного массива
	template <typename T> T minValueIn(T Array[], int SIZE);//определение минимального значения в массиве
	template <typename T> T minValueIn(T Array[ROWS][COLS], int ROWS, int COLS);//определение минимального значения в двумерном массиве
	template <typename T> T maxValueIn(T Array[], int SIZE);//определение максимального значения в массиве
	template <typename T> T maxValueIn(T Array[ROWS][COLS], int ROWS, int COLS);//определение максимального значения в двумерном массиве
	template <typename T> void ShiftLeft(T Array[], int SIZE, int shift);//циклический сдвиг массива влево
	template <typename T> void ShiftLeft(T Array[ROWS][COLS], int ROWS, int COLS, int shift);//циклический сдвиг двумерного массива влево
	template <typename T> void ShiftRight(T Array[], int SIZE, int shift);//циклический сдвиг массива вправо
	template <typename T> void ShiftRight(T Array[ROWS][COLS], int ROWS, int COLS, int shift);//циклический сдвиг двумерного массива вправо
	template<typename T> void Call(T Array[], int SIZE);//вывод данных по массиву
	template<typename T> void Call(T Array[ROWS][COLS], int ROWS, int COLS);//вывод данных по двумерному массиву  
}
