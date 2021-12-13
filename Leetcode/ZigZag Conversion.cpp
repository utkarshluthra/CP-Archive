#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows) {
    if (numRows == 1){
        return s;
    }

    vector<string> r(min(numRows, int(s.size())));
    
    int currentRow = 0;
    bool d = false;

    for (char c : s) {
        r[currentRow] += c;
        if (currentRow == 0 || currentRow == numRows - 1) d = !d;
        currentRow += d ? 1 : -1;
    }

    string ans;
    for (string row : r){
        ans += row;
    }
    return ans;
}

int main(){
    string s;
    int numRows;
    cin>>s>>numRows;
    cout<<convert(s, numRows);
    return 0;
}