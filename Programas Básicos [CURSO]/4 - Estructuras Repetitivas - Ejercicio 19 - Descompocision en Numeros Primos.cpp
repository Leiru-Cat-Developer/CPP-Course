/*
	REALICE UN PROGRAMA QUE CALCULE LA DESCOMPOCISIÓN EN FACTORES PRIMOS DE
	UN NÚMERO ENTERO
	
	POR EJEMPLO: 20 = 2 * 2 * 5
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int numero = 0;
	cout<<"DIGITE EL NÚMERO QUE DESEA DESCOMPONER: ";	cin>>numero;
	cout<<endl;
	//NÚMERO INGRESADO ->		20	10	5	1
	//MOSTRADO EN PANTALLA -> 	2	2	5
	for(int i=2; numero>1; i++){
		while((numero%i)==0){
			cout<<i<<"   ";
			numero /= i;
		}
	}
	cout<<endl<<endl;
	system("pause");
	return 0;
}
