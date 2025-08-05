/*
	REALICE UN PROGRAMA QUE LEA DE LA ENTRADA ESTANDAS LOS SIGUIENTES DATOS
		- EDAD [TIPO DE DATO ENTERO]
		- SEXO [TIPO DE DATO CARACTER]
		- ALTURA EN METROS [TIPO DE DATO REAL]
	TRAS LEER LOS DATOS, EL PROGRAMA DEBE MOSTRARLOS EN LA SALIDA ESTANDAR
*/
#include<iostream>
using namespace std;
int main(){
	int edad = 0;
	char sexo[20];
	float altura = 0;
	cout<<"DIGITE SU EDAD: ";			cin>>edad;
	cout<<"DIGITE SU SEXO: ";			cin>>sexo;
	cout<<"DIGITE SU ALTURA EN METROS: ";	cin>>altura;
	cout<<"----------------------------------------"<<endl;
	cout<<"EDAD: "<<edad<<endl;
	cout<<"SEXO: "<<sexo<<endl;
	cout<<"ALTURA: "<<altura;
	return 0;
}
