#include <iostream>
using namespace std;

int main() {
    int n; 
    string answer;
    bool divisible = false;

    cin >> n;

    for(int i = 2; i <= n; i++) {
        for(int j = 2; j < i; j++) {
            if(i % j == 0) divisible = true;
        }
        if(i > 2) answer += " ";
        if(divisible == false) answer += to_string(i);
        divisible = false;
    }
    cout << answer << endl;
}
