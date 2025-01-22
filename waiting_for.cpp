#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int passengers=0;
    int freeSeats=0;
    while (n--){
        // I am creating a char to get input of B or P, and an int num to store no. of passengers or no. of free seats
        char ch;
        int num;
        cin >> ch >> num;
        if (ch=='P') passengers+=num;
        else if (ch=='B') {
            freeSeats += num;
            if (passengers>=freeSeats) {
                passengers -= freeSeats;
                freeSeats = 0;
                cout << "NO" << "\n";
            }
            else {
                freeSeats = 0;
                passengers = 0;
                cout << "YES" << "\n";
            }
        }

    }

    return 0;
}