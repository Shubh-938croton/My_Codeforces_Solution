// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n,c;
//         cin>>n>>c;
//         vector<int> a(n);
//         vector<int> b(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//         }

//         for(int i=0;i<n;i++){
//             cin>>b[i];
//         }
//         int dec_cost=0;
//         sort(a.begin(),a.end());
//         sort(b.begin(),b.end());
//         for(int i=0;i<n;i++){
//             if(a[i]<b[i]){
//             cout<<"-1\n";
//             break;
//         }

//         else{
//             dec_cost+=a[i]-b[i];
//         }

//         cout<<min(c+dec_cost,dec_cost)<<"\n";

//         }


//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n, c;
        cin >> n >> c;

        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++)
            cin >> a[i];

        for(int i = 0; i < n; i++)
            cin >> b[i];


        // Case 1: Without reorder
        int ans1 = 0;
        bool possible1 = true;

        for(int i = 0; i < n; i++) {
            if(a[i] < b[i]) {
                possible1 = false;
                break;
            }
            ans1 += a[i] - b[i];
        }


        // Case 2: With reorder
        vector<int> x = a;
        vector<int> y = b;

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        int ans2 = c;
        bool possible2 = true;

        for(int i = 0; i < n; i++) {
            if(x[i] < y[i]) {
                possible2 = false;
                break;
            }

            ans2 += x[i] - y[i];
        }


        int answer = INT_MAX;

        if(possible1)
            answer = min(answer, ans1);

        if(possible2)
            answer = min(answer, ans2);


        if(answer == INT_MAX)
            cout << -1 << "\n";
        else
            cout << answer << "\n";
    }

    return 0;
}
