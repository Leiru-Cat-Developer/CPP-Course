/*
	HACER UNA MATRIZ PREGUNTANDO AL USUARIO EL N�MERO DE FILAS Y COLUMNAS,
	LLENARLA DE N�MEROS ALEATORIOS, COPIAR EL CONTENIDO A OTRA MATRIZ Y POR
	�LTIMO MOSTRARLA EN PANTALLA
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int filas = 0, columnas = 0;
	while((filas<=0)||(columnas<=0)){
		cout<<"DIGITE EL N�MERO DE FILAS Y COLUMNAS: ";	cin>>filas>>columnas;
		if((filas<=0)||(columnas<=0)){
			cout<<endl;
			cout<<"DIGITE N�MEROS VALIDOS . . ."<<endl<<endl;
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
			cout<<"DIGITE VALOR DE LA POCISI�N ["<<i<<"] ["<<j<<"]: ";
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
