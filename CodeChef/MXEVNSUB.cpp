#include <iostream>
using namespace std;

int even(int n){
    int sum = (n*(n+1))/2;
    if (sum%2==0){
        cout<<n<<endl;
        //return n;
    }
    else{
        cout<<n-1<<endl;
    }

}

int main() {
	int t; cin>>t;
	while(t--){
	    int n; cin>>n;
	    even(n);
	    
	    
	}
	return 0;
}
