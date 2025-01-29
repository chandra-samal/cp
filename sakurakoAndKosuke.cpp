#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int x = 0;
        int i = 1;
        while ((-n<=x) && (x<=n)){
            int noOfSteps = 2*i-1;
            if (i%2!=0) x -= noOfSteps;
            else x += noOfSteps;
            i++;
        }
        if (i%2) cout << "Kosuke\n";
        else cout << "Sakurako\n";
    }

    return 0;
}