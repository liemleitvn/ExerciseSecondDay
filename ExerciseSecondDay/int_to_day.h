#include<conio.h>
#include<math.h>
#include<stdio.h>
#include"stdafx.h"
void changeIntToDay()
{
	int n;
	printf("Please input number (1<=number<=7): ");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:printf("Sunday");
		break;
	case 2:printf("Monday");
		break;
	case 3:printf("Tuesday");
		break;
	case 4:printf("Wednesday");
		break;
	case 5: printf("Thusday");
		break;
	case 6:printf("Friday");
		break;
	case 7: printf("Saturday");
	default: printf("Gia tri vua nhap khong phu hop");
		break;
	}
	scanf_s("%d");
}
