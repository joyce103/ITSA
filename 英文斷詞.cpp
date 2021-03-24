#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std ;
int main(){
	vector<string>arr;
	string input ;
	getline(cin,input) ;
	istringstream delim(input) ;
	string token ;
	int c=0 ;
	while(getline(delim , token , ' ')){
		int k=0 ;
		int len=token.size();
		for(int a=0 ; a<len ; a++){
			if(token[a]>64&&token[a]<91){
				token[a]+=32 ;
			}
		}
		for(int i=0 ; i<c ; i++){
			if(token==arr[i]){
				k=1 ;
			}
		}
		if(k!=1){
			arr.push_back(token) ;
			c++ ;
		}
	} 
	for(int j=0 ; j<c ; j++){
		if(j!=c-1){
			cout << arr[j] << " " ;
		}
		else{
			cout << arr[j] << endl ;
		}
	}
	return 0;
}
