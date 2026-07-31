#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        int last = (sum - 1) % n;  // index of last dish eater
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > 0) {
                
                count++;
            }
        }

        
        if (a[last] > 0) cout << 1 << "\n";
        else {
            
            int ans = 0;
            for (int i = 0; i < n; i++) {
                if (a[i] > 0) ans++;
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
