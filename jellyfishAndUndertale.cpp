#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;
        long long seconds = b;
        for (int i = 0; i<n; i++){
            long long num;
            cin >> num;
            seconds += min(num, a-1);
        }
        
        
        cout << seconds << '\n';
    }

    return 0;
}