#include <bits/stdc++.h>
using namespace std;

int bitwiseComplement(int n) {
    if(!n){ 
        return 1;
    }
    int count = log2(n) + 1;
    int num = pow(2,count)-1;
    int ans = num^n;
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<bitwiseComplement(n);
    return 0;
}