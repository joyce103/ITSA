#include<iostream>
#include<cstdlib>
using namespace std ;
int main ()
{
	int a ;
	int b ;
	cin >> a >> b ;
	switch(a){
		case 1 :
			if(b<=20) cout << "Capricorn" << endl ;
			else cout << "Aquarius" << endl;
			break ;
		case 2 :
		    if(b<=18) cout << "Aquarius" << endl;
			else cout << "Pisces" << endl;
			break ;
		case 3 :
		    if(b<=20) cout << "Pisces" << endl;
			else cout << "Aries" << endl;
			break ;
		case 4 :
		    if(b<=20) cout << "Aries" << endl;
			else cout << "Taurus" << endl;
			break ;
		case 5 :
		    if(b<=21) cout << "Taurus" << endl;
			else cout << "Gemini" << endl;
			break ;
		case 6 : 
		    if(b<=21) cout << "Gemini" << endl;
			else cout << "Cancer" << endl;
			break ;
		case 7 :
		    if(b<=22) cout << "Cancer" << endl;
			else cout << "Leo" << endl;
			break ;
		case 8 : 
		    if(b<=23) cout << "Leo" << endl;
			else cout << "Virgo" << endl;
			break ;
	    case 9 :
		    if(b<=23) cout << "Virgo" << endl;
			else cout << "Libra" << endl;
			break ;
		case 10 :
		    if(b<=23) cout << "Libra" << endl;
			else cout << "Scorpio" << endl;
			break ;
		case 11 : 
		    if(b<=22) cout << "Scorpio" << endl;
			else cout << "Sagittarius" << endl;
			break ;
		case 12 :
		    if(b<=21) cout << "Sagittarius" << endl;
			else cout << "Capricorn" << endl;
			break ; 
	}
	return 0 ;
 } 
