#include <bits/stdc++.h>

using namespace std;

bool isInteger(double num){
    return num == static_cast<int>(num);
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        int counter=0;
        cin >> n; // n is number of days
        int totalCards=0;
        vector<int> pieces(n, 0);
        for (int i = 0; i<n; i++){
            // cout << "inside first for loop\n";
            cin >> pieces[i];
        }
        // cout << "entering second loop\n";
        for (int i = 0; i<n; i++){
            // cout << "inside second for loop\n";
            totalCards += pieces[i];
            double d = sqrt(totalCards);
            if (isInteger(d) && static_cast<int>(d)%2==1) counter++;
        }
        cout << "\n" << counter << "\n";
    }

    return 0;
}