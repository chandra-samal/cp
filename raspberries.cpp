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
        bool isAlreadyDivisible=false;
        int evenCount = 0;
        int closestToFive = 0;
        int closestToTen = INT_MIN;
        bool threeOrSevenPresent = false;
        vector<int> remainderWithThree;
        for (int i = 0; i<n; i++){
            cin >> arr[i];
            if (arr[i]%2==0){
                evenCount++;
            }
            if (arr[i]==3 || arr[i]==7) threeOrSevenPresent = true;
            remainderWithThree.emplace_back(arr[i]%3);
            if (arr[i]>closestToTen) closestToTen=arr[i];
            if ((arr[i]<=5) && (arr[i]>closestToFive)) closestToFive=arr[i];
            if (arr[i]%k==0) {
                // cout << noOfOperations << '\n';
                isAlreadyDivisible = true;
                // break;
            }
        }
        if (isAlreadyDivisible) {
            cout << noOfOperations << '\n';
            continue;
        }
        // cout << "Closest to Five: " << closestToFive << " Closest to Ten: " << closestToTen << "\n";
        sort(remainderWithThree.begin(), remainderWithThree.end());
        // k = 2, 3, 4, 5
        if (k==2){
            if (evenCount<1) noOfOperations = 1;
        }
        else if (k==4){
            if (threeOrSevenPresent && evenCount==0) noOfOperations = 1;
            else if (evenCount<2) noOfOperations = 2-evenCount;
        }
        else if (k==5){
            noOfOperations = (10-closestToTen<5-closestToFive)?10-closestToTen:5-closestToFive;
            if (closestToFive==0) noOfOperations = 10-closestToTen;
        }
        else if (k==3){
            noOfOperations = 3 - remainderWithThree[remainderWithThree.size()-1];
        }
        cout << noOfOperations << '\n';
    }

    return 0;
}