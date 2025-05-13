#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;
    int smallest = INT_MAX;
    int num;
    for (int i = 0; i<N; i++){
        cin >> num;
        if (abs(num) < smallest) smallest = abs(num);
    }

    cout << smallest << '\n';

    return 0;
}