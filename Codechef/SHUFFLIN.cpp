#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    int n;cin>>n;
	    int arr[n];
	    int even_count=0;
	    int odd_count=0;
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	        if (arr[i]%2==0){
	            even_count++;
	        }
	        else{
	            odd_count++;
	        }
	    }
	    
	    int even_index= n/2;
	    int odd_index= n - (even_index);
	    int answer = min(even_index, odd_count) + min(odd_index, even_count);
	    std::cout << answer << std::endl;
	}
	return 0;
}
