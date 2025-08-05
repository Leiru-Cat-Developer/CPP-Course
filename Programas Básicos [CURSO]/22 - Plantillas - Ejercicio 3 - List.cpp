//CONTENEDOR LINEAS - LIST
#include<iostream>
#include<list>
using namespace std;

int main(){
	list<int> datos;
	
	/*
		LISTA VISUALIZADA
		-> 1
		-> 2
		-> 3
		-> 4
		-> 5
		-> 6
		-> 7
		-> 8
	*/
	
	//AGREGAR ELEMENTOS
	
	datos.push_back(5);	//AGREGAR POR EL FINAL DE LA LISTA
	datos.push_back(6);
	datos.push_back(7);
	datos.push_back(8);
	
	datos.push_front(1); //AGREGAR POR EL PRINCIPIO DE LA LISTA
	datos.push_front(2);
	datos.push_front(3);
	datos.push_front(4);
	
	//ORDENAR LOS DATOS DE LA LISTA
	datos.sort();
	
	//1 2 3 4 5 6 7 8
	
	//IMPRIMIENDO LOS ELEMENTOS DE LA LISTA
	list<int>::iterator i;
	i = datos.begin();
	
	while(i != datos.end()){
		cout<<*i<<"   |   ";
		i++;
	}
	
	cout<<endl;
	
	//ELIMINAMOS ELEMENTOS DE LA LISTA
	datos.pop_back();	//REMOVEMOS DEL FINAL DE LA LISTA
	datos.pop_front();	//REMOVEMOS DEL PRINCIPO DE LA LISTA
	
	i = datos.begin();
	
	while(i != datos.end()){
		cout<<*i<<"   |   ";
		i++;
	}
	
	cout<<endl;
	
	return 0;
}
