/*
	HACER UNA MATRIZ PREGUNTANDO AL USUARIO EL NÚMERO DE FILAS Y COLUMNAS,
	LLENARLA DE NÚMEROS ALEATORIOS, COPIAR EL CONTENIDO A OTRA MATRIZ Y POR
	ÚLTIMO MOSTRARLA EN PANTALLA
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int filas = 0, columnas = 0;
	while((filas<=0)||(columnas<=0)){
		cout<<"DIGITE EL NÚMERO DE FILAS Y COLUMNAS: ";	cin>>filas>>columnas;
		if((filas<=0)||(columnas<=0)){
			cout<<endl;
			cout<<"DIGITE NÚMEROS VALIDOS . . ."<<endl<<endl;
			system("pause");
			system("cls");	
		}
	}
	cout<<endl;
	cout<<"--------------------------------"<<endl<<endl;
	int matrizUno[filas][columnas];
	int matrizDos[filas][columnas];
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"DIGITE VALOR DE LA POCISIÓN ["<<i<<"] ["<<j<<"]: ";
			cin>>matrizUno[i][j];
		}
	}
	cout<<endl;
	cout<<"--------------------------------"<<endl<<endl;
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			matrizDos[i][j] = matrizUno[i][j];
			cout<<matrizDos[i][j]<<"   ";
		}
		cout<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
