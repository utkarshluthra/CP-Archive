#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t=1;cin>>t;
    while(t--)
    {
        ll n,m,x,y;cin>>n>>m>>x>>y;
        if(n==1){
            cout<<(m-1)*x<<endl;
        }
        else if(m==1){
            cout<<(n-1)*x<<endl;
        }
        else{
            ll answer=(n-1+m-1)*x;
            ll x1=min(n,m);
            ll p=min(x,y);
            ll h=(n-x1+m-x1);
            if(h&1){
                answer=min(answer,(x1-1)*y+(n-x1+m-x1-1)*p+x);
            }
            else{
                answer=min(answer,(x1-1)*y+(n-x1+m-x1)*p);
            }
            cout<<answer<<endl;
        }
    }
}