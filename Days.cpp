//Сидаков Амир
//Вывод дня недели

#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a;
	cout << "Введите число: "; cin >> a;

	if (a > 0)
	{
		a = a % 7;
		switch (a)
		{
		case 0:
			cout << "Sunday" << endl;
			break;
		case 1:
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesday" << endl;
			break;
		case 3:
			cout << "Wednesday" << endl;
			break;
		case 4:
			cout << "Thrusday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Saturday" << endl;
		}
	}

	else (cout << "Вы ввели не число или 0!");

	cout << "Hello world" << endl;
}