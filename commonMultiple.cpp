#include <bits/stdc++.h>

using namespace std;

int  main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        set<int> mySet;
        cin >> n;
        int number;
        for (int i = 0; i<n; i++){
            cin >> number;
            mySet.insert(number);
        }

        cout << mySet.size() << "\n";
    }

    return 0;
}