#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int missingGE=0;
        int n;
        cin >> n;
        for (int i = 0; i<n-1; i++){
            int num;
            cin >> num;
            missingGE+=num;
        }
        missingGE *= -1;
        cout << missingGE << '\n';
    }

    return 0;
}