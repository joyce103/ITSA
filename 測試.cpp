#include<iostream>
#include<cstdlib>
using namespace std ;
int main() 
{
	int a ;
	char exe ='y' ;
	while(exe=='y'|| exe=='Y'){
	cin >> a ;
    for(int b=1 ; b<=a ; b++){
    	if (a%b==0){
    		cout << b << " " ;
		}
	}
	cout << endl ;
	cout << "�O�_�٭n�~�����(Y/N)" << endl ;
	cin >> exe ;
    } 
	system("pause") ;
	return 0 ;
}
