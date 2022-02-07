#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n, x, y, inputs, result;
    vector<long long> a;

    cin >> n;

    for(long long i = 0; i < n; i++) {
        cin >> inputs;
        a.push_back(inputs);
    }

    x = a[0];
    for(long long i = 0; i < n; i++) {
        y = a[i + 1];
        while(x >= 1 && y >= 1) {
            if(x > y) x = x % y;
            else y = y % x;
        }
        x = x > y ? x : y;
    }
    result = x > y ? x : y;
    cout << result << endl;
        
    return 0;
}
