#include <bits/stdc++.h>
 
using namespace std;
 
int countFibbonacci(vector<int> arr){
    int n = arr.size();
    int counter = 0;
    for (int i = 0; i<n-2; i++){
        if (arr[i+2]==arr[i+1]+arr[i]) {
            counter++;
        }
    }
    return counter;
}
 
int main(){
    int t;
    cin >> t;
    vector<int> arr(5, 0);
    for (int i = 0; i < t; i++){
        cin >> arr[0] >> arr[1] >> arr[3] >> arr[4];
        int chutiyaVariable = 0, maxFibonacci=0;
        // case 1
        arr[2] = arr[0] + arr[1];
        chutiyaVariable = countFibbonacci(arr);
        maxFibonacci = chutiyaVariable;
 
        // case 2
        arr[2] = arr[3] - arr[1];
        chutiyaVariable = countFibbonacci(arr);
        if (chutiyaVariable>maxFibonacci) maxFibonacci = chutiyaVariable;
 
        // case 3
        arr[2] = arr[4] - arr[3];
        chutiyaVariable = countFibbonacci(arr);
        if (chutiyaVariable>maxFibonacci) maxFibonacci = chutiyaVariable;
 
        cout << "\n" << maxFibonacci << "\n";
 
    }
 
 
    return 0;
}