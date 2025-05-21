#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int noOfOperations = 0;
        int arr[n];
        int evenCount = 0;
        vector<int> remainders;
        bool isAlreadyDivisible = false;
        for (int i = 0; i<n; i++){
            cin >> arr[i];
            if (arr[i]%2==0) evenCount++;
            if (arr[i]%k==0) isAlreadyDivisible = true;
            remainders.push_back(arr[i]%k);
        }
        if (isAlreadyDivisible){
            cout << noOfOperations << '\n';
            continue;
        }

        sort(remainders.begin(), remainders.end());

        if (k==4){
            if (evenCount>2) evenCount=2;
            int n1 = 2-evenCount;
            int n2 = 4-remainders[remainders.size()-1];
            noOfOperations = (n1<n2)?n1:n2;
        }
        else noOfOperations = k-remainders[remainders.size()-1];

        cout << noOfOperations << '\n';
    }

    return 0;
}