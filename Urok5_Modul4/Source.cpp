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
		cout << "������� ����� ������� n=";
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
					cout << "������� ����� " << i << " ����������: ";
					mark = 1 + rand() % 5;
					cout << mark;
					cout << endl;
					sumMark += mark;
				}
				cout << "����� ����� " << i << " ���������� ����������: " << sumMark << endl;

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
					cout << "������� ������ ������� " << i << " ������: ";
					markPh = 1 + rand() % 5;
					cout << markPh;
					cout << endl;
					sumMarkPh += markPh;
				}
				cout << "������� ������ ������� " << i << " ������ ����������: " << sumMarkPh / 20 << endl;
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

				cout << "���������� ������� " << i << " ������: ";
				sitizens = 1000 + rand() % 10000;
				cout << sitizens;
				cout << endl;

				cout << "������� " << i << " ������: ";
				area = 100 + rand() % 100;
				cout << area;
				cout << endl;

				cout << "��������� ��������� " << i << " ������: ";
				p = sitizens / area;
				cout << p;
				averageArea += p;

				cout << endl;
			}
			cout << "������� ��������� �� ������� � ����� ����������: " << (double)averageArea / 12 << endl;


			system("pause");
			goto start;

			break;

		case 4:
			int numberCust;
			double age, maxAge, minAge, averAge;

			numberCust = 10 + rand() % 10;
			cout << "������� ��� �������� " << numberCust << " �������" << endl;

			maxAge = 0;
			minAge = 1000;
			averAge = 0;

			for (i = 1; i <= numberCust; i++)
			{
				cout << "������� " << i << " ���������� ���������� ";
				age = 20 + rand() % 20;
				cout << age;
				cout << endl;
				averAge += age;
				if (maxAge < age) maxAge = age;
				if (minAge > age) minAge = age;
			}

			cout << "������������ ������� ���������� " << maxAge << endl;
			cout << "����������� ������� ���������� " << minAge << endl;
			cout << "������� ������� ���������� " << averAge / numberCust << endl;
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

				cout << "���������� ������ ��� " << i << " ������ ";
				if ((numberBox = 1 + rand() % 10) <= sumBox)
				{
					cout << numberBox << endl;
					sumBox -= numberBox;
					cout << "������ �������� " << sumBox << endl;
				}
				else
				{
					cout << numberBox << " ������ ��� �� ������." << endl;
					cout << "����� ����� " << sumBox << " ������." << endl;
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