﻿#include <stdio.h> //Подключение библиотеки ввода/вывода.
#include <locale.h> //Подключение библиотеки, необходимой для задач, связанных с локализацией.
#include <stdlib.h> //Подключение библиотеки для выделения памяти.

int main() //Точка входа в программу - главная функция.
{
    char* locale = setlocale(LC_ALL, "Russian"); //Подключение "русских символов" для вывода на консольном окне.
    int N, i; //Цел. переменные.
    double buf;
    double* array; //Указатель на массив.
    printf("Массив размером N, элементы, кроме первого, упорядочены по возрастанию. Сделать массив упорядоч., переместив элемент на новую позицию. Введите N и значения.\n");
    printf("Введите N: "); scanf_s("%d", &N);
    array = (double*)malloc(N * sizeof(int)); //Динамическое выделение памяти.
    printf("Введите значения элементов массива:\n");
    for (i = 0; i < N; ++i) {
        printf("array[%d] = ", i + 1); scanf_s("%lf", &array[i]);
    }
    for (i = 0; i < N; ++i) {
        if (array[i] > array[i + 1]) {
            buf = array[i];
            array[i] = array[i + 1];
            array[i + 1] = buf;
        }
        else {
            break;
        }
    }
    printf("Упорядоченный массив:\n");
    for (i = 0; i < N; ++i) {
        printf("array[%d] = %lf\n", i + 1, array[i]);
    }
    return 0; //Возврат целочисленного значения перед завершением функции.
}