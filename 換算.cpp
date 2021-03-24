#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a ;
	cin >> a ;
	double km ;
	km=a*1.6 ;
	cout << fixed << setprecision (1) << km << endl ;
	return 0;
}
