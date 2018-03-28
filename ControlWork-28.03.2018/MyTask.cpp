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
		cout << "������� ����� �������, 0 - ��� ������ ";
		cin >> nz;
		cin.get();

		if (nz == 0)
		{
			break;
			system("exit");
		}

		else if (nz == 1)
		{
			printf("1. ������������ ������ ��������, ������ ������� �������� �������� ��������� ����:");
			/*  a. ���� �������������, ���������� �� ����� ��� �������� (������);
				b.	���� ������� ��������� �� ��������� ������ ���� � ���� ������� (������);
				c.	����������� ���������� ����� �� ��������� ������ ���� � ���� ������� (������); */

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
			printf("2. ������������ ������ ��������, ������ ������� �������� �������� ��������� ��� ����:");
			/*a.	�������, ��� �������� �������� (������);
			  b.	������ ������ � �������������� ������� (������);
			  c.	�������*/
			for ( i = 0; i < 2; i++)
			{	
				sr = 0;
				printf("������� ��� ��������:");
				gets_s (ocenki[i].FirstN);
				printf("������� ������� ��������:");
				gets_s(ocenki[i].LastN);
				printf("������� ������ %d ��������:",i);
				for (j = 0; j < 5; i++)
				{
					scanf("%d", ocenki[i].Ball);
					sr += ocenki[i].Ball / 4;
				}
			}

			
			
			

		}

		else if (nz == 6)
		{
			///* ������� ���������� �� ������ ��������� � ��������� ����� � ������ N �������. �� ������� �� ��������� ������� ��������� ��������: �������, ������ �� ����������,
			///*������ �� ����������� � ������ �� ������. ������ ���������� �� ��������� � ���������� ���������� � ������� ����������.*/
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
					cout << currentStud->fio << " � ";
				currentStud = currentStud->next;
			}

			cout << endl;*/

		}

		else if (nz == 9)
		{
			/*9.	������� ��������� � ������ STUDENT, ���������� ����:
a.	������� � �������� ��������;
b.	����� ������;
c.	������������ (������ �� ������� ������ �� ��������� � 5-������� �������).
d.	ZOD � ���� �������
e.	DATE � ���� �������� (������ �� ���� �����: ���, �����, �����).
*/
			Student stud1[2];
			for (int i = 0; i < 2; i++) {
				cout << "Vvedite FIO " << endl;
				cin >> stud1[i].name;
				cout << "Vvedite nomer gruppbl " << endl;
				cin >> stud1[i].group;
				for (int j = 0; j < 4; j++)
				{
					cout << "Vvedite yspevaemost studenta " << j + 1 << "-��� predmeta " << endl;
					cin >> stud1[i].ses[j];
				}


				int countStidentsWith2 = 0;
				for (int i = 0; i < 3; i++)
					for (int j = 0; j < 5; j++)

						if (stud1[i].ses[j] == 2)
						{
							cout << "������� �������� � ������� 2 �" << stud1[i].name << endl;
							countStidentsWith2++;
							break;
						}

				if (countStidentsWith2 == 0)
					cout << "�������� � 2 ��� !" << endl;

			}
		}

		else
		{
			cout << "������ ������� �� ���������� \n";
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