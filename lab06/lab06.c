#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int task01() {
	int year;
	setlocale(LC_ALL, "RUS");
	printf("������� ���:\n");
	scanf("%d", &year);
	if ((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0))) {
		printf("��� ����������");
	}
	else {
		printf("��� �� ����������");
	}
}

int task02() {
	float x, f;
	setlocale(LC_ALL, "RUS");
	printf("������� �����:\n");
	scanf("%f", &x);
	f = x <= 7 ? -3 * x + 9 : 1 / (x - 7);
	printf("�����: %0.3f", f);
}
int task03() {
	float x, kv, kr;
	setlocale(LC_ALL, "RUS");
	printf("������� �����\n");
	scanf("%f", &x);
	printf("������� - %f \n������ �� - %f \n���� ����� - %f", pow(x,2), pow(x, 1./2), x);
}
int main() {
	task03();
}