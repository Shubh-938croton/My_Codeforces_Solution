#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=0;
        int r=0;

        for(int i=0;i<n;i++){
            if(s[i]==')') l++;
            else r++;
        }
        if(l==r) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}