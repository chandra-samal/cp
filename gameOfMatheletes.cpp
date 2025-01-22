#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        int score=0;
        cin >> n >> k;
        vector<int> nums(n, 0);
        for (int i = 0; i<n; i++){
            cin >> nums[i];
        }
        sort(nums.begin(), nums.end());
        // using two pointers p and q
        int p = 0, q = n-1;
        while ((p!=n-1)&&(q>p)){
            int sum = nums[p] + nums[q];
            if (sum>k){
                q--;
            }
            if (sum<k){
                p++;
            }
            if (sum==k){
                score++;
                p++;
                q--;
            }
        }

        cout << "\n" << score << "\n";
    }


    return 0;
}