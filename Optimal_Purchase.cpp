#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        long long full=n/3;
        long long remr=n%3;

        long long cost =full*b;
        if(remr>0)
        {
            cost+=min(remr*a,b);
        }

        cout<<min(cost,n*a)<<endl;
       

    }
    return 0;

}
