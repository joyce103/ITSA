#include<iostream>
#include<string>
using namespace std ;
int main(){
    int n;  
    while (cin >> n && n < 33 && n)  
    for (int i = 0; i < n; i++)  
    {   
        if (i == 0) {
            cin.get();
        }
        string str;  
        getline(cin, str);  
        int sum = 0;  
        for (int j = 0; j < str.length(); j++){
            sum += str[j];  
        }
        cout << sum << endl;  
    }  
    return 0;   
}

