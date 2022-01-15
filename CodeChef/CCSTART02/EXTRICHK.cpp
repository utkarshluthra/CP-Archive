#include <iostream>
using namespace std;

int main() {
	int a,b,c; cin >> a >> b >> c;
	int d,e,f;
	d = a+b; e = b+c; f = a+c;
	if((d>c)&&(e>a)&&(f>b))
	{
	    if((a==b)&&(b==c)&&(a==c))
	    {
	        cout << "1";
	    }
	    else if((a==b)||(b==c)||(a==c))
	    {
	        cout << "2";
        }
	    else
	    {
	        cout << "3";
	    }
	}
	else
	{
	    cout << "-1";
	}
	return 0;	
}