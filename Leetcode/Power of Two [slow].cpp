#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n==0) {
        return false;
    }
    while(n%2==0){
        n/=2;
    }
    return n==1;
}
int main(){
    int n;
    cin>>n;
    cout<<isPowerOfTwo(n);
    return 0;
}