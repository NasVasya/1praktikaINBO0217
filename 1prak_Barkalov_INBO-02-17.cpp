#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	int a, b;
	double A, B;
	string name;
	cout << "Enter you name&surname - ";
	getline(cin, name);
	cout << "Welcome, " << name << "!\n\nEnter integer a = ";
	cin >> a;
	cout << "Enter integer b = ";
	cin >> b;
	cout << "\na + b = " << a+b << "\na - b = " << a - b << "\nb - a = " << b - a << "\na*b = " << a*b << "\na.b = " << a/b << "\nb/a = " << b / a << endl << endl;

	cout << "Enter fractional number A = ";
	cin >> A;
	cout << "Enter fractional number B = ";
	cin >> B;
	cout << "\nA + B = " << A + B << "\nA - B = " << A - B << "\nB - A = " << B - A << "\nA*B = " << A * B << "\nA/B = " << A / B << "\nB/A = " << B / A << endl << endl;
	system("pause");
	return 0;
}
