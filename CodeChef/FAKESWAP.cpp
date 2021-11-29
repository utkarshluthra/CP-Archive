#include <bits/stdc++.h>
using namespace std;

#define ll  long long int

signed main(){
    int t; cin>>t;
    while (t--){
        ll n;
        cin >> n;

        string s, t;
        cin >> s >> t;
        
        bool check = true;
        for(int i = 0; i < n; i++){
            if(s[i] != t[i]){
                check = false;
                break;
            }
        }

        if(check){
            cout << "YES" << endl;
            continue;
        }

        ll x1 = 0, x2 = 0;
        for(auto x: t){
            if(x == '1'){
                x2++;
            }else{
                x1++;
            }
        }

        if(x2 > 0 and x1 > 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}