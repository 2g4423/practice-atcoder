#include <iostream>
using namespace std;

int main() {
    // n が大きくなると int 型ではオーバーフローになる
    long long n, answer = 1;
    cin >> n;
    for(int i = 2; i <= n; i++) {
        answer *= i;
    }
    cout << answer << endl;
}
