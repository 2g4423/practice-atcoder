#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
        while(a >= 1 && b >= 1) {
            if(a > b) a = a % b;
            else b = b % a;
        }
        if(a >= 1) return a;
        return b;
}

long long lcm(long long a, long long b) {
        return (a / gcd(a, b)) * b;
}

int main() {
    long long n, result;
    long long a[100000];

    cin >> n;
    for(long long i = 0; i < n; i++) cin >> a[i];

    result = lcm(a[0], a[1]);
    for(long long i = 2; i < n; i++) {
        result = lcm(result, a[i]);
    }
    cout << result << endl;
        
    return 0;
}
