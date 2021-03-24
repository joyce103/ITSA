#include<iostream>
#include<cstdlib>
using namespace std ;
int main ()
{
	int a[8] = {};
	int i=0 ;
	int num ;
	cin >> num ;
	if(num<0 && num>=-128){ //-
			num+=128 ;
			for(; i<7 ; i++){
			a[i] = num%2 ;
			num/= 2 ;
		}
			for(; i>=0 ; i--){
				a[7]=1 ;
				cout << a[i] ;	
			}
		
		}
	else if(num<127 && num>=0) { //+
		for( ; i<7 ; i++){
		a[i] = num%2 ;
		num/=2 ;
	}
		for( ; i>=0 ; i--){
			cout << a[i] ; 
		}
    }
    cout << endl ;
	return 0 ;
} 
