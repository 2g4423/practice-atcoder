#include <iostream>
using namespace std;

int n, b[100009], r[100009];
double blue = 0.0, red = 0.0;

int main() {
    cin >> n;

    for(int i = 1; i <= n; i++) cin >> b[i];
    for(int i = 1; i <= n; i++) cin >> r[i];
    
    for(int i = 1; i <= n; i++) {
        blue += 1.0 * b[i] / n;
        red += 1.0 * r[i] / n;
    }

    printf("%.12lf\n", blue + red);

    return 0;
}