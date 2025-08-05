/*
	ESCRIBA UN PROGRAMA QUE LEA VALORES ENTEROS HASTA QUE SE INTRODUZCA UN VALOR
	EN EL RANGO [20 - 30] O SE INTRODUZCA EL VALOR 0. EL PROGRAMA DEBE ENTREGAR
	LA SUMA DE LOS VALORES MAYORES A 0 INTRODUCIDOS
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float numero = 0, suma = 0;
	do{
		cout<<"DIGITE EL NUMERO: ";	cin>>numero;
		if(numero>0){
			suma += numero;
		}
	}while(((numero<20)||(numero>30))&&(numero!=0));
	cout<<"--------------------------------"<<endl;
	cout<<"LA SUMA TOTAL DE LOS NUMERO ES: "<<suma<<endl;
	getch();
	return 0;
}
