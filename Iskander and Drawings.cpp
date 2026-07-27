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
        string s;
        cin >> s;

        int maxTime = 0;
        int i = 0;

        while (i < n) {
            if (s[i] == '#') {
                int j = i;
                while (j < n && s[j] == '#') j++;
                int len = j - i;

                int time = 0;
                if (len == 1) time = 0;
                else if (len == 2) time = 1;
                else {
                    if (len % 2 == 0) time = len / 2;
                    else time = (len + 1) / 2;
                }

                maxTime = max(maxTime, time);
                i = j;
            } else {
                i++;
            }
        }

        cout << maxTime << "\n";
    }
    return 0;
}
