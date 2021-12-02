#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
    int m = haystack.size(), n = needle.size(), p = 0;
    while (p + n - 1 < m) {
        if (haystack.substr(p, n) == needle) {
            return p;
        }
        while (p++ + n - 1 < m && haystack[p] != needle[0]);
    }
    return -1;
}
int main(){
    string haystack;
    string needle;
    cin>>haystack;
    cin>>needle;
    strstr(haystack, needle);
    return 0;
}