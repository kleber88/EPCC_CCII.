#include <iostream>

using namespace std;

void pedirDatos(int &n){
cout<<"Introduce numero impar: ";
cin>>n;
}

void ImpAlmoadillas(int B){

for(int i=1;i<=B;i++)
cout<<"# ";
cout<<endl;

}
void CrearTrianRect(int n){

for(int i=1;i<=n;i++)

ImpAlmoadillas(i);
}

void ImprimirC(int A){

for(int j=1;j<=A;j++)

cout<<"c ";
cout<<endl;

}
void CrearTriangIsosc(int n){

for(int i=1;i<=n;i++){

ImprimirC(i);
}
}

int main()
{
int n;
do {
pedirDatos(n);

if(n<=0||n%2==0)
cout<<"El numero introducido debe ser impar."<<endl;
}

while(n<=0||n%2==0);

CrearTrianRect(n);
CrearTriangIsosc(n);

return 0;

}
