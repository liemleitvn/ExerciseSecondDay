/*Bài tập: Nhập vào năm dương lịch (từ 1975 trở đi), in ra giải thể thao lớn trong năm
Những năm: 80,84,88,92...Olimpic và Euro (năm chia hết cho 4 dư 0)
Những năm: 90,94,98..World Cup (năm chia 4 dư 2)
Những năm: 97,99,2001...Sea Geame (năm chia 4 dư 1 hoặc 3)
Những năm: 96,98,2000...AFF Cup (năm chia 4 dư 0 hoặc 2)*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void bigSportYear()
{
	int nam;
	printf("Input year: ");
	scanf_s("%d", &nam);
	if (nam > 1975)
	{
		switch (nam % 4)
		{
		case 0:
		{
			printf("The van hoi Olimic\n");
			printf("Vong chung ket Euro\n");
			if (nam >= 1996)
				printf("To chuc AFF Cup\n");
			break;
		}
		case 2:
		{
			printf("Vong chung ket World Cup\n");
			if (nam > 1975)
				printf("Vo dich AFF Cup\n");
			break;
		}
		case 1:
		case 3:
			printf("Giai SeaGame\n");
			break;

		}
		//default
		//break;
	}
	else
		printf("Nam vua nhap khong hop le");
	scanf_s("%d");
}
