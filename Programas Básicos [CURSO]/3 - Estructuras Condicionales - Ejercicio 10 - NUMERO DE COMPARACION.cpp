/*
	ESCRIBE UN PROGRAMA QUE LEA DE LA ENTRADA ESTANDAR TRES NUMEROS
	DESPUES DEBE LEER UN CUARTO NUMERO E INDICAR SI EL NUMERO COINCIDE
	CON ALGUNO DE LOS INTRODUCIDOS CON ANTERIORIDAD
*/
#include<iostream>
using namespace std;
int main(){
	int numero1 = 0, numero2 = 0, numero3 = 0, numeroDeCompracion = 0;
	cout<<"DIGITE TRES NUMEROS: ";	cin>>numero1>>numero2>>numero3;
	cout<<"--------------------------------"<<endl;
	cout<<"DIGITE EL NUMERO CON EL QUE DESEA COMPARAR: ";	cin>>numeroDeCompracion;
	cout<<"--------------------------------"<<endl;
	if((numeroDeCompracion == numero1)||(numeroDeCompracion == numero2)||(numeroDeCompracion == numero3)){
		cout<<"EL NUMERO COINCIDE CON ALMENOS UN NUMERO";
	}else{
		cout<<"EL NUMERO NO COINCIDE CON NINGUNO DE LOS ANTERIORES";
	}
	return 0;
}
