/*
	ESCRIBA UN PROGRAMA QUE DEFINA UN VECTOR DE N�MEROS Y MUESTRE EN LA SALIDA
	EST�NDAR EL VECTOR EN ORDEN INVERSO - DEL �LTIMO AL PRIMER ELEMENTO
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int vector[] = {1,2,3,4,5,6,7,8,9,10};
	cout<<"ARREGLO EN ORDEN NORMAL . . ."<<endl<<endl;
	for(int i=0; i<10; i++){
		cout<<"POCISI�N ["<<i<<"]: "<<vector[i]<<endl<<endl;
	}
	cout<<"--------------------------------"<<endl<<endl;
	cout<<"ARREGLO EN ORDEN INVERSO . . ."<<endl<<endl;
	for(int i=9; i>=0; i--){
		cout<<"POCISI�N ["<<i<<"]: "<<vector[i]<<endl<<endl;
	}
	system("pause");
	return 0;
}
