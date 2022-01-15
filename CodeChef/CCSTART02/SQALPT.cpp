#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int count=0;
    for (int i = 0; i<n; i++){
        if(i%2==0){
            for (int j=0; j<5; j++){
                count++;
                cout<<count<<" ";
            }
            cout<<endl;
        }else{
            count+=5;
            for (int j=5; j>0; j--){
                cout<<count<<" ";
                count--;
            }
            cout<<endl;
            count+=5;
        }
    }
	return 0;
}
