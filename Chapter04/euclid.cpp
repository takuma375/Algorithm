#include <iostream>
using namespace std;

int GCD(int m, int n) {
    int r;
    r = m % n;

    if (r==0) return n;

    return GCD(n, r);
}

int main(){
    cout << GCD(51, 15) << endl;
    cout << GCD(15, 51) << endl;
}
