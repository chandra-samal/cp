#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin >> k;
    for (int i = 0; i<k; i++){
        int score=0;
        int n;
        cin >> n;
        vector<int> nums(n, 0);
        for (int j = 0; j<n; j++){
            cin >> nums[j];
        }
        sort(nums.begin(), nums.end());
        for (int k = 0; k<n-1; k++){
            if (nums[k] == nums[k+1]){
                score++;
                k++;
            }
        }
        cout << "\n" << score << "\n";
    }

    return 0;
}