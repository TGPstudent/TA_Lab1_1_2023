//TA_Lab1_1_2023.c ������ � �������. ��������� � ���� Input.dat ���� ��������.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	//��������� ���������, ���������� ���. ����
	system("chcp 1251"); 
	setlocale(LC_CTYPE, "ukr"); 
	system("cls");
	
	//³����� ����
	FILE *Inp;
	Inp = fopen("E:\\BUK_UNIVER\\II_kurs(II sem)\\��\\Lab1\\TA_Lab_1_1_2023\\Input.dat", "rb");
	// �������� ��������	
	if (Inp == 0)
		printf(" �� ���� ������� ���� ��� ���������� ����������. \n ��������� �������� �����: \n E:\\BUK_UNIVER\\II_kurs(II sem)\\��\\Lab1\\TA_Lab_1_1_2023\\Input.dat\n");
	else 
	{	
		printf(" ���� Input.dat ������ ������� ��� �������.\n");
		// �������� ���������� ���������� � ����
		fseek(Inp, 0, 2);
		if (ftell(Inp) == 0) printf(" � ��������� ���� ������� ����������."); 
		else
		{
			int r, N;
			printf("\n � ��������� ���� �������� ������� �����: \n ");
			fseek(Inp, 0, 0);
			do
			{
				fscanf(Inp, "%d", &r);
				printf("%d; ", r);
			} while (!feof(Inp));
			printf("\b\b.\n");
			
			printf("\n � ��� ������� �: ");
			fseek(Inp, 0, 0); N = 0;
			do
			{
				fscanf(Inp, "%d", &r);
				if (r % 2 == 0 && r!=0)
				{
					printf("%d; ", r);
					N++;
				}
			} while (!feof(Inp));
			printf("\b\b.\n");
			printf(" ʳ������ ������ ����� � ����: %d.", N);
			fclose(Inp);
		}
	}
	int getch(); getch();
	return 0;
}
