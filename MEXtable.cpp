
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int k;
    cin >> k;
    for (int i = 0; i<k; i++){
        int n; // rows
        int m; // columns
        cin >> n >> m;
 
        int matrix[m][n];
        if (m==n) cout << m+1 << "\n";
        else if (m>n){
            cout << m+1 << "\n";
        }
        else cout << n+1 << "\n";
    }
 
    return 0;
}