#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int arr[n];
        set<int> absArr;
        for (int i = 0; i<n; i++){
            cin >> arr[i];
            absArr.insert(abs(arr[i]));
        }
        int firstElement = abs(arr[0]);
        int modMedian;
        auto it = absArr.begin();
        if (n%2){   
            advance(it, n/2);
        }
        else {
            advance(it, n/2 - 1);            
        }
        // if the first element is corresponding to the median of absArr then it is also a valid case in case only if n is even
        auto check = it;
        check++;
        if ((firstElement==*check) && (n%2==0)){
            printf("YES\n");
            continue;
        }

        modMedian = *it;
        if (firstElement<=*it) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}