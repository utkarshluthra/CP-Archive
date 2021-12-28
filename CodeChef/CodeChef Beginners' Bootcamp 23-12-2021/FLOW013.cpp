#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    for(;t!=0;t--){
        int a, b, c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        if (sum==180){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }

	return 0;
}
