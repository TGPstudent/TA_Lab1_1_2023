//TA_Lab1_1_2023.c Робота з файлами. Знаходимо в файлі Input.dat парні елементи.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	//Встановив кодування, підключення Укр. мови
	system("chcp 1251"); 
	setlocale(LC_CTYPE, "ukr"); 
	system("cls");
	
	//Відкрив файл
	FILE *Inp;
	Inp = fopen("E:\\BUK_UNIVER\\II_kurs(II sem)\\ТА\\Lab1\\TA_Lab_1_1_2023\\Input.dat", "rb");
	// Перевірка відкриття	
	if (Inp == 0)
		printf(" Не можу відкрити файл для зчитування інформації. \n Перевірьте наявність файлу: \n E:\\BUK_UNIVER\\II_kurs(II sem)\\ТА\\Lab1\\TA_Lab_1_1_2023\\Input.dat\n");
	else 
	{	
		printf(" Файл Input.dat успішно відкрито для читання.\n");
		// Перевірка присутності інформації в файлі
		fseek(Inp, 0, 2);
		if (ftell(Inp) == 0) printf(" У відкритому файлі відсутня інформація."); 
		else
		{
			int r, N;
			printf("\n У відкритому файлі містяться наступні числа: \n ");
			fseek(Inp, 0, 0);
			do
			{
				fscanf(Inp, "%d", &r);
				printf("%d; ", r);
			} while (!feof(Inp));
			printf("\b\b.\n");
			
			printf("\n З них парними є: ");
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
			printf(" Кількість парних чисел у файлі: %d.", N);
			fclose(Inp);
		}
	}
	int getch(); getch();
	return 0;
}
