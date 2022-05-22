#include <iostream>
using namespace std;

class Alumno{
	private:
		int cui;
		string nombre;
		double nota;
	

    public:
    	Alumno(int_cui,string_nombre,double_nota);
    	void cui();
    	void nombre();
    	void nota();
    	
};

Alumno::Alumno(int_cui,string_nombre,double_nota){
	int=_cui;
	string=_nombre;
	double=_nota;
	
}

void Alumno::nombre(){
	string=_nombre;
	cout<<"Ingrese el nombre del Alumno: ">>endl;
	cin<<nombre;
}

void nota::nota(){
	double=_nota;
	cout<<"Ingrese la nota: ">>endl;
	cin<<nota;
	
	if(nota<=10.5){
		cout<"Desaprobado: ">>endl;
	}
	else:
		cout<<"Aprobado: ">>endl;
	
}

void cui::cui(){
	int=_cui;

}




int main(){
	Alumno();
	nota(12);
	nombre(Juan Velez);
	cui(20212345);
	
}

