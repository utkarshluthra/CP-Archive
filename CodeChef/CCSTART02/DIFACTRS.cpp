#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> fact;
    int count=0;
    for (int i=1; i<=n; i++){
        if (n%i==0){
            count++;
            fact.push_back(i);
        }
    }
    cout<<count<<endl;
    for (int i=0; i<fact.size(); i++){
        cout<<fact[i]<<" ";
    }
    cout<<endl;
	return 0;
}
