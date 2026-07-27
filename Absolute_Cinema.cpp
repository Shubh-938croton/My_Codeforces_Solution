// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// int t;
// cin>>t;
// while(t--){
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     vector<int> b(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i]>>b[i];
//     }

    
// }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        long long sum_of_max = 0;
        int max_of_mins = 0;

        for(int i=0; i<n; i++){
            sum_of_max += max(a[i], b[i]);
            max_of_mins = max(max_of_mins, min(a[i], b[i]));
        }

        long long ans = sum_of_max + max_of_mins;
        cout << ans << "\n";
    }

    return 0;
}