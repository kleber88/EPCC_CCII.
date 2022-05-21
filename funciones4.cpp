#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{

int numero;
int numeros;
int primo=0;
int divisores=0;

printf("Teclear No.: ");
scanf(" %d",&numero);

for(numeros=1;numeros<=numero;numeros++)
{
primo=0;

for(divisores=2;divisores<numeros-1 && primo==0;divisores++)
{

if(numeros%divisores==0) primo=1;
}

if(primo==0)
printf("El numero %d es primo\n",numeros);
}
system("PAUSE");
return 0;
}
