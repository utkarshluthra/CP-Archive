#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    string pal;
    string checkString = to_string(x);
    string copy=checkString;
    reverse(checkString.begin(), checkString.end());
    if (checkString==copy){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<isPalindrome(n);
}