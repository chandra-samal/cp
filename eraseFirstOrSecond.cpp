#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        // total number of strings of i charactes = number of distinct characters in n-(i-1) characters before (i-1) characters
        int ans = 0;
        char str[n];
        for (int i = 0; i<n; i++){
            cin >> str[i];
        }
        unordered_set<char> mySet;
        for (int i = 0; i<n; i++){
            mySet.insert(str[i]);
            ans += mySet.size();

        }
        cout << ans << '\n';
    }

    return 0;
}
