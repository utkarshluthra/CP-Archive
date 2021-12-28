#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n;
	    int s=0;
	    cin>>n;
	    int copy = n;
	    while(n>0){
	        int a = n%10;
	        s=10*s+a;
	        n/=10;
	    }
	    if(s==copy){
	        cout<<"wins"<<endl;
	    }
	    else{
	        cout<<"loses"<<endl;
	    }
	}
	return 0;
}
