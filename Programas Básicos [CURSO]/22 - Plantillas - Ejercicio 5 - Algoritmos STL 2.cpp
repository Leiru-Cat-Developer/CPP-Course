//ALGORITMOS STL
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<cstdlib>
using namespace std;

template <class T>
bool determinarPar(T valor){
	return ((valor%2) == 0);
}

int numerosAleatorios(){
	//COLOCAMOS UN RANGO DE NUMEROS ALEATORIOS
	return rand()%30;
}

int main(){
	vector<int> valores(10);
	generate(valores.begin(),valores.end(),numerosAleatorios);	//GENERAMOS NUMEROS ALEATORIOS GUARDADOS DENTRO DE VECTOR
	
	//MOSTRAR EN PANTALLA EL VECTOR
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout<<"  |  "));
	
	//CREAMOS UN NUEVO VECTOR PARA ALMACENAR LOS ELEMENTOS PARES
	vector<int> pares;
	
	//ITERADOR PARA RECORRER EL VECTOR VALORES
	vector<int>::iterator i = valores.begin();
	
	while((i=find_if(i,valores.end(),determinarPar<int>)) != valores.end()){
		pares.push_back(*i);
		i++;
	}
	
	//ORDENA EL VECTOR PARES
	sort(pares.begin(),pares.end());
	
	//MOSTRAMOS EL VECTOR PARES EN PANTALLA
	cout<<endl<<endl;
	copy(pares.begin(),pares.end(),ostream_iterator<int> (cout,"  |  "));
	
	return 0;
}
