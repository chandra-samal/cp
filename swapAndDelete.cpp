#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int noOfZeroes = 0;
        int noOfOnes = 0;
        string s;
        cin >> s;
        string good;
        for (int i = 0; i<s.size(); i++){
            if(s[i]=='1') noOfOnes++;
            good += (s[i]=='1')?'0':'1';
        }
        noOfZeroes = s.size() - noOfOnes;
        // cout << "Ones: "<< noOfOnes << " Zeroes: " << noOfZeroes << '\n';
        int coins = 0;
        string actualGood;
        if (noOfOnes == 0 || noOfZeroes == 0) coins = (noOfOnes>noOfZeroes)?noOfOnes:noOfZeroes;
        if (noOfOnes!=noOfZeroes && noOfOnes!=0 && noOfZeroes!=0){
            int nZero = 0;
            int nOne = 0;
            if (noOfOnes>noOfZeroes){
                for (int i = 0; i<good.size(); i++){
                    if (good[i]=='0') nZero++;
                    actualGood += good[i];
                    bool isComplete=false;
                    if (nZero==noOfZeroes){
                        while (!isComplete){
                            actualGood += '1';
                            if (actualGood[actualGood.size() - 1] != good[actualGood.size()-1]) isComplete=true;
                        }
                    }
                    if (isComplete)  {
                        coins = good.size() - actualGood.size() + 1;
                        break;
                    }
                }
            }
            else {
                for (int i = 0; i<good.size(); i++){
                    if (good[i]=='1') nOne++;
                    actualGood += good[i];
                    bool isComplete=false;
                    if (nOne==noOfOnes){
                        while (!isComplete){
                            actualGood += '0';
                            if (actualGood[actualGood.size() - 1] != good[actualGood.size()-1]) isComplete=true;
                        }
                    }
                    if (isComplete)  {
                        coins = good.size() - actualGood.size() + 1;
                        break;
                    }
                }
            }
        }
        cout << coins << '\n';
    }

    return 0;
}