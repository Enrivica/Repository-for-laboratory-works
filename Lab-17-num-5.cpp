﻿#include <stdio.h> //Подключение библиотеки ввода/вывода.
#include <locale.h> //Подключение библиотеки, необходимой для задач, связанных с локализацией.
#include <stdlib.h> //Подключение библиотеки для выделения памяти.

int main() //Точка входа в программу - главная функция.
{
    char* locale = setlocale(LC_ALL, "Russian"); //Подключение "русских символов" для вывода на консольном окне.
    int N, i, j; //Цел. переменные.
    int* array; //Указатель на массив.
    printf("Дан массив размера N. В нём есть два одинаковых элемента. Необходимо найти номера одинаковых элементов в порядке возрастания. Введите N и значения элементов.\n");
    printf("Введите N: "); scanf_s("%d", &N);
    array = (int*)malloc(N * sizeof(int)); //Динамическое выделение памяти.
    if (N == 1) {
        printf("Для решения задания необходимо ввести N > 1.");
        return 0;
    }
    printf("Введите значения элементов массива:\n");
    for (i = 0; i < N; ++i) {
        printf("array[%d] = ", i + 1); scanf_s("%d", &array[i]);
    }
    for (i = 0; i < N - 1; ++i) {
        for (j = i + 1; j < N; ++j) {
            if (array[i] == array[j]) {
                printf("Номера одинаковых элементов: %d и %d.", i + 1, j + 1);
            }
        }
    }
    return 0; //Возврат целочисленного значения перед завершением функции.
}