#include<bits/stdc++.h>
#define int          long long int 
#define pb           push_back
using namespace std;

int fastpower(int x, int y, int mod)
{
    int res = 1;
    x = x % mod;
    if (x == 0) return 0;
    while (y > 0)
    {
        if (y & 1){
         res = (res*x) % mod;
        }
        y = y>>1;
        x = (x*x) % mod;
    }
    return res;
}
int GCD(int p,int q){
 while(q!=0){
  int rem=p%q;
  p=q;
  q=rem;
 }
 return p;
}
void solve()
{

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int start=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>start){
            cout<<-1<<endl;
            return;
        }
    }
    stack<int>s;
    for(int i=1;i<n;i++){
        while(s.size() and s.top()<=a[i]){
            s.pop();
        }
        s.push(a[i]);
    }
    int ans=0;

    while(!s.empty()){
        ans++;
        s.pop();
    }
    cout<<ans<<endl;
}
signed main()
{
 ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

 int TESTS=1;
 cin>>TESTS;

 while(TESTS--)
 {
  solve();
 }
 
 return 0;
}