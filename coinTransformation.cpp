#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--){
        long long int n;
        cin >> n;
        int noOfCoins = 1;
        int i = 0;

        while (n>3){
            n = n/4;
            i++;
            noOfCoins*=2;
        }

        cout << noOfCoins << "\n";
    }

    return 0;
}