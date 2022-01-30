#include <iostream>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];

    bool exist = false;
    for(int bit = 0; bit < (1<<n); ++bit) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) { 
                sum += a[i];
            }
        }
        if (sum == s) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
