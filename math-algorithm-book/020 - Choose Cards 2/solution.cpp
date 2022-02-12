#include <iostream>
using namespace std;

int n, a[1009];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) cin >> a[i];

    int r = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                for(int l = k + 1; l < n; l++) {
                    for(int m = l + 1; m < n; m++) {
                        if(a[i] + a[j] + a[k] + a[l] + a[m] == 1000) r++;
                    }
                }
            }
        }
    }
    cout << r << endl;
        
    return 0;
}