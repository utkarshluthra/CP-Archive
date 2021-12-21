#include <bits/stdc++.h>
using namespace std;

int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }
    long dvd = labs(dividend), dvs = labs(divisor), ans = 0;
    int sign=0;
    if (dividend > 0 ^ divisor > 0 ){
        sign = -1;
    }else{
        sign = 1;
    }
    while (dvd >= dvs) {
        long temp = dvs, m = 1;
        while (temp << 1 <= dvd) {
            temp <<= 1;
            m <<= 1;
        }
        dvd -= temp;
        ans += m;
    }
    return sign * ans;
}

int main(){
    int dividend, divisor;
    cin>>dividend>>divisor;
    cout<<divide(dividend, divisor);
    return 0;
}