#include <conio.h>
#include <iostream>

using namespace std;

int get_ch;


int main()
{
	int N;
	int lim;
	int use = 1;

	setlocale(LC_ALL, "Russian");

	while (use == 1)

	{

		cout << "������� ���������� �����, ������� ������ ���� ������������� ";
		cin >> N;
		cout << "�� ������ ����� ����� �������������� �����? (�� 10 �� 100) - ";
		cin >> lim;

		if (lim < 10 || lim > 100)
		{
			cout << "������� ��������. ��������� �����������";
		}
		else
		{

			cout << endl;
			cout << "���������� ����� �������";
			cout << endl;

			int *GEN = new int[N];

			for (int i = 0; i < N; i++)
			{
				GEN[i] = rand() % lim;


			}

			for (int i = 0; i < N; i++)
			{
				cout << GEN[i] << " " << "\t";

			}
			cout << endl;
			cout << "������� ���������? (1 - ��, 0 - ���) " << endl;
			cin >> use;
			cout << endl;

			if (use == 0)
			{
				cout << endl;
				cout << "��������� �����������.";
			}

		}
	}



	get_ch = _getch();
}
