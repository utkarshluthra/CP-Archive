#include <iostream>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int arr[n];
    int flag=0;
    for (int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]==k){
            flag++;
        }
    }
    if(flag){
        std::cout << 1 << std::endl;
    }
    else{
        std::cout << -1 << std::endl;
    }
	return 0;
}
