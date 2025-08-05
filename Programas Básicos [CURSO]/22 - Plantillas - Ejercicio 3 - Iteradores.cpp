//ITERADORES
#include<iostream>
#include<cstdlib>	//LIBRERIA PARA RANDOM
#include<vector>
using namespace std;

//PLANTILLA
template <class Iter>

//FUNCION
void mostrarEnPantalla(Iter inicio, Iter final){
	while(inicio != final){
		cout<<*inicio<<"   |   ";
		inicio++;
	}
}

int main(){
	vector<char> letras(10);	//CREANDO EL VECTOR DE 10 ELEMENTOS CHAR
	
	//AGREGANDO ELEMENTOS ALEATORIOS AL VECTOR
	for(int i=0; i<10; i++){
		letras[i] = 'A' + (rand() % 26);
	}
	
	//VISUALIZAR LOS ELEMENTOS DEL VECTOR
	mostrarEnPantalla(letras.begin(),letras.end());
	cout<<endl;
	
	//VISUALIZAR ELEMENTOS DEL VECTOR AL REVES
	mostrarEnPantalla(letras.rbegin(),letras.rend());
	cout<<endl;
	
	//VISUALIZAR LOS ELEMENTOS DEL MEDIO DEL VECTOR (1-8)
	mostrarEnPantalla(letras.begin()+1,letras.end()-1);
	cout<<endl;
	
	return 0;
}
