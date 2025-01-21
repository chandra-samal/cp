#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while (t--){
        int n, k;
        cin >> n >> k;
        int counter=0;
        int wallet=0; // wallet of robin hood
        vector<int> people(n, 0);
        for (int i = 0; i<n; i++){
            cin >> people[i];
        }
        
        for (int i = 0; i<n; i++){
            if (people[i]>=k){
                wallet += people[i];
                people[i] = 0;
            }
            else if (people[i]==0 && wallet>0){
                people[i]+=1;
                wallet--;
                counter++;
            }
        }
        cout << "\n" << counter << "\n";
    }

    return 0;
}