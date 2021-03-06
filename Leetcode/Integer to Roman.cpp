#include<bits/stdc++.h>
using namespace std;

string intToRoman(int n) {
    vector<pair<int, string>> t = {{1000, "M"},
                                    {900, "CM"}, 
                                    {500, "D"},
                                    {400, "CD"}, 
                                    {100, "C"},
                                    {90, "XC"}, 
                                    {50, "L"},
                                    {40, "XL"},
                                    {10, "X"}, 
                                    {9, "IX"},
                                    {5, "V"}, 
                                    {4, "IV"},
                                    {1, "I"}
                                    };
    string num = "";
    while(n > 0){
        for(auto i : t){
            if(n >= i.first){
                num += i.second;
                n = n - i.first;
                break;
            }
        }
    }
    return num;
}

int main(){
    int n;
    cin>>n;
    cout<<intToRoman(n);
    return 0;
}