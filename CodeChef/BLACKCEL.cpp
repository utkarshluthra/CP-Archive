#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	if(2<=n<=100){
	    int total_cells=n*n;
	    int total_black= total_cells/2;
	    cout<<total_black;
	}
	
	return 0;
}
