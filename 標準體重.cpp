#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std ;
int main () 
{
    double tall ;
    double w ;
    int s ;
	while(cin >> tall >> s){
	if(s==1){
		w=(tall-80)*0.7 ;
	}
	else if (s==2) {
		w=(tall-70)*0.6 ;
	}
	cout << fixed << setprecision(1) << w << endl ;
    }
	return 0 ;	
} 
