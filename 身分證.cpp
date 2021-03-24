#include<iostream>
#include<cstdlib>
using namespace std ;
int main ()
{
	char x[100] ;
	int lengh = 0 ;
	int id [11] ;
	int letter[] = {10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 34 , 18 , 19 , 20 , 21,
	22 , 35 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 32 , 30 , 31 , 33 } ;
	int f[] = {1 , 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 , 1} ;
	int s = 0 ;
	int size = 100 ;
	cin >> x ;
	for (lengh = 0 ; lengh < size ; lengh++) 
	{
      if (x[lengh] == '\0') 
	  {
	  	break ;
      }
	}
	if (lengh == 10)  
	{
		if(x[1] == '1' || x[1] == '2')  
		{
			if(x[0]>64 && x[0] < 91 ) 
			{
				id[0] = letter [(x[0]-65)] / 10 % 10 ;  
				id[1] = letter [(x[0]-65)] % 10 ; 
				for (int i=2 ; i<11 ; i++)
				{
					id[i]=x[i-1]-48 ; 
				}
				for (int i=0 ; i<11 ; i++)
				{
					s=s+id[i]*f[i] ; 
				}
				if(s%10==0){
					cout << "CORRECT!!!" << endl ; 
				}
				else{
					cout << "WRONG!!!" << endl ; 
				}
				}
				else{
					cout << "WRONG!!!" << endl ;  
				}
			}
			else{
				cout << "WRONG!!!" << endl ; 
			}
		}
		else{
			cout << "WRONG!!!" << endl ; 
		}
	return 0 ;
 } 
