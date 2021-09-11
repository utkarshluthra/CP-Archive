#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int q;
	cin>>q;
	while(q--){
	    
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string t;
	    cin>>t;
	    
	    int count=0;
	    int x=0;
	    int y=0;
	    
	    for(int i=0;i<n;i++){
	        
	        if(s[i]=='1'){
	            x++;
	        }
	        if(t[i]=='1'){
	            y++;
	        }
	    }
	    cout<<min(x,min(y,n/2))<<endl;
	}
    return 0;
}