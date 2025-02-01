#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--) {
        int n, r;
        cin >> n >> r; 
        /*
            n = number of families
            r = number of rows
        */
        vector<int> familyMembers(n, 0);
        for (int i = 0; i<n; i++){
            cin >> familyMembers[i];
        }

        int happyCounter = 0;
        vector<int> seatsOccupied(r, 0);

        // Let's try to go to each row and fill the seats
        int i = 0;
        int j = 0;
        while ((j<r)&&(i<n)){
            while (familyMembers[i]>=2){
                familyMembers[i] -= 2;
                seatsOccupied[j] = 2;
                j++;
                happyCounter += 2;
            }
            i++;
        }

        int noOfEmptyRows=0;
        for (int i = 0; i<r; i++){
            if (seatsOccupied[i]==0) noOfEmptyRows++;
        }

        for (int i = 0; i<n; i++){
            if ((familyMembers[i]==1)&&(noOfEmptyRows>0)){
                familyMembers[i] = 0;
                noOfEmptyRows--;
                happyCounter++;
            }
            if ((familyMembers[i]==1)&&(noOfEmptyRows==0)){
                happyCounter--;
            }
        }
        
        cout << happyCounter << "\n";

    }


    return 0;
}