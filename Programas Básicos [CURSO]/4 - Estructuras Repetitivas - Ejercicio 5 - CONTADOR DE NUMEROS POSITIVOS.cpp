/*
	REALICE UN PROGRAMA QUE LEA DE LA ENTRADA ESTANDAR NUMEROS HASTA QUE SE INTRODUZCA
	UN CERO. EN ESE MOMENTO EL PROGRAMA DEBE TERMINAR Y MOSTRAR EN LA SALIDA ESTANDAR EL
	NUMERO DE VALORES MAYORES QUE CERO LEIDOS.
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float numeros = 1;
	int contadorDeNumerosPositivos = 0;
	while(numeros != 0){
		cout<<"DIGITE UN NUMERO: ";	cin>>numeros;
		if(numeros > 0){
			contadorDeNumerosPositivos++;	
		}
	}
	cout<<"--------------------------------"<<endl;
	cout<<"EL NUMERO TOTAL DE NUMEROS POSITIVOS ES: "<<contadorDeNumerosPositivos;
	getch();
	return 0;
}
