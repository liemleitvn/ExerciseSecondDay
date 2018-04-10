/*Tinh so tien thu duoc khi ban m kg hang hoa (0<m<=100). Biet rang:
0<m<=10==>tien loi 5.000/kg
10<m<=20==>tien loi 7.000/kg
20<m<=50==>tien loi 9.000/kg cong them 2% tien loi
m>50==>tien loi 10.000/kg cong them 4% tien loi nhung khong qua 1.000.000*/
#include<stdio.h>
#include<math.h>
#include<conio.h>

#define M_one 10 //moc co tien loi 5000/kg
#define M_two 20 //moc co tien loi 7000/kg
#define M_three 50//moc co tien loi 9000/kg
#define profit_one 5000 //loi nhuan cap 1
#define profit_two 7000
#define profit_three 9000
#define profit_four 10000

void calculateProfit()
{
	float m;//khoi luong hang ban duoc
	float profit;//loi nhuan thu duoc
	printf("Chuong trinh tinh tien loi thu duoc khi ban hang\n");
	printf("Nhap khoi luong hang da ban duoc: ");
	scanf_s("%f", &m);
	if (m > 0 && m <= 100)
		if (m > M_three)
		{
			profit = m * profit_four;
			profit = profit + profit * 0.04;
			if (profit >= 1000000)
				printf("Tien loi la: 1.000.000");
			else
				printf("Tien loi la: %0.3f", profit);
		}
		else
		{
			if (m>M_two&&m <= M_three)
			{
				profit = m * profit_three;
				profit = profit + profit * 0.02;
				printf("Tien loi la: %0.3f", profit);
			}
			else
			{
				if (m > M_one && m <= M_two)
				{
					profit = m * profit_two;
					printf("Tien loi la: %0.3f", profit);
				}
				else
				{
					profit = m * profit_one;
					printf("Tien loi la: %0.3f", profit);
				}
			}
		}
}