#pragma once
#include<iostream>
using namespace std;

//int sum_char; // сумма элементов в массиве типа char
//int sum_char2;// сумма элементов в двумерном массиве типа char
//double avg_char;// среднее-арифметическое элементов в массиве типа char
//double avg_char2;//средее-арифметическое элементов в двумерном массиве типа char

template <typename t1, typename t2> void Rand(t1 Array[], t2 SIZE, t2 randmax = 100); //заполняем массив произвольными числами
template <typename t1, typename t2> void Rand(t1 Array[][4], t2 SIZE1, t2 SIZE2, t2 randmax = 100); //заполняем двумерный массив произвольными числами
template <typename t1, typename t2> void Print(t1 Array[], t2 SIZE); //вывод массива в консоль
template <typename t1, typename t2> void Print(t1 Array[][4], t2 SIZE1, t2 SIZE2); //вывод двумерного массива в консоль
//template <typename t1, typename t2> t1 Sum(t1 Array[], t2 SIZE);//вычисление суммы элементов массива
//template <typename t1, typename t2> t1 Sum(t1 Array[][4], t2 SIZE1, t2 SIZE2);//вычисление суммы элементов двумерного массива
template <typename t1, typename t2> void Sort(t1 Array[], t2 SIZE);//сортировка массива в порядке возрастания
template <typename t1, typename t2> void Sort(t1 Array[][4], t2 SIZE1, t2 SIZE2);//сортировка двумерного массива в порядке возрастания
//template <typename t1, typename t2> double Avg(t1 Array[], t2 SIZE);//вычисление средее-арифметическое элементов массива
//template <typename t1, typename t2> double Avg(t1 Array[][4], t2 SIZE1, t2 SIZE2);//вычисление средее-арифметическое элементов двумерного массива
template <typename t1, typename t2> t1 minValueIn(t1 Array[], t2 SIZE);//определение минимального значения в массиве
template <typename t1, typename t2> t1 minValueIn(t1 Array[][4], t2 SIZE1, t2 SIZE2);//определение минимального значения в двумерном массиве
template <typename t1, typename t2> t1 maxValueIn(t1 Array[], t2 SIZE);//определение максимального значения в массиве
template <typename t1, typename t2> t1 maxValueIn(t1 Array[][4], t2 SIZE1, t2 SIZE2);//определение максимального значения в двумерном массиве
template <typename t1, typename t2> void ShiftLeft(t1 Array[], t2 SIZE, t2 shift);//циклический сдвиг массива влево
template <typename t1, typename t2> void ShiftLeft(t1 Array[][4], t2 SIZE1, t2 SIZE2, t2 shift);//циклический сдвиг двумерного массива влево
template <typename t1, typename t2> void ShiftRight(t1 Array[], t2 SIZE, t2 shift);//циклический сдвиг массива вправо
template <typename t1, typename t2> void ShiftRight(t1 Array[][4], t2 SIZE1, t2 SIZE2, t2 shift);//циклический сдвиг двумерного массива вправо
template<typename t1, typename t2> void Call(t1 Array[], t2 SIZE);//вывод данных по массиву
template<typename t1, typename t2> void Call(t1 Array[][4], t2 SIZE1, t2 SIZE2);//вывод данных по двумерному массиву 
