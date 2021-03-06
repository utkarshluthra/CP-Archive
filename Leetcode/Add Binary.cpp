#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) {
    string s = "";
    
    int carry = 0; 
    int i = a.size() - 1;
    int j = b.size() - 1;
    
    while(i >= 0 || j >= 0 || carry == 1){
        carry += i >= 0 ? a[i --] - '0' : 0;
        carry += j >= 0 ? b[j --] - '0' : 0;
        s = char(carry % 2 + '0') + s;
        carry /= 2;
    }
    
    return s;
}

int main(){
    string a, b;
    cin>>a>>b;
    cout<<addBinary(a,b);
    return 0;
}