#include <iostream>
#include <math.h>
#include <iomanip>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main()
{
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "e = "; cin >> e;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(15) << "cos(x)" << " | "
        << setw(10) << "s" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-------------------------------------------------" << endl;


    x = x_p;
    while (x <= x_k)
    {
        nsSum::sum();
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(15) << setprecision(5) << cos(x) << " |"
            << setw(10) << setprecision(5) << s << " |"
            << setw(5) << n << " |"
            << endl;
        x += dx;
    }

	return 0;
}
	
