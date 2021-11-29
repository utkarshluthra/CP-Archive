#include <iostream>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
        int n, a, b; cin>>n>>a>>b;
        char bin[n];
        int tot=0;
        for(int i=0; i<n; i++){
            cin>>bin[i];
            if (bin[i]=='0'){
                tot=tot+a;
            }
            else if(bin[i]=='1'){
                tot=tot+b;
            }
        }
        cout<<tot<<endl;
    }
	return 0;
}