#include<iostream>
#include <iomanip>   
#include <math.h> 
using namespace std ;
int main(){
	int a , b , i , j;
	int c[10000] ;
	while(cin >> a >> b ){
	for(i=0 ; i<a*b ; i++){
		cin >> c[i] ;
	}
		for(i=0 ; i<b ; i++){
			for(j=0 ; j<a ; j++){
				if(j==a-1){
                    cout << c[i + j*b]; 
				}
                else{
                	cout << c[i + j*b] << " "; 
				}
			}
				cout << endl ;
			}
		}
		return 0 ;
	}
