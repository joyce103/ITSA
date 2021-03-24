#include<iostream>
#include<cstring>
using namespace std;
int main(){
	string a ;
	int b=1 ;
	cin >> a ;
	for(int i=0 , j=a.size()-1 ; i<=j ; i++ , j--){
		if(a[i]!=a[j]){
			b=0 ;
		}
	}
	if(b){
		cout << "YES" << endl ;
	}
	else{
		cout << "NO" << endl ;
	}
    return 0 ;
} 
