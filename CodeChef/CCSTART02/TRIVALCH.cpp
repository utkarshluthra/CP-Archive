#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3];
    int warn=0;
    for(int i=0; i<3; i++){
        cin>>arr[i];
        if(arr[i]==0){
            warn++;
        }
    }
    sort(arr, arr+3);
    if (warn==0){
        if(arr[0]+arr[1]>arr[2]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
	return 0;
}
