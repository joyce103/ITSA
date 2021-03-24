#include <iostream>

using namespace std;
int main(){

int game[3][3], i;
int check[8] = {0};
bool flag = true;

for (i = 0; i < 3; i++)
for (int j = 0; j < 3; j++)
cin >> game[i][j];

for (i = 0; i < 3; i++){
check[0] += game[0][i];
check[1] += game[0][i];
check[2] += game[0][i];
}
for (i = 0; i < 3; i++){
check[i+3] = game[0][i] + game[1][i] + game[2][i];
}
check[6]=game[0][0]+game[1][1]+game[2][2];
check[7]=game[2][0]+game[1][1]+game[0][2];

for (i = 0; i < 8; i++){
if(check[i] == 3 || check[i] == 0){
cout << "True" <<endl;
flag=false;
break;
}
}
if(flag){
cout<<"False"<<endl;
}

} 
