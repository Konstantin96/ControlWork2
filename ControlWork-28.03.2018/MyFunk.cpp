#include <stdio.h>
#include <cctype>
#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include "MyPrototip.h"

using namespace std;


bool mark(int a)
{
	if (a > 1 && a < 6)
		return true;
	else
	{
		cout << "Error mark - vozmozhno tolko(2,3,4,5):" << endl;
		return false;
	}
}

//void CLASS_WORKERS::Input()
//{
//	cout << "Введите данные сотрудников :" << endl;
//	for (int i = 0;i < MAX_MEN; ++i)
//	{
//		cout << "Сотрудник №" << (i + 1) << endl;
//
//		cout << "Шифр: ";
//		cin >> x[i].shifr;
//		cout << endl;
//
//		cout << "ФИО: ";
//		cin >> x[i].name;
//		cout << endl;
//
//
//		cout << "Дата рождения: ";
//		cin >> x[i].birth;
//		cout << endl;
//
//		cout << "Образование: ";
//		cin >> x[i].aduc;
//		cout << endl;
//
//		cout << "Введите интересуемый вас шифр:" << endl;
//		cin >> NEEDSHIFR;
//
//		int const;
//		for (int p = 0;p < MAX_MEN;++p)
//		{
//			if (x[p].shifr == NEEDSHIFR)
//			{
//				k = k++;
//				SH[p] = 1;
//			}
//			else
//			{
//				SH[p] = 0;
//			}
//		}
//	}
//
//
//
//
//
//}




