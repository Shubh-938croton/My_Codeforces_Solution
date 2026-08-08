// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--)
//     {


//     }

// }


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

        vector<long long> w(n);

        for (int i = 0; i < n; i++)
            cin >> w[i];

        bool ok = false;

        // Try every possible gap between two consecutive distinct values.
        vector<long long> vals = w;
        sort(vals.begin(), vals.end());

        vector<long long> cand;

        cand.push_back(vals[0] - 1);

        for (int i = 0; i + 1 < n; i++) {
            if (vals[i] != vals[i + 1]) {
                cand.push_back((vals[i] + vals[i + 1]) / 2);
            }
        }

        cand.push_back(vals.back() + 1);

        for (long long k : cand) {

            bool bad = false;

            // k cannot equal any weight
            for (long long x : w) {
                if (x == k) {
                    bad = true;
                    break;
                }
            }

            if (bad)
                continue;

            vector<int> cnt(n + 2, 0);

            for (int i = 0; i < n; i++) {
                int pos;

                if (w[i] < k)
                    pos = i;      // move left
                else
                    pos = i + 2;  // move right

                cnt[pos]++;
            }

            bool good = true;

            for (int i = 1; i <= n; i++) {
                if (cnt[i] != 1) {
                    good = false;
                    break;
                }
            }

            if (good) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}