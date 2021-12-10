#include<bits/stdc++.h>
using namespace std;

string longestPalindrome(string s) {
    if (s.size()<=1) 
        return s;
    int leftMin=0;
    int maxLength=1;
    int rightMin=s.size()-1;
    for (int mid=0;mid<s.size();){
        int l=mid;
        int r=mid;
        while (r<rightMin && s[r+1]==s[r])
            r++;
        mid=r+1;
        while (r<rightMin && l>0 && s[r+1]==s[l-1]){
            r++;
            l--;
        }
        int newLength=r-l+1;
        if (newLength>maxLength){ 
            leftMin=l; 
            maxLength=newLength; 
        }
    }
    return s.substr(leftMin, maxLength);
}

int main(){
    string s;
    cin>>s;
    cout<<longestPalindrome(s);
    return 0;
}