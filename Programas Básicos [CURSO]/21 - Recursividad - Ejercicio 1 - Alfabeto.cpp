/*
	HACER UN PROGRAMA QUE MUESTRA EL ALFABETO, CARACTER A CARACTER, UTILIZANDO
	RECURSIVIDAD MUTUA O INDIRECTA
*/
#include<iostream>
using namespace std;

//PROTOTIPOS DE FUNCIONES
void funcionA(char);
void funcionB(char);

int main(){
	cout<<"\t .:ALFABETO:."<<endl<<endl;
	funcionA('Z');
	cout<<endl;
	return 0;
}

//DEFINICION DE FUNCIONES
void funcionA(char letra){
	if(letra > 'A'){
		funcionB(letra);
	}
	cout<<letra<<"  ";
}

void funcionB(char letra){
	funcionA(--letra);
}
