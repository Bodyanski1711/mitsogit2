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

		cout << "введите количество чисел, которые должны быть сгенерированы ";
		cin >> N;
		cout << "до какого числа будут генерироваться числа? (от 10 до 100) - ";
		cin >> lim;

		if (lim < 10 || lim > 100)
		{
			cout << "условие нарушено. программа завершается";
		}
		else
		{

			cout << endl;
			cout << "Количество чисел введено";
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
			cout << "Желаете повторить? (1 - да, 0 - нет) " << endl;
			cin >> use;
			cout << endl;

			if (use == 0)
			{
				cout << endl;
				cout << "программа завершается.";
			}

		}
	}



	get_ch = _getch();
}
