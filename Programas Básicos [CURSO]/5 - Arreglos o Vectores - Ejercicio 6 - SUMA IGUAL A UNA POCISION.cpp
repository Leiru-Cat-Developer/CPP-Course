/*
	ESCRIBE UN PROGRAMA QUE DEFINA UN VECTOR DE N�MEROS Y CALCULE SI EXISTE
	ALG�N N�MERO EN EL VECTOR CUYO VALOR EQUIVALE A LA SUMA DEL RESTO DE LOS
	N�MEROS
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
		cout<<"SI EXISTE(N) UN N�MERO QUE SEA IGUAL A LA SUMA DE LOS N�MEROS . . ."<<endl<<endl;
	}else if(valorEquivalente != true){
		cout<<"NO EXISTE(N) UN N�MERO QUE SEA IGUAL A LA SUMA DE LOS N�MEROS . . ."<<endl<<endl;
	}
	system("pause");
	return 0;
}
