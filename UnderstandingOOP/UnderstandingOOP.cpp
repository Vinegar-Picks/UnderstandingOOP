#include <iostream>
#include "Calculations.h"
using namespace std;
int main()
{
	double a, b;
	cout << "Enter value for a ==> ";
	cin >> a;
	cout << "Enter value for b ==> ";
	cin >> b;
	Calculations Yovani(a, b);
	Yovani.Addition();
	double r = Yovani.getResult();
	cout << "The sum is ==> " << r << endl;
}
