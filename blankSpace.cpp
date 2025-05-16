#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int counter=0;
        int currentCounter=0;
        char ch;
        while (n--){
            cin >> ch;
            if (ch=='0') {
                currentCounter++;
                if (currentCounter>counter) counter = currentCounter;
            }
            else {
                currentCounter = 0;
            }
        }
        cout << counter << '\n';
    }
    return 0;
}