#include <iostream>
using namespace std;

int main() {
    int N, A[51];
    int Answer = 0;
    cin >> N;
    for(int i = 1; i <= N; i++) {
        cin >> A[i];
        Answer += A[i];
    }
    cout << Answer % 100 << endl;
    return 0;
}
