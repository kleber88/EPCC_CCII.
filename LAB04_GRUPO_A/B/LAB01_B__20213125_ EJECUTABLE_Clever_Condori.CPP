#include <iostream>
using namespace std;
int main(void){

int hora, minuto;

cout<<"Ingrese la hora :"<<endl;
cin>> hora;
cout<<"Ingrese los minutos :"<<endl;
cin>> minuto;

if(hora <12){
cout<<"AM :"<<endl;
}
else{
cout<<"PM :"<<endl;

}

return 0;
}
