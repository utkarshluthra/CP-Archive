#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s) {
    int num=0;
    for (int i=0;i<s.size();i++){
        if(s[i]=='I'){
            if(s[i+1]=='V'){
                num--;
            }
            else if(s[i+1]=='X'){
                num--;
            }
            else{
                num++;
            }
        }
        else if(s[i]=='V'){
            num+=5;
        }
        else if(s[i]=='X'){
            if(s[i+1]=='L'){
                num-=10;
            }
            else if(s[i+1]=='C'){
                num-=10;
            }
            else{
                num+=10;
            }
        }
        else if(s[i]=='L'){
            num+=50;
        }
        else if(s[i]=='C'){
            if(s[i+1]=='D'){
                num-=100;
            }
            else if(s[i+1]=='M'){
                num-=100;
            }
            else{
                num+=100;
            }
        }
        else if(s[i]=='D'){
            num+=500;
        }
        else if(s[i]=='M'){
            num+=1000;
        }
    }
    return num;
}
int main(){
    string s;
    cin>>s;
    cout<<romanToInt(s);
}