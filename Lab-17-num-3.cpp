﻿#include <stdio.h> //Подключение библиотеки ввода/вывода.
#include <locale.h> //Подключение библиотеки, необходимой для задач, связанных с локализацией.
#include <stdlib.h> //Подключение библиотеки для выделения памяти.

int main() //Точка входа в программу - главная функция.
{
    char* locale = setlocale(LC_ALL, "Russian"); //Подключение "русских символов" для вывода на консольном окне.
    int N, i; //Цел. переменные.
    double min; //Вещ. переменная.
    double* A; //Указатель на массив.
    printf("Необходимо найти мин. эл-т массива из эл-тов с чёт. номерами. Для этого введите размер массива и его значения эл-тов.\n");
    printf("Введите размер массива N: "); scanf_s("%d", &N);
    A = (double*)malloc(N * sizeof(int)); //Динамическое выделение памяти.
    if (N == 1) {
        printf("Для решения задания необходимо ввести N > 1.");
        return 0;
    }
    printf("Введите значения элементов массива:\n");
    for (i = 0; i < N; ++i) {
        printf("A[%d] = ", i + 1); scanf_s("%lf", &A[i]);
    }
    min = A[1];
    for (i = 1; i < N; i += 2) {
        if (A[i] < min) {
            min = A[i];
        }
    }
    printf("Минимальный элемент массива с чёт. номерами = %lf", min);
    return 0; //Возврат целочисленного значения перед завершением функции.
}