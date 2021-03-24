#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
using namespace std ;
int main() {
	string str;
	double sum=0 ;
	int count=0 ;
	int ss ;
	while(getline(cin , str)){
		stringstream s(str) ;
		while(s>>ss){
			sum+=ss ;
			count++ ;
		}
		cout << "Size: " << count << endl ;
		cout << fixed << setprecision(3) << "Average: " << sum/count << endl ;
		sum=0 ;
		count=0 ;
	}
	return 0;
}
