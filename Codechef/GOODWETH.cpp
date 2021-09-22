#include <iostream>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int arr[7];
	    int count=0;
	    for (int i=0; i<7; i++){
	        cin>>arr[i];
	        if (arr[i]==1){
	            count++;
	        }
	    }
	    if (count>=4){
	        cout<<"YES"<<endl;
	    }
	    else{
	        std::cout << "NO" << std::endl;
	    }
	}
	return 0;
}
