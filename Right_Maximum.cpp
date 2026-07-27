// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> a(n);
//         for(auto &x : a) cin >> x;
//         long long len=n;
//         long long count=0;
//         while(len>0){
//             int maxval=0; int maxIdx=0;
//             for(int i=0;i<len;i++){
//                 if(a[i]>=maxval){
//                     maxval=a[i];
//                     maxIdx=i;
//                 }
                
//             }
//             count++;
//             len=maxIdx;
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// } 
// time complexity O(n^2)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        
        vector<int> pos(n);
        int maxval=0;int maxIdx=-1;
        for(int i=0;i<n;i++){
            if(a[i]>=maxval){
                maxval=a[i];
                maxIdx=i;
            }
            pos[i]=maxIdx;
        }
        long long count=0;
        int len=n;
        while(len>0){
            count++;
            len=pos[len-1];
        }
        cout<<count<<endl;

    }

}