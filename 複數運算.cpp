#include<iostream>
using namespace std ;
int main(){
	char q;
	int N , a , b , c , d ;
	cin >> N ;
	for(int i=0 ; i<N ; i++){
		cin>>q>>a>>b>>c>>d ;
		if(q=='+'){
			cout << a+c << " " << b+d << endl ;
		}
		else if(q=='-'){
			cout << a-c << " " << b-d << endl ;
		}
		else if(q=='*'){
			cout << (a*c)-(b*d) << " " << (c*b)+(d*a) << endl ;
		}
	}
	return 0 ;
}
