#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> numeros;	//ARREGLO DE ENTEROS DINAMICO EN CASO DE SER ESTABLECIDO SERA "numeros(N)"
	
	numeros.push_back(5);	//AGREGA ELEMENTOS DESDE EL FINAL DEL ARREGLO
	numeros.push_back(10);
	numeros.push_back(15);
	numeros.push_back(20);
	numeros.push_back(25);
	numeros.push_back(30);
	
	numeros[2] = 10;		//MODIFICAR
	/*
		FORMA DE AGREGAR NUMEROS PARA EL ARREGLO ESTABLECIDO
		
		numeros[0] = 1;
		numeros[1] = 2;
		numeros[2] = 3;
		numeros[3] = 4;
		numeros[4] = 5;
	*/
	
	//MOSTRAR LOS ELEMENTOS DEL ARREGLO
	for(int i=0; i<numeros.size(); i++){
		cout<<numeros[i]<<" | ";
	}
	
	cout<<endl<<endl;
	
	numeros.pop_back();		//ELIMINA EL ULTIMO ELEMENTO
	numeros.erase(numeros.begin()+1,numeros.begin()+2);
	
	for(int i=0; i<numeros.size(); i++){
		cout<<numeros[i]<<" | ";
	}
	
	cout<<endl<<endl;
	return 0;
}
