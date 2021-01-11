﻿#include <stdio.h> //Подключение библиотеки ввода/вывода.
#include <locale.h> //Подключение библиотеки, необходимой для задач, связанных с локализацией.
#include <math.h> //Подключение библиотеки для вычисления основных мат. функций.

void main() //Точка входа в программу - главная функция.
{
	char* locale = setlocale(LC_ALL, "Russian"); //Подключение "русских символов" для вывода на консольном окне.
	double a, b, SUM, RAZ, PR, DEL; //Объявление переменных вещественного типа.
	//Начинаем работать с вводом (scanf_s) и выводом (printf).
	printf("Необходимо найти сумму, разность, произведение и частное модулей двух чисел. Для этого введите два ненулевых числа.\n");
	printf("Введите значение первого числа: "); scanf_s("%lf", &a);
	printf("Введите значение второго числа: "); scanf_s("%lf", &b);
	//Вычисляем сумму, разность, произведение и частное модулей двух чисел:
	SUM = fabs(a) + fabs(b);
	RAZ = fabs(a) - fabs(b);
	PR = fabs(a) * fabs(b);
	DEL = fabs(a) / fabs(b);
	printf("Сумма модулей двух чисел = %lf\n", SUM);
	printf("Разность модулей двух чисел = %lf\n", RAZ);
	printf("Произведение модулей двух чисел = %lf\n", PR);
	printf("Частное модулей двух чисел = %lf", DEL);
}