﻿#include <stdio.h> //Подключение библиотеки ввода/вывода.
#include <locale.h> //Подключение библиотеки, необходимой для задач, связанных с локализацией.
#include <math.h> //Подключение библиотеки для вычисления основных мат. функций.

void main() //Точка входа в программу - главная функция.
{
	char* locale = setlocale(LC_ALL, "Russian"); //Подключение "русских символов" для вывода на консольном окне.
	double x1, y1, x2, y2, RESULT; //Объявление переменных вещественного типа.
	//Начинаем работать с вводом (scanf_s) и выводом (printf).
	printf("Необходимо найти расстояние между двумя точками по их координатам. Для этого введите значения их координат.\n");
	printf("Введите значения координат для первой точки:\n");
	printf("x1="); scanf_s("%lf", &x1);
	printf("y1="); scanf_s("%lf", &y1);
	printf("Введите значения координат для второй точки:\n");
	printf("x2="); scanf_s("%lf", &x2);
	printf("y2="); scanf_s("%lf", &y2);
	//Вычисляем расстояние между двумя точками:
	RESULT = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	printf("Расстояние между двумя точками = %lf", RESULT);
}