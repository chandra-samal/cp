#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (n%3) cout << "First\n";
        else cout << "Second\n";
    }

    return 0;
}