// Lab2_1.c: ���������� ������������ ����� � ������������ ������-�������//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<locale.h>
#include <conio.h>

int a,b, rez1, rez2, rez3;

int main()
{
	setlocale(LC_CTYPE, "ukr");

	printf("\n ����i�� ��� �i��� �����: \n");
	printf("\n \t ����i�� ����� a="); 
	scanf("%d", &a);
	printf("\n \t ����i�� �i��i��� �i� 0 ����� b="); 
	scanf("%d", &b);

	rez1 = a % b; 
	rez2 = b - a; 
	rez3 = (a + b)*(a + b);

	printf("\n \n �������� ���������:");
	printf("\n \t ������� �i� �i����� %d / %d = %d", a, b, rez1); 
	printf("\n \t �i����� %d - %d = %d", b, a, rez2);
	printf("\n \t ���� ����� � �������i (%d + %d)^2 = %d", a, b, rez3);
	
	int getch(); getch();

	return 0;
}