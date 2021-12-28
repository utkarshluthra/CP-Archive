#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    for(;t!=0;t--){
        int a, b, c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        if (sum==180){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        char ships;
        cin>>ships;
        if (ships=='b' || ships=='B'){
            cout<<"BattleShip"<<endl;
        }
        else if(ships=='c' || ships=='C'){
            cout<<"Cruiser"<<endl;
        }
        else if(ships=='d' || ships=='D'){
            cout<<"Destroyer"<<endl;
        }
        else if(ships=='f' || ships=='F'){
            cout<<"Frigate"<<endl;
        }
    }
	return 0;
}

        }
        
    }

	return 0;
}
