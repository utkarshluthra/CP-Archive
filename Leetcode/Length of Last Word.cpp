#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    int ans = 0;
    int slength = s.size();
    for(int i=slength-1; i>=0; i--){
        if(s[i] == ' ' && ans > 0){
            return ans;
        }
        if(s[i] != ' ') {
            ans++;
        }
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    cout<<lengthOfLastWord(s);
    return 0;
}