#include <locale.h>
#include <stdio.h>
#define _USE_MATH_DEFINES 
#include <math.h>

void task1();
void task1_2();
void task2();

int main()
{

	setlocale(LC_CTYPE, "RUS");


	task2();

}

void task1() 
{
	int year, ost;
	puts("������� ���:");
	scanf("%d", &year);
	ost = year % 4;
	
	if (ost == 0) printf("��� %d ����������", year);
	else printf("��� %d �� ����������", year);


}

void task1_2()
{
	int year, ost;
	puts("������� ���:");
	scanf("%d", &year);
	ost = year % 4;

	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) printf("��� %d ����������", year);
	else printf("��� %d �� ����������", year);


}

void task2()
{
	// x = 3 F = 9 - 9 + 9 = 9 x = 4 F 1/ 70 = 0.014
	double x, F;
	printf("������� x\n"); 
	scanf("%le", &x);
	F = (x <= 3) ? pow(x, 2) - 3 * x + 9 : (1 / (pow(x, 3) + 6));
	printf("�����: %le", F);

}