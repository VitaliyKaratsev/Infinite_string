// practical_work_infinite_string.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <conio.h>
#include<iostream>
#include <stdio.h>
#include <windows.h>
#include<string>


using namespace std;

int count(string k);//

int resultsum_a,resultsum_b, resultsum_c = 0;// количество триад содержащих "a","b","c";

int a_value = 0;
int b_value= 0;
int c_value = 0;

int main()
{
	string k; // объявляем переменную типа string;
	while (!_kbhit()) // пока не нажата клавиша выводим рандомную последовательность состоящую из a,b,c;
	{
		k = 97 + rand() % 3;
		cout << k;
		count(k);
	}
	cout << endl; 
	cout << resultsum_a << endl;  // выводим итоговый результат
	cout << resultsum_b << endl;
	cout << resultsum_c << endl;


	system("pause");
	return 0;

}
int count(string k)
{
	if (k == "a")
	{
		a_value++;
		if (a_value == 3)
		{
			resultsum_a++;
			a_value = 0;

		}
	}
	else a_value = 0;

	if (k == "b")
	{
		b_value++;
		if (b_value == 3)
		{
			resultsum_b++;
			b_value = 0;
		}
	}
	else b_value = 0;

	if (k == "c")
	{
		c_value++;
		if (c_value== 3)
		{
			resultsum_c++;
			c_value = 0;
		}
	}
	else	c_value = 0;
	return 0;
}