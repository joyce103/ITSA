#include<iostream>
using namespace std ;
int main ()
{
	int a ;
	cin >> a ;
	if(a%4==0 && a%100!=0){
		cout << "Bissextile Year" << endl ; 
	} 
	else if(a%400==0){
		cout << "Bissextile Year" << endl ; 
	}
	else if(a%4==0 && a%100==0){
		cout << "Common Year" << endl ; 
	}
	else{
		cout << "Common Year" << endl 
		; 
	}
	return 0 ;
}
