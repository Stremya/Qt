#include <iostream>
#include <windows.h>
#include "nod.h"
using namespace std;

int main()
{
    int x, y;

    cout << "Enter two integer numbers: ";
    cin >> x >> y;
    cout << "NOD for " << x << " and " << y << " = " << nod(x, y) << endl;
    return 0;
}
