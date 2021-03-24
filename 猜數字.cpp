#include<iostream>
#include<string>
using namespace std;
int main (){
	string ans ;
	string input ;
	while(cin >> ans){
		while(true){
        cin >> input ;
		if(input=="0000"){
			break ;
		}
		int a=0 ;
		int b=0 ;
		for(int i=0 ; i<4 ; i++){
		    if(ans[i]==input[i]){
		  	a++ ;
		    }
			for(int j=0 ; j<4 ; j++){ 
            if(ans[i]==input[j]){
            b++ ;
		    }
		    }
		}
	cout << a << "A" << b-a << "B" << endl ;
    }
    }
	return 0;
}
