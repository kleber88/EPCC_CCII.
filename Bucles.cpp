//ejercicio 1
#include <iostream>

#include <conio.h>

using namespace std;

int main(){

int i=1,j,cont,suma;

while(i<=50){

cont=0;

j=1;

while(j<=i){

if(i%j==0){

cont++;}j++;}

if(cont==2){

suma++;

cout<<i<<endl;}

i++; }

cout<<"El total de numeros primo del 1 al 50 son: "<<suma;

getch();

return 0;
