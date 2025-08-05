/*
	ESCRIBA UN PROGRAMA QUE CALCULE EL VALOR DE 1+2+3+...+N
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros = 0, resultado = 0;
	cout<<"DIGITE LA CANTIDAD DE NUMEROS: ";	cin>>numeros;
	cout<<"--------------------------------"<<endl;
	for(int i=1; i<=numeros; i++){
		resultado += i;
	}
	cout<<"EL RESULTADO ES: "<<resultado;
	getch();
	return 0;
}
