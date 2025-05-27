#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string p;
        cin >> p;
        string s;
        cin >> s;
        int i = 0; int j = 0;
        int rInP = 0, lInP = 0;
        int rInS = 0, lInS = 0;
        bool isPossible = true;
        while (j!=s.size()){
            if (p[i]!=s[j]) {
                isPossible = false;
                break;
            }
            else {
                int noOfCInS = 0;
                int noOfCInP = 0;
                char c = p[i];
                while (p[i] == c && i<p.size()){
                    i++;
                    noOfCInP++;
                }
                while (s[j] == c && j<s.size()){
                    j++;
                    noOfCInS++;
                }
                if (noOfCInS > 2*noOfCInP || noOfCInS < noOfCInP) {
                    isPossible = false;
                    break;
                }
            }
        }
        if (i!=p.size() || j!=s.size()){
            cout << "NO\n";
            continue;
        }
        if (isPossible) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}