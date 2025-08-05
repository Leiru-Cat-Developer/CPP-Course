/*
	ESCRIBE UN PROGRAMA QUE DEFINA UN VECTOR DE NÚMEROS Y CALCULE SI EXISTE
	ALGÚN NÚMERO EN EL VECTOR CUYO VALOR EQUIVALE A LA SUMA DEL RESTO DE LOS
	NÚMEROS
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int vector[] = {1,2,3,4,10};
	int suma = 0;
	bool valorEquivalente = false;
	for(int i=0; i<4; i++){
		suma += vector[i];
	}
	for(int i=0; i<5; i++){
		if(vector[i] == suma){
			valorEquivalente = true;
		}
	}
	if(valorEquivalente){
		cout<<"SI EXISTE(N) UN NÚMERO QUE SEA IGUAL A LA SUMA DE LOS NÚMEROS . . ."<<endl<<endl;
	}else if(valorEquivalente != true){
		cout<<"NO EXISTE(N) UN NÚMERO QUE SEA IGUAL A LA SUMA DE LOS NÚMEROS . . ."<<endl<<endl;
	}
	system("pause");
	return 0;
}
