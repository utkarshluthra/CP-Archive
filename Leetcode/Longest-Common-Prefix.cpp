#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    string ans = strs[0];
    for(int i = 1; i < strs.size(); i++) {
        int j;
        for(j = 0; j < strs[i].size(); j++) {
            if(ans[j] != strs[i][j])
                break;
        }
        ans = ans.substr(0, j);
        if(ans == "")
            return ans;
    }
    
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<string> strs;
    for (int i=0; i<n; i++){
        string element;
        cin>>element;
        strs.push_back(element);
    }
    cout<<longestCommonPrefix(strs);
    return 0;
}