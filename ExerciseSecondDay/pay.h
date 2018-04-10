/*Tính tiền lương mỗi ngày cho công nhân. cho biết giờ vào, ra ca.
Tiền trả mỗi giờ trước 12h trưa là 6.000đ, sau 12h trưa là 7.500đ.
Vào ca sớm nhất 6h, ra ca muộn nhất 18h
Giờ vào và ra ca tính số thực, không tính phút*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include"stdafx.h"
#define DGMorning 6.000//don gia sang
#define DGAfternoon  7.500//Don gia chieu
#define InMin 6//gio vao ca som nhat
#define OutMax 18//Gio ra ca tre nhat
#define MidTime 12//Gio chuyen ca
void calculatePay()
{
	float in, out;//gio vao ca, ra ca
	float timeM, timeA;//so gio lam buoi sang, so gio lam buoi chieu
	float salary;//tien cong
	printf("Chuong trinh tinh luong moi ngay cho cong nhan\n");
	printf("Nhap gio vao(in>=6): ");
	scanf_s("%f", &in);
	printf("Nhap gio ra ca (out<=18): ");
	scanf_s("%f", &out);
	if (in >= InMin && out <= OutMax && in <= out)
	{
		if (out <= MidTime)//Cong nhan chi lam buoi sang
		{
			timeA = 0;
			timeM = out - in;
		}
		else
		{
			if (in >= MidTime)//Cong nhan chi lam buoi chieu
			{
				timeM = 0;
				timeA = out - in;
			}
			else
			{
				if (in<MidTime && out>MidTime)//con lai cong nhan lam ca ngay
				{
					timeM = MidTime - in;
					timeA = out - MidTime;
				}
			}
		}
		salary = timeM * DGMorning + timeA * DGAfternoon;
		printf("Tien cong la: %0.3f", salary);
	}
	else
		printf("Du lieu nhap khong hop le");
	scanf_s("%d");
}
