#include <bits/stdc++.h>

using namespace std;

bool isSorted(vector<int> arr){
    bool isSorted = true;
    int size = arr.size();
    for (int i = 0; i<size-1; i++){
        if (arr[i]>arr[i+1]) {
            isSorted = false;
            break;
        }
    }
    return isSorted;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector<int> arr;

        int number;
        for (int i = 0; i<n; i++) {
            cin >> number;
            arr.push_back(number);
        }
        if (isSorted(arr)){
            cout << "YES\n";
            continue;
        }
        if (k<2){
            cout << "NO\n";
            continue;
        }
        else {
            cout << "YES\n";
        }
    }


    return 0;
}