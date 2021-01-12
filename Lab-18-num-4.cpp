﻿#include <stdio.h> //Подключение библиотеки ввода/вывода.
#include <locale.h> //Подключение библиотеки, необходимой для задач, связанных с локализацией.
#include <stdlib.h> //Подключение библиотеки для выделения памяти.

int main() //Точка входа в программу - главная функция.
{
    char* locale = setlocale(LC_ALL, "Russian"); //Подключение "русских символов" для вывода на консольном окне.
    int min = 0, max = 0, N, i; //Цел. переменные.
    double* array; //Указатель на массив.
    printf("Необходимо обнулить эл-мы массива между мин. и макс. элементами (не вкл.). Введите размер N и значения.\n");
    printf("Введите N: "); scanf_s("%d", &N);
    array = (double*)malloc(N * sizeof(int)); //Динамическое выделение памяти.
    if ((N == 1) || (N == 2)) {
        printf("Введите другое значение N, большее 2-х.");
    }
    printf("Введите значения элементов массива:\n");
    for (i = 0; i < N; ++i) {
        printf("array[%d] = ", i + 1); scanf_s("%lf", &array[i]);
    }
    for (i = 0; i < N; ++i) {
        if (array[i] > array[max]) {
            max = i;
        }
        if (array[i] < array[min]) {
            min = i;
        }
    }
    if ((min - max == 1) || (max - min == 1) || (min - max == 0) || (max - min == 0)) {
        printf("Между минимумом и максимумом нет элементов, которые нужно обнулить.\n");
    }
    if (min < max) {
        for (i = min + 1; i < max; ++i) {
            array[i] = 0;
        }
    }
    else {
        for (i = max + 1; i < min; ++i) {
            array[i] = 0;
        }
    }
    printf("Полученный массив:\n");
    for (i = 0; i < N; ++i) {
        printf("array[%d] = %lf\n", i + 1, array[i]);
    }
    return 0; //Возврат целочисленного значения перед завершением функции.
}