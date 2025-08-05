/*
	UN VECTO O ARREGLO ES UN TIPO DE DATO QUE ALMACENA UNA SECUENCIA DE DATOS
	DEL MISMO TIPO. SE ALMACENAN EN ZONAS CONTIGUAS DE MEMORIA Y SE PUEDE
	ACCEDER MEDIANTE UN ÍNDICE O POCISIÓN
	
	TipoDeDato NombreDelArreglo[NumeroEnteroParaTamaño];
	TipoDeDato NombreDelArreglo[] = {dato1, dato2, datoN};
	
	ESCRIBA UN PROGRAMA QUE DEFINA UN VECTOR DE NÚMEROS Y CALCULE LA SUMA DE
	SUS ELEMENTOS
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int arreglo[] = {1,2,3,4,5,6,7,8,9,10};
	int resultado = 0;
	for(int i=0; i<10; i++){
		resultado += arreglo[i];
	}
	cout<<"EL RESULTADO ES: "<<resultado<<endl<<endl;
	system("pause");
	return 0;
}
