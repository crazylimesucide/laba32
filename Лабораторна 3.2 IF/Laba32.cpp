#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
int main()

{
	double x;
	double a;
	double b;
	double c;
	double F;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	if (c < 0 && a != 0)
		F=(((-1)*a)*(x*x));
	if (c > 0 && a == 0)
		F=((a-x)/(c*x));
	if (!(c < 0 && a != 0) && !(c > 0 && a == 0))
		F=(x/c);
	cout << endl;
	cout << "1) F = " << F << endl;
	return 0;
}