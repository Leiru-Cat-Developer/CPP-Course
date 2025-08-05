/*
	ESCRIBA UN PROGRAMA QUE SOLICITE UNA EDAD [ENTERA] E INDIQUE EN LA SALIDA
	ESTANDAR SI LA EDAD INTRODUCIDA ESTA EN EL RANGO DE 18 - 25
*/
#include<iostream>
using namespace std;
int main(){
	int edad = 0;
	cout<<"DIGITE LA EDAD: ";	cin>>edad;
	cout<<"--------------------------------"<<endl;
	if((edad>=18)&&(edad<=25)){
		cout<<"SU EDAD ESTA DENTRO DEL RANGO";
	}else{
		cout<<"SU EDAD ESTA FUERA DEL RANGO";
	}
	return 0;
}
