#include<iostream>
using namespace std;

const int fil = 3
const int col = 3

class Matriz{
	public:
		Matriz(){
			for (int f = 0; < fill; f++){
				for(int c = 0; c< col; c++){
					_Matriz[f][c] = 0;
				}
			}
			
		}
		
		void implementar(){
			for (int f = 0; f < fill; f ++){
				for(int c = 0; c < col; c++){
					_Matriz[f][c] = rand() % 9;
				}
			}
			
		}
		void Mostrar(){
			for(int f = 0; f < fil; f++){
				for(int c = 0; c < col; c++){
					cout<<setw(3)<<_Matriz [f][c]<<" ";
					
				}cout<<endl;
			}
		}
		
	private:
		int _Matriz[fil][col];
};

int main(){
	Matriz a;
	a.iplementar();
	a.mostrar();
	
	
	
	
	return 0;
}
