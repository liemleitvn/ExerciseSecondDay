/*Tinh tien dien cua ho dan khi biet so dien su dung, theo cong thuc sau
0->50kWh: Gia tien dien la 2500
50->100: Gia tien dien la 3000
>100: gia tien dien la 3500*/
#include <stdio.h>
#include<conio.h>
#include <math.h>
#include "global-variable.h";

//Ham nhap so dien --
void electricused(float &h)
{
	do
	{
		printf("\nPlease input electric used: ");
		scanf_s("%f", &h);
		if (h < 0)
		{
			printf("\nElectric used invailid !");
		}
	} while (h < 0);
}

//Ham tinh tien dien
unsigned long calculate(float h)
{
	if (h >= 0 && h <= 50)
	{
		return h*moneyone;
	}
	if (h>50 && h <= 100)
	{
		return (h - leveltwo) * moneytwo + levelone * moneyone;
	}
	if (h>100)
	{
		return ((h - levelthree) *moneythree + leveltwo*moneytwo + levelone*moneyone);
	}
}

void calculateMoneyElectric()
{
	float h;
	electricused(h);
	unsigned long moneyToPay=calculate(h);
	printf("Money to pay: %ld", moneyToPay);
}