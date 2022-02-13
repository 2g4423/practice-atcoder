#include <iostream>
using namespace std;

int n, a[200009], b[200009];
double answer = 0.0;

int main() {
    cin >> n;

    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++) cin >> b[i];
    
    for(int i = 1; i <= n; i++) {
        answer += a[i] * (1.0 / 3.0) + b[i] * (2.0 / 3.0);
    }

    printf("%.12lf\n", answer);

    return 0;
}