#include<iostream>
using namespace std;
int f(int k){
	if(k==1||k==0){
		return k+1 ;
	}
	else{
		return f(k-1)+f(k/2) ;
	}
}
int main(){
	int a ;
	cin >> a ;
	f(a) ;
	cout << f(a) << endl ;
} 
