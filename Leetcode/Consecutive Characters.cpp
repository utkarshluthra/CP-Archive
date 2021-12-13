#include <bits/stdc++.h>
using namespace std;

int maxPower(string s) {
    int count = 0;
    int maximum = 0;
    char x = ' ';
    for (int i = 0; i < s.length(); i++) {
        char check = s[i];
        if (check == x) {
            count++;
        } else {
            count = 1;
            x = check;
        }
        maximum = max(maximum, count);
    }
    return maximum;
}
int main(){
    string s;
    cin>>s;
    cout<<maxPower(s);
    return 0;
}