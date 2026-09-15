#include <iostream>
#include "Calculations.h"
using namespace std;
int main()
{
	//Mexico
	double a, b;
	cout << "Enter value for a ==> ";
	cin >> a;
	cout << "Enter value for b ==> ";
	cin >> b;
	Calculations Mexico(a, b);
	Mexico.Addition();
	cout << "\nThe Mexico sum is ==> " << Mexico.getResult() << endl;

	//France
	double x, y;
	Calculations France;
	cout << "\nEnter value for a ==> ";
	cin >> x;
	cout << "Enter value for b ==> ";
	cin >> y;
	France.setNumA(x);
	France.setNumB(y);
	France.Addition();
	cout << "\nThe France sum is ==> " << France.getResult() << endl;

	//Switzerland
	double a1, b1;
	cout << "\nEnter value for a ==> ";
	cin >> a1;
	cout << "Enter value for b ==> ";
	cin >> b1;
	Calculations Switzerland(a1,b1);
	Switzerland.Addition();
	cout << "\nThe Switzerland sum is ==> " << Switzerland.getResult() << endl;
}

