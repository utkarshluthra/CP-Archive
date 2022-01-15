#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;
    if(n%5==0 || n%6==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
	return 0;
}
