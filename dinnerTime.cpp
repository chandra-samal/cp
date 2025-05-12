#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, m, p, q;
        cin >> n >> m >> p >> q;

        if (n%p){
            cout << "YES\n";
            continue;
        }
        int consecutiveSum = 0;
        for (int i = 1; i<=n; i++){
            if (i%p==0) consecutiveSum += q;
        }
        if (consecutiveSum!=m){
            cout << "NO\n";
        }
        else cout << "YES\n";
        
    }

    return 0;
}