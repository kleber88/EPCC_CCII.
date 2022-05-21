#include<iostream>
using namespace std;

int main ()
{
int Y=0,X=0;
char Z[50];
cout<<"Digite las palabras: <<\n";

gets(Z);
while(Z[X] != '\0')
{
cout<<"%c",Z[X]<<;
X++;

}
cout<<"\nLa palabra invertida es: %s", strrev(Z)<<;

}
