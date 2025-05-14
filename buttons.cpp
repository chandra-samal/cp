#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long a, b, c;
        cin >> a >> b >> c;
        int annaTurn = 1;
        bool annaWin=false;
        if (c%2==0) annaTurn = 1;
        else annaTurn = -1;

        if (annaTurn == 1){
            if (a>b) annaWin = true;
        }
        if (annaTurn == -1){
            if (a>=b) annaWin = true;
        }
        
        if (annaWin) cout << "First\n";
        else cout << "Second\n";
    }


    return 0;
}