#include<iostream>
#include<cstdlib>
using namespace std ;
int main ()
{
    int a=0 , b=0 , c=0 , d=0 ;
	cin >> a >> b ;
    if(a==1 || b==1 || c==1 || d==1){
    	cout << "    *" << endl ;
    	cout << "    *" << endl ;
    	cout << "    *" << endl ;
    	cout << "    *" << endl ;
    	cout << "    *" << endl ;
	}
	if(a==2 || b==2 || c==2 || d==2){
		cout << "*****" << endl ;
		cout << "    *" << endl ;
		cout << "*****" << endl ;
		cout << "*    " << endl ;
		cout << "*****" << endl ;
	}
}
