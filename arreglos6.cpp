#include <iostream>
using namespace std;
int main() {

int c=0;
int r=0;
int aux=0;
cout<<"Ingrese el numero de filas de la matriz"<<endl;
cin>>c;
cout<<"Ingrese el numero de columnas de la matriz"<<endl;
cin>>r;
int m[r][c];

for(int i=0; i<c; i++){
for(int j=0; j<r; j++){
cout<<"["<<i<<"]"<<"["<<j<<"]"<<endl;
cin>>m[i][j];
}
}
cout<<"La matriz formada es: "<<endl;

for(int x=0; x<c; x++){
for(int y=0; y<r; y++) {
cout << "[" << m[x][y] << "]";
}
cout<<endl;
}
return 0;
}
