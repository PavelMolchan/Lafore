#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ".1251");
	cout << "¬введите число галлонов: ";
	float g;
	cin >> g;
	cout << g << " галлонов - это "<<g/7.481<<" кубических футов.\n";
	return 0;
}