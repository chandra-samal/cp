#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i<n; i++){
        string ch;
        cin >> ch;
        if ((ch == "X++") || (ch == "++X")){
            x++;
        }
        else if((ch=="X--") || (ch=="--X")) {
            x--;
        }
    }
    cout << x << '\n';
    return 0;
}