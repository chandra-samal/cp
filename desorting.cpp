#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i<n; i++){
            cin >> arr[i];
        }
        long long minDifference = LONG_LONG_MAX;
        for (int i = 0; i<n-1; i++){
            long long difference = arr[i+1]-arr[i];
            if (difference<minDifference) minDifference=difference;
        }
        long long ans;
        if (minDifference<0) {
            cout << 0 << '\n';
            continue;
        }
        ans = minDifference/2 + 1;
        cout << ans << '\n';
    }

    return 0;
}