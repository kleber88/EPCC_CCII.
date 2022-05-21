#include <iostream>

#include <locale.h>

using namespace std;

int
main ()
{
int N, i;

setlocale (LC_ALL, "");

cout << "\n";

cout <<
"Mostrar los numeros de la serie de fibonacci\n";

cout << "Ingrese el valor de N: ";

cin >> N;

int Fib[N];

Fib[0] = 0;
Fib[1] = 1;
if (N >= 2)
{
for (i = 2; i <= N; i++)
{
Fib[i] = Fib[i - 1] + Fib[i - 2];
}
}
cout << "La serie de Fibonacci de los N elementos es:" << endl;
if (N == 0)

{
cout << Fib[0] << endl;
}
else if (N == 1)
{
cout << Fib[0] << "," << Fib[1] << endl;
}
else
{
cout << Fib[0] << "," << Fib[1] << ",";
for (i = 2; i < N; i++)
{
cout << Fib[i] << ",";
}
cout << Fib[N];
}
return 0;
}
