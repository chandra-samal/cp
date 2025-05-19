#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin >> x >> k;
        int steps;
        if (x%k==0) steps = 2;
        else steps = 1;
        if (steps==1) cout << steps << '\n' << x << '\n'; 
        else cout << steps << '\n' << x-1 << " " << 1 << '\n';
    }

    return 0;
}