#include <iostream>
using namespace std;
int main()
{
int anio;

cout << "Introduce a"<<(char)164 <<"o: ";
cin >> anio;

if(anio%4 == 0 and anio%100 != 0 or anio%400 == 0){
cout << "Bisiesto" << endl;
}
else{

cout << "No es bisiesto" << endl;
}
system("pause");
return 0;
}
