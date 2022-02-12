#include <iostream>
using namespace std;

int n, r;

long long factorial(int n) {
    long long r = 1;
    while (n > 1) {
        r *= n;
        n--;
    }
    return r;
}

int main() {
    cin >> n >> r;
    cout << factorial(n) / (factorial(r) * factorial(n - r)) << endl;
    return 0;
}