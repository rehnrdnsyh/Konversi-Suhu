#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout << "konversi suhu\n";
	double dC;
	cout << "input suhu :      " << char(248) << "C\b\b\b\b";
	cin >> dC;
	double dR = (4 / 5) * dC;
	double dF = (9 / 5) * dC;
	double dK = dC + 273.15;

	cout << "      -> " << dR << char(248) << "R\n";
	cout << "      -> " << dF << char(248) << "F\n";
	cout << "      -> " << dK << char(248) << "K\n";

	system("pause");

	return 0;
}
