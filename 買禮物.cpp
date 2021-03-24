#include<iostream>
using namespace std;
int main(){
	int n ;
	int a[100] ;
	int min=0 ;
	int max=0 ;
	cin >> n ;
    if (n > 10 || n < 1) {
    	return 0 ;
	}   
	for(int i=0 ; i<n ; i++){
		int t , m , k ;
		cin >> t >> m >> k ;
		if(m>k||k>100){
			return 0 ;
		} 
		for(int j=0 ; j<k ; j++){
			cin >> a[j] ;
			min=a[0] ;
			if(a[j]<min){
				min=a[j] ;
			}
		}
		if(min*m>t){
			cout << "Impossible" << endl ;
		}
		else{
	        for(int b=0 ; b<k ; b++){
	        	if(a[b]*m>min*m&&a[b]*m<=t){
	        		max=a[b]*m ;
				}
			}
			cout << max << endl ;
        }
	}
	min=0 ;
	max=0 ;
	return 0;
} 
