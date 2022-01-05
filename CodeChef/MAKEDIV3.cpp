#include <bits/stdc++.h>
using namespace std;
while(t--){
    int n; cin>>n;
    if(n==1){
        cout<<3<<endl;
    }
    else if(n==2){
        cout<<33<<endl;
    }
    else{
        cout<<stoi("3"+((n-2)*"0")+"3")<<endl;
    }
    return 0;
}