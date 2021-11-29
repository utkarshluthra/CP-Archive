#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(2*n);
        unordered_map<int, int>map1;
        for(int i=0; i<2*n; i++){
            cin >> v[i];
            map1[v[i]]++;
        }
        vector<int>d;
        for(auto x : map1){
            d.push_back(x.first);
        }
        sort(d.begin(), d.end());
        unordered_map<int, int>map2;
        for(int i=0; i<d.size(); i++){
            map2[d[i/2]]++;
        }
        int m = d.size()-1;
        for(int i=1; i<=d.size(); i++){
            map2[d[m-(i/2)]]++;
    
            
        }
    
        bool b = true;
        if(map1.size() == map2.size()){
            for(int i=0; i<d.size(); i++){
                if(map1[d[i]] != map2[d[i]]){
                    b = false;
                    break;
                }
            }
        }else{
            cout << "-1"<<endl;
            break;
        }
    
        if(b){
            for(int i=0; i<d.size(); i++)   cout<<d[i]<<" ";
        }else{
            cout << "-1";
        }
        cout<<endl;
        }
        
}