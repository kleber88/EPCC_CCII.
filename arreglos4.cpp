#include <iostream>
using namespace std;
bool esPrimo(int numero);
int main()
{
for (int i = 100; i >= 1; i--)
if (esPrimo(i))
cout << i << " ";

cout << endl;

return 0;
}
bool esPrimo(int numero)
{
int j = 0;
for(int i = 1; i <= numero; i++)
if (numero % i == 0)
j++;

return j == 2;
}
