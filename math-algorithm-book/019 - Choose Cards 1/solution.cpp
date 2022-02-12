#include <iostream>
using namespace std;

long long n;
int a[500009];

int main() {
    cin >> n;

    for(long long i = 0; i < n; i++) cin >> a[i];

    long long x = 0, y = 0, z = 0; 
    for(long long i = 0; i < n; i++) {
        switch(a[i]) {
            case 1:
                x++;
                break;
            case 2:
                y++;
                break;
            case 3:
                z++;
                break;
            default:
                break;
        }
    }
    long long r1 = x * (x - 1) / 2;
    long long r2 = y * (y - 1) / 2;
    long long r3 = z * (z - 1) / 2;
    cout << r1 + r2 + r3 << endl;
        
    return 0;
}