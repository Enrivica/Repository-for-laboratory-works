﻿#include <stdio.h> //Подключение библиотеки ввода/вывода.
#include <locale.h> //Подключение библиотеки, необходимой для задач, связанных с локализацией.

void main() //Точка входа в программу - главная функция.
{
	char* locale = setlocale(LC_ALL, "Russian"); //Подключение "русских символов" для вывода на консольном окне.
	int A; //Объявление целочисленной переменной.
	//Начинаем работать с вводом (scanf_s) и выводом (printf).
	printf("Необходимо проверить истинность высказывания: число является чётным двузначным? Для этого введите целое положительное число.\n");
	printf("Введите число: "); scanf_s("%d", &A);
	//Проверяем истинность:
	if ((A % 2 == 0) && (A > 9) && (A < 100)) {
		printf("Число %d является чётным двузначным.\n", A);
	}
	else {
		printf("Число %d не является чётным двузначным.", A);
	}
}