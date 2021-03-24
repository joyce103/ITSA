#include<iostream>
#include<string>
using namespace std;
int main(){
	string str ;
	string N ;
	int strn , nn , count=0 ;
	int a=0 ;
	getline(cin,N) ;
	nn=N.length() ;
	getline(cin,str) ;
	strn=str.length() ;
	for(int i=0 ; i<strn ; i++){
	    for(int j=0 ; j<nn ; j++){
		    if(N[j]==str[i+j]){
 			    a++ ;
	    	}
	    }
        if(a==nn){
        	count+=1 ;
		}
		else{
			count+=0 ;
		}
		a=0 ;
    }
	cout << count << endl ;
	return 0 ;
}
