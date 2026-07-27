#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    long long total_sum = 0;
    long long free_ones = 0;
    
    const long long MOD = 676767677;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        total_sum += a[i];
        
        // Count all 1s. If a 1 is not the last element, it will be considered "free".
        if (a[i] == 1) {
            free_ones++;
        }
    }

    // If the last element is a 1, it cannot be paired with anything to its right.
    // Therefore, it cannot be free. We subtract it from our free_ones count.
    if (a[n - 1] == 1) {
        free_ones--;
    }

    // The minimum cost is the sum of all elements minus the number of free 1s
    long long min_cost = total_sum - free_ones;

    // Apply modulo operations carefully to handle any potential large results safely
    min_cost = (min_cost % MOD + MOD) % MOD;

    cout << min_cost << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}