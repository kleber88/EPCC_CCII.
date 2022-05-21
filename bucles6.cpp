#include <iostream>
using namespace std;

int main(){

double n1, n2, n3, sum, prom;
n1=0;
n2=0;
n3=0;
sum=0;
prom=0;

cout<<"Ingrese la primera nota :"<<endl;
cin>>n1;
cout<<"Ingrese la segunda nota :"<<endl;
cin>>n2;
cout<<"Ingrese la tercera nota :"<<endl;
cin>>n3;

sum=n1+n2+n3;
prom=sum/3;
cout<<"La suma de las notas es :"<<sum<<endl;
cout<<"El promdedio de las notas es :"<<prom<<endl;

return 0;
}
