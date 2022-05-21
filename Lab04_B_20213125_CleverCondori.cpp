//Ejercicio 4
#include <iostream>

using namespace std;

int main(void){

int n1;
short binario[900];

cout << "Ingrese un numero entre 100 y 999 para convertir en binario :" << endl;
cin >> n1;

for (int i = 100; i < 999; i++)
{
binario[i] = n1 % 2;
n1 /= 2;
}

cout << "El numero en binario es:" << endl;

for (int i = 900; i >= 100; i--)
{
cout << binario[i];
}

cout << endl;
system("PAUSE");

return 0;

}
