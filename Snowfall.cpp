#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int f=0;
        for(int i=0;i<n;i++){
            int pro=0;
            for(int j=0;j<i;j++){
                pro*=arr[j];
                
            }
            if(pro%6==0){
                f++;
            }
        }

        cout<<f<<endl;
    }
}
