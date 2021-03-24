#include<iostream>
using namespace std ;
int main ()
{
	int a ;
	int isprime=true ;
	cin >> a ;
	for(int b=2 ; b<a ; b++){
		if(a%b==0){
			isprime=false ;
		}
	}
	if(isprime){
		cout << "YES" << endl ;
	}
	else{
		cout << "NO" << endl ;
	}
	return 0 ;
 } 
