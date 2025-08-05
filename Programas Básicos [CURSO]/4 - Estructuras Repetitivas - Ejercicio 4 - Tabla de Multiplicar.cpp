/*
	REALICE UN PROGRAMA QUE SOLICITE DE LA ENTRADA ESTANDAR UN ENTERO DEL 1 AL 10
	Y MUESTRE EN LA SALIDA ESTANDAR SU TABLA DE MULTIPLICAR
*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
	int numero = 0;
	while((numero<=0)||(numero>10)){
		cout<<"DIGITE LA TABLA QUE DESEA MOSTRAR: ";	cin>>numero;
		if((numero<=0)||(numero>10)){
			cout<<endl;
			cout<<"DIGITE UN NUMERO DENTRO DEL RANGO"<<endl<<endl;
			system("pause");
			system("cls");
		}
	}
	cout<<"--------------------------------"<<endl;
	for(int i=1; i<=10; i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	getch();
	return 0;
}
