#include <iostream>
using namespace std;

long long n, a[200009];
long long cnt[100009];
long long answer = 0;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    
    // 入力値を整列して数をカウント
    for(int i = 1; i <= 99999; i++) cnt[i] = 0;
    for(int i = 1; i <= n; i++) cnt[a[i]] += 1;

    for(int i = 1; i <= 49999; i++) {
        answer += cnt[i] * cnt[100000 - i];
    }
    answer += cnt[50000] * (cnt[50000] - 1) / 2;

    cout << answer << endl;

    return 0;
}