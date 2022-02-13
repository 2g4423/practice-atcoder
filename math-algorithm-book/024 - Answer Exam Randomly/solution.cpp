#include <iostream>
using namespace std;

int n, p[100009], q[100009];
double answer = 0.0;

int main() {
    cin >> n;

    for(int i = 1; i <= n; i++) cin >> p[i] >> q[i];
    
    for(int i = 1; i <= n; i++) {
        answer += 1.0 * q[i] / p[i];
    }

    printf("%.12lf\n", answer);

    return 0;
}