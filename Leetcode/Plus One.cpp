#include<bits/stdc++.h>
using namespace std;

double myPow(double x, int n) {
    long double ans = 1.0;
    long long newn = n;
    if (n < 0){
        newn = -1 * newn;
    }
    while (newn){
        if (newn % 2 == 0){
            x = x * x;
            newn = newn / 2;
        }
        else{
            ans *= x;
            newn = newn - 1;
        }
    }

    if (n < 0){
        ans = 1 / ans;
    }
    return ans;
}

int main(){
    double int x;
    int n;
    cin>>x>>n;
    cout<<myPow(x,n);
    return 0;
}