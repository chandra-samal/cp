#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    for (int i = 0; i<t; i++){
        string expression;
        cin >> expression;
        int a = static_cast<int> (expression[0]);
        int b = static_cast<int> (expression[2]);
        char opr = expression[1];
        if(opr=='>'){
            if (a<b) opr='<';
            if (a==b) opr='=';
        }
        if(opr=='<'){
            if (a>b) opr='>';
            if (a==b) opr='=';
        }
        if ((opr=='=') && (a!=b)){
            if (a>b) opr = '>';
            else opr = '<';
        }
        expression[1] = opr;

        cout << "\n" << expression << "\n";
    }

    return 0;
}