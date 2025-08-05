/*
	CONSTRUIR UN PROGRAMA QUE DADA UNA SERIE DE VEHICULOS CARACTERIZADOS POR SU MARCA, MODELO Y PRECIO,
	IMPRIMA LAS PROPIEDADES DEL VEHICULO MAS BARATO. PARA ELLO, SE DEBERAN LEER POR TECLADO LAS CARACTERISTICAS
	DE CADA VEHICULO Y CREAR UNA CLASE QUE REPRESENTE UNO DE ELLOS.
*/

#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include "Vehiculo.h"

using namespace std;

int main(int argc, char** argv) {
	Vehiculo* coches;
	int numeroDeVehiculos, indiceCocheBarato;
	
	string marca, modelo;
	float precio;
	
	cout<<"DIGITE EL NUMERO DE VEHICULOS: ";	cin>>numeroDeVehiculos;		cout<<endl;
	coches = new Vehiculo[numeroDeVehiculos];
	system("cls");
	//RELLENANDO LOS AUTOS
	for(int i=0; i<numeroDeVehiculos; i++){
		
		fflush(stdin);						//LIMPIEZA DE BUFFER - TAMBIEN SE PUETE CON 'cin.ignore()'
		cout<<"DIGITE LOS DATOS DEL VEHICULO "<<(i+1)<<endl<<endl;
		cout<<"MARCA: ";	getline(cin,marca);
		cout<<"MODELO: ";	getline(cin,modelo);
		cout<<"PRECIO: $";	cin>>precio;
		
		coches[i] = Vehiculo(marca,modelo,precio);
		system("cls");
	}
	
	indiceCocheBarato = Vehiculo::indiceBarato(coches,numeroDeVehiculos);
	
	//MOSTRAMOS LOS DATOS DEL VEHICULO MAS BARATO
	cout<<"EL VEHICULO MAS BARATO ES: "<<endl<<endl;
	(coches+indiceCocheBarato)->mostrarDatos();
	
	//LIBERAMOS LA MEMORIA
	delete[] coches;
	
	system("pause");
	return 0;
}
