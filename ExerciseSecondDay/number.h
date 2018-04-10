/*Nhap mot mang
Tim phan tu lon nhat, nho nhat trong mang*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
void maxMinNumberArray()
{
	int i, n;
	int a[100];
	int min, max;
	printf("Program fine maximum and minimum number in array\n");
	printf("Please input element of array: ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Number a[%d]: ", i);
		scanf_s("%d", &a[i]);
	}
	max = a[0];
	min = a[0];
	//Chay trong vong lap for
	for (i = 1; i < n; i++)
	{
		if (max <= a[i])
		{
			max = a[i];
		}
		if (min>a[i])
		{
			min = a[i];
		}
	}
	//chay trong vong lap while
	/*i = 1;
	while (i < n)
	{
		if (max <= a[i])
		{
			max = a[i];
		}
		if (min>a[i])
		{
			min = a[i];
		}
		i++;
	}*/
	//chay trong vong lap do...while
	/*i = n - 1;
	do
	{
		if (max < a[i])
		{
			max = a[i];
		}
		if (min > a[i])
		{
			min = a[i];
		}
		i--;
	} 
	while (i > 0);*/

	printf("Maximum number: %d\n", max);
	printf("Minimum number: %d", min);
}
