#include <iostream>
#include "Goods.h"
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Goods a(23.4, 6);
	cout << a;

	++a;
	cout << a;
	--a;
	cout << a;
	a++;
	cout << a;
	a--;
	cout << a;

	cout << a.operator string();
	cout << endl;
	cout << endl;
	cout << endl;

	Goods b;
	cin >> b;
	cout << b;

	++b;
	cout << b;
	--b;
	cout << b;
	b++;
	cout << b;
	b--;
	cout << b;

	cout << b.operator string();
	cout << endl;
	b.Cost();

	cout << endl;
	cout << endl;
	cout << endl;


	return 0;

}