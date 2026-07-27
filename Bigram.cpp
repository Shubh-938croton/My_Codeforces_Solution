#include <bits/stdc++.h>        // bigram is two consecutive character is used in scam detection and NLP.
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int> freq (k) ;
        for(int i=0;i<k;i++)
        cin>>freq[i];
        
        bool possible=false;
        for(int i=0;i<k;i++){
            if(freq[i]>=3){
                possible=true;
                break;
            }
        }

        if(!possible){

            int countTwos=0;
            for(int i=0;i<k;i++){
                if(freq[i]>=2)  countTwos++;
            }
            if(countTwos>=2) possible=true;
        }

        cout<<(possible ? "YES":"NO" )<<"\n";

    }


    return 0;

}
