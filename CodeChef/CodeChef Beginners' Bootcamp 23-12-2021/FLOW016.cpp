#include <iostream>
using namespace std;

int main() {
	
	// lcm = (a*b)/hcf
	int t; cin>>t;
	while(t--){
	    long long int a, b, hcf=0, lcm=0;
	    cin>>a>>b;
	    
	    long long int a_copy = a;
	    long long int b_copy = b;
        while(a_copy!=b_copy){
            if (a_copy > b_copy){
                a_copy = a_copy - b_copy;
            }
            else{
                b_copy=b_copy-a_copy;
            }
        }
        hcf = a_copy;
	    lcm=(a*b)/hcf;
	    
	    cout<<a_copy<<" "<<lcm<<endl;
	}
	
	
	return 0;
}
