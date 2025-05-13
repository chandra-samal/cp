#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i<n; i++){
            cin >> arr[i];
        }
        // we will need two distinct elements, and if n is odd, their frequency should differ by 1, and if n is even it will be equal
        // one  more case is possible if all the elements are equal;
        map<int, int> myMap;
        for (int i = 0; i<n; i++){
            myMap[arr[i]]++;
        }
        if (myMap.size()==2){
            auto it = myMap.begin();
            int p = it->second;
            it++;
            int q = it->second;
            if ((n%2) && (abs(p-q)==1)) cout << "Yes\n";
            else if ((n%2==0) && (p==q)) cout << "Yes\n";
            else cout << "No\n";
        }
        else {
            if (myMap.size()>2){
                cout << "No\n";
            }
            else cout << "Yes\n"; // the only possible case here will be that all the elements are same
        } 
    }


    return 0;
}