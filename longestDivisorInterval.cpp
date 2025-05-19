#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long counter = 0;
        long long longestCounter = 0;
        long long nD = n;
        unordered_set<long long> divisors;
        for (int i = 1; i<=n; i++){
            if (n%i==0) counter++;
            else break;
        }
        
        cout << counter << '\n';
    }

    return 0;
}
