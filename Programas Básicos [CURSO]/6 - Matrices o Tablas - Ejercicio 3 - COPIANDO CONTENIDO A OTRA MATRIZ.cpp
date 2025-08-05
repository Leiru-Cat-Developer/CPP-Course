/*
	HACER UNA MATRIZ ENTERA DE 2 X 2, LLENARLA DE NÚMEROS Y LUEGO COPIAR TODO SU
	CONTENIDO HACIA OTRA MATRIZ
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int matrizUno[2][2] = {1,2 , 3,4};
	int matrizDos[2][2];
	cout<<"PASANDO EL CONTENIDO DE UNA MATRIZ A OTRA . . ."<<endl<<endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			matrizDos[i][j] = matrizUno[i][j];
			cout<<matrizDos[i][j]<<"   ";
		}
		cout<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
