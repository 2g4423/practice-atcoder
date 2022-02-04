#include <iostream>
using namespace std;

int main() {
    long long a, b; 
    cin >> a >> b;
    
    while(a >= 1 && b >= 1) {
        if(a > b) a = a % b;
        else b = b % a;
    }
    if(a > 0) cout << a << endl;
    if(b > 0) cout << b << endl;
        
    return 0;
}
