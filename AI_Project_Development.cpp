#include<bits/stdc++.h>
using namespace std;
int main(){
    // --- ULTRA FAST I/O MIXIN ---
    // This unties cin from cout and desynchronizes C++ streams from C streams.
    // It makes reading large inputs nearly instantaneous.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n,x,y,z;
    cin>>n>>x>>y>>z;
//  without ai
int both_speed=x+y;
int time_witout_ai=(n+(both_speed)-1)/both_speed;

// when ai enable 
int time_with_Ai=0;
int line_written=x*z;
if(line_written>=n){
    time_with_Ai=(n+x-1)/x;
}
else{
    int left_line=n-line_written;
    int extra_time=(left_line+(x+10*y)-1)/(x+10*y);
    time_with_Ai=z+extra_time;
}
cout<<min(time_with_Ai,time_witout_ai)<<"\n";  // use "\n"  instead od endl to get faster execution of code.

}
return 0;

}