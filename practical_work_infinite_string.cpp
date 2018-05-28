//Дана бесконечная последовательность , составленная рандомно из символов a,b,c.Реализовать генератор псевдослучайной последовательности из символов и подсчитать кол-во триад aaa, bbb, ccc, каждые триады считать отдельно.
#include "stdafx.h"
#include <conio.h>
#include<iostream>
#include <stdio.h>
#include <windows.h>
#include<string>
using namespace std;

int main()
{
	int resultsum_a = 0, resultsum_b = 0, resultsum_c = 0;// количество триад содержащих "a","b","c";
	int a_value = 0, b_value = 0, c_value = 0;

	string k; // объявляем переменную типа string;
	while (!_kbhit()) // пока не нажата клавиша выполняем цикл	
	{
		k = 97 + rand() % 3;//создаем рандомную послендовательность из символов a,b,c;
		cout << k; // вывод последовательность
		if (k == "a") // производим подсчет триад
		{
			a_value++;
			if (a_value == 3)
			{
				resultsum_a++;
			}
		}
		else a_value = 0;

		if (k == "b")
		{
			b_value++;
			if (b_value == 3)
			{
				resultsum_b++;			
			}
		}
		else b_value = 0;

		if (k == "c")
		{
			c_value++;
			if (c_value == 3)
			{
				resultsum_c++;			
			}
		}
		else	c_value = 0;
	}
	cout << endl;
	cout << resultsum_a << endl;  // выводим итоговый результат
	cout << resultsum_b << endl;
	cout << resultsum_c << endl;

	system("pause");
	return 0;
}
