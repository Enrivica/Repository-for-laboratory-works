﻿#include <stdio.h> //Подключение библиотеки ввода/вывода.
#include <locale.h> //Подключение библиотеки, необходимой для задач, связанных с локализацией.
#include <stdlib.h> //Подключение библиотеки для выделения памяти.

int main() //Точка входа в программу - главная функция.
{
    char* locale = setlocale(LC_ALL, "Russian"); //Подключение "русских символов" для вывода на консольном окне.
    int d, N, i; //Цел. переменные.
    int* array; //Указатель на массив.
    printf("Дан массив размером N. Необходимо проверить, образуют ли его элементы арифмет. прогрессию. Для этого введите N и эл-ты массива.\n");
    printf("Введите N: "); scanf_s("%d", &N);
    array = (int*)malloc(N * sizeof(int)); //Динамическое выделение памяти.
    if (N == 1) {
        printf("Для решения задания необходимо ввести N > 1.");
        return 0;
    }
    printf("Введите неодинаковые значения элементов массива:\n");
    for (i = 0; i < N; ++i) {
        printf("array[%d] = ", i + 1); scanf_s("%d", &array[i]);
    }
    d = array[1] - array[0];
    for (i = 1; i < N; ++i) {
        if (d != array[i] - array[i - 1]) {
            d = 0;
        }
    }
    if (d == 0) {
        printf("d=%d, элементы массива не образуют арифметическую прогрессию.", d);
    }
    else {
        printf("d=%d, элементы массива образуют арифметическую прогрессию.", d);
    }
    return 0; //Возврат целочисленного значения перед завершением функции.
}