#include "nod.h"

int nod(int a, int b) {
    a = abs(a);
    b = abs(b);

    if (a > b && a == b) {
        while (b!=0){
            int temp = b;
            b = static_cast<long long>(b) % static_cast<long long>(a);
            a = temp;
        }
        return a;
    }
    else {
        while (a!=0){
            int temp = a;
            a = static_cast<long long>(b) % static_cast<long long>(a);
            b = temp;
        }
        return b;
    }
    return 0;
}