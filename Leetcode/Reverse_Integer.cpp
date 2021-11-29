#include <bits/stdc++.h>
using namespace std;
int reverse(int x) {
    int x_copy=x;
    int ans;
    string y=to_string(x);
    if (y[y.size()-1]=='-'){
        y.erase(0, 1);
    }
    std::reverse(y.begin(), y.end());
    try{
        ans=stoi(y);
    }
    catch(const std::out_of_range& oor){
        return 0;
    }
    if (x_copy<0){
        ans=0-ans;
    }
    return ans;
    
}
int main(){
    int n;
    cin>>n;
    reverse(n);
    return 0;
}