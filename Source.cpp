#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

/* Created by Rizky Khapidsyah */

int main() {
	char Hari[7][10];
	int i;

	for (i = 0; i < 7; i++)
	{
		cout << "Hari ke " << i + 1 << " : ";
		cin >> Hari[i];
	}

	cout << endl;

	for (i = 0; i < 7; i++)
	{
		cout << "Hari ke " << i + 1 << " : " << Hari[i] << endl;
	}

	cout << endl << endl;

	_getch();
	return 0;
}