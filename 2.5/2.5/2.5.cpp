#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ".1251");
	cout << "������� ���������� ������: ";
	char ch;
	cin >> ch;
	cout << islower(ch) << endl;
	return 0;
}