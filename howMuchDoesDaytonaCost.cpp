#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        bool isFound = false;
        for (int i = 0; i<n; i++){
            int num;
            cin >> num;
            if (num==k) isFound = true;
        }
        if (isFound) cout << "YES\n";
        else cout << "NO\n  ";
    }

    return 0;
}