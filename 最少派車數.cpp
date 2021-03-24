#include<iostream>
using namespace std ;
int main(){
	int n ;
	while(cin >> n){
		int time[25]={0} ;
		while(n--){
			int s , d ;
			cin >> s >> d ;
			for(int i=s ; i<d ; i++){
				time[i]++ ;
			}
		}
		int max=0 ;
		for(int j=0 ; j<25 ; j++){
			if(time[j]>max){
				max=time[j] ;
			}
		}
		cout << max << endl ;
	}
	return 0; 
}
