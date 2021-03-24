#include<iostream>
using namespace std ;
int main(){
	int sum=0 ;
	int a;
	cin >> a ;
	for(int i=0 ; i<=a ; i++){
		if(i%3==0){
			sum+=i ;
		}
	}
	cout << sum << endl  ;
	return 0 ;
}
