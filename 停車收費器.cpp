#include<iostream>
using namespace std ;
int main ()
{
	int a , b , c , d ;
	cin >> a >> b ;
	cin >> c >> d ;
    a = a*60+b ;
    c = c*60+d ;
	int s = (c-a)/30 ;
    if(s<=4){
    	cout << s*30 << endl;
	}
	if(s>4 && s<8){
		s-=4 ;
		cout << s*40 + 120 << endl ;
	}
	if(s>8){
		s-=8 ;
		cout << s*60 + 120 + 160 << endl ;
	}
	 return 0 ;
}
