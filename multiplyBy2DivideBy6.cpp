#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n; long long moves = 0;
        if (n%3 || n<3) moves = -1;
        if (n==1) moves = 0;
        else {
            long long p=0, q=0;
            long long nD = n;
            while (nD%2==0){
                nD = nD/2;
                p++;
            }
            nD = n;
            while (nD%3==0){
                nD = nD/3;
                q++;
            }
            if (p>q) moves = -1;
            else {
                nD = n*pow(2, q-p);
                if (nD/(pow(2, q)*pow(3, q))!=1) moves = -1;
                else moves = 2*q-p;
            }
        }
        cout << moves << '\n';
    }

    return 0;
}