//Trial 2: Same logic, different code

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solution()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    char result = s[0];
    int cnt =0;
    for(int i=1;i<n;i++) {
        if(result != s[i]) {
            cnt++;
            result = s[i];
        }
    }

    if(cnt<k) {
        cout<<-1<<"\n";
        return;
    }
    if(s[0]=='0') {
        if(k%2) {
            for(int i=s.size()-1; i>=0; i--) {
                if(s[i] == '1') {
                    cout<<i+1<<"\n";
                    return;
                }
            }
        }
        else {
            for(int i=s.size()-1; i>=0; i--) {
                if(s[i] == '0') {
                    cout<<i+1<<"\n";
                    return;
                }
            }
        }
    }
    else {
        if(k%2) {
            for(int i=s.size()-1; i>=0; i--) {
                if(s[i] == '0') {
                    cout<<i+1<<"\n";
                    return;
                }
            }
        }
        else {
            for(int i=s.size()-1; i>=0; i--) {
                if(s[i] == '1') {
                    cout<<i+1<<"\n";
                    return;
                }
            }
        }
    }

}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int T;
    cin>>T;
    while(T--) {
        solution();
    }
    return 0;
}