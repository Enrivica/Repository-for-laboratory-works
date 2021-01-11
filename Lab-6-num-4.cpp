﻿#include <stdio.h> //Подключение библиотеки ввода/вывода.
#include <locale.h> //Подключение библиотеки, необходимой для задач, связанных с локализацией.
#include <math.h> //Подключение библиотеки для вычислений мат. функций.

void main() //Точка входа в программу - главная функция.
{
	char* locale = setlocale(LC_ALL, "Russian"); //Подключение "русских символов" для вывода на консольном окне.
	double y, x; //Объявление переменных вещественного типа.
	//Начинаем работать с вводом (scanf_s) и выводом (printf).
	printf("Необходимо найти значение функции y=3*x^6-6*x^2-7. Для этого введите значение x.\n");
	printf("Введите значение x: "); scanf_s("%lf", &x);
	//Находим значение функции:
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	printf("Значение функции = %lf", y);
}