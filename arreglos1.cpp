#include <iostream>
using namespace std;

void datosPersona();
void mostrarDatos(char[][20],char[][15],char[][15],int[]);

int main(){

cout << "\t\t DATOS";
cout << "\n\t\t ==========================";
datosPersona();
return 0;
}

void datosPersona(){
char apell[3][15],nom[3][20],dni[3][15];
int edad[3];
int f;

for(f = 0; f < 3; f++){
cout <<"\nIngrese Apellido: ";
cin >> apell[f];
cout << "\nIngrese Nombre: ";

cin >> nom[f];
cout << "\nIngrese Edad: ";
cin >> edad[f];
cout << "\nIngrese DNI: ";
cin>>dni[f];
}
mostrarDatos(nom,apell,dni,edad);

}

void mostrarDatos(char nom[][20],char apell[][15],char dni[][15],int edad[]){
cout << "\n\nLos datos ingresados fueron: ";
int f;

for(f = 0; f < 3; f++){
cout << "\nApellido: ";
cout << apell[f];
cout << "\nNombre: ";
cout << nom[f];
cout << "\nEdad: ";
cout << edad[f];
cout << "\nDNI: ";
cout << dni[f];
}
}
