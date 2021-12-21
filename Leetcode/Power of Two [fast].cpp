#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n<=0){
        return 0;
    }
    int max=1073741824;
    return (max%n==0);
}

int main(){
    int n;
    cin>>n;
    cout<<isPowerOfTwo(n);
    return 0;
}