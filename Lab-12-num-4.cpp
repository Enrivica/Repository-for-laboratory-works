#include <stdio.h> //Подключение библиотеки ввода/вывода.
#include <locale.h> //Подключение библиотеки, необходимой для задач, связанных с локализацией.

void main() //Точка входа в программу - главная функция.
{
    char* locale = setlocale(LC_ALL, "Russian"); //Подключение "русских символов" для вывода на консольном окне.
    int K; //Цел. переменная.
    printf("Необходимо вывести строку описание трёхзначного числа. Введите число.\n");
    printf("Введите число: "); scanf_s("%d", &K);
    printf("%d - ", K);
    if ((99 < K) && (K < 200)) {
        printf("сто ");
    }
    if ((199 < K) && (K < 300)) {
        printf("двести ");
    }
    if ((299 < K) && (K < 400)) {
        printf("триста ");
    }
    if ((399 < K) && (K < 500)) {
        printf("четыреста ");
    }
    if ((499 < K) && (K < 600)) {
        printf("пятьсот ");
    }
    if ((599 < K) && (K < 700)) {
        printf("шестьсот ");
    }
    if ((699 < K) && (K < 800)) {
        printf("семьсот ");
    }
    if ((799 < K) && (K < 900)) {
        printf("восемьсот ");
    }
    if ((899 < K) && (K < 1000)) {
        printf("девятьсот ");
    }
    if (((K % 100) / 10) == 1) {
        switch (K % 10) {
        case 0: printf("десять"); break;
        case 1: printf("одиннадцать"); break;
        case 2: printf("двенадцать"); break;
        case 3: printf("тринадцать"); break;
        case 4: printf("четырнадцать"); break;
        case 5: printf("пятнадцать"); break;
        case 6: printf("шестнадцать"); break;
        case 7: printf("семнадцать"); break;
        case 8: printf("восемнадцать"); break;
        case 9: printf("девятнадцать"); break;
        }
    }
    else {
        if ((((K % 100) / 10) >= 2) && (((K % 100) / 10) <= 9)) {
            switch ((K % 100) / 10) {
            case 2: printf("двадцать "); break;
            case 3: printf("тридцать "); break;
            case 4: printf("сорок "); break;
            case 5: printf("пятьдесят "); break;
            case 6: printf("шестьдесят "); break;
            case 7: printf("семьдесят "); break;
            case 8: printf("восемьдесят "); break;
            case 9: printf("девяноста "); break;
            }
        }
        switch (K % 10) {
        case 1: printf("один"); break;
        case 2: printf("два"); break;
        case 3: printf("три"); break;
        case 4: printf("четыре"); break;
        case 5: printf("пять"); break;
        case 6: printf("шесть"); break;
        case 7: printf("семь"); break;
        case 8: printf("восемь"); break;
        case 9: printf("девять"); break;
        }
    }
}