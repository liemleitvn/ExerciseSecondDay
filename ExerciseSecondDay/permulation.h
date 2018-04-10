//Hoan vi 2 so nguyen
//Dung funtion

#include <conio.h>
#include <stdio.h>

void permutation();
void permutation(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}
void hoanViHaiSoNguyen()
{
	int x = 6;
	int y = 9;
	printf("Before permutation x= %d y=%d\n", x, y);
	permutation(x, y);
	printf("After permutation x= %d y=%d\n", x, y);
}