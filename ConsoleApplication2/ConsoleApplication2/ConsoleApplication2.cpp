#include <conio.h>
#include <iostream>


int N1;
int N2;
int ANSc;
int ANSu;
int ch;

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

		cout << "Система проверки знаний таблицы умножения"<<endl;
		cout << "Решите следующий пример: " << endl;
		N1 = rand() %9;
		N2 = rand() %9 ;
		ANSc = N1 * N2;
		cout << N1 << " * " << N2 << " = "<<endl;
		cout << "Ваш ответ: ";
		cin >> ANSu;
		cout << endl;
		if (ANSu = ANSc)
		{
			cout << "Ответ " << ANSu << " верный!";
		 }
		else
		{
			cout << "Ответ " << ANSu << " не верный!";
		}





		ch = _getch();
}

