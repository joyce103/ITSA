#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std ;
int main(){
	string input ;
    while (getline(cin, input)) {      
        vector <string> arr;      
        istringstream delim(input);      
        string token;      
        while (getline(delim, token, ' ')) {      
            arr.push_back(token);      
        }
        int len=token.size() ;
        int i=0 ;
        int c=len/2 ;
        for(i=0 ; i<len ; i++){
        	int count=0 ;
        	for(int j=0 ; j<len ; j++){
        		if(arr[i]==arr[j]){
        			count++ ;
				}
			}
			if(count>=c){
				cout << arr[i] << endl ;
				break ;
			}
		}
		if(i==len){
			cout << "NO" << endl ;
		}
	
}
return 0 ;
}
