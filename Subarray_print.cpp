#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();
int count;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            cout << "[ ";
            int p=0;
            for (int k = i; k <= j; k++) {
                cout << arr[k] << " ";
                p*=arr[k];
            }
            cout << "]\n";
            
            if(p%6==0){
                count++;
            }
            
        }
    }
    cout<<count<<endl;
    return 0;
}
