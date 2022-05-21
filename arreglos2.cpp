#include <iostream>
using namespace std;
int dim = 8;

bool EncontarVal(int v[], int);

int main(){
int vector[dim],x,valor;

cout<<"Ingresar 8 numeros enteros: ";
for(int i = 0; i < dim; i++){
cin >> vector[i];

}
cout << "Ingrese un numero a buscar : ";
cin >> x;
valor = EncontrarVal(int v[], int val);
if(valor){ cout << "Valor encontrado!!!"; }
else{ cout<<"No se encontro valor!!!"; }
return 0;
}

bool EncontrarVal(int v[],int val){
for(int i = 0; i < dim; i++){
if(val == v[i]){ return true; }
}
return false;
}

3. Hacer un array 5x3 que acepte números enteros ingresados por el usuario. Al final,
debe mostrar la suma de todos los números que estén en una fila par.

#include <iostream>
using namespace std;

void CargarMat();
int SumaFilaPar(int mat[][3]);

int mat[5][3],f,c;

int main(){
CargarMat();

cout << "La suma de las filas pares es: " << SumaFilaPar(mat);
return 0;
}
void CargarMat(){
cout<<"Ingrese 12 numeros: ";
for(f = 0; f < 5; f++){
for(c = 0; c < 3; c++){ cin >> mat[f][c]; }
}
}

int SumaFilaPar(int mat[][3]){
int suma = 0;
for(f = 0;f < 5;f += 2){
for(c = 0; c <3 ; c++){ suma += mat[f][c]; }
}
return suma;
}
