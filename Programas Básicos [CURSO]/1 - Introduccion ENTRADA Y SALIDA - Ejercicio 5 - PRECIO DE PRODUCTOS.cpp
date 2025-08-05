/*
	ESCRIBE UN PROGRAMA QUE LEA DE LA ENTRADA ESTANDAR EL PRECIO DE UN
	PRODUCTO Y MUESTRE EN LA SALIDA ESTANDAR EL PRECIO DEL PRODUCTO AL
	APLICARLE EL IVA
*/
#include<iostream>
using namespace std;
int main(){
	float precio = 0, precioConIva = 0;
	cout<<"INTRODUZCA EL PRECIO DEL PRODUCTO: $";	cin>>precio;
	precioConIva = precio+(precio*0.16);
	cout<<"PRECIO DEL PRODUCTO CON IVA: $"<<precioConIva;
	return 0;
}
