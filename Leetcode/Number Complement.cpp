#include <bits/stdc++.h>
using namespace std;

int findComplement(int num) {
    vector<int> arr;
    while(num) {
        arr.push_back(num % 2);
        num /= 2;
    }
    int sz = arr.size();
    reverse(arr.begin(), arr.end());
    for(int i = 0; i<sz; ++i) {
            arr[i] = !arr[i];
    }
    long long t = 1;
    for(int i = sz-1; i>=0; --i) {
        num += arr[i] * t;
        t *= 2;
    }
    return num;
}
int main(){
    int num;
    cin>>num;
    cout<<findComplement(num);
    return 0;
}