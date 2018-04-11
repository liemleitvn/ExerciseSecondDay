//Bai tap: Nhap vao so nguyen, dem va in tat ca nhung uoc so
#include<stdio.h>
#include<conio.h>
#include<math.h>
void displayDivisor()
{
	int number;
	int plus;//dem so uoc so cua so vua nhap
	plus = 0;
	printf("Input number: ");
	scanf_s("%d", &number);
	for (int i = 0; i <= number; i++)
		if (number%i == 0)//kiem tra xem i có chia het cho number khong
		{
			printf("  %d", i);
			plus++;
		}
	printf("co tat ca %d uoc so cua %d", plus, number);
}
