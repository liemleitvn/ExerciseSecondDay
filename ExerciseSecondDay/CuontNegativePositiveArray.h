/*Nhap vao mot mang n phan tu
Dem so phan tu am, duong, bang khong.
Xem mang co sap xep theo thu tu tang/giam khong*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void countNegativePositive()
{
	int n, i;//n la so phan tu trong mang
	int a[100];//khai bao mang co 100 phan tu
	int negative = 0, positive = 0, zero = 0;//khai bao va gan cac bien dem phan tu am, duong,bang 0
	int rise = 0, reduction = 0;//khai bao va gan gia tri cach bien dem mang tang,giam
	printf("Please input the total element of aray: ");//nhap tong so phan tu cua mang
	scanf_s("%d", &n);
	/*for (i = 0; i <= n - 1; i++)
	{
		printf("Number %d: ", i + 1);
		scanf_s("%d", &a[i]);
	}
	printf("\n");*/
	i = 0;
	while (i<n)
	{
		printf("Number %d: ", i + 1);
		scanf_s("%d", &a[i]);
		i++;
	}
	for (i = 0; i <= n - 1; i++)
	{
		if (a[i] < 0)
		{
			negative++;
		}
		if (a[i]>0)
		{
			positive++;
		}
		if (a[i] == 0)
		{
			zero++;
		}
	}
	printf("Number negative: %d\n", negative);
	printf("Number positive: %d\n", positive);
	printf("Number zero : %d\n", zero);
	printf("\n");
	for (i = 0; i < n - 1; i++)
		//vong lap chi chay den n-2 phan tu de so sanh phan tu thu n-2 va va n-1
		//Neu cho vong lap den n-1 thi chay den cuoi khong the so sanh duoc n-1 va n (vi mang chay tu 0 den n-1 phan tu)
	{
		if (a[i] <= a[i + 1])
		{
			rise++;
		}
		if (a[i] >= a[i + 1])
		{
			reduction++;
		}
	}
	if (rise == n - 1)
	{
		printf("Array rise\n");//mang tang
	}
	if (reduction == n - 1)
	{
		printf("Array reduction\n");
	}
	if (rise != n - 1 && reduction != n - 1)
	{
		printf("Array not order\n");//mang k theo thu tu
	}
}
