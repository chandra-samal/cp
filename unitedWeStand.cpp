#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        long long arr[n];
        long long smallest = LONG_LONG_MAX;
        for (int i = 0; i<n; i++){
            cin >> arr[i];
            if (arr[i]<smallest) smallest=arr[i];
        }
        vector <long long> b, c;
        for (int i = 0; i<n; i++){
            if (arr[i]==smallest) b.emplace_back(arr[i]);
            else c.emplace_back(arr[i]);
        }
        if (c.size()==0) {
            cout << -1 << '\n';
            continue;
        }
        cout << b.size() << " " << c.size() << '\n';
        for (int i = 0; i<b.size(); i++){
            cout << b[i] << " ";
        }
        cout << '\n';
        for (int i = 0; i<c.size(); i++){
            cout << c[i] << " ";
        }
        cout << '\n';

    }

    return 0;
}