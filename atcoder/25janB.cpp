#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long int> sequence(n, 0);
    for (int i = 0; i<n; i++){
        cin >> sequence[i];
    }

    long long int r = sequence[1]/sequence[0]; // Common ratio
    
    bool isGP = true;

    for (int i = 0; i<n-1; i++){
        if (sequence.size() == 2) break;
        if (sequence[i]*sequence[1] != sequence[i+1] * sequence[0]) {
            isGP = false;
            break;
        }
    }

    if (isGP) cout << "Yes";
    else cout << "No";

    return 0;
}