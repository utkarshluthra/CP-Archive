#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--){
        int count=0;int a, b, c, d, e;cin>>a>>b>>c>>d>>e;
        if(a+b<=d && c<=e){
            count++;
        }
        else if(b+c<=d && a<=e){
            count++;
        }
        else if(a+c<=d && b<=e){
            count++;
        }
        else{
            count=0;
        }
        if(count>=1){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
        
        cout<<endl;
    }
	return 0;
}
