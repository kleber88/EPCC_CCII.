#include <iostream>
#include <conio.h>
#include <stdlib.h>
 

                 struct lista
                         {   int codigo[5];
			     char [50];
                             char [1];
                             } ;
 
                 struct lista{            
                 tipo s_dato;
                 nodo* s_sig;
                 };
 
void crear(lista**);
void insertar(lista**, tipo);
void quitar(lista**, tipo);
void recorrer(lista**);
int buscar();
 
int  main()
{
nodo* lista;
int dat;
int dato;
char op;
 
struct lista x;
crear(&lista);
system("pause");
}

