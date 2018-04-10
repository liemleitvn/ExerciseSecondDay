#include<iostream>
#include<math.h>
#include<conio.h>
void compareFor3Int()
{
	int a, b, c, max, min;
	printf("Chuong trinh so sanh 3 so thuc\n");
	printf("Vui long nhap so can so sanh\n");
	printf("So thu nhat: ");
	scanf_s("%d", &a);
	printf("So thu hai: ");
	scanf_s("%d", &b);
	printf("So thu ba: ");
	scanf_s("%d", &c);
	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	if (max > c)
		max = max;
	else
		max = c;
	if (min > c)
		min = c;
	else
		min = min;
	printf("So lon nhat la: %d\n", max);
	printf("So nho nhat là: %d", min);
	scanf_s("%d");
}
