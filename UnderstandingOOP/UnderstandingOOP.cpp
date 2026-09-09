#include <iostream>
#include "Calculations.h"
using namespace std;
int main()
{
    Calculations Yovani(25,15);
    Yovani.Addition();
    cout << "The Result is: " << Yovani.getResult() << endl;
}
