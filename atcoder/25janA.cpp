#include <bits/stdc++.h>

using namespace std;

int main() {
    // vector<int> correct = {1, 2, 3, 4, 5};
    vector<int> inputs(5, 0);
    cin >> inputs[0] >> inputs[1] >> inputs[2] >> inputs[3] >> inputs[4];

    vector<int> difference;
    for (int i = 0; i<5; i++){
        if (inputs[i]!=i+1) difference.emplace_back(inputs[i]);
    }

    if ((difference.size()==2) && (abs(difference[1]-difference[0])==1)){
        cout << "Yes";
    }
    else cout << "No";

    return 0;
}