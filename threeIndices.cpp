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
        vector<int> p;
        for (int i = 0; i<n; i++){
            int num;
            cin >> num;
            p.emplace_back(num);
        }
        bool isPossible=false;
        vector<int> ans;
        for (int i = 0; i<n-2; i++){
            if(p[i+1]>p[i] && p[i+1]>p[i+2]) {
                isPossible = true;
                ans = {i+1, i+2, i+3};
            }
        }
        if (isPossible) {
            cout << "Yes\n";
            for (auto it:ans){
                cout << it << " ";
            }
            cout << "\n";
        }
        else cout << "No\n";
    }

    return 0;
}