#include <stdio.h>
#include <cctype>
#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <malloc.h>
#include "MyPrototip.h"

#define MAXELEMENTS 5
#define MAXLENGTHCODE 3

struct Student
{
	char name[1];
	int group;
	int ses[5];
};

//struct Student2
//{
//	string fio;
//	int math, info, phys;
//	bool metka;
//	Student *next;
//};

enum priznak
{
	otlichnik,
	horoshist,
	troechnik,
	neuspevayushiy
};

struct Ocenki
{
	char FirstN[15];
	char LastN[15];
	int Ball;
	priznak priznak;
};

typedef struct Date
{
	unsigned int day,
		month,
		year;
} _date_t;

typedef struct Worker
{
	char _code[MAXLENGTHCODE];
	char _firstName[20];
	char _lastName[20];
	unsigned int _education;
	_date_t _dob;

} _worker_t;


void _sorting(_worker_t *);

using namespace std;

unsigned short int nz, pr;



void main()
{
	setlocale(LC_ALL, "Rus");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(NULL));

	int i, j;

	while (true)
	{
		cout << "Введите номер задания, 0 - для выхода ";
		cin >> nz;
		cin.get();

		if (nz == 0)
		{
			break;
			system("exit");
		}

		else if (nz == 1)
		{
			printf("1. Сформировать массив структур, каждый элемент которого содержит следующие поля:");
			/*  a. шифр подразделения, содержащий не более трёх символов (вводим);
				b.	план выпуска продукции по кварталам одного года в виде массива (вводим);
				c.	фактическое выполнение плана по кварталам одного года в виде массива (вводим); */

			_worker_t _Massive[MAXELEMENTS];

			printf("%s", "Enter the data of the worker.\n");

			for (size_t index = 0; index < MAXELEMENTS; index++) {
				printf("%s", "\nEnter the code division: ");
				scanf("%s", _Massive[index]._code);
				printf("%s", "\nEnter the first name: ");
				scanf("%s", _Massive[index]._firstName);
				printf("%s", "\nEnter the last name: ");
				scanf("%s", _Massive[index]._lastName);
				printf("%s", "\nEnter the education of worker:\n 0 - Unfinished base\n 1 - Base\n 2 - Middle\n 3 - Unfinished high\n 4 - High\n Input: ");
				scanf("%u", &_Massive[index]._education);
				printf("%s", "\nEnter the dob of worker - format day month year(30 2 1902): ");
				scanf("%u %u %u", &_Massive[index]._dob.day, &_Massive[index]._dob.month, &_Massive[index]._dob.year);
			}

			_sorting(_Massive);

			system("PAUSE");


		}

		else if (nz == 2)
		{
			Ocenki ocenki[2];
			int sr;
			printf("2. Сформировать массив структур, каждый элемент которого содержит следующие три поля:");
			/*a.	фамилия, имя отчество студента (вводим);
			  b.	массив оценок в десятибалльной системе (вводим);
			  c.	признак*/
			for ( i = 0; i < 2; i++)
			{	
				sr = 0;
				printf("Введите имя студента:");
				gets_s (ocenki[i].FirstN);
				printf("Введите фамилию студента:");
				gets_s(ocenki[i].LastN);
				printf("Введите оценки %d студента:",i);
				for (j = 0; j < 5; i++)
				{
					scanf("%d", ocenki[i].Ball);
					sr += ocenki[i].Ball / 4;
				}
			}

			
			
			

		}

		else if (nz == 6)
		{
			///* Имеется информация по итогам экзаменов в институте всего в списке N человек. По каждому из студентов имеются следующие сведения: фамилия, оценка по математике,
			///*оценка по информатике и оценка по физике. Ввести информацию об экзаменах и напечатать количество и фамилии отличников.*/
			//bool f = true;
			//char fio[15];
			//int N = 0;
			//int math, info, phys;

			//Student2 * firstStud;
			//Student2 * currentStud;

			//cout << "Vvedite students" << endl;

			//while (1)
			//{
			//	Student2 *newStud = new Student2;
			//	cout << "Vvedite fio (exit - vihod)" << endl;
			//	cin >> fio;
			//	if (fio == "exit")
			//		break;
			//	N++;
			//	cout << "Vvedite ocenki" << endl;

			//	while (1)
			//	{
			//		cin >> math >> info >> phys;
			//		if (mark(math) && mark(info) && mark(phys))
			//			break;
			//	}


				/*newStud->fio = fio;
				newStud->info = info;
				newStud->math = math;
				newStud->phys = phys;
				newStud->metka = false;
				newStud->next = NULL;

				if (f)
				{
					firstStud = newStud;
					currentStud = newStud;
					f = false;
					continue;
				}

				currentStud->next = newStud;
				currentStud = newStud;
			}
			currentStud = firstStud;

			int kol = 0;

			while (currentStud != NULL)
			{
				if ((currentStud->math == 4 && currentStud->phys != 4 && currentStud->info != 4)
					|| (currentStud->math != 4 && currentStud->phys == 4 && currentStud->info != 4)
					|| ((currentStud->math != 4 && currentStud->phys != 4 && currentStud->info == 4)))
				{
					currentStud->metka = true;
					kol++;
				}
				currentStud = currentStud->next;
			}

			cout << "Vsego students s odnoy chetverkoy:" << kol << endl << "Familii students:" << endl;

			currentStud = firstStud;
			while (currentStud != NULL)
			{
				if (currentStud->metka == true)
					cout << currentStud->fio << "   ";
				currentStud = currentStud->next;
			}

			cout << endl;*/

		}

		else if (nz == 9)
		{
			/*9.	Описать структуру с именем STUDENT, содержащую поля:
a.	фамилия и инициалы студента;
b.	номер группы;
c.	успеваемость (массив из четырех оценок на экзаменах в 5-бальной системе).
d.	ZOD – знак зодиака
e.	DATE – дата рождения (массив из трех чисел: год, месяц, число).
*/
			Student stud1[2];
			for (int i = 0; i < 2; i++) {
				cout << "Vvedite FIO " << endl;
				cin >> stud1[i].name;
				cout << "Vvedite nomer gruppbl " << endl;
				cin >> stud1[i].group;
				for (int j = 0; j < 4; j++)
				{
					cout << "Vvedite yspevaemost studenta " << j + 1 << "-ого predmeta " << endl;
					cin >> stud1[i].ses[j];
				}


				int countStidentsWith2 = 0;
				for (int i = 0; i < 3; i++)
					for (int j = 0; j < 5; j++)

						if (stud1[i].ses[j] == 2)
						{
							cout << "Фамилия студента с оценкой 2  " << stud1[i].name << endl;
							countStidentsWith2++;
							break;
						}

				if (countStidentsWith2 == 0)
					cout << "Студетов с 2 нет !" << endl;

			}
		}

		else
		{
			cout << "Такого задания не существует \n";
		}
	}

}

void _sorting(_worker_t *_pt)
{
	char divCode[MAXLENGTHCODE];
	_worker_t _tmp;

	printf("%s", "Just enter a code division: ");
	scanf("%s", divCode);


	for (size_t i = 0; i <= MAXELEMENTS / 2; i++) {
		if (strcmp(_pt[i]._code, divCode) == 0) {
			for (size_t j = MAXELEMENTS - 1; j >= MAXELEMENTS / 2; j--) {
				if (_pt[i]._education > _pt[MAXELEMENTS / 2]._education || _pt[j]._education < _pt[MAXELEMENTS / 2]._education) {
					_tmp = _pt[i];
					_pt[i] = _pt[j];
					_pt[j] = _tmp;
				}
			}
		}
	}
}