#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << setw(4) << 1990 << "\t" << setw(5)<<135 << "\n" <<
		1991 << "\t" << setw(5) << 7200 << "\n" <<
		1992 << "\t" << setw(5) << 11300 << "\n" <<
		1993 << "\t" << setw(5) << 16200 << "\n";
	return 0;
}