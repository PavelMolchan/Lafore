#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, ".1251");
	cout << "�������� ����� ��������: ";
	float g;
	cin >> g;
	cout << g << " �������� - ��� "<<g/7.481<<" ���������� �����.\n";
	return 0;
}