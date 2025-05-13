    #include <bits/stdc++.h>

    using namespace std;

    int main(){
        int t;
        cin >> t;
        while (t--){
            int n, m;
            cin >> n >> m;
            string x;
            cin >> x;
            // cout << "\n";
            string s;
            cin >> s;   
            // cout << "x: " << x << " " << "s: " << s << "\n";
            string temp = x;
            int noOfOperations = 0;
            int maxOperations = ceil(log2((m+n-1)/(double)n)) + 2; 
            while((temp.find(s)==string::npos) && (noOfOperations<=maxOperations)){
                temp += temp;
                noOfOperations++;
            }
            if (temp.find(s) != string::npos) cout << noOfOperations << "\n";
            else cout << -1 << "\n";
        }

        return 0;
    }