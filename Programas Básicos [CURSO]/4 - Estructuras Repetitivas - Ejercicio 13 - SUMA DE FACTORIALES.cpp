/*
	ESCRIBA UN PROGRAMA QUE CALCULE EL VALOR DE 1!+2!+3!+...+N! (SUMA DE FACTORIALES)
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero = 0, factorial = 1, sumaDeFactoriales = 0;
	cout<<"DIGITE EL NUMERO DEL CUAL DESEA LA SUMA DE FACTORIALES: ";	cin>>numero;
	for(int i=1; i<=numero; i++){
		factorial *= i;
		sumaDeFactoriales += factorial;
	}
	cout<<"--------------------------------"<<endl<<endl;
	cout<<"EL RESULTADO DE LA SUMA DE FACTORIALES ES: "<<sumaDeFactoriales<<endl<<endl;
	system("pause");
	return 0;
}
