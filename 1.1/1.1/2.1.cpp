#include <iostream>
#include <tchar.h>

using namespace std;

int main()
{
	TCHAR str1[30] = _TEXT("¬введите число галлонов: ");
	cout << str1;
	int g;
	cin >> g;
	return 0;
}