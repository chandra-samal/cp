#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        int steps = 0;
        // slice down the larger part first
        while (m!=1){
            if (m-b>=b){
                m = b;
            }
            else {
                m = m - b + 1;
                b = 1;
            }
            a = (n+1)/2;
            b = (m+1)/2;
            steps++;
        }
        while (n!=1){
            if (n-a>a){
                n = a;
            }
            else{
                n = n - a + 1;
                a = 1;
            }
            a = (n+1)/2;
            b = (m+1)/2;
            steps++;
        }

        cout << steps << '\n';
    }

    return 0;
}