#include <stdio.h> //Подключение библиотеки ввода/вывода.
#include <locale.h> //Подключение библиотеки, необходимой для задач, связанных с локализацией.

void main() //Точка входа в программу - главная функция.
{
	char* locale = setlocale(LC_ALL, "Russian"); //Подключение "русских символов" для вывода на консольном окне.
	char C; //Исходное направление робота.
	int N; //Цел. переменная.
	//Начинаем работать с вводом (scanf_s) и выводом (printf).
	printf("Необходимо послать команду роботу (0-продолжить движение, 1-поворот налево, -1-поворот направо) и выбрать его изначальное положение (N,S,W,E).\n");
	printf("Введите начальное положение робота: "); scanf_s("%c", &C);
	printf("Введите команду: "); scanf_s("%d", &N);
	switch (C) {
	case 'N':
		switch (N) {
		case 0: C = 'N'; break;
		case 1: C = 'W'; break;
		case -1: C = 'E'; break;
		}
		break;
	case 'W':
		switch (N) {
		case 0: C = 'W'; break;
		case 1: C = 'S'; break;
		case -1: C = 'N'; break;
		}
		break;
	case 'S':
		switch (N) {
		case 0: C = 'S'; break;
		case 1: C = 'E'; break;
		case -1: C = 'W'; break;
		}
		break;
	case 'E':
		switch (N) {
		case 0: C = 'E'; break;
		case 1: C = 'N'; break;
		case -1: C = 'S'; break;
		}
		break;
	}
	printf("Направление робота после полученной команды - %c", C);
}