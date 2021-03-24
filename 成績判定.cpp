#include<iostream>
using namespace std;
int main(){
	int line ;
	cin >> line ;
	for(int i=0 ; i<line ; i++){
		int a , b , c ;
		cin >> a >> b >> c ;
		if(a>=60 && b>=60 && c>=60){
			cout << "P" << endl ;
		}
		else if(((a<60&&b>=60&&c>=60)||(b<60&&a>=60&&c>=60)||(c<60&&b>=60&&a>=60))&&(a+b+c)>=220){
			cout << "P" << endl ;
	    }
	    else if(((a<60&&b>=60&&c>=60)||(b<60&&a>=60&&c>=60)||(c<60&&b>=60&&a>=60))&&(a+b+c)<220){
	    	cout << "M" << endl ;
		}
		else if((a<60&&b<60&&c>=80)||(a<60&&c<60&&b>=80)||(b<60&&c<60&&a>=80)){
			cout << "M" << endl ;
		}
		else{
			cout << "F" << endl ;
		}
	}
		return 0 ;
}


