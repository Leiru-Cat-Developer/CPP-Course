//ALGORITMOS STL
#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
#include<cstdlib>
using namespace std;

int numerosAleatorios(){
	//COLOCAMOS UN RANGO DE NUMEROS ALEATORIOS
	return rand()%10;
}

int main(){
	list<int> valores(10);	//LISTA DE 10 ELEMENTOS ENTEROS
	generate(valores.begin(),valores.end(),numerosAleatorios);	//GENERA NUMEROS ALEATORIOS EN UN RANGO DE LA LISTA
	
	//MUESTRA POR PANTALLA LOS VALORES
	ostream_iterator<int> salida(cout,"  |  ");
	copy(valores.begin(),valores.end(),salida);
	
	//BUSCAMOS LA PRIMERA APARICION DEL NUMERO 8 EN LA LISTA
	list<int>::iterator i;
	i = find(valores.begin(),valores.end(),1);
	
	//ANALIZAMOS SI EL VALOR DE "i" NO SOBREPASA LOS RANGOS DE LA LISTA
	if(i != valores.end()){
		cout<<endl<<endl<<"EL ELEMENTO "<<*i<<" SI HA SIDO ENCONTRADO"<<endl;
	}else{
		cout<<endl<<endl<<"EL ELEMENTO "<<*i<<" NO HA SIDO ENCONTRADO"<<endl;
	}
	
	return 0;
}
