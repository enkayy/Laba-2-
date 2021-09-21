
#include <iostream>
#include <math.h>

using namespace std;

int main()

{

	setlocale(LC_ALL, "Russian");

	int a;

	int b;

	int c;

	int d;

	cout << "Введите число от 1 до 9999: ";

	cin >> a;

	for (a < 1; a > 9999;)

	{

		cout << "Вы ввели неправильное число" << endl;

		system("pause");

		return(0);

	}

	if ((a / 1000) == 9)

		cout << "Девять тысяч ";

	else if ((a / 1000) == 8)

		cout << "Восемь тысяч ";

	else if ((a / 1000) == 7)

		cout << "Семь тысяч ";

	else if ((a / 1000) == 6)

		cout << "Шесть тысяч ";

	else if ((a / 1000) == 5)

		cout << "Пять тысяч ";

	else if ((a / 1000) == 4)

		cout << "Четыре тысячи ";

	else if ((a / 1000) == 3)

		cout << "Три тысячи ";

	else if ((a / 1000) == 2)

		cout << "Две тысячи ";

	else if ((a / 1000) == 1)

		cout << "Одна тысяча ";

	b = a % 1000;

	if ((b / 100) == 9)

		cout << "девятсот ";

	else if ((b / 100) == 8)

		cout << "восемьсот ";

	else if ((b / 100) == 7)

		cout << "семьсот ";

	else if ((b / 100) == 6)

		cout << "шестьсот ";

	else if ((b / 100) == 5)

		cout << "пятьсот ";

	else if ((b / 100) == 4)

		cout << "четыреста ";

	else if ((b / 100) == 3)

		cout << "триста ";

	else if ((b / 100) == 2)

		cout << "двести ";

	else if ((b / 100) == 1)

		cout << "сто ";

	c = b % 100;

	if ((c / 10) == 9)

		cout << "девяносто ";

	else if ((c / 10) == 8)

		cout << "восемьдесят ";

	else if ((c / 10) == 7)

		cout << "семьдесят ";

	else if ((c / 10) == 6)

		cout << "шестьдесят ";

	else if ((c / 10) == 5)

		cout << "пятьдесят ";

	else if ((c / 10) == 4)

		cout << "сорок ";

	else if ((c / 10) == 3)

		cout << "тридцать ";

	else if ((c / 10) == 2)

		cout << "двадцать ";

	else if (c == 19)

	{

		cout << "девятнацать рублей ";

		system("pause");

		return(0);

	}

	else if (c == 18)

	{

		cout << "восемнадцать рублей ";

		system("pause");

		return(0);

	}

	else if (c == 17)

	{

		cout << "семнадцать рублей ";

		system("pause");

		return(0);

	}

	else if (c == 16)

	{

		cout << "шестнадцать рублей ";

		system("pause");

		return(0);

	}

	else if (c == 15)

	{

		cout << "пятнадцать рублей ";

		system("pause");

		return(0);

	}

	else if (c == 14)

	{

		cout << "четырнадцать рублей ";

		system("pause");

		return(0);

	}

	else if (c == 13)

	{

		cout << "тринадцать рублей ";

		system("pause");

		return(0);

	}

	else if (c == 12)

	{

		cout << "двенадцать рублей ";

		system("pause");

		return(0);

	}

	else if (c == 11)

	{

		cout << "одиннадцать рублей ";

		system("pause");

		return(0);

	}

	else if (c == 10)

		cout << "десять ";

	d = c % 10;

	if (d == 9)

		cout << "девять ";

	else if (d == 8)

		cout << "восемь ";

	else if (d == 7)

		cout << "семь ";

	else if (d == 6)

		cout << "шесть ";

	else if (d == 5)

		cout << "пять ";

	else if (d == 4)

		cout << "четыре ";

	else if (d == 3)

		cout << "три ";

	else if (d == 2)

		cout << "два ";

	else if (d == 1)

		cout << "один ";

	if (d == 9)

		cout << "рублей ";

	else if (d == 8)

		cout << "рублей ";

	else if (d == 7)

		cout << "рублей ";

	else if (d == 6)

		cout << "рублей ";

	else if (d == 5)

		cout << "рублей ";

	else if (d == 4)

		cout << "рубля ";

	else if (d == 3)

		cout << "рубля ";

	else if (d == 2)

		cout << "рубля ";

	else if (d == 1)

		cout << "рубль ";

	else if (d == 0)

		cout << "рублей ";

	system("pause");

	return (0);

}