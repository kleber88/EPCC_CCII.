#include <iostream>
using namespace std;

class Rectangulo{
	private:
		int largo;
		int ancho;
	public:
		Rectangulo(int _largo,int _ancho);
		void perimetro();
		void area();
};

Rectangulo::Rectangulo(int _largo,int _ancho ){
	  largo=_largo;
	   ancho=_ancho;
}
void Rectangulo::perimetro(){
	int _perimetro;
	_perimetro=(largo*2) + (ancho*2);
	cout<<"El perimetro es: "<< _perimetro<<"\n";
	
}
void Rectangulo::area(){
	int _area;
	_area=(largo*ancho);
    cout<<"El area es: "<<_area<<"\n";
}

int main(){
	Rectangulo r1=Rectangulo(8,6);
	r1.perimetro();
	r1.area();
	
}


