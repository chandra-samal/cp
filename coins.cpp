#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        bool isPossible = false;
        if (n%2){
            if (k%2==0) isPossible = false;
            else isPossible = true;
        }
        else isPossible = true;
        if (isPossible) cout << "Yes\n";
        else cout << "No\n";
    }

    return 0;
}