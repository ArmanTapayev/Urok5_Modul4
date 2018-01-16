#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>
#include<time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int n, i, j;
	do
	{
	start:
		cout << "Введите номер задания n=";
		cin >> n;
		cout << endl;

		switch (n)
		{
		case 1:
			int mark, sumMark;
			for (i = 1; i <= 2; i++)
			{
				sumMark = 0;
				for (j = 1; j <= 5; j++)
				{
					cout << "Введите баллы " << i << " спортсмена: ";
					mark = 1 + rand() % 5;
					cout << mark;
					cout << endl;
					sumMark += mark;
				}
				cout << "Сумма балов " << i << " спортсмена составляет: " << sumMark << endl;

			}
			system("pause");
			goto start;
			break;

		case 2:
			int markPh;
			double sumMarkPh;

			for (i = 1; i <= 2; i++)
			{
				sumMarkPh = 0;
				for (j = 1; j <= 20; j++)
				{
					cout << "Введите оценку ученика " << i << " класса: ";
					markPh = 1 + rand() % 5;
					cout << markPh;
					cout << endl;
					sumMarkPh += markPh;
				}
				cout << "Средняя оценка ученика " << i << " класса составляет: " << sumMarkPh / 20 << endl;
			}

			system("pause");
			goto start;

			break;

		case 3:

			double sitizens, area;
			double p, averageArea;

			averageArea = 0;
			for (i = 1; i <= 12; i++)
			{

				cout << "Количество жителей " << i << " района: ";
				sitizens = 1000 + rand() % 10000;
				cout << sitizens;
				cout << endl;

				cout << "Площадь " << i << " района: ";
				area = 100 + rand() % 100;
				cout << area;
				cout << endl;

				cout << "Плотность населения " << i << " района: ";
				p = sitizens / area;
				cout << p;
				averageArea += p;

				cout << endl;
			}
			cout << "Средняя плотность по области в целом составляет: " << (double)averageArea / 12 << endl;


			system("pause");
			goto start;

			break;

		case 4:
			int numberCust;
			double age, maxAge, minAge, averAge;

			numberCust = 10 + rand() % 10;
			cout << "Сегодня зал посетило " << numberCust << " человек" << endl;

			maxAge = 0;
			minAge = 1000;
			averAge = 0;

			for (i = 1; i <= numberCust; i++)
			{
				cout << "Возраст " << i << " посетителя составляет ";
				age = 20 + rand() % 20;
				cout << age;
				cout << endl;
				averAge += age;
				if (maxAge < age) maxAge = age;
				if (minAge > age) minAge = age;
			}

			cout << "Максимальный возраст составляет " << maxAge << endl;
			cout << "Минимальный возраст составляет " << minAge << endl;
			cout << "Средний возраст составляет " << averAge / numberCust << endl;
			cout << endl;

			system("pause");
			goto start;
			break;

		case 5:
			int numberBox, sumBox;
			sumBox = 15;
			i = 1;
			while (sumBox>0)
			{

				cout << "Количество ящиков для " << i << " машины ";
				if ((numberBox = 1 + rand() % 10) <= sumBox)
				{
					cout << numberBox << endl;
					sumBox -= numberBox;
					cout << "Ящиков осталось " << sumBox << endl;
				}
				else
				{
					cout << numberBox << " больше чем на складе." << endl;
					cout << "Можно взять " << sumBox << " ящиков." << endl;
					break;
				}
				i++;
			}

			system("pause");
			goto start;
			break;

		}

	} while (n != 0);

}