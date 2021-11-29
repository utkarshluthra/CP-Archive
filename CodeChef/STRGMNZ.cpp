#include "bits/stdc++.h"
using namespace std;
typedef long long int ll;


bool isPrime(ll n) { 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
    for (ll i=5; i*i<=n; i=i+6) 
    if (n%i == 0 || n%(i+2) == 0) 
    return false; 
    return true; 
} 


ll smallestDivisor(ll n)
{
    if (n % 2 == 0)
        return 2;
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
 
    return n;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int T;    
    cin >> T;
    while (T--)    {
        ll n;
        cin>>n;
    
        if(isPrime(n)) cout << n+1 << endl;
        else    {
            ll k = smallestDivisor(n);
            cout << (k+1)*(n/k) << endl;
        }
    }
    return 0;
}