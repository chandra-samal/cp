#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin >> k;

    for (int i = 0; i < k; i++){
        int n, m;
        cin >> n >> m;
        int charCount = 0;
        int wordCount = 0;
        string word;
        // n = number of total words
        // m = max no of characters on the first strip
        for (int j = 0; j < n; j++){
            cin >> word;
            charCount += word.length();
            if (charCount <= m) wordCount++;
        }
        cout << "\n" << wordCount << "\n";
    }

    return 0;
}