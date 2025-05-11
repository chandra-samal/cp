#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int n, x;
        cin >> n >> x;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }
        /*
            By observation we have to basically think about three distances
            1) distance b/w 0 and a(1)
            2) distance b/w a(n) and a(n-1)
            3) and the largest distance between two consecutive fuel station
            The largest among these will be our minimum fuel required
        */
        int startDistance = arr[0];
        int endDistance = x - arr[n-1];
        int maxGap = 0;
        for (int i = 0; i<n-1; i++){
            int gap = arr[i+1]-arr[i];
            if (gap>maxGap) maxGap = gap;
        }

        int max = (startDistance>2*endDistance)?startDistance:2*endDistance;
        if (maxGap > max)
            cout << maxGap << '\n';
        else 
            cout << max << '\n';
    }
    

    return 0;
}