#include<iostream>
using namespace std ;
int main(){
	int a[4] ;
	int b ;
	for(int i=0 ; i<4 ; i++){
		cin >> a[i] ;
	}
	for(int i=0 ; i<4 ; i++){
		for(int j=i+1 ; j<4 ; j++){
			if(a[i]!=a[j]){
				b=1 ;
			}
			else if(a[i]==a[j]){
				b=0 ;
			}
		}
	}
	if(b=0){
		cout << "R" << endl ;
	}
	else if(b=1){
		cout << "WIN" << endl ;
	}
    return 0 ;	
}
