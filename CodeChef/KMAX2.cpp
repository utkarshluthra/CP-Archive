#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        int answer = 0;
        mx = max(arr);
        for (int i=0; k-1 < i < n; i++){
            if(arr[i]==mx){
                answer+=n-i;
            }
        }
        cout<<answer<<endl;
    }
    return 0;
}