#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int gc;

void main()

{
	setlocale(LC_ALL, "Russian");


	float A;
	float ans;


	cout << "¬ведите A" << endl;
	cin >> A;

	cout << "¬ведите N (N>0)" << endl;
	cin >> N;

	if (N < 0)
	{
		cout << "„исло N должно быть положительным";
	}
	else
	{

		for (int i = 1; i <= N; i++)
		{

			ans = (A, i);
			cout << A << " в степени " << i << " = " << ans << endl;

		}

	}

	gc = _getch();

}

