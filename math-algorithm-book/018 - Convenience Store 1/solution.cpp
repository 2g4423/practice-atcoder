#include <iostream>
using namespace std;

int main() {
    long long n;
    int a[200009];

    cin >> n;

    for(long long i = 0; i < n; i++) cin >> a[i];

    long long c100 = 0, c200 = 0, c300 = 0, c400 = 0; 
    for(long long i = 0; i < n; i++) {
        switch(a[i]) {
            case 100:
                c100++;
                break;
            case 200:
                c200++;
                break;
            case 300:
                c300++;
                break;
            case 400:
                c400++;
                break;
            default:
                break;
        }
    }
    long long result = (c100 * c400) + (c200 * c300);
    cout << result << endl;
        
    return 0;
}