#include <bits/stdc++.h>

using namespace std;

bool checkConsecutive(string s){
    string dot="";
    int n = s.size();
    for (int i = 0; i<n; i++){
        if (s[i]=='#') {
            dot = "";
            continue;
        }
        dot += s[i];
        if (dot.size()>=3) return true;
    }
    return false;
}

int countDot(string s){
    int count = 0;
    int n = s.size();
    for (int i = 0; i<n; i++){
        if (s[i]=='.') count++;
    }
    return count;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string cells;
        cin >> cells;
        // if we find 3 consecutive empty cells toh case khtm hai bas 2 steps m hi
        int noOfSteps = 0;
        if (checkConsecutive(cells)) noOfSteps = 2;
        else noOfSteps = countDot(cells);
        cout << noOfSteps << "\n";
    }

    return 0;
}