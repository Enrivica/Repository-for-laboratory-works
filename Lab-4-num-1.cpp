﻿#include <stdio.h> //Подключение библиотеки ввода/вывода.
#include <locale.h> //Подключение библиотеки, необходимой для задач, связанных с локализацией.

void main() //Точка входа в программу - главная функция.
{
	char* locale = setlocale(LC_ALL, "Russian"); //Подключение "русских символов" для вывода на консольном окне.
	double a, b, S, P; //Объявление переменных вещественного типа.
	//Начинаем работать с вводом (scanf_s) и выводом (printf).
	printf("Необходимо найти площадь и периметр прямоугольника. Для этого введите положительные и ненулевые значения его сторон.\n");
	printf("Введите значение первой стороны: "); scanf_s("%lf", &a);
	printf("Введите значение второй стороны: "); scanf_s("%lf", &b);
	//Вычисляем площадь и периметр прямоугольника:
	S = a * b; //Вычисление площади.
	P = 2 * (a + b); //Вычисление периметра.
	printf("Площадь прямоугольника = %lf\n", S);
	printf("Периметр прямоугольника = %lf", P);
}