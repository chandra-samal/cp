#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int num;
        int sum=0;
        while (n--){
            cin >> num;
            sum+=num;
        }
        if (sum%2) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}