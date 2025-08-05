/*
	ESCRIBA UN PROGRAMA QUE DEFINA UN VECTOR DE NÚMEROS Y CALCULE LA
	MULTIPLICACIÓN ACUMULADA DE SUS ELEMENTOS
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int vector[] = {1,2,3,4,5};
	int resultado = 1;
	for(int i=0; i<5; i++){
		resultado *= vector[i];
	}
	cout<<"EL RESULTADO ES: "<<resultado<<endl<<endl;
	system("pause");
	return 0;
}
