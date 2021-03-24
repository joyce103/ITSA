#include<iostream>
#include<iomanip>
using namespace std ;
int main (){
	int a ;
	double summer=0 ;
	double nosummer=0 ;
	cin >> a ; 
	if(a<=120){
		summer=a*2.10 ;
		nosummer=a*2.10 ;
	}
	else if(a>120&&a<=330){
		a-=120 ;
		summer=120*2.10+a*3.02 ;
		nosummer=120*2.10+a*2.68 ;
	}
	else if(a>330&&a<=500){
		a-=330 ;
		summer=120*2.10+210*3.02+a*4.39 ;
		nosummer=120*2.01+210*2.68+a*3.61 ;
	}
	else if(a>500&&a<=700){
		a-=500 ;
		summer=120*2.10+210*3.02+170*4.39+a*4.97 ;
		nosummer=120*2.10+210*2.68+170*3.61+a*4.01 ;
	}
	else{
		a-=700 ;
		summer=120*2.10+210*3.02+170*4.39+200*4.97+a*5.63 ;
		nosummer=120*2.10+210*2.68+170*3.61+200*4.01+a*4.50 ;
	}
	cout << "Summer months:" << fixed << setprecision(2) <<  summer << endl ;
	cout << "Non-Summer months:" << fixed << setprecision(2) << nosummer << endl ;
	return 0;
}
