#include<iostream>
using namespace std ;
int main ()
{
	char q ;
	int a , b , c , d ;
	int x=1 , y=5 , z=50 ;
	cin >> a >> q >> b >> q >> c >> q >> d;
	if(b*15 + c*20 + d*30 <= a){
	    int sum = a-b*15 - c*20 - d*30 ;
	    cout << sum%z%y/x << ",";
	    cout << sum%z/y << "," ;
	    cout << sum/z << endl ;
	}
	else{
		cout << "0" << endl ;
	}
	return 0 ; 
}
