#include <iostream>
#include <fstream>
#include <windows.h>
#include <time.h>
#include <string>
#include <string.h>
#include <cstring>
#include <stdio.h>
#include <vector>

using namespace std;

void bin_sys(int x)
{
	string s = "";
	while (x != 0)
	{
		int t = x % 2;
		s = (char)(t+48) + s;
		x = x / 2;
	}
	cout << s;
}

void hex_sys(int x)
{
	string s = "";
	while (x != 0)
	{
		int t = x % 16;
		if (t < 10)
			s = (char)(t + 48) + s;
		else if (t == 10)
			s = "A" + s;
		else if (t == 11)
			s = "B" + s;
		else if (t == 12)
			s = "C" + s;
		else if (t == 13)
			s = "D" + s;
		else if (t == 14)
			s = "E" + s;
		else if (t == 15)
			s = "F" + s;
		x = x / 16;
	}
	cout << s;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	
	int dig;
	int op;
	cout << "Выберите номер пункта:\n"
		<< "1. Перевод в двоичную систему\n"
		<< "2. Перевод в шестнадцатеричную систему\n";
	cin >> op;
	cout << "Введите число:\n";
	cin >> dig;
	switch (op)
	{
		case(1):
		{
			bin_sys(dig);
			break;
		}
		case(2):
		{
			hex_sys(dig);
			break;
		}
	}
}