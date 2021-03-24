#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std ; 
int main ()
{
	int n ;
	double x ;
	float sum=0 ; 
	cin >> x >> n ;
	for(int i=0 ; i<=n ; i++){
		sum += pow(-1,i)*pow(x,i) ;
	}
	cout << sum ;
	system("pause") ; 
	return 0 ;
 } 
