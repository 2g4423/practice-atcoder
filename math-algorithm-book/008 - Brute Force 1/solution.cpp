#include <iostream>
using namespace std;

int main() {
    int N, S, cnt = 0;
    cin >> N >> S;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j++) {
            if(i + j <= S) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
