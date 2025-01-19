#include <bits/stdc++.h>

using namespace std;

int main(){
    int num1;
    int num2;
    int num3;
    cin >> num1 >> num2;

    if (((num1==1) && (num2==2)) || ((num1==2) && (num2==1))){
        num3 = num1 + num2;
    }
    else {
        num3 = abs(num1-num2);
    }

    cout << num3 << '\n';


    return 0;
}