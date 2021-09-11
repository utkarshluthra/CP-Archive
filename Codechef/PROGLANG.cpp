#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int a, b, a1, b1, a2, b2;
	    int n=0;
	    cin>>a>>b>>a1>>b1>>a2>>b2;
	    if (a==a1 || a==b1){
	        if (b==b1 || b==a1){
	            n=1;
	        }
	    }
	    else if(a==a2 || a==b2){
	        if (b==a2 || b==b2){
	            n=2;
	        }

	    }
	    
        cout<<n<<endl;
	}
	
	
	return 0;
}
