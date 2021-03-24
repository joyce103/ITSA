#include<iostream>
#include<string>
using namespace std ;
int main(){
	string str ;
	int len ;
	int num ;
	getline(cin , str) ;
	len=str.length() ;
	cin >> num ;
	for(int i=0 ; i<len ; i++){
		int p=str[i] ;
		if(p>='a'&&p<='z'){
			p+=num ;
			if(p>122){
				p-=26 ;
			} 
		}
		else if(p>='A'&&p<='Z'){
			p+=num ;
			if(p>90){
				p-=26 ;
			}
		}
        else if(p>='0'&&p<='9'){
        	p+=num ;
        	if(p>57){
        		p-=10 ;
			}
		}
		str[i]=p ;
		cout << str[i] ;
	}
	cout << endl ;
	return 0 ;
} 
