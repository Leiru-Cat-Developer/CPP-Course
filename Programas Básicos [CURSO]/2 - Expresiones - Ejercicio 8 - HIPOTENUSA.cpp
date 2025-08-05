/*
	ESCRIBA UN PROGRAMA QUE LEA DE LA ESNTRADA ESTANDAS LOS DOS CATETOS
	DE UN TRIANGULO RECTANGULO Y ESCRIBA EN LA ENTRADA ESTANDAR LA HIPO.
*/
#include<iostream>
#include<math.h>	//LIBRERIA NECESARIA PARA LA RESOLUCION DE ESTE EJERCICIO
using namespace std;
int main(){
	float catetoOpuesto = 0, catetoAdyacente = 0, hipotenusa = 0;
	cout<<"DIGITE EL VALOR DEL CATETO OPUESTO: ";	cin>>catetoOpuesto;
	cout<<"DIGITE EL VALOR DEL CATETO ADYACENTE: ";	cin>>catetoAdyacente;
	cout<<"--------------------------------------------------"<<endl;
	hipotenusa = sqrt((pow(catetoOpuesto,2))+(pow(catetoAdyacente,2)));
	cout<<"LA HIPOTENUSA ES: "<<hipotenusa;
	return 0;
}
