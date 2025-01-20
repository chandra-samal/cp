#include <bits/stdc++.h>

using namespace std;


// This function will arrange the vector elements in such a way that the score will be maximum

void arrangeTheVector(vector<int>& nums){
    int n = nums.size();
    vector<int> temp{0};
    vector<int> temp2;

    // The function of this for loop is to put the first even number it finds to the first index
    for (int i = 0; i<n; i++){
        if ((nums[i]%2==0) && (i==0)){
            break; // no need
        }
        else if(nums[i]%2==0){ 
            swap(nums[i], nums[0]);
            break;    
        }
    }
    
    temp[0] = nums[0];

    // The function of this for loop is the put all the remaining even numbers to the end of the vector
    for (int i = 1; i<n; i++){
        if (nums[i]%2!=0) temp.emplace_back(nums[i]);
        else temp2.emplace_back(nums[i]);
    }

    int m = temp.size();
    for (int i = 0; i<temp2.size(); i++){
        temp[m+i] = temp2[i];
    }

    for (int i = 0; i<n; i++){
        nums[i] = temp[i];
    }

}

int main(){
    int t;
    cin >> t;
    
    for (int i = 0; i<t; i++){
        int s = 0;
        int point = 0;
        int n;
        cin >> n;
        vector<int> nums(n, 0);
        for (int j = 0; j<n; j++){
            cin >> nums[j];
        }
        arrangeTheVector(nums);
        for (int j = 0; j<n; j++){
            s += nums[j];
            int check=0;
            while (s%2==0){
                if(check==0) point++;
                s = s/2;
                check=1;
            }
        }
        cout << '\n' << point << '\n';
    }

    return 0;
}