#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x , y ;
	cin >> x >> y ;
	double a ;
	a=x*x+y*y ;
	if(sqrt(a)<=100){
		cout << "inside" << endl ;
	}
	else{
		cout << "outside" << endl ;
	}
	return 0 ;
}
