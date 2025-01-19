#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    int m{0}, s{0};
    int totalM{0}, totalS{0};
    cin >> t;
    for (int i = 0; i<t; i++){
        int n;
        cin >> n;
        vector<int> questionsM(n ,0);
        vector<int> questionsS(n ,0);   
        for (int j = 0; j<n; j++){
            totalM+=questionsM[j];
            cin >> questionsM[j];
        }
        for (int j = 0; j<n; j++){
            totalS+=questionsS[j];
            cin >> questionsS[j];
        }
        
    }


    return 0;
}