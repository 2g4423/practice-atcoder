#include <iostream>
using namespace std;

bool isprime(long long n) {
    for(long long i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    long long n; 
    cin >> n;

    if(isprime(n) == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
