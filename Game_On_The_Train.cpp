#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> h(n);
        int maxH = 0;
        for(auto &x : h){ cin >> x; maxH = max(maxH, x); }

        int best = INT_MAX;
        
        for(int H = maxH+1; H <= maxH+10; H++){
            int k = 0;
            for(int i = 0; i < n; i++){
                k = max(k, H - h[i]);
            }
            best = min(best, k);
        }

        cout << best << "\n";
    }
    return 0;
}