#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int o = 0, e = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) {
                e++;
            }
            else {
                o++;
            }
        }
        if (e == 0 and o > 0) {
            cout << -1 << endl;
        }
        if (o == 0 and e > 0) {
            cout << -1 << endl;
        }
        if (o > 0 and e > 0) {
            for (int i = 0; i < n; i++) {
                if (arr[i] % 2 != 0) {
                    cout << arr[i] << " ";
                }
            }
            for (int i = 0; i < n; i++) {
                if (arr[i] % 2 == 0) {
                    cout << arr[i] << " ";
                }
            }
            cout << endl;
        }
    }
  return 0;
}