#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int task01() {
	int year;
	setlocale(LC_ALL, "RUS");
	printf("Введите год:\n");
	scanf("%d", &year);
	if ((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0))) {
		printf("Год високосный");
	}
	else {
		printf("Год не високосный");
	}
}

int task02() {
	float x, f;
	setlocale(LC_ALL, "RUS");
	printf("Введите число:\n");
	scanf("%f", &x);
	f = x <= 7 ? -3 * x + 9 : 1 / (x - 7);
	printf("Ответ: %0.3f", f);
}
int task03() {
	float x, kv, kr;
	setlocale(LC_ALL, "RUS");
	printf("Введите число\n");
	scanf("%f", &x);
	printf("квадрат - %f \nкорень кв - %f \nсамо число - %f", pow(x,2), pow(x, 1./2), x);
}
int main() {
	task03();
}