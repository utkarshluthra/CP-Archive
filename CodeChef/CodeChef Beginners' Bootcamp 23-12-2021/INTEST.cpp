#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, count=0;
    cin>>n>>k;
    while(n--){
        int num;
        cin>>num;
        if (num>=k){
            if (num%k==0){
                count++;
            }
        }
    }
    cout<<count<<endl;
    
    
    return 0;
}