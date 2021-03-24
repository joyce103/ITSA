#include<iostream>
#include<iomanip>
using namespace std ;
int main () 
{
    float a[10];
    float max , min ; 
    for(int b=0 ; b<10 ; b++){
    	     cin >> a[b] ;
   	}
   	max=a[0] , min=a[0] ;
    	for(int c=0 ; c<10 ; c++){
    		if(a[c] > max){
    			max = a[c] ;
			}
			if(a[c] < min){
				min = a[c] ;
			}
		}

	cout << "maximum:" << fixed << setprecision(2) << max << endl ;
	cout << "minimum:" << fixed << setprecision(2) << min << endl ;
	return 0 ;
}
