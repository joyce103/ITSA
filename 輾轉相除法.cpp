#include<iostream>
using namespace std ;
int main(){
	int a, b, c;
	cin >> a >> b ;
    if(a>b){
	while(a%b!=0){
		c=a;
		a=b;
		b=c%a;
	}
		cout << b << endl ;
    }
    else if(b>a){
    	while(b%a!=0){
    		c=b;
    		b=a;
    		a=c%b;
		}
		cout << a << endl ;
	}

	return 0;
}
