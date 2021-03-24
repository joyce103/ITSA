#include<iostream>
#include<cstring>
using namespace std ;
	int a[26] ;
	int A[26] ;
int main(){
	char arr[100]={0} ;
	int sum=0 ;
	int h=0 ;
	cin.getline(arr,100,'\n') ;
	h=strlen(arr) ;
	for(int i=0 ; i<h ; i++){
		if(arr[i]==' '){
			sum++ ;
		}
	}
	cout << sum+1 << endl ;
	for(int j=0 ; arr[j]!=0 ; j++){
		if(arr[j]>='a'&&arr[j]<='z'){
			a[arr[j]-'a']++ ;
		}
		else if(arr[j]>='A'&&arr[j]<='Z'){
		    A[arr[j]-'A']++ ;
				
		}	
	}
	for(int j=0 ; j<26 ; j++){
		if(a[j]!=0) cout << char(j+'a') << " : " << a[j] << endl ;
		else if(A[j]!=0) cout << char(j+'A') << " : " << A[j] << endl ;
	}
	 system("pause"); 
}
